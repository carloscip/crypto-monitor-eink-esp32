#ifndef BOARD_HAS_PSRAM
#error "Please enable PSRAM !!!"
#endif
#define WIFI_OFF WIFI_MODE_NULL
#define WIFI_STA WIFI_MODE_STA

#define WHITE 0xFF
#define LGREY 0xBB
#define GREY 0x88
#define DGREY 0x44
#define BLACK 0x00

#include <Arduino.h>
#include <esp_task_wdt.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "epd_driver.h"
// #include "button2.h"
#include "esp_adc_cal.h"
#include <Wire.h>
#include <SPI.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <WiFi.h>
#include <SPI.h>
#include <time.h>

#include "roboto8.h"
#include "roboto10.h"
#include "roboto12.h"
#include "roboto18.h"
#include "roboto18r.h"
#include "roboto24r.h"

#define BATT_PIN 36

// #define BUTTON_1 34
// #define BUTTON_2 35
// #define BUTTON_3 39
// Button2 btn1(BUTTON_1);
// Button2 btn2(BUTTON_2);
// Button2 btn3(BUTTON_3);

enum alignment
{
    LEFT,
    RIGHT,
    CENTER
};

const char *ssid = "";
const char *password = "";

/*
 * Keep this at 4. The long currency name is used for the api, so check the spelling.
 */
const int AMOUNT_CURR = 4;
const String currency_short[] = {"BTC", "ETH", "AVAX", "EGG"/*, "FEED", "FERT"*/};
const String currency_names_app[] = {"bitcoin", "ethereum", "avalanche-2", "chikn-egg"/*, "chikn-feed", "chikn-fert"*/};
const String currency_names[] = {"BTC", "ETH", "AVAX", "EGG"/*, "FEED", "FERT"*/};
// const String currency_names[] = {"Bitcoin", "Ethereum", "Avax", "Egg", "Feed", "Fert"};

int currency_index;

uint8_t *framebuffer;
int vref = 1100;

int wifi_signal;

RTC_DATA_ATTR int boot_number = 1;

// FOR TIME
const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec = -10800;
const int   daylightOffset_sec = 0;
struct tm timeinfo;

uint8_t start_wifi()
{
    Serial.println("Connecting to: " + String(ssid));
    IPAddress dns(8, 8, 8, 8);
    WiFi.disconnect();
    WiFi.mode(WIFI_STA); // switch off AP
    WiFi.setAutoConnect(true);
    WiFi.setAutoReconnect(true);
    WiFi.begin(ssid, password);
    if (WiFi.waitForConnectResult() != WL_CONNECTED)
    {
        Serial.println("STA: Failed!");
        WiFi.disconnect(false);
        delay(500);
        WiFi.begin(ssid, password);
    }
    if (WiFi.status() == WL_CONNECTED)
    {
        wifi_signal = WiFi.RSSI(); // Get Wifi Signal strength now, because the WiFi will be turned off to save power!
        Serial.println("WiFi connected as " + WiFi.localIP().toString());
    }
    else
        Serial.println("WiFi connection failed: " + String(WiFi.status()));
    return WiFi.status();
}

void stop_wifi()
{
    WiFi.disconnect();
    WiFi.mode(WIFI_OFF);
}

float c_price = -1.0f;
float c_price_btc = -1.0f;
float c_price_24h = 0.0f;
float c_price_1h = 0.0f;

int c_rank = 0;

double c_cap = -1.0;
double c_vol = -1.0;

/**
 * Read https://api.coinstats.app API data into fields
 **/
bool decode_web_data(WiFiClient &json)
{
    DynamicJsonDocument doc(4 * 1024);
    DeserializationError error = deserializeJson(doc, json);
    if (error)
    {
        Serial.print(F("deserializeJson() failed: "));
        Serial.println(error.c_str());
        return false;
    }

    JsonObject coin = doc["coin"];
    c_price = coin["price"].as<float>();
    c_price_btc = coin["priceBtc"].as<float>();
    c_rank = coin["rank"].as<int>();
    c_cap = coin["marketCap"].as<double>();
    c_vol = coin["volume"].as<double>();

    c_price_24h = coin["priceChange1d"].as<float>();
    c_price_1h = coin["priceChange1h"].as<float>();
    return true;
}

/**
 * https://api.coinstats.app certificate chain.
 **/
