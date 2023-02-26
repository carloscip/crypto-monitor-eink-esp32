#pragma once
#include "epd_driver.h"
const uint8_t Roboto8Bitmaps[3978] = {
    0x78, 0x9C, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x78, 0x9C, 0xCB, 0xCC, 0x04, 0x83, 0xC8, 0x48,
    0x06, 0xC1, 0x4A, 0x00, 0x1D, 0x9F, 0x04, 0x1C, 0x78, 0x9C, 0xE3, 0xE1, 0xE1, 0xE1, 0xE1, 0xE6,
    0xE6, 0xE2, 0x06, 0x00, 0x01, 0xAC, 0x00, 0x5C, 0x78, 0x9C, 0x63, 0x60, 0xD0, 0x32, 0xE0, 0x64,
    0x60, 0xE0, 0x2D, 0x60, 0x63, 0x10, 0xE0, 0x5E, 0xC0, 0xB4, 0xE0, 0x3F, 0x10, 0x30, 0x14, 0xB0,
    0x1E, 0x60, 0x60, 0xD8, 0xC0, 0x38, 0x85, 0x81, 0xE1, 0x00, 0x43, 0x38, 0xC3, 0x17, 0xA0, 0x50,
    0x3C, 0x43, 0x0B, 0x03, 0x0F, 0x03, 0x43, 0x1A, 0x88, 0xB0, 0x54, 0xE0, 0x62, 0x60, 0x90, 0x0E,
    0xE0, 0x60, 0x00, 0x00, 0x09, 0xC0, 0x0F, 0xF9, 0x78, 0x9C, 0x63, 0x60, 0x88, 0x60, 0x00, 0x02,
    0x10, 0x71, 0xE4, 0x3D, 0x27, 0x83, 0x42, 0x9C, 0xC0, 0x2E, 0x86, 0x06, 0x0E, 0x86, 0x0B, 0x4C,
    0x0D, 0xEC, 0x0C, 0x13, 0x58, 0x0C, 0xF4, 0x40, 0x92, 0x4F, 0xA3, 0x41, 0xE4, 0xD6, 0x38, 0x10,
    0xF9, 0x84, 0x69, 0x03, 0x03, 0xC3, 0x04, 0xB6, 0x0B, 0xCC, 0x0C, 0x0B, 0x58, 0x03, 0x7C, 0x05,
    0x9E, 0x33, 0x32, 0x1C, 0x7D, 0xAF, 0x0D, 0x14, 0xF7, 0x60, 0x80, 0x10, 0x00, 0x92, 0xF0, 0x10,
    0x83, 0x78, 0x9C, 0x33, 0x78, 0xCB, 0xC9, 0xC0, 0xC0, 0x70, 0x80, 0x25, 0x8A, 0xC1, 0x8D, 0x61,
    0x03, 0xC3, 0x64, 0x01, 0x1E, 0x10, 0xB9, 0x80, 0x19, 0x28, 0x92, 0x35, 0x85, 0x81, 0xC1, 0xE0,
    0x2F, 0xA7, 0x0C, 0x50, 0x9A, 0xA1, 0x41, 0xF5, 0x0F, 0x17, 0x03, 0xC3, 0xA6, 0x0D, 0xAC, 0x95,
    0x0C, 0x0C, 0xDA, 0x07, 0x18, 0x16, 0x32, 0x04, 0x70, 0x80, 0xC8, 0x05, 0x0C, 0x1B, 0x58, 0x80,
    0x22, 0x0C, 0x0A, 0x7F, 0xB8, 0x00, 0x9C, 0x75, 0x12, 0xA7, 0x78, 0x9C, 0x63, 0xD8, 0x78, 0x9F,
    0x95, 0x81, 0x81, 0xA1, 0xDB, 0x40, 0x0F, 0x48, 0xF2, 0x33, 0x78, 0x01, 0x49, 0x3D, 0x05, 0x5E,
    0x20, 0xB9, 0xED, 0x08, 0x13, 0x90, 0xBC, 0x20, 0x0B, 0x24, 0x18, 0x6A, 0xB2, 0x19, 0x0C, 0x19,
    0x16, 0xB0, 0x1D, 0x60, 0x69, 0x63, 0xF8, 0xC0, 0x20, 0x60, 0x13, 0xC5, 0xF0, 0x81, 0x91, 0xE1,
    0x20, 0x1F, 0xC3, 0x02, 0x6B, 0x81, 0x1F, 0x40, 0xF9, 0xEB, 0xEF, 0xB5, 0xB6, 0x31, 0x00, 0x00,
    0xF6, 0x78, 0x10, 0xA0, 0x78, 0x9C, 0xBB, 0x70, 0xE1, 0xC0, 0x01, 0x00, 0x07, 0xF4, 0x03, 0x21,
    0x78, 0x9C, 0x63, 0x98, 0xC0, 0xC0, 0x10, 0xC9, 0x60, 0xC0, 0xCD, 0xB0, 0x81, 0x99, 0xE1, 0x22,
    0x03, 0xC3, 0x34, 0x10, 0x8F, 0xC1, 0x86, 0x81, 0x41, 0x17, 0x8C, 0x6C, 0xC0, 0xDC, 0x36, 0x06,
    0x86, 0x4B, 0x0C, 0x0C, 0x07, 0x98, 0x19, 0x1C, 0xB8, 0xC1, 0xFC, 0x09, 0x0C, 0x00, 0xE2, 0x87,
    0x08, 0x12, 0x78, 0x9C, 0x33, 0x67, 0x60, 0x38, 0xC8, 0xC8, 0xE0, 0xC0, 0xC5, 0xC0, 0xA0, 0xC3,
    0xC0, 0xD0, 0xCE, 0xC0, 0x70, 0x89, 0x81, 0xE1, 0x03, 0x03, 0xC3, 0x05, 0x26, 0x86, 0x03, 0xCC,
    0x20, 0x04, 0x64, 0x7C, 0x00, 0x0B, 0xB6, 0x81, 0x14, 0x00, 0x95, 0x01, 0x15, 0x9B, 0x33, 0x30,
    0x00, 0x00, 0x26, 0x28, 0x0A, 0x9A, 0x78, 0x9C, 0x63, 0x38, 0xC0, 0xC8, 0xC0, 0x70, 0x80, 0x81,
    0x61, 0xC7, 0xB1, 0xAD, 0x5C, 0x02, 0xDF, 0x25, 0x19, 0x18, 0xA2, 0x65, 0x18, 0x0A, 0x38, 0xB6,
    0x30, 0x28, 0x30, 0x18, 0x30, 0x00, 0x00, 0x6E, 0xD4, 0x06, 0xD2, 0x78, 0x9C, 0x63, 0x60, 0xB0,
    0x62, 0x00, 0x02, 0x1B, 0x64, 0xE2, 0xDB, 0xFF, 0xFF, 0xFF, 0xF9, 0xD0, 0xC4, 0xC0, 0x04, 0x00,
    0x88, 0xDE, 0x05, 0xE0, 0x78, 0x9C, 0x4B, 0x60, 0xDA, 0xC0, 0xFC, 0x80, 0x71, 0x0B, 0x03, 0x03,
    0x03, 0x00, 0x11, 0x86, 0x02, 0xAB, 0x78, 0x9C, 0xFB, 0xF9, 0x9F, 0x0D, 0x00, 0x04, 0xF2, 0x01,
    0xFF, 0x78, 0x9C, 0x13, 0xAA, 0x02, 0x00, 0x00, 0xA0, 0x00, 0x8D, 0x78, 0x9C, 0x63, 0x60, 0xB8,
    0xC0, 0xC0, 0xC0, 0x30, 0x05, 0x88, 0xAD, 0x18, 0x18, 0x04, 0x78, 0x18, 0x18, 0x0A, 0xD8, 0x19,
    0x18, 0x2E, 0x30, 0x32, 0x30, 0x2C, 0x06, 0x0A, 0x79, 0x02, 0x31, 0x2F, 0x03, 0x43, 0x02, 0x07,
    0x03, 0xC3, 0x01, 0x26, 0x06, 0x86, 0x4D, 0x40, 0x6E, 0x04, 0x10, 0x03, 0x00, 0xA9, 0xE9, 0x06,
    0x30, 0x78, 0x9C, 0x73, 0xF8, 0xD3, 0xC7, 0xF0, 0x98, 0xF5, 0x10, 0x67, 0x15, 0x83, 0x80, 0xBC,
    0x1E, 0x03, 0x83, 0x37, 0x3F, 0x03, 0x43, 0x26, 0x32, 0x06, 0x89, 0x81, 0xE4, 0x40, 0x6A, 0x1C,
    0x80, 0x6A, 0x01, 0x12, 0x2B, 0x0B, 0x1F, 0x78, 0x9C, 0x63, 0x28, 0xE0, 0x2A, 0x3C, 0xC7, 0xD3,
    0x6E, 0xC8, 0xC3, 0x60, 0x80, 0x13, 0x01, 0x00, 0x6E, 0x58, 0x04, 0xA6, 0x78, 0x9C, 0x63, 0x38,
    0x72, 0x9F, 0x83, 0x21, 0xC0, 0x56, 0x61, 0x36, 0xC3, 0x03, 0x26, 0x86, 0x8F, 0x0C, 0x07, 0x19,
    0x18, 0x1E, 0x30, 0x00, 0xC1, 0x61, 0x10, 0x61, 0x03, 0xC4, 0x0B, 0xD8, 0x81, 0xC4, 0x0C, 0x20,
    0x2E, 0xE0, 0x02, 0x12, 0xDB, 0x80, 0x38, 0x80, 0x07, 0x48, 0x5C, 0xF8, 0xFF, 0xFF, 0x3F, 0x37,
    0x00, 0xAC, 0x27, 0x0E, 0x0A, 0x78, 0x9C, 0x63, 0xB8, 0xF6, 0x5E, 0x92, 0xA1, 0xC0, 0x56, 0x60,
    0x27, 0xC3, 0x03, 0x26, 0x86, 0x07, 0x8C, 0x06, 0x0C, 0x40, 0x82, 0x81, 0xC1, 0xA0, 0x8B, 0x81,
    0x61, 0xC1, 0x7F, 0x2E, 0x06, 0x06, 0x06, 0x85, 0x55, 0x40, 0x82, 0xE1, 0x02, 0xB3, 0x03, 0x50,
    0x80, 0xED, 0x23, 0x23, 0xC3, 0x01, 0x96, 0x09, 0x36, 0x02, 0x27, 0x19, 0x18, 0xAE, 0xDF, 0xE7,
    0x64, 0x00, 0x00, 0xF3, 0x0C, 0x10, 0x29, 0x78, 0x9C, 0x63, 0x60, 0x30, 0xB0, 0x67, 0x60, 0x60,
    0x38, 0x60, 0x0B, 0x24, 0x2A, 0x6C, 0x18, 0x18, 0x0C, 0x78, 0x80, 0xC4, 0x01, 0x26, 0x20, 0x51,
    0xC1, 0x60, 0x03, 0xE4, 0x01, 0x89, 0x03, 0x4C, 0x40, 0xE2, 0xDB, 0xFF, 0xFF, 0xFF, 0xF5, 0x81,
    0x6A, 0x80, 0x12, 0x70, 0x02, 0x00, 0x36, 0xE4, 0x0A, 0x97, 0x78, 0x9C, 0x5B, 0xF0, 0xFF, 0x7F,
    0xFD, 0x01, 0x66, 0x06, 0x86, 0x0B, 0x8C, 0x0C, 0x0C, 0x0F, 0x18, 0x80, 0xF8, 0xD5, 0x7E, 0xA6,
    0x8B, 0xA2, 0x8D, 0x7C, 0x40, 0x66, 0x15, 0x10, 0x4F, 0x13, 0x02, 0xE2, 0x69, 0x40, 0xF6, 0x45,
    0xB1, 0x44, 0x3E, 0x85, 0x57, 0xFB, 0x99, 0x01, 0x9F, 0xCF, 0x0F, 0x7C, 0x78, 0x9C, 0x63, 0x98,
    0xF8, 0x97, 0xC1, 0xA0, 0x8F, 0x89, 0xE1, 0x02, 0x33, 0x03, 0x43, 0x1B, 0x03, 0x03, 0x43, 0xF4,
    0xAB, 0xFD, 0x4C, 0x77, 0xC5, 0x1A, 0x79, 0xFD, 0x80, 0x4C, 0x39, 0x06, 0x86, 0x72, 0x5B, 0x06,
    0x86, 0xF6, 0x4E, 0x06, 0x06, 0x9F, 0x87, 0xE2, 0x13, 0x79, 0x14, 0x7E, 0xAF, 0x63, 0x04, 0x00,
    0x40, 0xA0, 0x0D, 0x65, 0x78, 0x9C, 0xFB, 0xFA, 0xFF, 0xFF, 0x7F, 0x0E, 0x06, 0x06, 0x86, 0x0D,
    0xCC, 0x40, 0x62, 0x33, 0x10, 0x33, 0x78, 0x01, 0xB1, 0x02, 0x2F, 0x90, 0x98, 0xC0, 0x06, 0x24,
    0x2E, 0x82, 0x84, 0x2A, 0x40, 0x84, 0x1C, 0x10, 0x17, 0x80, 0x94, 0x3E, 0x60, 0x04, 0x12, 0xCB,
    0x80, 0x18, 0x00, 0x88, 0xDC, 0x09, 0xD4, 0x78, 0x9C, 0x63, 0x38, 0xFA, 0x5E, 0x92, 0x21, 0xC0,
    0x57, 0xE1, 0x24, 0xC3, 0x06, 0x56, 0x86, 0x0B, 0x4C, 0x1B, 0x58, 0x80, 0x84, 0x83, 0xAD, 0xC0,
    0x4A, 0x06, 0x86, 0xAF, 0xFF, 0xB9, 0x41, 0x12, 0x3B, 0x19, 0x1E, 0x30, 0x01, 0xE5, 0x1E, 0x32,
    0x30, 0x14, 0x70, 0x7C, 0x60, 0x64, 0x58, 0xC0, 0xDE, 0x60, 0x23, 0xF0, 0x82, 0x91, 0xE1, 0xDA,
    0x7B, 0x29, 0x06, 0x00, 0x49, 0xA5, 0x13, 0x28, 0x78, 0x9C, 0x63, 0xB8, 0x7A, 0x9F, 0x9D, 0x21,
    0xC0, 0xD7, 0xA0, 0x96, 0xE1, 0x02, 0x33, 0xC3, 0x23, 0x86, 0x87, 0x0C, 0x0C, 0x07, 0x98, 0x81,
    0xC4, 0x02, 0x96, 0x07, 0x4C, 0x0C, 0x17, 0x58, 0x0B, 0x6C, 0x0D, 0x6E, 0xB3, 0x30, 0x5C, 0x3F,
    0x7F, 0x98, 0x89, 0x81, 0x01, 0x24, 0xC7, 0xC0, 0xD0, 0x09, 0xC4, 0x9B, 0x79, 0x18, 0x18, 0xBE,
    0xE7, 0x30, 0x30, 0x00, 0x00, 0x41, 0xB8, 0x11, 0x4E, 0x78, 0x9C, 0x13, 0x8E, 0x61, 0x00, 0x03,
    0xE6, 0x18, 0x00, 0x04, 0x66, 0x00, 0xCF, 0x78, 0x9C, 0x33, 0x60, 0xB8, 0xC0, 0xC2, 0x80, 0x04,
    0x12, 0x98, 0x36, 0x30, 0x3F, 0x60, 0xDC, 0x02, 0x64, 0x01, 0x00, 0x2A, 0x52, 0x03, 0xAF, 0x78,
    0x9C, 0x63, 0x60, 0x10, 0xA8, 0x60, 0x30, 0xB8, 0x25, 0xEE, 0x70, 0x9A, 0x95, 0xE1, 0x2B, 0x2B,
    0x03, 0x83, 0xC3, 0x6E, 0x20, 0x01, 0xE4, 0x33, 0x00, 0xC5, 0x01, 0x5D, 0x1B, 0x06, 0x5D, 0x78,
    0x9C, 0xFB, 0xF3, 0xFF, 0xBF, 0x3E, 0x03, 0x14, 0xFC, 0x01, 0xB2, 0x01, 0x38, 0x30, 0x06, 0x53,
    0x78, 0x9C, 0x8B, 0x61, 0x60, 0x60, 0x58, 0x5C, 0xCB, 0xC8, 0xC0, 0x50, 0x38, 0x97, 0x89, 0x81,
    0x61, 0x01, 0x3F, 0x88, 0x06, 0xF1, 0x63, 0x80, 0xE2, 0x00, 0x56, 0xDF, 0x05, 0xCA, 0x78, 0x9C,
    0x13, 0x78, 0x35, 0x8F, 0xE1, 0x80, 0xF8, 0x46, 0xCE, 0x4B, 0x0C, 0x02, 0x7C, 0x02, 0x0C, 0x0C,
    0xFC, 0x0C, 0x0C, 0x0E, 0xDC, 0x0C, 0x0C, 0x97, 0x98, 0x18, 0x04, 0x7C, 0x19, 0x18, 0x26, 0xB0,
    0x33, 0x30, 0x5C, 0x60, 0x66, 0x00, 0x03, 0x03, 0x06, 0x30, 0x1B, 0x00, 0xF8, 0xE8, 0x08, 0x22,
    0x78, 0x9C, 0x63, 0x60, 0x48, 0x78, 0x73, 0xDF, 0x8A, 0x81, 0x81, 0x41, 0x61, 0xAD, 0x88, 0xC2,
    0x55, 0x76, 0x06, 0x86, 0x87, 0x2C, 0x40, 0x4E, 0x14, 0x03, 0x43, 0x34, 0x90, 0x62, 0x38, 0xC0,
    0x60, 0xC0, 0xCD, 0x70, 0xE5, 0x3C, 0x73, 0x03, 0x73, 0x03, 0xAB, 0x83, 0x6D, 0x01, 0x7B, 0x00,
    0xFB, 0x01, 0xC6, 0x03, 0xCC, 0x05, 0x6C, 0x06, 0x1C, 0x17, 0x18, 0x0E, 0x32, 0x34, 0xB0, 0x80,
    0xE8, 0x29, 0x0C, 0x0B, 0x98, 0x03, 0xD8, 0x41, 0xF4, 0x05, 0xA6, 0x05, 0xCC, 0x07, 0x18, 0x1F,
    0x0A, 0x9D, 0x64, 0xDB, 0xCA, 0xD0, 0xC0, 0x9A, 0xF0, 0x4E, 0xED, 0xAD, 0x34, 0x83, 0x01, 0x2F,
    0x03, 0x04, 0xAC, 0x84, 0xD2, 0x0B, 0x62, 0x98, 0x02, 0x99, 0x41, 0x8C, 0x2D, 0xFF, 0xE6, 0x31,
    0x32, 0x30, 0x00, 0x00, 0x1B, 0x18, 0x1F, 0x49, 0x78, 0x9C, 0x63, 0x60, 0xF8, 0xCA, 0x00, 0x02,
    0xA7, 0x59, 0x81, 0x84, 0x82, 0x2F, 0x37, 0x90, 0x6C, 0x60, 0xD7, 0x03, 0x92, 0x0F, 0x98, 0x3A,
    0x80, 0xE4, 0x11, 0x86, 0x47, 0x40, 0x32, 0x8B, 0xE1, 0x00, 0x0B, 0x83, 0x80, 0x3C, 0x43, 0x01,
    0x17, 0x43, 0xC2, 0xFF, 0xFF, 0xFF, 0xE5, 0x19, 0x0E, 0x00, 0x55, 0x67, 0x83, 0xA5, 0x8E, 0x32,
    0x74, 0x80, 0x15, 0x03, 0x00, 0xEB, 0x61, 0x0F, 0x97, 0x78, 0x9C, 0xFB, 0xFE, 0xFF, 0x3E, 0x3B,
    0x43, 0x3B, 0x83, 0xC1, 0x6C, 0x20, 0xC1, 0xF0, 0x11, 0x46, 0x28, 0x54, 0x33, 0x7C, 0xFF, 0xFF,
    0x9F, 0x0B, 0xC8, 0x12, 0xD8, 0x09, 0x12, 0x3B, 0xC0, 0x02, 0x24, 0x26, 0xB0, 0x83, 0x58, 0xAC,
    0x40, 0xD9, 0x9B, 0x40, 0xD9, 0xFB, 0x92, 0x0C, 0x00, 0x87, 0x5F, 0x14, 0xB3, 0x78, 0x9C, 0x63,
    0xB8, 0xF6, 0x5E, 0x8B, 0x61, 0x81, 0x8D, 0xC0, 0x73, 0xC6, 0x2B, 0x0C, 0x0C, 0x05, 0x5C, 0x59,
    0x0C, 0x0C, 0x02, 0x7C, 0xB6, 0x0C, 0x0C, 0x0C, 0x8C, 0x72, 0x40, 0x82, 0x01, 0x4C, 0x80, 0xB8,
    0x0C, 0x60, 0x89, 0xAB, 0x20, 0x25, 0x0B, 0xAC, 0x81, 0x8A, 0x19, 0xAE, 0x03, 0xB5, 0x01, 0x00,
    0x73, 0x1F, 0x0B, 0xEB, 0x78, 0x9C, 0xFB, 0xFE, 0x7F, 0x1F, 0x2B, 0x43, 0x3B, 0x83, 0x43, 0x2F,
    0x90, 0x60, 0xB8, 0xC0, 0x02, 0x24, 0x1C, 0xB8, 0x81, 0x04, 0x03, 0x3F, 0x26, 0x11, 0xC0, 0x0D,
    0x55, 0x02, 0x54, 0xFC, 0x1D, 0xA4, 0x0D, 0x00, 0xD1, 0x17, 0x0E, 0xDD, 0x78, 0x9C, 0xFB, 0xFE,
    0xFF, 0xFF, 0x7F, 0x86, 0x76, 0x06, 0x20, 0x40, 0x23, 0xBE, 0xFF, 0xFF, 0x6F, 0x8F, 0x55, 0x02,
    0x26, 0xFB, 0x9F, 0x01, 0x00, 0xFA, 0x9B, 0x0F, 0xDC, 0x78, 0x9C, 0xFB, 0xFE, 0xFF, 0xFF, 0x7F,
    0x86, 0x76, 0x06, 0x20, 0x40, 0x23, 0xBE, 0xFF, 0xFF, 0x6F, 0x8F, 0x55, 0x02, 0x41, 0x00, 0x00,
    0xEF, 0x74, 0x0C, 0x6F, 0x78, 0x9C, 0x63, 0x38, 0xF6, 0xDE, 0x9B, 0x61, 0x82, 0xAF, 0xC0, 0x53,
    0xD6, 0xC7, 0x8C, 0x0C, 0x0A, 0x7C, 0x9D, 0x0C, 0x0C, 0x0C, 0x62, 0xD1, 0x40, 0x82, 0xC1, 0x06,
    0x42, 0x7C, 0xF8, 0xEF, 0xEF, 0x0D, 0x64, 0xF8, 0x74, 0x80, 0x88, 0x47, 0x4C, 0x40, 0xA2, 0x20,
    0x8E, 0xB1, 0x49, 0x8F, 0x61, 0xCB, 0xBF, 0xB9, 0x8C, 0x00, 0xC2, 0xD6, 0x0F, 0x04, 0x78, 0x9C,
    0x6B, 0x67, 0x60, 0x60, 0xA8, 0x68, 0xC7, 0x42, 0x7C, 0xFF, 0xFF, 0xFF, 0x7F, 0x3D, 0x36, 0x09,
    0x04, 0x01, 0x00, 0xE1, 0x0B, 0x0F, 0x69, 0x78, 0x9C, 0x3B, 0x72, 0x04, 0x01, 0x00, 0x3B, 0xC4,
    0x09, 0x31, 0x78, 0x9C, 0x63, 0x60, 0x60, 0x78, 0xC4, 0x80, 0x07, 0x27, 0x33, 0x30, 0x5C, 0xBE,
    0xCC, 0xC0, 0xB0, 0xFC, 0x80, 0x64, 0x80, 0x9D, 0xC0, 0xCB, 0xF3, 0x2C, 0x00, 0x0A, 0x3B, 0x0C,
    0xF4, 0x78, 0x9C, 0x6B, 0x67, 0x60, 0xD8, 0xC0, 0xD1, 0xCE, 0xC0, 0x30, 0x8B, 0xA1, 0x9D, 0x61,
    0x01, 0x17, 0x90, 0xD8, 0xC9, 0xC0, 0xD0, 0x3E, 0x81, 0x1B, 0x48, 0xFC, 0x60, 0x66, 0x60, 0x78,
    0x9E, 0x2D, 0xCB, 0xC0, 0x70, 0x9C, 0x61, 0x07, 0x90, 0x0B, 0x54, 0x06, 0x24, 0x18, 0x62, 0x41,
    0xC4, 0x23, 0x66, 0x20, 0xE1, 0x20, 0x07, 0x00, 0xD7, 0x70, 0x0E, 0xD8, 0x78, 0x9C, 0x9B, 0xCE,
    0xC0, 0xC0, 0x30, 0x9D, 0x48, 0xFC, 0xFD, 0xFF, 0xFF, 0x7E, 0x00, 0xBF, 0x42, 0x0A, 0x02, 0x78,
    0x9C, 0xFB, 0xCE, 0xC8, 0xC0, 0xC0, 0xF0, 0x8D, 0xE9, 0x3B, 0x07, 0x90, 0x7A, 0xCB, 0x34, 0x9D,
    0x8F, 0x81, 0xC1, 0xE0, 0x0C, 0x53, 0x79, 0x14, 0x03, 0xC3, 0x82, 0xA3, 0x4C, 0xED, 0x87, 0x19,
    0x18, 0x1E, 0x5E, 0x60, 0x6A, 0x3F, 0xC0, 0xCC, 0x50, 0x01, 0xA4, 0x12, 0x38, 0x19, 0xE4, 0x80,
    0x14, 0x83, 0x5C, 0x00, 0x17, 0x88, 0xAA, 0x38, 0xC0, 0x0C, 0xA2, 0x2E, 0x1E, 0x66, 0x00, 0x51,
    0x0B, 0x62, 0xC1, 0x94, 0x03, 0x1F, 0x90, 0x02, 0x00, 0x52, 0xCD, 0x1A, 0x7A, 0x78, 0x9C, 0xBB,
    0xCE, 0xC0, 0xC0, 0xD0, 0xFE, 0x9D, 0x13, 0x48, 0x4C, 0xF7, 0x05, 0x11, 0x57, 0x40, 0xC4, 0x04,
    0x4E, 0x20, 0xC1, 0xE0, 0x0B, 0x22, 0x1E, 0x33, 0x02, 0x89, 0x06, 0x2E, 0x20, 0xC1, 0xE0, 0x0B,
    0x22, 0x1E, 0x77, 0x00, 0x89, 0x86, 0x7E, 0x20, 0xC1, 0xD0, 0x0B, 0x00, 0x4D, 0x71, 0x13, 0x46,
    0x78, 0x9C, 0x63, 0xB8, 0xF6, 0x5E, 0x8B, 0x61, 0x81, 0x8D, 0xC0, 0x33, 0xE6, 0xAB, 0x0C, 0x0C,
    0x09, 0x3C, 0xD9, 0x0C, 0x0C, 0x0C, 0xB6, 0x7A, 0x40, 0x22, 0x4A, 0x1E, 0x48, 0x54, 0x82, 0x09,
    0x30, 0x17, 0x2C, 0x01, 0x54, 0x12, 0xC0, 0xBB, 0xC0, 0x1A, 0xA8, 0x98, 0xE1, 0x3A, 0x50, 0x1B,
    0x00, 0xA1, 0xE6, 0x0D, 0x8C, 0x78, 0x9C, 0xFB, 0xFE, 0xFF, 0xBD, 0x16, 0x43, 0x3B, 0x83, 0xC0,
    0x73, 0xA6, 0x76, 0x06, 0x86, 0x09, 0x9C, 0x40, 0x22, 0x80, 0x1B, 0x48, 0x34, 0x00, 0x59, 0x02,
    0xDF, 0x99, 0xBE, 0x43, 0x64, 0x81, 0x00, 0x1B, 0x01, 0x00, 0x3D, 0xA3, 0x0E, 0xE4, 0x78, 0x9C,
    0x63, 0xB8, 0xF6, 0x5E, 0x8B, 0x61, 0x81, 0xB5, 0xC0, 0x73, 0xA6, 0xAB, 0x0C, 0x0C, 0x09, 0x3C,
    0xD1, 0x0C, 0x0C, 0x0C, 0x7A, 0x7A, 0x40, 0x22, 0x9A, 0x1F, 0x48, 0x64, 0x82, 0x09, 0x30, 0x17,
    0x2C, 0x01, 0x56, 0x02, 0x54, 0xFC, 0x8C, 0x89, 0xE1, 0xDA, 0xFB, 0x7C, 0xA0, 0x08, 0xC3, 0x65,
    0x56, 0x20, 0x21, 0x20, 0x0D, 0x00, 0x20, 0x0F, 0x0E, 0x64, 0x78, 0x9C, 0xFB, 0xF1, 0xFF, 0xBE,
    0x24, 0x43, 0x07, 0x83, 0xC2, 0x4D, 0x20, 0xC1, 0xB0, 0x81, 0x0D, 0x48, 0x34, 0x70, 0x80, 0x58,
    0xAC, 0x40, 0xB1, 0x93, 0x0C, 0x3F, 0xFE, 0xFF, 0x07, 0xC9, 0x2E, 0x60, 0x07, 0x12, 0x02, 0x72,
    0x20, 0x25, 0xCB, 0x41, 0xC4, 0x05, 0x66, 0x20, 0x11, 0xC0, 0x03, 0x00, 0x67, 0x4E, 0x11, 0xCF,
    0x78, 0x9C, 0x63, 0xD8, 0xF2, 0x2F, 0x87, 0x21, 0x20, 0x8E, 0xF1, 0x30, 0xE7, 0x05, 0x16, 0x06,
    0x06, 0xBD, 0x0B, 0xCC, 0x0C, 0x0C, 0xAA, 0x09, 0xB6, 0x0C, 0x40, 0x70, 0xB5, 0x17, 0xC8, 0x66,
    0x28, 0x3A, 0xCB, 0x04, 0x24, 0x03, 0xF8, 0x12, 0x81, 0x64, 0xF4, 0x47, 0x46, 0x06, 0x06, 0x9F,
    0x86, 0x58, 0xC6, 0x45, 0xBC, 0x0C, 0x5B, 0xFF, 0xF5, 0x32, 0x02, 0x00, 0xCA, 0xC2, 0x0E, 0xFD,
    0x78, 0x9C, 0xFB, 0xF9, 0xFF, 0xFF, 0xFF, 0xFD, 0x0C, 0x0C, 0xD3, 0x19, 0x18, 0x48, 0x27, 0x00,
    0xC7, 0x6D, 0x0B, 0x33, 0x78, 0x9C, 0x8B, 0x62, 0x60, 0x50, 0xE0, 0x8D, 0x22, 0x4C, 0x54, 0x32,
    0x30, 0x38, 0xF0, 0x1C, 0x63, 0x60, 0x98, 0xC0, 0x79, 0x41, 0x4B, 0xE1, 0x05, 0xA3, 0xC0, 0xCB,
    0xF7, 0x52, 0x0C, 0x00, 0xE8, 0x06, 0x0A, 0x62, 0x78, 0x9C, 0xEB, 0x64, 0x60, 0x60, 0xF8, 0xC8,
    0xF8, 0x18, 0x48, 0x2E, 0x63, 0xB8, 0xC0, 0xC2, 0xC0, 0xE0, 0xC3, 0x50, 0xC0, 0xC5, 0xA0, 0xC0,
    0xC7, 0x20, 0xC0, 0xC7, 0xD0, 0xC0, 0xC1, 0xC0, 0x10, 0xCD, 0x70, 0x81, 0x89, 0x81, 0x61, 0x2B,
    0xC3, 0x61, 0xA0, 0x82, 0x07, 0x8C, 0x99, 0x40, 0x72, 0x02, 0xBB, 0x1C, 0x90, 0x34, 0x88, 0xE1,
    0x02, 0x92, 0x0C, 0x77, 0x59, 0x40, 0xE4, 0x73, 0x20, 0x06, 0x00, 0xF7, 0x54, 0x0C, 0x75, 0x78,
    0x9C, 0x05, 0xC1, 0x31, 0x0E, 0xC1, 0x50, 0x00, 0x00, 0xD0, 0xA7, 0x68, 0xB4, 0xB4, 0xE9, 0x62,
    0xEC, 0x0D, 0x5C, 0x41, 0xE2, 0x08, 0xD6, 0x6E, 0x5D, 0x9D, 0x00, 0x9B, 0x23, 0xFC, 0xC1, 0x6A,
    0xAC, 0x59, 0x24, 0x76, 0x47, 0xF8, 0x93, 0xB9, 0x3F, 0x46, 0x97, 0xF0, 0xDE, 0x9D, 0x71, 0xA6,
    0x2F, 0x13, 0xDF, 0x42, 0xC8, 0x63, 0xE6, 0x54, 0x89, 0x59, 0xC8, 0xB5, 0x1B, 0xC9, 0xBE, 0x6C,
    0x56, 0x47, 0x83, 0xA6, 0xEE, 0x17, 0x4F, 0x07, 0xB6, 0x8F, 0x69, 0xD4, 0x72, 0x1E, 0x85, 0x75,
    0xC5, 0xEB, 0x6A, 0xD7, 0x15, 0xA4, 0x8E, 0xDB, 0x9C, 0x77, 0xCD, 0x6F, 0xC2, 0x65, 0xC9, 0x87,
    0x3F, 0x71, 0x51, 0x16, 0x3E, 0x78, 0x9C, 0x7B, 0xC4, 0xC4, 0xC0, 0x50, 0x9D, 0xC0, 0xC3, 0x00,
    0x44, 0xD5, 0x0C, 0x0F, 0x99, 0x80, 0xA8, 0x9A, 0x81, 0x21, 0x20, 0x87, 0x87, 0x81, 0x81, 0xE1,
    0x37, 0x50, 0x8A, 0xE1, 0x0F, 0x33, 0x03, 0x43, 0x81, 0x37, 0x2F, 0x03, 0xC3, 0x23, 0xC6, 0x59,
    0x0C, 0x0C, 0xB1, 0x0C, 0x0F, 0x59, 0x1A, 0xB8, 0x18, 0x1C, 0xF8, 0x1E, 0x33, 0x32, 0x30, 0xCC,
    0x04, 0x00, 0x9E, 0x38, 0x0D, 0x94, 0x78, 0x9C, 0x5B, 0xC1, 0xC0, 0xC0, 0xB0, 0xE2, 0x01, 0x33,
    0x83, 0x80, 0x5C, 0x00, 0x0F, 0xC3, 0x02, 0x76, 0x86, 0x18, 0x86, 0xCB, 0x0C, 0x0C, 0x8F, 0x81,
    0x14, 0xC3, 0x84, 0x70, 0x6E, 0x06, 0x06, 0x81, 0x7B, 0x4C, 0x20, 0x05, 0x40, 0xCC, 0x30, 0x1D,
    0x83, 0x00, 0x00, 0x7B, 0x27, 0x0A, 0xB9, 0x78, 0x9C, 0xFB, 0xF0, 0xFF, 0xFF, 0x7F, 0x7D, 0x06,
    0x06, 0x86, 0x04, 0x6E, 0x20, 0xF1, 0x88, 0x11, 0x48, 0xF8, 0x02, 0xF1, 0x04, 0x4E, 0x20, 0x71,
    0x05, 0x88, 0x05, 0xEC, 0x80, 0xC4, 0x02, 0x76, 0x20, 0xB1, 0x0D, 0x88, 0x15, 0xE4, 0x80, 0xC4,
    0x01, 0x56, 0x20, 0xF1, 0x19, 0xA8, 0xAD, 0x1E, 0x00, 0xAD, 0x46, 0x0E, 0x42, 0x78, 0x9C, 0xFB,
    0x25, 0x1F, 0xC5, 0x80, 0x0F, 0xFE, 0x92, 0x07, 0x00, 0x86, 0x54, 0x07, 0x79, 0x78, 0x9C, 0x9B,
    0xC6, 0xC0, 0xC0, 0xF0, 0x00, 0x88, 0x17, 0xB0, 0x32, 0x30, 0x18, 0x70, 0x03, 0x19, 0xBA, 0x40,
    0xDC, 0x0E, 0xC4, 0x17, 0x41, 0x82, 0x2C, 0x0C, 0x0C, 0x0E, 0x5C, 0x40, 0x86, 0x2C, 0x10, 0x57,
    0x00, 0xF1, 0x25, 0x20, 0xDE, 0xC0, 0x0C, 0x00, 0xBB, 0x7C, 0x06, 0xE4, 0x78, 0x9C, 0xFB, 0xCF,
    0xE3, 0x80, 0x17, 0xFE, 0xE7, 0x01, 0x00, 0x75, 0x0A, 0x06, 0x8B, 0x78, 0x9C, 0x63, 0xF8, 0xC8,
    0xC8, 0xC0, 0x70, 0x82, 0x9D, 0x81, 0x41, 0x96, 0x97, 0x21, 0x80, 0x33, 0x8A, 0x61, 0x03, 0xF3,
    0x66, 0x86, 0x43, 0x0C, 0x17, 0x98, 0x00, 0x3D, 0xAC, 0x05, 0x99, 0x78, 0x9C, 0xFB, 0xFF, 0xFF,
    0x7F, 0x3C, 0x00, 0x09, 0x5A, 0x03, 0x5D, 0x78, 0x9C, 0x5B, 0xC0, 0xC9, 0xE0, 0x0D, 0x00, 0x02,
    0xEA, 0x00, 0xF5, 0x78, 0x9C, 0x13, 0x78, 0x79, 0x9F, 0x9D, 0xE1, 0x80, 0xB8, 0x41, 0x2E, 0x03,
    0x10, 0x2C, 0x05, 0x11, 0x87, 0x19, 0x04, 0x6E, 0xFC, 0x3F, 0xCF, 0x70, 0x41, 0x13, 0xC8, 0x7A,
    0xC4, 0xC0, 0x70, 0x84, 0xE1, 0x01, 0x5B, 0xE0, 0x59, 0x06, 0x83, 0x3F, 0xEB, 0x1E, 0x33, 0x00,
    0x00, 0x42, 0x3E, 0x0F, 0x95, 0x78, 0x9C, 0xF3, 0x66, 0x60, 0x60, 0xF0, 0x46, 0xC2, 0xD1, 0x2F,
    0xD7, 0x33, 0xDE, 0x66, 0x9D, 0xC8, 0x93, 0xCD, 0xC0, 0x60, 0x0B, 0xE4, 0x67, 0x02, 0x71, 0x3B,
    0x88, 0x06, 0xF1, 0x5F, 0xB3, 0x2E, 0xE4, 0x8E, 0xFE, 0xB5, 0x9E, 0x11, 0x00, 0xFA, 0xF7, 0x0B,
    0xC9, 0x78, 0x9C, 0x63, 0xB8, 0x7A, 0x9F, 0x9D, 0x21, 0xC1, 0x57, 0xA1, 0x87, 0xE1, 0x01, 0x33,
    0xC3, 0x43, 0x86, 0x47, 0x0C, 0x0C, 0x02, 0x0C, 0x87, 0x19, 0x80, 0xE0, 0x11, 0x88, 0x00, 0x8A,
    0x1D, 0x60, 0x48, 0xB0, 0x55, 0x98, 0xC5, 0xC0, 0x70, 0xED, 0x3D, 0x07, 0x03, 0x00, 0x22, 0xC9,
    0x0C, 0x37, 0x78, 0x9C, 0x63, 0x60, 0x60, 0xB8, 0xC0, 0xC4, 0x80, 0x46, 0x5C, 0x3B, 0x7F, 0x85,
    0xC9, 0xC1, 0x4F, 0xE1, 0x37, 0xD3, 0x01, 0x56, 0x86, 0x07, 0x4C, 0x1F, 0x40, 0x62, 0x0F, 0x41,
    0x04, 0x98, 0x75, 0x80, 0x05, 0x28, 0x06, 0x96, 0x65, 0xB8, 0x76, 0xFF, 0x1A, 0x13, 0x00, 0x39,
    0xFA, 0x14, 0x2B, 0x78, 0x9C, 0x63, 0x38, 0x72, 0x9F, 0x8D, 0xC1, 0xC1, 0xCF, 0x20, 0x96, 0xE1,
    0x02, 0x0B, 0xC3, 0x65, 0x86, 0x47, 0x0C, 0x0C, 0x0F, 0x18, 0x3E, 0xFF, 0xFF, 0xFF, 0x9F, 0xE9,
    0x10, 0x03, 0x10, 0x5C, 0x60, 0x02, 0x12, 0x01, 0xBE, 0x02, 0xD3, 0x18, 0x18, 0x8E, 0xBC, 0x97,
    0x62, 0x00, 0x00, 0x64, 0xD8, 0x0E, 0xC4, 0x78, 0x9C, 0x63, 0xD8, 0x38, 0x9F, 0xA1, 0x9B, 0x81,
    0x81, 0x8F, 0x81, 0x81, 0x9F, 0xE1, 0xFB, 0x7F, 0x7D, 0x20, 0x89, 0x15, 0x01, 0x00, 0x86, 0x42,
    0x04, 0x96, 0x78, 0x9C, 0x63, 0xB8, 0x76, 0xFE, 0x0A, 0x53, 0x80, 0x9F, 0xC2, 0x6F, 0xA6, 0x03,
    0xAC, 0x0C, 0x1F, 0x98, 0x3E, 0x30, 0x30, 0x3C, 0x60, 0x7A, 0x08, 0x22, 0xC0, 0xAC, 0x03, 0x2C,
    0x40, 0xC2, 0x01, 0x24, 0xCB, 0x70, 0xED, 0xFE, 0x53, 0x46, 0x06, 0x06, 0x86, 0x8F, 0x0C, 0x01,
    0x9A, 0x0A, 0xD5, 0x0C, 0x0C, 0xD7, 0xEF, 0xB3, 0x33, 0x00, 0x00, 0xAC, 0xE7, 0x15, 0x03, 0x78,
    0x9C, 0xF3, 0x66, 0x60, 0x60, 0xF0, 0x46, 0xC6, 0x2F, 0xF6, 0x33, 0xDD, 0x16, 0x9F, 0xC8, 0x3D,
    0x9B, 0x81, 0x81, 0x1F, 0xC8, 0xE7, 0x03, 0x62, 0x39, 0x74, 0x0C, 0x00, 0xDB, 0xD9, 0x07, 0xBF,
    0x78, 0x9C, 0x13, 0xAA, 0x64, 0x60, 0xC8, 0x84, 0x01, 0x00, 0x19, 0x18, 0x04, 0x3D, 0x78, 0x9C,
    0x63, 0x10, 0x62, 0xC8, 0x62, 0x00, 0x81, 0x28, 0x4C, 0xA8, 0x60, 0xF7, 0x86, 0x03, 0x00, 0x42,
    0xA2, 0x05, 0x53, 0x78, 0x9C, 0xF3, 0x66, 0x60, 0x60, 0xF0, 0x46, 0xC1, 0x07, 0xD8, 0xBC, 0x19,
    0x72, 0x18, 0xBC, 0x0F, 0xB2, 0x31, 0x44, 0xD7, 0x30, 0x30, 0xBC, 0x5E, 0xC3, 0xC0, 0x50, 0xBD,
    0x81, 0x9D, 0xC1, 0x5B, 0xC0, 0x17, 0x28, 0xF7, 0x88, 0xC9, 0x9B, 0x21, 0x80, 0x07, 0x00, 0xE4,
    0x0B, 0x0A, 0x25, 0x78, 0x9C, 0xCB, 0xCC, 0x44, 0x02, 0x00, 0x25, 0x60, 0x05, 0x56, 0x78, 0x9C,
    0xF3, 0x79, 0xB9, 0x5F, 0xF1, 0xF7, 0x3C, 0x86, 0x3B, 0x6C, 0x0B, 0xCF, 0xB0, 0x1C, 0x62, 0xAF,
    0x61, 0x10, 0xF0, 0x67, 0x70, 0xE0, 0xB6, 0x61, 0x60, 0xE0, 0x67, 0x50, 0xE0, 0x25, 0x82, 0x02,
    0x00, 0xF8, 0xC1, 0x0A, 0xC1, 0x78, 0x9C, 0xF3, 0x7E, 0xB1, 0x9F, 0xE9, 0xB4, 0xF8, 0x44, 0xEE,
    0xD9, 0x0C, 0x0C, 0xFC, 0xDE, 0x0C, 0x0C, 0x7C, 0x40, 0x2C, 0x87, 0x8E, 0x01, 0xA3, 0xE1, 0x06,
    0x83, 0x78, 0x9C, 0x63, 0x38, 0xF2, 0x5E, 0x92, 0x21, 0x20, 0x4E, 0xE1, 0x26, 0xC3, 0x05, 0x16,
    0x86, 0x0D, 0x6C, 0x8F, 0x18, 0x18, 0x02, 0xB8, 0x0E, 0x33, 0x30, 0x18, 0xF0, 0x80, 0x59, 0x0F,
    0x40, 0x62, 0x60, 0x59, 0x06, 0x90, 0x3A, 0x00, 0x3D, 0xC1, 0x0D, 0x82, 0x78, 0x9C, 0xF3, 0x7E,
    0xB5, 0x9E, 0xF1, 0x36, 0xEB, 0x22, 0xEE, 0x6C, 0x06, 0x06, 0x3B, 0x6F, 0x06, 0x86, 0x4C, 0x20,
    0xAE, 0x00, 0xD1, 0xD1, 0x40, 0xFE, 0x6D, 0x16, 0xA0, 0xF8, 0xAF, 0xF5, 0x8C, 0x40, 0x3E, 0x03,
    0x0C, 0x03, 0x00, 0x48, 0x08, 0x0B, 0x62, 0x78, 0x9C, 0x63, 0xB8, 0x76, 0xFF, 0x0A, 0x53, 0x80,
    0x9F, 0xC2, 0x6F, 0xA6, 0x03, 0xAC, 0x0C, 0x0F, 0x98, 0x3E, 0x30, 0x00, 0x89, 0x87, 0x0C, 0x30,
    0xD6, 0x01, 0x16, 0x20, 0xE1, 0xE0, 0xA7, 0xF0, 0x8B, 0x89, 0xE1, 0xDA, 0xFD, 0xA7, 0x4C, 0x0C,
    0x20, 0x31, 0x04, 0x01, 0x00, 0xA5, 0xD4, 0x13, 0xE7, 0x78, 0x9C, 0x8B, 0xFE, 0xC5, 0x76, 0x9B,
    0x95, 0xA1, 0x9A, 0x81, 0xC1, 0x1B, 0x03, 0x01, 0x00, 0x55, 0x35, 0x04, 0x79, 0x78, 0x9C, 0x63,
    0x78, 0x79, 0x9F, 0x75, 0x82, 0x94, 0x83, 0xDF, 0x05, 0x66, 0x86, 0x90, 0x82, 0x5A, 0x26, 0x06,
    0x86, 0x29, 0x6F, 0xD9, 0x19, 0x18, 0x14, 0x6A, 0x1B, 0x18, 0x18, 0x96, 0x1D, 0x90, 0x30, 0x88,
    0x11, 0x78, 0x79, 0x9F, 0x0D, 0x00, 0xD7, 0x49, 0x0B, 0xA9, 0x78, 0x9C, 0x53, 0xE0, 0x65, 0x50,
    0xE0, 0x65, 0xF8, 0xFB, 0x9F, 0x5B, 0x01, 0xCC, 0x40, 0x46, 0x02, 0xFA, 0x0C, 0x0C, 0x3F, 0x78,
    0x00, 0x55, 0x22, 0x04, 0xB3, 0x78, 0x9C, 0xF3, 0x66, 0x60, 0xE0, 0xF7, 0xC6, 0x82, 0xB3, 0x18,
    0x04, 0xF8, 0xAF, 0x32, 0x1D, 0xE6, 0x6F, 0xF8, 0x17, 0xCB, 0x07, 0x00, 0x4D, 0x62, 0x06, 0x38,
    0x78, 0x9C, 0xEB, 0x60, 0x60, 0x58, 0x7A, 0x89, 0x81, 0xC1, 0xFB, 0x00, 0xB3, 0x00, 0x5F, 0x02,
    0x67, 0x02, 0x07, 0x03, 0xDF, 0x01, 0x26, 0x86, 0xA8, 0x43, 0x0C, 0x0C, 0x4B, 0x32, 0x18, 0x18,
    0x2E, 0xC8, 0x32, 0x30, 0x34, 0x70, 0x31, 0x00, 0x00, 0xA7, 0xEA, 0x08, 0x6C, 0x78, 0x9C, 0x5B,
    0xCA, 0x60, 0xC0, 0xC7, 0xF0, 0x80, 0xF1, 0x21, 0x43, 0x83, 0x1F, 0xC3, 0x61, 0x86, 0x03, 0xCC,
    0x17, 0xA6, 0x31, 0xB4, 0x33, 0x14, 0x70, 0x6C, 0xBA, 0xC0, 0x60, 0xCD, 0xA0, 0xC0, 0x93, 0xBE,
    0x81, 0x99, 0x8F, 0x81, 0x81, 0x57, 0x26, 0xC0, 0x83, 0x8B, 0x81, 0x21, 0x93, 0x47, 0xA0, 0x87,
    0x95, 0x81, 0xE1, 0x29, 0x3B, 0xC3, 0x6D, 0x46, 0x06, 0x86, 0x0F, 0x4C, 0x0C, 0xC7, 0x18, 0x18,
    0x00, 0x32, 0x80, 0x0F, 0xD1, 0x78, 0x9C, 0x7B, 0xC4, 0xC8, 0x10, 0x53, 0xC0, 0x55, 0xC0, 0xC5,
    0x10, 0x73, 0x89, 0x91, 0xE1, 0x92, 0x0F, 0x03, 0xC3, 0x04, 0x5E, 0x06, 0x86, 0xCB, 0xD9, 0x0C,
    0x0C, 0xB6, 0x0F, 0x99, 0x26, 0x70, 0x06, 0xF0, 0x5C, 0x61, 0x60, 0xE8, 0x02, 0x00, 0xB5, 0xEB,
    0x09, 0xCF, 0x78, 0x9C, 0xEB, 0x60, 0x60, 0x58, 0xF6, 0x88, 0x81, 0xC1, 0x67, 0x03, 0xAB, 0x02,
    0x6F, 0x00, 0x77, 0x03, 0x3B, 0x83, 0xDC, 0x05, 0x46, 0x86, 0x8A, 0xCD, 0x0C, 0x0C, 0x17, 0x23,
    0x19, 0x18, 0x36, 0xF0, 0x31, 0x30, 0x14, 0x70, 0x32, 0x30, 0x1C, 0x60, 0x66, 0x60, 0xD8, 0xCE,
    0xC0, 0xF0, 0x59, 0x86, 0x81, 0x01, 0x00, 0x27, 0x78, 0x0B, 0x25, 0x78, 0x9C, 0xFB, 0xF8, 0xFF,
    0x7F, 0x3E, 0x03, 0x83, 0x81, 0x2C, 0x03, 0xC3, 0x45, 0x66, 0x06, 0x86, 0x6C, 0x06, 0x86, 0x06,
    0x2E, 0x06, 0x86, 0x2B, 0x0C, 0x0C, 0x02, 0xBA, 0x0C, 0x0C, 0x07, 0x58, 0x19, 0x18, 0xBE, 0xFC,
    0xFF, 0x7F, 0x1E, 0x00, 0xC5, 0xBE, 0x0B, 0x0C, 0x78, 0x9C, 0x63, 0x10, 0xF0, 0x62, 0x38, 0xC0,
    0xC2, 0xB0, 0x85, 0x81, 0xA1, 0x9D, 0x81, 0xA1, 0x02, 0x8C, 0x32, 0x19, 0x0C, 0xE4, 0x18, 0xBE,
    0xB3, 0x31, 0x18, 0xE8, 0x81, 0xD8, 0x50, 0xC1, 0x65, 0x0C, 0x0C, 0x17, 0x98, 0x19, 0x14, 0xBC,
    0x00, 0xD2, 0x20, 0x08, 0x98, 0x78, 0x9C, 0x8B, 0x88, 0x40, 0x06, 0x00, 0x24, 0x26, 0x04, 0xD1,
    0x78, 0x9C, 0xCB, 0x64, 0x60, 0x58, 0xC0, 0xC6, 0xA0, 0xC0, 0xC7, 0xC0, 0x20, 0xC7, 0xC0, 0xA0,
    0xC7, 0xC0, 0xA0, 0xCB, 0xC0, 0x60, 0xC3, 0xC0, 0xB0, 0x9D, 0x91, 0x61, 0x03, 0x3F, 0xC3, 0x72,
    0x46, 0x10, 0x57, 0x0F, 0x2C, 0xC5, 0xCF, 0xD0, 0xC0, 0xC1, 0x50, 0xC9, 0xC0, 0x00, 0x00, 0x8C,
    0x6E, 0x05, 0x9B, 0x78, 0x9C, 0x5B, 0x70, 0x9F, 0x95, 0xC1, 0xAD, 0xC3, 0x60, 0xAE, 0xA2, 0xAE,
    0x24, 0xC3, 0x84, 0x77, 0xAC, 0x00, 0x2A, 0xCF, 0x05, 0x0A,
};
const GFXglyph Roboto8Glyphs[] = {
    { 0, 0, 4, 0, 0, 8, 0 }, //  
    { 2, 12, 4, 1, 12, 16, 8 }, // !
    { 3, 4, 5, 1, 13, 16, 24 }, // "
    { 10, 12, 10, 0, 12, 64, 40 }, // #
    { 9, 16, 9, 0, 14, 73, 104 }, // $
    { 12, 12, 13, 0, 12, 73, 177 }, // %
    { 11, 12, 10, 0, 12, 74, 250 }, // &
    { 2, 4, 3, 0, 13, 12, 324 }, // '
    { 5, 18, 5, 1, 14, 50, 336 }, // (
    { 5, 18, 6, 0, 14, 52, 386 }, // )
    { 7, 7, 7, 0, 12, 37, 438 }, // *
    { 9, 9, 10, 0, 10, 25, 475 }, // +
    { 3, 5, 3, 0, 2, 18, 500 }, // ,
    { 5, 1, 5, 0, 6, 11, 518 }, // -
    { 2, 2, 4, 1, 2, 10, 529 }, // .
    { 7, 13, 7, 0, 12, 54, 539 }, // /
    { 8, 12, 9, 1, 12, 38, 593 }, // 0
    { 5, 12, 9, 1, 12, 21, 631 }, // 1
    { 9, 12, 9, 0, 12, 57, 652 }, // 2
    { 9, 12, 9, 0, 12, 66, 709 }, // 3
    { 10, 12, 9, 0, 12, 51, 775 }, // 4
    { 8, 12, 9, 1, 12, 50, 826 }, // 5
    { 8, 12, 9, 1, 12, 56, 876 }, // 6
    { 9, 12, 9, 0, 12, 51, 932 }, // 7
    { 9, 12, 9, 0, 12, 65, 983 }, // 8
    { 9, 12, 9, 0, 12, 65, 1048 }, // 9
    { 2, 10, 4, 1, 10, 14, 1113 }, // :
    { 3, 13, 3, 0, 10, 24, 1127 }, // ;
    { 8, 7, 9, 0, 9, 32, 1151 }, // <
    { 8, 4, 9, 1, 7, 17, 1183 }, // =
    { 8, 7, 9, 1, 9, 30, 1200 }, // >
    { 7, 12, 8, 0, 12, 50, 1230 }, // ?
    { 15, 16, 16, 0, 12, 120, 1280 }, // @
    { 11, 12, 11, 0, 12, 65, 1400 }, // A
    { 9, 12, 10, 1, 12, 52, 1465 }, // B
    { 10, 12, 11, 1, 12, 55, 1517 }, // C
    { 10, 12, 11, 1, 12, 40, 1572 }, // D
    { 9, 12, 10, 1, 12, 29, 1612 }, // E
    { 9, 12, 10, 1, 12, 27, 1641 }, // F
    { 10, 12, 12, 1, 12, 58, 1668 }, // G
    { 10, 12, 12, 1, 12, 25, 1726 }, // H
    { 2, 12, 5, 1, 12, 11, 1751 }, // I
    { 8, 12, 9, 0, 12, 31, 1762 }, // J
    { 10, 12, 11, 1, 12, 59, 1793 }, // K
    { 8, 12, 9, 1, 12, 19, 1852 }, // L
    { 13, 12, 15, 1, 12, 78, 1871 }, // M
    { 10, 12, 12, 1, 12, 51, 1949 }, // N
    { 10, 12, 12, 1, 12, 53, 2000 }, // O
    { 9, 12, 10, 1, 12, 41, 2053 }, // P
    { 10, 14, 12, 1, 12, 60, 2094 }, // Q
    { 10, 12, 11, 1, 12, 54, 2154 }, // R
    { 10, 12, 10, 0, 12, 64, 2208 }, // S
    { 10, 12, 10, 0, 12, 20, 2272 }, // T
    { 9, 12, 11, 1, 12, 36, 2292 }, // U
    { 11, 12, 10, 0, 12, 71, 2328 }, // V
    { 15, 12, 15, 0, 12, 102, 2399 }, // W
    { 10, 12, 10, 0, 12, 65, 2501 }, // X
    { 10, 12, 10, 0, 12, 49, 2566 }, // Y
    { 10, 12, 10, 0, 12, 54, 2615 }, // Z
    { 4, 17, 4, 1, 14, 16, 2669 }, // [
    { 7, 13, 7, 0, 12, 47, 2685 }, // <backslash>
    { 3, 17, 4, 0, 14, 15, 2732 }, // ]
    { 7, 6, 7, 0, 12, 32, 2747 }, // ^
    { 8, 1, 7, 0, 0, 12, 2779 }, // _
    { 4, 2, 5, 0, 12, 12, 2791 }, // `
    { 9, 9, 9, 0, 9, 50, 2803 }, // a
    { 8, 13, 9, 1, 13, 44, 2853 }, // b
    { 9, 9, 9, 0, 9, 49, 2897 }, // c
    { 9, 13, 9, 0, 13, 49, 2946 }, // d
    { 9, 9, 9, 0, 9, 52, 2995 }, // e
    { 6, 13, 6, 0, 13, 27, 3047 }, // f
    { 9, 12, 9, 0, 9, 61, 3074 }, // g
    { 8, 13, 9, 1, 13, 33, 3135 }, // h
    { 2, 13, 4, 1, 13, 14, 3168 }, // i
    { 4, 16, 4, -1, 13, 21, 3182 }, // j
    { 8, 13, 8, 1, 13, 48, 3203 }, // k
    { 2, 13, 4, 1, 13, 11, 3251 }, // l
    { 13, 9, 15, 1, 9, 39, 3262 }, // m
    { 8, 9, 9, 1, 9, 28, 3301 }, // n
    { 9, 9, 10, 0, 9, 43, 3329 }, // o
    { 8, 12, 9, 1, 9, 43, 3372 }, // p
    { 9, 12, 9, 0, 9, 50, 3415 }, // q
    { 5, 9, 6, 1, 9, 20, 3465 }, // r
    { 8, 9, 9, 0, 9, 45, 3485 }, // s
    { 5, 11, 5, 0, 11, 27, 3530 }, // t
    { 8, 9, 9, 1, 9, 27, 3557 }, // u
    { 8, 9, 8, 0, 9, 45, 3584 }, // v
    { 13, 9, 13, 0, 9, 72, 3629 }, // w
    { 8, 9, 8, 0, 9, 45, 3701 }, // x
    { 8, 12, 8, 0, 9, 57, 3746 }, // y
    { 8, 9, 8, 0, 9, 45, 3803 }, // z
    { 6, 16, 6, 0, 13, 45, 3848 }, // {
    { 2, 14, 4, 1, 12, 11, 3893 }, // |
    { 6, 16, 6, 0, 13, 51, 3904 }, // }
    { 10, 3, 12, 1, 7, 23, 3955 }, // ~
};
const UnicodeInterval Roboto8Intervals[] = {
    { 0x20, 0x7E, 0x0 },
};
const GFXfont Roboto8 = {
    (uint8_t*)Roboto8Bitmaps,
    (GFXglyph*)Roboto8Glyphs,
    (UnicodeInterval*)Roboto8Intervals,
    1,
    1,
    20,
    16,
    -5,
};
