#ifndef LEVELS_H
#define LEVELS_H

#include <Arduino.h>
#include "globals.h"
#include "enemies.h"
//#include "Point.h"
#include "player.h"

//#define LEVEL_WIDTH 384    // 24 * 16
//#define LEVEL_HEIGHT 384   // 24 * 16
//#define LEVEL_CELLSIZE 16
//#define LEVEL_WIDTH_CELLS 24
//#define LEVEL_HEIGHT_CELLS 24
//#define LEVEL_CELL_BYTES (LEVEL_WIDTH_CELLS * LEVEL_HEIGHT_CELLS) >> 3
//#define LEVEL_ARRAY_SIZE 576


//char gameGrid[LEVEL_ARRAY_SIZE]; // grid with cell information
// upper byte tile xxxx ____
// LSB solid ____ ___x

const uint8_t level1 [] PROGMEM = {
// Tiles
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
0xAF, 0xFE, 0x0F, 0x0F, 0xFE, 0x1D, 0x0F, 0x00, 0xC0, 
0x00, 0x00, 0xC0, 0x00, 0x00, 0xF0, 0x00, 0x00, 0xF8, 
0xF8, 0x55, 0xFF, 0xF0, 0x00, 0x06, 0x03, 0x00, 0x00, 
0x03, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0F, 0xFC, 0x01, 
0x1F, 0xFE, 0x0F, 0x18, 0x06, 0x0E, 0x00, 0x00, 0x1C, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x60, 0xC0, 
0x80, 0x61, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// Objects
0x05,0x41,0x54,0xC8,0x54,0x14,0x53,0x08,0x53,0x05,0x51,0x8D,
0x30,0xC7,0x03,0x30,0xC5,0x03,0x60,0x82,0x10,0x80,0x50,0x06,
// EoL
0xFF
};

const uint8_t level2 [] PROGMEM = {
// Tiles
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x0F, 0xFF, 0x07, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0x39, 
0x00, 0x7C, 0x30, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xC0, 0x00, 0x7F, 0xFE, 0xFC, 0xFF, 0xFF, 
0xFC, 0x80, 0x01, 0x0C, 0x00, 0x00, 0x0C, 0x00, 0x00, 
0x0C, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x0C, 0x00, 0xF0, 
0x0C, 0x00, 0xF0, 0x0C, 0x00, 0xF0, 0x00, 0x00, 0xF0, 
0x00, 0x00, 0xF0, 0x3F, 0x3E, 0xFC, 0x7F, 0xBE, 0xFD, 
// Objects
0x35,0xD0,0x10,0x35,0xCF,0x0F,0x35,0xC6,0x0A,0x35,0x81,0x0A,0x54,0x4B,0x14,0x16,
0x53,0x86,0x43,0x46,0x53,0x13,0x52,0xC0,0x42,0x90,0x42,0x8F,
0x62,0x4F,0x22,0x4D,0x22,0x49,0x51,0x57,0x20,0xC5,0x40,0x90,
0x00,0x81,0x50,0x46,
// EoL
0xFF
};

const uint8_t level3 [] PROGMEM = {
  // Tiles
  0x60, 0xFE, 0xE7, 0x60, 0xFE, 0xE7, 0x61, 0x06, 0x00,
  0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0xE0, 0xCF, 0x1F,
  0xE0, 0xCF, 0x8F, 0x74, 0x84, 0x80, 0x60, 0x00, 0xC0,
  0x60, 0x00, 0xC0, 0xE0, 0xFF, 0xCF, 0xE0, 0xFF, 0xCF,
  0x65, 0x00, 0x00, 0x60, 0x00, 0x00, 0x60, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x60, 0x00, 0x00, 0x74, 0x60, 0xF8,
  0x60, 0x70, 0xF8, 0x60, 0x78, 0x00, 0x00, 0x7C, 0x00,
  0x00, 0x7E, 0x00, 0xFF, 0x7F, 0xF8, 0xFF, 0xFF, 0xF8,
  // Objects
  0x35, 0xCF, 0x06, 0x35, 0x80, 0x05, 0x25, 0x44, 0x54, 0xD6, 0x34, 0x44, 0x06, 0x04, 0x16,
  0x44, 0x02, 0x53, 0x91, 0x53, 0x82, 0x33, 0x00, 0x08, 0x42, 0xC2, 0x22, 0x51,
  0x42, 0x4D, 0x42, 0x4C, 0x52, 0x42, 0x61, 0xD1, 0x51, 0xC8, 0x31, 0xC4, 0x07,
  0x41, 0x82, 0x11, 0x11, 0x21, 0x08, 0x40, 0xC0, 0x50, 0x40,
  // EoL
  0xFF
};