const char *root_ca = ""

bool read_web_data()
{
    HTTPClient http;
    String cur = currency_names_app[currency_index];
    cur.toLowerCase();
    String uri = "/public/v1/coins/" + cur + "?currency=USD";
    http.begin("https://api.coinstats.app" + uri, root_ca);
    int httpCode = http.GET();
    bool success = false;
    if (httpCode == HTTP_CODE_OK)
    {
        if (decode_web_data(http.getStream()))
            success = true;
        else
            Serial.println("Web data decoding failed");
    }
    else
    {
        Serial.printf("Connection to API failed, error: %s\r\n", http.errorToString(httpCode).c_str());
    }
    http.end();
    return success;
}

void draw_str(const GFXfont font, const String txt, int x, int y, alignment align)
{
    const char *string = (char *)txt.c_str();
    int x1, y1;
    int w, h;
    int xx = x, yy = y;
    get_text_bounds(&font, string, &xx, &yy, &x1, &y1, &w, &h, NULL);
    if (align == RIGHT)
        x = x - w;
    if (align == CENTER)
        x = x - w / 2;
    int cursor_y = y + h;
    writeln(&font, string, &x, &cursor_y, framebuffer);
}

void start_deep_sleep(unsigned long long sleep_sec = 1000L * 60000L * 2.5L)
{
    Serial.println("Starting deep-sleep period for " + String((sleep_sec / 1000) / 60000) + " minutes...");
    epd_poweroff_all();
    // esp_sleep_enable_timer_wakeup(1000L * 60000L * 2.5L); // sleep 2.5 min (API limit)
    esp_sleep_enable_timer_wakeup(sleep_sec); // sleep 2.5 min (API limit)
    // esp_sleep_enable_timer_wakeup(8ULL * 60 * 60 * 1000 * 1000); // TEST 8hs
    esp_deep_sleep_start();
}

void draw_framebuf(bool clear_buf)
{
    epd_draw_grayscale_image(epd_full_screen(), framebuffer);
    if (clear_buf)
    {
        memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);
    }
}

void correct_adc_ref_volt()
{
    esp_adc_cal_characteristics_t adc_chars;
    esp_adc_cal_value_t val_type = esp_adc_cal_characterize(ADC_UNIT_1, ADC_ATTEN_DB_11, ADC_WIDTH_BIT_12, 1100, &adc_chars);
    if (val_type == ESP_ADC_CAL_VAL_EFUSE_VREF)
    {
        Serial.printf("eFuse Vref:%u mV\r\n", adc_chars.vref);
        vref = adc_chars.vref;
    }
}

void clear_area(int x, int y, int width, int height) 
{
  Rect_t area = {
    .x = x -10,
    .y = y -10,
    .width = width,
    .height = height,
  };
  epd_clear_area(area);
}

// void button_pressed(Button2 &b)
// {
//   Serial.println('pressed button');
//   Serial.println('pin ' + b.getAttachPin());
//   Serial.println('times ' + b.wasPressedFor());
// }

void sleepAtNight()
{
  while (!getLocalTime(&timeinfo)) {
    Serial.println("Failed to obtain time");
    getLocalTime(&timeinfo);
    sleep(1000);
  }
  char timeHour[3];
  strftime(timeHour, 3, "%H", &timeinfo);
  if (String(timeHour).toInt() < 8) {
    stop_wifi();
    epd_clear();
    int x_pos = (int)(EPD_WIDTH * 0.5f);
    int y_pos = (int)(EPD_HEIGHT * 0.45f);
    String msg = "Sleeping till 8am";
    draw_str(Roboto24R, msg, x_pos, y_pos, CENTER);
    draw_framebuf(true);
    start_deep_sleep(8ULL * 60 * 60 * 1000 * 1000); // 8hs
  }
}

void battery_protection() 
{
  stop_wifi();
  epd_clear();
  int x_pos = (int)(EPD_WIDTH * 0.5f);
  int y_pos = (int)(EPD_HEIGHT * 0.45f);
  String msg = "Sleeping forever - Low Battery";
  draw_str(Roboto24R, msg, x_pos, y_pos, CENTER);
  draw_framebuf(true);
  esp_deep_sleep_start();
}

void setup()
{
    Serial.begin(115200);
    
    // btn1.loop();
    // btn2.loop();
    // btn3.loop();
    // btn1.setPressedHandler(button_pressed);
    // btn2.setPressedHandler(button_pressed);
    // btn3.setPressedHandler(button_pressed);
    
    correct_adc_ref_volt();
    epd_init();

    framebuffer = (uint8_t *)ps_calloc(sizeof(uint8_t), EPD_WIDTH * EPD_HEIGHT / 2);
    if (!framebuffer)
    {
        Serial.println("alloc memory failed.");
        while (1)
            ;
    }
    memset(framebuffer, 0xFF, EPD_WIDTH * EPD_HEIGHT / 2);

    epd_poweron();
    
    int x_pos;
    int y_pos;

    if (start_wifi() != WL_CONNECTED)
    {
        epd_clear();
        draw_str(Roboto24R, "WLAN failed. Check credentials.", x_pos, y_pos, CENTER);
    }
    else
    {
        configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
        sleepAtNight();

        if (boot_number == 1) {
          epd_clear();
        }

        if (boot_number >= 18 && boot_number < 20) {
          // vemos lo del tiempo cada hora nomas. y dormimos 8hs a la noche
          configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
          sleepAtNight();
          epd_clear();
          x_pos = (int)(EPD_WIDTH * 0.5f);
          y_pos = (int)(EPD_HEIGHT * 0.45f);
          String msg = boot_number == 18 ? "BREAK TIME 5min" : "BREAK TIME 2min 30sec";
          draw_str(Roboto24R, msg, x_pos, y_pos, CENTER);
        } else {
          for (currency_index = 0; currency_index < AMOUNT_CURR; currency_index++)
          {
              int y_off = (currency_index / float(AMOUNT_CURR)) * EPD_HEIGHT;
              int y_off_end = ((currency_index + 1) / float(AMOUNT_CURR)) * EPD_HEIGHT;

              // TITULOS
              x_pos = (int)(EPD_WIDTH * 0.02f);
              y_pos = (int)(EPD_HEIGHT * 0.04f);
              draw_str(Roboto24R, (char *)currency_names[currency_index].c_str(), x_pos, y_off + y_pos, LEFT);
              // y_pos = (int)(EPD_HEIGHT * 0.15f);
              // draw_str(Roboto18R, (char *)currency_short[currency_index].c_str(), x_pos, y_off + y_pos, LEFT);
              int dec_p = 2;

              if (!read_web_data())
              {
                  x_pos = (int)(EPD_WIDTH * 0.5f);
                  y_pos = (int)(EPD_HEIGHT * 0.1f);
                  draw_str(Roboto18R, "Wifi read failed", x_pos, (y_off + y_off_end) / 2, CENTER);
              }
              else
              {
                  x_pos = (int)(EPD_WIDTH * 0.30f);
                  // y_pos = (int)(EPD_HEIGHT * 0.05f);
                  y_pos = (int)(EPD_HEIGHT * 0.02f);
                  if (int(c_price * 10) == 0) {
                    dec_p = 3;
                    if (int(c_price * 100) == 0) {
                      dec_p = 4;
                      if (int(c_price * 1000) == 0) {
                        dec_p = 5;
                      }
                    }
                  }
                  draw_str(Roboto18R, "$ " + String(c_price, dec_p), x_pos, y_off + y_pos, LEFT);
                  // y_pos = (int)(EPD_HEIGHT * 0.125f);
                  y_pos = (int)(EPD_HEIGHT * 0.105f);
                  draw_str(Roboto12, "= " + String(c_price_btc, 8) + " BTC", x_pos, y_off + y_pos, LEFT);
                  // y_pos = (int)(EPD_HEIGHT * 0.2f);
                  // draw_str(Roboto8, "RANK #" + String(c_rank), x_pos, y_off + y_pos, LEFT);

                  x_pos = (int)(EPD_WIDTH * 0.59f);
                  // y_pos = (int)(EPD_HEIGHT * 0.05f);
                  y_pos = (int)(EPD_HEIGHT * 0.04f);
                  draw_str(abs(c_price_24h) > 10 ? Roboto18R : Roboto18, String(c_price_24h, 2) + "%", x_pos, y_off + y_pos, LEFT);
                  // y_pos = (int)(EPD_HEIGHT * 0.11f);
                  y_pos = (int)(EPD_HEIGHT * 0.10f);
                  draw_str(Roboto12, "24h CHANGE", x_pos, y_off + y_pos, LEFT);
                  // y_pos = (int)(EPD_HEIGHT * 0.2f);
                  // draw_str(Roboto8, String(c_cap / 1000000.0f, 2) + " M CAP", x_pos, y_off + y_pos, LEFT);

                  x_pos = (int)(EPD_WIDTH * 0.94f);
                  // y_pos = (int)(EPD_HEIGHT * 0.05f);
                  y_pos = (int)(EPD_HEIGHT * 0.04f);
                  draw_str(abs(c_price_1h) > 5 ? Roboto18R : Roboto18, String(c_price_1h, 2) + "%", x_pos, y_off + y_pos, RIGHT);
                  // y_pos = (int)(EPD_HEIGHT * 0.11f);
                  y_pos = (int)(EPD_HEIGHT * 0.10f);
                  draw_str(Roboto12, "1h CHANGE", x_pos, y_off + y_pos, RIGHT);
                  // y_pos = (int)(EPD_HEIGHT * 0.2f);
                  // draw_str(Roboto8, String(c_vol / 1000000.0f, 2) + " M VOL", x_pos, y_off + y_pos, RIGHT);

                  // // min to 100%, put in range 0 - 255
                  // int intensity = (int)(255.0f - (min(abs(c_price_1h) + 2.0f, 10.0f) / 10.0f) * 255.0f);
                  // int left_x = (int)(EPD_WIDTH * 0.96f);
                  // int right_x = (int)(EPD_WIDTH * 0.99f);
                  // int mid_x = (left_x + right_x) / 2;

                  // int low_y_up = y_off + (int)(EPD_HEIGHT * 0.08f);
                  // int high_y_up = y_off + (int)(EPD_HEIGHT * 0.04f);
                  // int low_y_down = y_off + (int)(EPD_HEIGHT * (0.25f - 0.08f));
                  // int high_y_down = y_off + (int)(EPD_HEIGHT * (0.25f - 0.04f));

                  // if (c_price_1h > 0)
                  // {
                  //     epd_fill_triangle(left_x, low_y_up, right_x, low_y_up, mid_x, high_y_up, intensity, framebuffer);
                  // }
                  // else
                  // {
                  //     epd_fill_triangle(left_x, low_y_down, right_x, low_y_down, mid_x, high_y_down, intensity, framebuffer);
                  // }
                  // epd_draw_triangle(left_x, low_y_up, right_x, low_y_up, mid_x, high_y_up, BLACK, framebuffer);
                  // epd_draw_triangle(left_x, low_y_down, right_x, low_y_down, mid_x, high_y_down, BLACK, framebuffer);
              }

              // clear here, just before writing
              if (boot_number != 1) {       
                Rect_t area = {
                  .x = 0,
                  .y = y_off + 2,
                  .width = EPD_WIDTH,
                  .height = (EPD_HEIGHT / float(AMOUNT_CURR)) - 2,
                };
                epd_clear_area_cycles(area, 2, 25);
              }

              epd_draw_line(0, y_off_end, EPD_WIDTH, y_off_end, BLACK, framebuffer);
              draw_framebuf(true);
          }
          if (boot_number >= 20) {
            boot_number = 1;
          }
        }

        // voltage show all times
        uint16_t v = analogRead(BATT_PIN);
        float battery_voltage = ((float)v / 4095.0) * 2.0 * 3.3 * (vref / 1000.0);
        if (battery_voltage <= 2.9) {
          battery_protection();
        }
        String voltage = String(boot_number) + " - " + String(battery_voltage) + "V";
        char timeNow[300];
        strftime(timeNow, 300, "%d %B %Y %H:%M:%S", &timeinfo);
        voltage += " - " + String(timeNow);

        x_pos = (int)(EPD_WIDTH * 0.02f);
        y_pos = (int)(EPD_HEIGHT * 0.96f);

        draw_str(Roboto8, (char *)voltage.c_str(), x_pos, y_pos, LEFT);
        Rect_t area_v = {
          .x = x_pos-5,
          .y = y_pos-5,
          .width = 80,
          .height = EPD_HEIGHT / float(AMOUNT_CURR),
        };
        epd_clear_area_cycles(area_v, 1, 5);
        draw_framebuf(true);
    }

    boot_number = boot_number + 1;
    stop_wifi();
    start_deep_sleep();
}

void loop()
{
}