const uint8_t level4 [] PROGMEM = {
// Tiles
0xC0, 0xC1, 0xFF, 0xC0, 0xCD, 0xFF, 0xE0, 0xCD, 0x00, 
0xF7, 0xCD, 0x00, 0x87, 0xCD, 0x00, 0xC0, 0xCD, 0x03, 
0xFC, 0xDD, 0x03, 0xFC, 0xCD, 0x0F, 0x0C, 0xCC, 0x8F, 
0x0C, 0xCC, 0x80, 0x0C, 0xCC, 0xC0, 0x8C, 0xCF, 0xC0, 
0x8C, 0xCF, 0xF0, 0x8C, 0xEF, 0xF1, 0x8C, 0xCF, 0x01, 
0x8C, 0xCF, 0x03, 0x8C, 0xCF, 0x03, 0x9C, 0xCF, 0x0F, 
0x8C, 0xCF, 0x8F, 0x8C, 0x0F, 0x80, 0x80, 0x0F, 0xC0, 
0x80, 0x0F, 0xC0, 0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0xF3, 
// Objects
0x35,0x86,0x06,0x45,0x4C,0x34,0x44,0x08,0x24,0x12,0x43,0xC6,0x43,0x0D,
0x22,0xD5,0x52,0xCD,0x32,0xC9,0x0A,0x52,0x52,0x52,0x44,0x42,0x04,
0x21,0x92,0x41,0x4C,0x11,0x10,0x51,0x0C,0x51,0x06,0x50,0xC3,
0x60,0x96,0x00,0x81,
// EoL
0xFF
};

const uint8_t level5 [] PROGMEM = {
// Tiles
0x00, 0x18, 0xC0, 0x00, 0x18, 0xC0, 0x0E, 0x1F, 0xF0, 
0x9F, 0x07, 0xE1, 0xFF, 0x07, 0x80, 0xFF, 0x3F, 0x04, 
0xFF, 0x3F, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xFE, 
0xFF, 0x87, 0xFF, 0xFF, 0x87, 0x01, 0x00, 0x06, 0x00, 
0x00, 0x06, 0x00, 0x10, 0x06, 0x78, 0x00, 0xFE, 0x7F, 
0x82, 0xF8, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x10, 0xCF, 0x1C, 0x10, 0xCF, 0x9C, 
// Objects
0x35,0xD7,0x0A,0x35,0xC4,0x09,0x35,0x84,0x08,0x54,0xC4,0x34,0x4B,0x08,0x44,0x47,
0x44,0x41,0x53,0xC7,0x53,0xC1,0x02,0xC1,0x52,0x4D,0x61,0x0C,
0x40,0xD1,0x50,0x8E,0x10,0x42,0x50,0x0F,0x40,0x0D,
// EoL
0xFF
};

const uint8_t level6 [] PROGMEM = {
// Tiles
0x01, 0x67, 0x00, 0xFF, 0x61, 0x00, 0x01, 0xE0, 0x1F, 
0x30, 0xE6, 0x3F, 0x30, 0x06, 0x60, 0x78, 0x06, 0x00, 
0xFF, 0xE7, 0xFF, 0xFF, 0xE7, 0xFF, 0x03, 0xE6, 0x00, 
0x01, 0x66, 0x00, 0xE0, 0x67, 0xF8, 0xF0, 0x67, 0xFE, 
0x1C, 0x00, 0xFF, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xFF, 0xE7, 0x3F, 0xFF, 0xE7, 0x3F, 0x00, 0x60, 0x00, 
0x00, 0x60, 0x00, 0x00, 0x60, 0xFE, 0x00, 0x60, 0xFE, 
0x00, 0x60, 0xC0, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 
// Objects
0x35,0xCC,0x17,0x35,0xCB,0x17,0x35,0x8F,0x0D,0x45,0x8C,0x45,0x8B,0x65,0x55,
0x25,0x52,0x05,0x42,0x34,0xD6,0x05,0x54,0xC6,0x44,0x4F,0x33,0xC0,0x05,
0x23,0x92,0x23,0x86,0x42,0xD0,0x22,0xC3,0x42,0x80,0x52,0x16,
0x52,0x07,0x31,0x88,0x04,0x21,0x52,0x11,0x41,0x51,0x11,0x20,0x84,
0x50,0x12,0x50,0x02,
// EoL
0xFF
};

const uint8_t level7 [] PROGMEM = {
// Tiles
0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 
0x07, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0x1F, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xF8, 0xE1, 0xFF, 0xF8, 0xFF, 0xFF, 0x00, 0x1E, 0x00, 
0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x18, 0x18, 
0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC1, 0x00, 
0xC0, 0xC1, 0x01, 0xFF, 0x80, 0xFF, 0xFF, 0x08, 0xFF, 
// Objects
0x35,0xCB,0x06,0x35,0x96,0x08,0x55,0x8B,0x05,0x43,0x15,0x41,0x44,0x4C,
0x44,0x4A,0x33,0xC1,0x06,0x23,0x8E,0x53,0x8D,0x23,0x8A,0x23,0x88,
0x52,0xD7,0x32,0x56,0x05,0x22,0x4C,0x22,0x49,0x42,0x0D,0x42,0x08,
0x41,0x8E,0x51,0x8D,0x41,0x8A,0x50,0x8E,0x50,0x87,0x60,0x01,
// EoL
0xFF
};

const uint8_t level8 [] PROGMEM = {
  // Tiles
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x83, 0xC1, 0x07, 0x00, 0x00, 0x03, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x01, 0x38, 0x00, 0x01, 0x38, 0x00,
  0x19, 0x7C, 0x30, 0x3D, 0xFE, 0x78, 0x3D, 0xFE, 0x78,
  0x19, 0x38, 0x30, 0x3D, 0xEE, 0x78, 0x3D, 0xFE, 0x78,
  0x19, 0x38, 0x30, 0x3D, 0xEE, 0x78, 0x3D, 0xFE, 0x78,
  0x19, 0x38, 0x30, 0x3D, 0x7C, 0x78, 0x7D, 0x7C, 0x7C,
  // Objects
  0x35, 0xD2, 0x14, 0x35, 0xC6, 0x14, 0x55, 0x53, 0x55, 0x45, 0x54, 0x8E, 0x54, 0x8A,
  0x53, 0xCE, 0x53, 0xCA, 0x33, 0x4C, 0x0A, 0x62, 0x4C, 0x10, 0x97, 0x20, 0x90,
  0x20, 0x88, 0x00, 0x81,
  // EoL
  0xFF
};

const uint8_t level9 [] PROGMEM = {
// Tiles
0x00, 0x00, 0x00, 0x82, 0x00, 0x03, 0x00, 0x00, 0x03, 
0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
// Objects
0x35,0x8C,0x16,0x35,0x8B,0x16,0x15,0x55,0x05,0x42,0x54,0x0B,0x52,0xC3,
0x52,0x92,0x52,0x0C,0x41,0xC8,0x41,0xC6,0x41,0x97,0x41,0x87,
0x41,0x40,0x50,0x95,0x20,0x10,0x50,0x0B,0x40,0x07,0x60,0x01,
// EoL
0xFF
};

const uint8_t level10 [] PROGMEM = {
  // Tiles
  0x00, 0x3C, 0x30, 0x00, 0x1C, 0xE0, 0x00, 0x0C, 0xC0,
  0x0F, 0x0C, 0xC0, 0x0F, 0x0C, 0x00, 0x0C, 0xAC, 0xE1,
  0x0C, 0xCC, 0x01, 0x0E, 0x8C, 0x01, 0x0E, 0x9C, 0x05,
  0x0C, 0x8C, 0x01, 0x0C, 0x8C, 0x01, 0x0C, 0x8C, 0x11,
  0x0C, 0x80, 0x01, 0x0C, 0xFC, 0x01, 0x0C, 0xFC, 0x41,
  0xFC, 0xFF, 0x01, 0xFC, 0xFF, 0x01, 0x00, 0x80, 0x11,
  0x07, 0x80, 0x01, 0x07, 0x80, 0x05, 0x07, 0x80, 0xC1,
  0x07, 0x00, 0xD0, 0x07, 0x00, 0xC0, 0xD7, 0xA9, 0xCA,
  // Objects
  0x35, 0xD3, 0x15, 0x35, 0xC4, 0x05, 0x54, 0xD7, 0x54, 0x8C, 0x54, 0x88, 0x34, 0x80, 0x0B,
  0x23, 0x89, 0x23, 0x88, 0x23, 0x87, 0x23, 0x86, 0x23, 0x85, 0x23, 0x84,
  0x33, 0x4E, 0x0C, 0x33, 0x4D, 0x0C, 0x33, 0x4C, 0x0B, 0x53, 0x05, 0x42, 0x4C, 0x41, 0xCE,
  0x41, 0x8D, 0x11, 0x81, 0x61, 0x17, 0x40, 0x8C, 0x00, 0x81, 0x40, 0x4D,
  0x50, 0x17, 0x50, 0x16,
  // EoL
  0xFF
};

const uint8_t level11 [] PROGMEM = {
// Tiles
0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x07, 0x00, 0x00, 0x07, 0x30, 0x00, 0x70, 0xF0, 0x03, 
0x00, 0xC0, 0x07, 0x00, 0xC0, 0x87, 0x00, 0x00, 0xC0, 
0x00, 0x00, 0x80, 0x00, 0x80, 0x0D, 0x00, 0xF0, 0x1D, 
0x00, 0x70, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0xC0, 
0x00, 0x80, 0xF1, 0x00, 0x80, 0xF1, 0x00, 0xB0, 0x01, 
0x00, 0xB0, 0x01, 0x00, 0x86, 0x01, 0x00, 0x86, 0x81, 
0x00, 0x80, 0xC1, 0x4F, 0x80, 0xE1, 0x0F, 0x80, 0xE3, 
// Objects
0x35,0xD1,0x06,0x35,0x86,0x03,0x25,0x46,0x05,0x41,0x34,0xC9,0x03,0x24,0x89,
0x54,0x86,0x54,0x57,0x62,0x91,0x52,0x4D,0x51,0xD4,0x31,0x46,0x05,
0x31,0x45,0x05,0x31,0x44,0x05,0x21,0x06,0x21,0x05,0x21,0x04,0x50,0x8A,
0x50,0x85,0x10,0x81,0x40,0x46,0x40,0x45,0x40,0x44,
// EoL
0xFF
};

const uint8_t level12 [] PROGMEM = {
// Tiles
0xE0, 0x03, 0x00, 0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 
0x07, 0xD8, 0xF6, 0x07, 0xD8, 0xF6, 0x00, 0x18, 0xF0, 
0xE0, 0x1F, 0xF0, 0xF8, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 
0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 0xC7, 0xC0, 0x21, 
0xC7, 0x87, 0x03, 0xC0, 0x07, 0x07, 0xC0, 0x00, 0x0E, 
0xF8, 0x00, 0x0C, 0xF8, 0x00, 0xC0, 0x00, 0x00, 0xC0, 
0x00, 0x00, 0x60, 0x07, 0x80, 0x60, 0x07, 0x04, 0x00, 
0x07, 0x00, 0x00, 0xFF, 0x01, 0x80, 0xFF, 0x03, 0xC1, 
// Objects
0x35,0x84,0x0E,0x34,0xC1,0x0E,0x54,0x97,0x54,0x4C,0x12,0xC9,0x52,0x56,
0x31,0xD0,0x04,0x21,0x92,0x21,0x90,0x21,0x8E,0x31,0x8A,0x05,0x31,0x88,0x04,
0x31,0x86,0x04,0x51,0x50,0x41,0x48,0x41,0x46,0x50,0xCA,0x50,0xC7,
0x60,0x96,0x40,0x8B,0x40,0x88,0x40,0x86,0x00,0x81,0x40,0x0A,
// EoL
0xFF
};

const uint8_t level13 [] PROGMEM = {
// Tiles
0x00, 0x00, 0x70, 0x00, 0x00, 0xF0, 0x00, 0x1E, 0xF0, 
0x00, 0x3F, 0xF0, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 
0x00, 0xFF, 0x07, 0x02, 0xFF, 0x03, 0x88, 0xFF, 0x31, 
0x80, 0xFF, 0x38, 0x80, 0x7F, 0x8C, 0x80, 0x3F, 0x86, 
0x80, 0x1F, 0xC3, 0xFC, 0x8F, 0xC1, 0xFC, 0xC7, 0xE0, 
0x00, 0x60, 0xE0, 0x00, 0x30, 0xF0, 0x00, 0x18, 0xF0, 
0xFE, 0x0F, 0xF8, 0xFE, 0x07, 0xF8, 0x00, 0x00, 0xFC, 
0x00, 0x00, 0xFC, 0x00, 0xE0, 0xFF, 0x01, 0xF0, 0xFF, 
// Objects
0x35,0xCC,0x0A,0x35,0xC0,0x0A,0x05,0x4E,0x55,0x48,0x55,0x45,0x24,0xD2,
0x24,0x53,0x23,0xD4,0x43,0xCC,0x23,0x55,0x43,0x4C,0x33,0x46,0x07,
0x43,0x0F,0x22,0xD6,0x42,0xD0,0x22,0x57,0x42,0x52,0x51,0xD5,
0x41,0xC3,0x31,0xC1,0x06,0x51,0x96,0x51,0x94,0x61,0x83,0x10,0xD1,
0x50,0x17,
// EoL
0xFF
};

const uint8_t level14 [] PROGMEM = {
// Tiles
0xC4, 0x00, 0x40, 0xC0, 0x00, 0x80, 0xC0, 0x00, 0x00, 
0xC8, 0x56, 0x15, 0x09, 0x06, 0x00, 0xFF, 0x07, 0x80, 
0xFE, 0x07, 0x91, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 
0x00, 0xE0, 0x00, 0x00, 0xC0, 0x00, 0x41, 0x82, 0x01, 
0x00, 0x93, 0x03, 0x04, 0x03, 0x03, 0x00, 0x03, 0x00, 
0x10, 0x47, 0x00, 0x00, 0x00, 0xC0, 0x04, 0x00, 0xD1, 
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 
0x03, 0x00, 0x00, 0x0B, 0xA2, 0xE4, 0x03, 0x00, 0xE0, 
// Objects
0x05,0x56,0x55,0x49,0x55,0x43,0x34,0x17,0x04,0x54,0x14,0x63,0x8A,
0x32,0xC0,0x0D,0x51,0x80,0x41,0x04,0x41,0x02,0x40,0xC5,0x40,0xC4,
0x40,0xC2,0x50,0x92,0x50,0x8E,0x10,0x17,0x40,0x01,
// EoL
0xFF
};

const uint8_t level15 [] PROGMEM = {
// Tiles
0x00, 0x02, 0x00, 0x01, 0x82, 0x01, 0x80, 0x82, 0x81, 
0x00, 0x82, 0x09, 0x11, 0x82, 0x03, 0x00, 0x82, 0x3F, 
0x02, 0x32, 0x7C, 0x00, 0x32, 0x00, 0x38, 0x3E, 0xFE, 
0x78, 0x00, 0xFF, 0x00, 0x80, 0x03, 0x00, 0x1F, 0x00, 
0x80, 0x3F, 0x00, 0x80, 0x31, 0x00, 0xC0, 0x60, 0x00, 
0xC0, 0x68, 0x00, 0xE0, 0xE0, 0x00, 0x7E, 0xC2, 0x1B, 
0x3E, 0x82, 0x1B, 0x30, 0x88, 0x01, 0x00, 0x08, 0x00, 
0x00, 0x20, 0x00, 0x30, 0x20, 0xC0, 0x79, 0x80, 0xC4, 
// Objects
0x35,0xD2,0x05,0x35,0xC0,0x05,0x25,0x92,0x45,0x80,0x55,0x45,0x45,0x10,
0x55,0x09,0x44,0xD1,0x63,0x4A,0x02,0x8A,0x11,0xCA,0x50,0x93,
0x50,0x57,0x50,0x47,0x20,0x10,0x20,0x0F,0x50,0x00,
// EoL
0xFF
};

const uint8_t level16 [] PROGMEM = {
// Tiles
0x02, 0x00, 0x00, 0x03, 0x00, 0x70, 0x00, 0x00, 0xFC, 
0x00, 0x00, 0xFE, 0xD4, 0x02, 0xFE, 0x00, 0x38, 0x00, 
0x01, 0x38, 0x00, 0x00, 0x30, 0x00, 0x24, 0x1D, 0x00, 
0x00, 0x1C, 0x00, 0x01, 0xD8, 0x20, 0x00, 0xD8, 0x00, 
0x04, 0xD8, 0x08, 0x00, 0xD8, 0x00, 0xA1, 0xC0, 0x02, 
0xF1, 0xC1, 0x00, 0xFF, 0xFF, 0x08, 0xFF, 0xFF, 0x00, 
0xC0, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x00, 0x00, 0x80, 0xFF, 0x27, 0xC9, 0xFF, 0x07, 0xC0, 
// Objects
0x35,0x88,0x04,0x35,0x86,0x04,0x55,0x53,0x55,0x50,0x55,0x4D,0x45,0x48,
0x45,0x47,0x45,0x46,0x05,0x42,0x44,0xC8,0x44,0xC7,0x44,0xC6,
0x23,0x86,0x62,0x09,0x51,0xCB,0x21,0xCA,0x21,0xC8,0x21,0xC5,
0x30,0xD7,0x05,0x20,0x91,0x50,0x8E,0x10,0x15,0x50,0x00,
// EoL
0xFF
};

const uint8_t level17 [] PROGMEM = {
  // Tiles
  0xE0, 0x01, 0x30, 0xE7, 0x01, 0x30, 0xC7, 0x01, 0x30,
  0xDF, 0xFF, 0x37, 0x9F, 0xFF, 0x37, 0xBF, 0x07, 0x30,
  0x3F, 0x00, 0x30, 0xFF, 0x50, 0x3C, 0xFF, 0xFF, 0x3F,
  0xFF, 0xFF, 0x23, 0x00, 0xE0, 0x20, 0x00, 0xE0, 0x34,
  0x40, 0x9E, 0x29, 0x0F, 0x9E, 0x21, 0x0F, 0x1E, 0x23,
  0x0F, 0x1E, 0x27, 0x0F, 0x1E, 0x26, 0xEF, 0x07, 0x28,
  0xEF, 0x07, 0x20, 0x0F, 0x66, 0x30, 0x0F, 0xE0, 0x31,
  0x1F, 0xF8, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  // Objects
  0x35, 0x44, 0x04, 0x45, 0x12, 0x25, 0x0C, 0x44, 0xD0, 0x44, 0x8E, 0x34, 0x48, 0x05,
  0x24, 0x06, 0x53, 0x97, 0x53, 0x86, 0x13, 0x01, 0x42, 0xD3, 0x62, 0xCB,
  0x22, 0xC6, 0x52, 0x94, 0x32, 0x13, 0x05, 0x51, 0x96, 0x41, 0x8E, 0x51, 0x8D,
  0x41, 0x8C, 0x21, 0x86, 0x21, 0x05, 0x30, 0xC9, 0x04, 0x20, 0x83, 0x50, 0x4E,
  0x00, 0x01,
  // EoL
  0xFF
};

const uint8_t level18 [] PROGMEM = {
// Tiles
0x00, 0x00, 0x70, 0x00, 0x00, 0x70, 0x7C, 0xFC, 0x7F, 
0x06, 0xFC, 0x0F, 0x02, 0x7E, 0x00, 0xE2, 0x7F, 0xE0, 
0xE2, 0x31, 0xF8, 0x7A, 0x00, 0xFE, 0x7A, 0x80, 0x07, 
0x7E, 0xFF, 0x03, 0x1E, 0xFF, 0x01, 0xDE, 0x81, 0x01, 
0xC6, 0x81, 0xE1, 0xF6, 0x19, 0xEC, 0xF6, 0x19, 0xEC, 
0xF6, 0x81, 0xED, 0xF6, 0x81, 0xED, 0xF6, 0x81, 0xED, 
0x86, 0xC1, 0xED, 0xBE, 0xC1, 0xED, 0xBE, 0x83, 0xE1, 
0x00, 0x80, 0xE1, 0xFF, 0x8F, 0xED, 0xFF, 0x8F, 0xFD, 
// Objects
0x35,0xD4,0x0A,0x35,0x80,0x13,0x25,0x52,0x35,0x09,0x07,0x64,0x4E,0x53,0xCC,
0x23,0x8F,0x23,0x12,0x23,0x0B,0x23,0x05,0x53,0x03,0x12,0xD6,
0x22,0x87,0x52,0x85,0x02,0x0A,0x52,0x02,0x41,0xCF,0x41,0x91,
0x31,0x57,0x05,0x41,0x53,0x41,0x15,0x51,0x11,0x51,0x0F,0x40,0x87,
0x40,0x4A,
// EoL
0xFF
};

const uint8_t level19 [] PROGMEM = {
// Tiles
0x30, 0x00, 0x38, 0x3F, 0x80, 0x39, 0x30, 0x80, 0x39, 
0x00, 0x80, 0x99, 0x07, 0x80, 0x99, 0x0F, 0x80, 0x59, 
0x2F, 0x82, 0x59, 0x00, 0x90, 0x19, 0x00, 0x90, 0x19, 
0x00, 0xC0, 0xB9, 0x00, 0xC0, 0xB9, 0x00, 0xE1, 0x39, 
0x08, 0x80, 0x39, 0x00, 0x80, 0x39, 0x03, 0x00, 0x58, 
0x03, 0x00, 0x58, 0xFF, 0xFF, 0x19, 0xFF, 0xFF, 0x19, 
0x00, 0x00, 0xB8, 0x00, 0x00, 0xB8, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x03, 0x00, 0xFC, 0x03, 0x00, 0xFC, 
// Objects
0x35,0x97,0x17,0x35,0x96,0x17,0x35,0x95,0x17,0x05,0x53,0x55,0x01,0x44,0x16,
0x54,0x15,0x43,0x95,0x43,0x56,0x42,0xD7,0x22,0x8D,0x52,0x83,
0x52,0x48,0x22,0x15,0x51,0xD7,0x41,0xD6,0x21,0x49,0x21,0x45,
0x21,0x03,0x40,0xD5,0x10,0xC1,0x50,0x51,0x20,0x0F,0x60,0x01,
// EoL
0xFF
};

const uint8_t level20 [] PROGMEM = {
// Tiles
0x81, 0xFF, 0x7F, 0x80, 0xFF, 0x7F, 0x98, 0xC1, 0x60, 
0xFE, 0xC1, 0x60, 0xFE, 0xC1, 0x62, 0x86, 0xC3, 0x66, 
0x84, 0xC1, 0x62, 0xB1, 0xE1, 0x72, 0x31, 0xE0, 0x62, 
0xFB, 0xFF, 0x66, 0xFB, 0x3F, 0x62, 0x10, 0xA2, 0x73, 
0x10, 0x22, 0x63, 0x1E, 0x63, 0x67, 0x3A, 0x2E, 0x63, 
0x02, 0xAE, 0x73, 0xFA, 0x27, 0x63, 0xF8, 0x77, 0x67, 
0xF8, 0x37, 0x63, 0x3D, 0xB6, 0x73, 0x30, 0x36, 0x03, 
0x00, 0x76, 0x07, 0xFF, 0x07, 0x03, 0xFF, 0xFF, 0xAB, 
// Objects
0x35,0xCB,0x06,0x35,0x83,0x16,0x35,0x82,0x16,0x35,0x81,0x16,0x35,0x80,0x16,0x55,0x55,
0x05,0x47,0x24,0x82,0x34,0x4C,0x03,0x44,0x41,0x53,0x93,0x43,0x82,
0x13,0x4A,0x23,0x45,0x53,0x08,0x52,0xC3,0x42,0xC0,0x22,0x03,
0x22,0x01,0x41,0xC2,0x51,0x93,0x51,0x4B,0x41,0x43,0x21,0x09,
0x60,0x8D,0x40,0x40,
// EoL
0xFF
};

const uint8_t * levels[] = {
  level1, level2, level3, level4, level5, level6, level7, level8,
  level9, level10, level11, level12, level13, level14, level15,
  level16, level17, level18, level19, level20
};


// Cell based grid checking
bool gridGetSolid(int8_t x, int8_t y) {
  if (x < 0 || x >= LEVEL_WIDTH_CELLS)
    return 1;

  if (y < 0 || y >= LEVEL_HEIGHT_CELLS)
    return 0;

  const uint8_t *lvl = levels[level];
  byte b = pgm_read_byte(lvl + (x >> 3) + (y * (LEVEL_WIDTH_CELLS >> 3)));
  return ((b >> (x % 8)) & 0x01);
}

byte gridGetTile(int8_t x, int8_t y) {
  if (!gridGetSolid(x, y)) return 0;
  //if (x < 0 || x >= LEVEL_WIDTH || y < 0 || y >= LEVEL_HEIGHT || !gridGetSolid(x, y))
  //return 0;
  //return gameGrid[x + (y * LEVEL_WIDTH_CELLS)] >> 4;
  byte l, r, t, b, f, i;
  l = gridGetSolid(x - 1, y);
  t = gridGetSolid(x, y - 1);
  r = gridGetSolid(x + 1, y);
  b = gridGetSolid(x, y + 1);

  f = 0;
  f |= t << 3;
  f |= l << 2;
  f |= r << 1;
  f |= b;

  switch (f) {
    case 3: i = 1; break;
    case 7: i = 2; break;
    case 5: i = 3; break;
    case 11: i = 4; break;
    case 15: i = 5; break; // solid all around
    case 13: i = 6; break;
    case 10: i = 7; break;
    case 14: i = 8; break;
    case 12: i = 9; break;
    default: i = 10;
  }

  return i;
}


void levelLoad(const uint8_t *lvl) {
  byte i = 0;
  lvl += LEVEL_ARRAY_SIZE >> 3;

  byte b = pgm_read_byte(lvl);
  while (b != 0xFF)
  {
    byte id, x, y, h;
    id = pgm_read_byte(lvl + i) >> 4;
    y = ((pgm_read_byte(lvl + i) & 0x0F) << 2) | (pgm_read_byte(lvl + (++i)) >> 6);
    x = pgm_read_byte(lvl + i++) & 0x3F;
    switch ( id )
    {
      case 0:
        {
          // Start
          startPos.x = (int)x << (FIXED_POINT + 4);
          startPos.y = (int)y << (FIXED_POINT + 4);
          //kid.actualpos.x = (int)x << (FIXED_POINT + 4);
          //kid.actualpos.y = (int)y << (FIXED_POINT + 4);
          kid.actualpos = startPos;
        }
        break;
      case 1:
        {
          // Finish
          levelExit.x = x << 4;
          levelExit.y = y << 4;
        }
        break;
      case 2:
        {
          // Walker
          walkersCreate(vec2(x, y));
        }
        break;
      case 3:
        {
          // Fan
          fansCreate(vec2(x, y), pgm_read_byte(lvl + i++));
        }
        break;
      case 4:
        {
          // Spikes
          spikesCreate(vec2(x, y));
        }
        break;
      case 5:
        {
          // Coins
          coinsCreate(vec2(x, y));
        }
        break;
      case 6:
        {
          // Key
          keyCreate(vec2(x, y));
        }
        break;
      default:
        break;
    }

    b = pgm_read_byte(lvl + i);
  }
}

void drawGrid() {
  //Serial.println("Start of tile drawing");
  for ( int x = (cam.pos.x >> 4); x <= (cam.pos.x >> 4) + 8; ++x)
  {
    for ( int y = (cam.pos.y >> 4); y <= (cam.pos.y >> 4) + 4; ++y) {
      //if (x >= 0 && x < LEVEL_WIDTH
      //&& y >= 0 && y < LEVEL_HEIGHT)
      {
        /*int index = (i.y * LEVEL_WIDTH_CELLS) + i.x;
          i = i << 4;
          i -= cam.pos >> FIXED_POINT;*/
        //        Serial.print("Pos: ");
        //        Serial.print(x);
        //        Serial.print(", ");
        //        Serial.print(y);
        //        Serial.print(" Tile: ");
        //        Serial.print(gridGetTile(x, y));
        //        Serial.print("\n");
        sprites.drawSelfMasked((x << 4) - cam.pos.x, (y << 4) - cam.pos.y, tileSetAlternative, gridGetTile(x, y));
      }
    }
  }
  //sprites.drawPlusMask(levelExit.x - cam.pos.x, levelExit.y - cam.pos.y, sprDoor, walkerFrame);
  //byte frame = 0;
  //if (key.haveKey) frame = walkerFrame + 1;
  //sprites.drawPlusMask(levelExit.x - cam.pos.x, levelExit.y - cam.pos.y, sprDoor, (walkerFrame + 1) * (key.haveKey));
  int commonx = levelExit.x - cam.pos.x;
  int commony = levelExit.y - cam.pos.y;
  sprites.drawSelfMasked(commonx, commony, largeMask, 0);
  sprites.drawErase(commonx, commony, sprDoor, (walkerFrame + 1) * (key.haveKey));
  //Serial.println("End of tile drawing");
}

void kidHurt()
{
  if (kid.balloons == 1)
  {
    // dead
    gameState = STATE_GAME_OVER;
  }
  else
  {
    kid.balloons--;
    arduboy.audio.tone(300, 100);
    kid.isImune = true;
    kid.imuneTimer = 0;
  }
}

void checkCollisions()
{
  // Fall off earth
  if (kid.pos.y > LEVEL_HEIGHT)
  {
    kid.actualpos = startPos;
    kidHurt();
  }

  Rect playerRect = {.x = kid.pos.x + 2, .y = kid.pos.y + 2, .width = 8, .height = 12};
  Rect playerSuckRect = {.x = kid.pos.x + ((kid.direction ^ 1) * 16) - (kid.direction * 16), .y = kid.pos.y + 2, .width = 16, .height = 14};

  // Key
  Rect keyRect = {.x = key.pos.x, .y = key.pos.y, .width = 8, .height = 16};
  if (key.active && arduboy.collide(keyRect, playerRect))
  {
    key.active = false;
    key.haveKey = true;
    arduboy.audio.tone(420, 200);
  }

  // Level exit
  if (key.haveKey && arduboy.collide(levelExit, playerRect))
  {
    balloonsLeft = kid.balloons;
    scoreIsVisible = true;
    level++;
    gameState = STATE_GAME_NEXT_LEVEL;
  }

  // Enemies and objects
  for (byte i = 0; i < MAX_PER_TYPE; ++i)
  {
    // Coins
    if (coins[i].active)
    {
      Rect coinrect = {.x = coins[i].pos.x, .y = coins[i].pos.y, .width = 10, .height = 12};
      if (kid.isSucking && arduboy.collide(playerSuckRect, coinrect))
      {
        // Suck coin closer
        if (kid.direction)
          ++coins[i].pos.x;
        else
          --coins[i].pos.x;
      }
      else if (arduboy.collide(playerRect, coinrect))
      {
        // Collect coin
        coins[i].active = false;
        --coinsActive;
        ++coinsCollected;
        if (coinsActive == 0)
        {
          scorePlayer += 500;
          arduboy.audio.tone(400, 200);
        }
        else
        {
          scorePlayer += 200;
          arduboy.audio.tone(370, 200);
        }
      }
    }
    // Walkers
    // Getting Sucked In
    if (walkers[i].active)
    {
      Rect walkerrect = {.x = walkers[i].pos.x, .y = walkers[i].pos.y, .width = 8, .height = 8};
      if (kid.isSucking && arduboy.collide(playerSuckRect, walkerrect))
      {
        --walkers[i].HP;
        walkers[i].hurt = true;
        if (walkers[i].HP <= 0)
        {
          if (kid.direction)
          {
            ++walkers[i].pos.x;
            if (walkers[i].pos.x > kid.pos.x - 8)
            {
              walkers[i].active = false;
              if (kid.balloons < 3) ++kid.balloons;
              else scorePlayer += 100;
              scorePlayer += 50;
              arduboy.audio.tone(200, 100);
            }
          }
          else
          {
            --walkers[i].pos.x;
            if (walkers[i].pos.x < kid.pos.x + 16)
            {
              walkers[i].active = false;
              if (kid.balloons < 3) ++kid.balloons;
              else scorePlayer += 100;
              scorePlayer += 50;
              arduboy.audio.tone(200, 100);
            }
          }
        }
      }
      else
        walkers[i].hurt = false;

      // Hurt player
      if (walkers[i].HP > 0 && !kid.isImune && arduboy.collide(playerRect, walkerrect))
      {
        kidHurt();
        kid.speed.y = PLAYER_JUMP_VELOCITY;
        kid.speed.x = max(min((kid.pos.x - walkers[i].pos.x - 2), 3), -3) << FIXED_POINT;
      }
    }
    // Fans
    if (fans[i].active)
    {
      Rect fanrect = {.x = fans[i].pos.x, .y = fans[i].pos.y - (fans[i].height << 4),
                      .width = 16, .height = fans[i].height << 4
                     };
      if (kid.isBalloon && arduboy.collide(playerRect, fanrect))
      {
        kid.speed.y = min(kid.speed.y + FAN_POWER, MAX_YSPEED);
        if (arduboy.everyXFrames(3)) arduboy.audio.tone(330 + random(20), 30);
        //kid.actualpos.y -= FAN_POWER;
      }
    }

    // Spikes
    if (!kid.isImune && spikes[i].active && arduboy.collide(playerRect, spikes[i].pos))
    {
      kidHurt();
      if (kid.pos.y < spikes[i].pos.y) kid.speed.y = PLAYER_JUMP_VELOCITY;
    }
  }
}

void drawHUD()
{
  for (byte i = 0; i < 16; i++)
  {
    sprites.drawSelfMasked(i * 8, 0, smallMask, 0);
  }
  drawBalloonLives();
  drawNumbers(91, 0, FONT_SMALL, DATA_SCORE);
  drawCoinHUD();
  if (key.haveKey) sprites.drawErase(28, 0, elementsHUD, 13);
}
#endif
