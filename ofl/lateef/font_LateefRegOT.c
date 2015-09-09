#include "font_LateefRegOT.h"

static const unsigned char Lateef_8_data[] = {
0x00,0x00,0x0C,0x02,0xA4,0x0E,0xE0,0x04,0x64,0xCE,
0x70,0x08,0xC0,0x10,0xA6,0x7A,0x9E,0xA0,0x08,0xE3,
0xD0,0xCE,0x20,0x8A,0xE2,0x00,0x0C,0xC4,0x1C,0xA3,
0xC7,0x0B,0x8B,0x96,0x0C,0xC0,0x18,0x61,0x41,0x66,
0x92,0x3B,0x02,0x60,0xCA,0x60,0x04,0xE7,0xD3,0x26,
0x04,0xE7,0xD2,0x29,0x62,0x08,0xA3,0xD4,0x4D,0x32,
0xC4,0x08,0x84,0x56,0x11,0xE4,0x04,0x43,0xC9,0x30,
0x04,0x20,0x4D,0x80,0x02,0x24,0x0D,0x07,0x03,0xCC,
0x69,0x4C,0x08,0xC0,0x10,0x4D,0x99,0x70,0x04,0xC4,
0x12,0xE6,0x08,0xC0,0x10,0xCA,0x82,0x23,0xC0,0x06,
0xC0,0x10,0x94,0x4C,0x5C,0x08,0xC0,0x12,0x08,0xCA,
0x78,0x80,0x08,0xA0,0x11,0xE6,0x10,0xDC,0x08,0xC0,
0x10,0x26,0x43,0xD2,0x60,0x08,0xA0,0x11,0xF0,0x50,
0x80,0x06,0xC4,0x11,0x96,0x32,0xB0,0x08,0xC0,0x10,
0xD1,0x25,0x13,0x00,0x02,0x64,0x0D,0x10,0x02,0xA7,
0xC9,0x84,0x40,0x04,0xA4,0x10,0xCC,0x40,0x0A,0x40,
0x96,0x3E,0x04,0xA4,0x12,0x23,0x10,0x06,0xC0,0x10,
0xD4,0x65,0x00,0x0F,0x03,0xA0,0x38,0xC5,0x3E,0x2A,
0xAF,0x90,0x8F,0x00,0x0C,0xC0,0x18,0x40,0xC8,0x50,
0xD3,0x30,0x0A,0xA0,0x15,0xF2,0x4F,0x25,0xF0,0x0A,
0xC0,0x18,0x72,0x66,0x07,0x80,0x0C,0xA0,0x19,0xF4,
0x22,0x49,0xF0,0x0A,0xA0,0x15,0xE2,0x8E,0x21,0xF0,
0x08,0xA0,0x15,0xE5,0x39,0x18,0x0C,0xC0,0x18,0x71,
0x24,0x08,0xD1,0x1E,0x0C,0xA0,0x19,0xF9,0x23,0xC4,
0x9F,0x80,0x06,0xA0,0x0D,0xE5,0x38,0x06,0xA0,0x0C,
0xE5,0x30,0x0C,0xA0,0x19,0xB4,0x30,0x51,0xB8,0x0A,
0xA0,0x15,0xC8,0x41,0x2F,0x80,0x0E,0xA0,0x1D,0x8E,
0x2B,0x25,0x35,0x80,0x0C,0xA0,0x19,0x9A,0xA4,0xC8,
0x99,0x00,0x0C,0xC0,0x18,0x61,0x28,0x85,0x11,0xE0,
0x08,0xA0,0x15,0xE5,0x31,0x18,0x0D,0x03,0x98,0x61,
0x28,0x85,0x11,0x21,0x80,0xC0,0x0C,0xA0,0x19,0xE1,
0x43,0x05,0x1D,0x80,0x06,0xC4,0x15,0xD5,0x0D,0x5C,
0x0A,0xA0,0x15,0xF9,0x21,0xC0,0x0C,0xA0,0x19,0x9C,
0xA4,0x78,0x0C,0xA0,0x19,0x99,0x28,0x30,0x40,0x10,
0xA0,0x21,0xB6,0x4A,0x2E,0x0B,0x04,0x80,0x0C,0xA0,
0x19,0xD8,0xC0,0x87,0x19,0x80,0x0C,0xA0,0x19,0x98,
0xC8,0x20,0x60,0x0A,0xA0,0x15,0xF8,0x21,0x0F,0x80,
0x04,0xE7,0xD1,0xDC,0xC0,0x04,0xC0,0x0A,0xA8,0x40,
0x04,0xE7,0xD1,0xDA,0xC0,0x08,0xA8,0x20,0x86,0x54,
0x48,0x00,0x03,0xD0,0x04,0x41,0x0D,0x10,0x08,0x80,
0x11,0xCA,0x73,0xC0,0x08,0xC0,0x12,0x21,0x4D,0x4B,
0x80,0x06,0x80,0x10,0xE2,0x18,0x08,0xC0,0x10,0x23,
0x3C,0x49,0xC0,0x06,0x80,0x10,0xDD,0x0C,0x08,0xC0,
0x0C,0x45,0x74,0x23,0x80,0x08,0xC3,0x90,0xEA,0x86,
0x49,0x80,0x08,0xC0,0x12,0x21,0x4D,0x4B,0xC0,0x04,
0xA0,0x0A,0x16,0x58,0x06,0xFF,0x8A,0x09,0xC1,0x26,
0x08,0xC0,0x12,0x21,0x6E,0x53,0xC0,0x04,0xC0,0x08,
0xB9,0x58,0x0C,0x80,0x19,0x5B,0x54,0xAF,0x40,0x08,
0x80,0x11,0x4D,0x4B,0xC0,0x08,0x80,0x10,0xD1,0x26,
0x08,0xC3,0x91,0x4D,0x4A,0xA3,0x00,0x08,0xC3,0x90,
0xF1,0x27,0x08,0xC0,0x06,0x80,0x0D,0x59,0x18,0x06,
0x80,0x0D,0xD0,0xDC,0x04,0xA0,0x09,0x38,0x98,0x08,
0x80,0x11,0x71,0x27,0x08,0x80,0x11,0xB0,0xC4,0x0C,
0x80,0x19,0xE9,0x63,0xC5,0x00,0x08,0x80,0x11,0xE4,
0x32,0xC0,0x08,0xC3,0x91,0xB0,0xC2,0x22,0x00,0x08,
0x80,0x11,0xE2,0x23,0x80,0x05,0x23,0x4C,0xEC,0x40,
0x00,0x07,0x88,0x05,0x27,0x4E,0xA7,0x50,0x08,0x20,
0x95,0xE0,
};
/* font data size: 572 bytes */

static const unsigned char Lateef_8_index[] = {
0x00,0x00,0x30,0x1C,0x0B,0x04,0x81,0xA0,0x88,0x2A,
0x0B,0x83,0x20,0xDC,0x3D,0x10,0x84,0x61,0x28,0x4D,
0x14,0x85,0x81,0x70,0x63,0x1A,0x47,0x01,0xD8,0x7D,
0x20,0xC8,0x92,0x40,0x94,0x26,0x49,0xE2,0x88,0xA7,
0x2B,0x4B,0x83,0x00,0xC7,0x33,0x8D,0x53,0x70,0xE2,
0x3A,0x8F,0x23,0xDC,0xFC,0x40,0xD0,0xA4,0x49,0x1A,
0x48,0x92,0x84,0xC9,0x3A,0x50,0x14,0x65,0x31,0x53,
0x57,0x16,0x45,0xAD,0x72,0x5D,0xD7,0xC6,0x05,0x87,
0x62,0x98,0xE6,0x51,0x9B,0x68,0x1A,0x76,0xB1,0xB3,
0x6E,0x9C,0x17,0x19,0xCC,0x74,0xDD,0x87,0x7D,0xE5,
0x7A,0x9F,0x17,0xE1,0xFD,0x80,0xA0,0x78,0x32,0x11,
0x86,0x21,0xE8,0x96,0x2B,0x8C,0x23,0x38,0xE0,
};
/* font index size: 119 bytes */

const ILI9341_t3_font_t Lateef_8 = {
	Lateef_8_index,
	0,
	Lateef_8_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	15,
	5
};



static const unsigned char Lateef_9_data[] = {
0x00,0x00,0x0C,0x02,0xC4,0x0E,0xA2,0x04,0x45,0x12,
0x30,0x0A,0xC0,0x16,0x15,0x1F,0x8A,0x00,0x0B,0x03,
0xD4,0xC5,0x94,0x38,0x75,0x4E,0x10,0x0C,0xE4,0x20,
0x92,0xE5,0x6D,0xC2,0x9D,0x24,0x0E,0xC0,0x20,0x70,
0x50,0x6D,0xA9,0x31,0xCC,0x02,0x41,0x0A,0x20,0x05,
0x07,0xD5,0xE4,0x40,0x05,0x07,0xD2,0x2A,0x62,0x0A,
0xA3,0xD4,0x47,0xCC,0x5C,0x40,0x0A,0x84,0x58,0x47,
0xE0,0x80,0x02,0x67,0x8A,0x60,0x06,0x20,0x4D,0xC0,
0x02,0x24,0x11,0x07,0x43,0x8E,0x0D,0xA9,0x80,0x08,
0xC0,0x14,0xD5,0x26,0x06,0xC4,0x14,0x9A,0x53,0x80,
0x08,0xC0,0x14,0xE9,0x08,0x8A,0xF0,0x08,0xC4,0x15,
0xCA,0x20,0xC2,0xE0,0x0A,0xC0,0x14,0x23,0x92,0x7E,
0x04,0x08,0xC0,0x14,0xE8,0x32,0x42,0xE0,0x08,0xC0,
0x14,0x64,0x7C,0x49,0x80,0x08,0xC0,0x14,0xE9,0x0C,
0x11,0x00,0x08,0xC0,0x15,0xE9,0x34,0x4B,0xC0,0x08,
0xC0,0x14,0xD1,0x2F,0x13,0x00,0x02,0x84,0x11,0x82,
0x02,0xC7,0x8D,0x84,0xC0,0x06,0xC4,0x14,0x4A,0x21,
0x08,0x0C,0x40,0x9A,0x3F,0x06,0xC4,0x15,0x0A,0x09,
0x20,0x06,0xC0,0x11,0x96,0x09,0x28,0x13,0x23,0xA8,
0x3C,0x30,0x8B,0xD5,0x35,0x49,0x56,0x96,0xF2,0x08,
0x7C,0x0E,0xC0,0x1C,0x20,0x60,0x90,0x70,0x89,0x9C,
0x0C,0xC0,0x19,0xF9,0x13,0xD0,0x8B,0xF0,0x0C,0xC0,
0x1C,0xF2,0x28,0x81,0x19,0xC0,0x0C,0xC0,0x1D,0xF5,
0x22,0xF8,0x0C,0xC0,0x19,0xF1,0x23,0xC4,0x88,0xBE,
0x0A,0xC0,0x15,0xF2,0x4E,0x28,0x87,0x00,0x0E,0xC0,
0x1C,0x79,0x89,0x1D,0x09,0x88,0xF0,0x0E,0xC0,0x1D,
0xDC,0x88,0xFA,0x11,0x3B,0x80,0x06,0xC0,0x0D,0xE9,
0x38,0x08,0xC0,0x10,0xF4,0x4C,0x10,0xC0,0x1D,0xDC,
0x48,0x28,0x1C,0x09,0x0E,0x70,0x0C,0xC0,0x19,0xC4,
0xA0,0x45,0xF0,0x12,0xC0,0x25,0x83,0x31,0x8C,0xA2,
0xA8,0xB2,0x75,0xC0,0x0E,0xC0,0x1D,0x9C,0xCA,0x15,
0x13,0x39,0x00,0x0C,0xC0,0x1C,0xF5,0x42,0x78,0x08,
0xC0,0x15,0xE5,0x3C,0x23,0x80,0x0D,0x03,0x9C,0xF5,
0x42,0x48,0x60,0x30,0x0E,0xC0,0x1D,0xF2,0x11,0x1E,
0x12,0x39,0x80,0x06,0xC4,0x15,0xD5,0x1D,0x5C,0x0A,
0xC0,0x19,0xF5,0x64,0x87,0x00,0x0E,0xC0,0x1D,0xDE,
0x91,0x0E,0x00,0x0E,0xC0,0x1D,0xCC,0x8A,0x0A,0x40,
0x80,0x12,0xC0,0x25,0xFB,0x24,0x85,0xA1,0xB0,0x64,
0x11,0x00,0x0E,0xC0,0x1D,0xCC,0x50,0x20,0x50,0x91,
0x9C,0x0E,0xC0,0x1D,0xCE,0x0A,0x40,0x81,0xC0,0x0C,
0xC0,0x18,0xFA,0x40,0x82,0x08,0xBE,0x05,0x27,0x91,
0xEC,0xC0,0x06,0xE0,0x0E,0x64,0xA1,0x05,0x27,0x91,
0xEA,0xC0,0x0A,0xC8,0x24,0x49,0x54,0x44,0x0A,0x23,
0xD5,0xF0,0x04,0x45,0x51,0x30,0x0A,0x80,0x14,0xE4,
0x9E,0x7C,0x08,0xE0,0x15,0x90,0x87,0x85,0x30,0x08,
0x80,0x10,0xE8,0x49,0x80,0x0A,0xE0,0x14,0x68,0x11,
0xD1,0x23,0xC0,0x08,0x80,0x10,0xEF,0x49,0x80,0x08,
0xE0,0x0C,0x65,0x23,0xA1,0x1C,0x0A,0xC3,0x99,0xF4,
0x8C,0x71,0x37,0x80,0x0A,0xE0,0x15,0x88,0x41,0xD0,
0xA7,0xC0,0x06,0xC0,0x0C,0x81,0xA1,0x38,0x07,0x1F,
0x8C,0x40,0xE8,0xB0,0x0A,0xE0,0x15,0x88,0x41,0x66,
0x14,0xF8,0x06,0xE0,0x0D,0xAD,0x38,0x10,0x80,0x20,
0xFC,0xD2,0x29,0x3F,0xC0,0x0A,0x80,0x14,0xE6,0x8A,
0x7C,0x08,0x80,0x14,0xD1,0x26,0x08,0xC3,0x94,0xED,
0x85,0x33,0x80,0x0A,0xC3,0x94,0xE8,0x93,0xC1,0x0E,
0x08,0x80,0x0D,0xF0,0x8E,0x06,0x80,0x11,0xD6,0x38,
0x06,0xC0,0x0E,0x11,0xB1,0x18,0x0A,0x80,0x15,0xE8,
0x51,0xE0,0x0A,0x80,0x15,0xB2,0xA0,0x80,0x0E,0x80,
0x1D,0xFC,0xA8,0xD8,0x50,0x0A,0x80,0x15,0xA8,0x23,
0x60,0x0A,0xC3,0x95,0xB2,0xA4,0x8C,0x00,0x08,0x80,
0x10,0xEA,0x2B,0xC0,0x07,0x43,0x4C,0x69,0x34,0xA3,
0x03,0x23,0x8B,0x71,0x07,0x47,0x4D,0x29,0x1C,0xA6,
0x0A,0x20,0x95,0xF0,
};
/* font data size: 624 bytes */

static const unsigned char Lateef_9_index[] = {
0x00,0x00,0x30,0x1C,0x0B,0x04,0x81,0xB0,0x90,0x2D,
0x0C,0x43,0x60,0xEC,0x42,0x12,0x04,0xC1,0x40,0x53,
0x16,0x45,0xE1,0x90,0x6B,0x1C,0x87,0x92,0x00,0x87,
0x23,0x89,0x52,0x70,0xA0,0x29,0x4A,0xB2,0xBC,0xB5,
0x2E,0xCC,0x93,0x48,0xDA,0x38,0x8E,0x83,0xC0,0xF8,
0x40,0x50,0xA4,0x3D,0x14,0x47,0x92,0x54,0xC1,0x39,
0x4F,0xD4,0x65,0x39,0x57,0x57,0x56,0x45,0xAD,0x73,
0x5F,0x98,0x76,0x3D,0x97,0x67,0x1A,0x16,0x99,0xAC,
0x6C,0x1B,0x46,0xE9,0xC1,0x71,0xDC,0xF7,0x55,0xDC,
0x79,0x1E,0xC7,0xC9,0xF8,0x80,0x20,0x58,0x36,0x13,
0x86,0x21,0xF8,0x9A,0x2B,0x8C,0x23,0x68,0xF2,0x42,
0x92,0x64,0xF9,0x5A,0x5C,0x98,0xA6,0x69,0xB0,
};
/* font index size: 119 bytes */

const ILI9341_t3_font_t Lateef_9 = {
	Lateef_9_index,
	0,
	Lateef_9_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	18,
	6
};



static const unsigned char Lateef_10_data[] = {
0x00,0x00,0x0C,0x02,0xC4,0x0F,0x20,0x04,0x65,0x12,
0x70,0x0A,0xE0,0x14,0xD2,0x9F,0x29,0xF4,0x94,0x0B,
0x23,0xD4,0x47,0x96,0x30,0x68,0xA9,0xC2,0x00,0x10,
0xE4,0x25,0xE8,0x98,0x53,0x3F,0x45,0x22,0xA2,0x30,
0x10,0xE0,0x20,0x70,0x28,0x1B,0x1D,0x13,0x09,0xA7,
0x38,0x02,0x61,0x0A,0x60,0x05,0x27,0xD4,0xE5,0x08,
0x05,0x2B,0xD6,0x2B,0x62,0x0A,0xC3,0xD8,0x45,0x5E,
0x29,0x51,0x00,0x0A,0xA4,0x5E,0x08,0xFC,0x10,0x04,
0x63,0x8D,0x94,0x06,0x20,0x91,0xC0,0x04,0x24,0x11,
0x80,0x07,0x63,0x92,0x8D,0x29,0x80,0x08,0xE0,0x14,
0xD7,0x26,0x06,0xE4,0x14,0x9A,0x93,0x80,0x08,0xE0,
0x14,0xE9,0x0C,0x11,0x5E,0x08,0xE4,0x15,0xCA,0x21,
0xA0,0x5C,0x0A,0xE0,0x14,0x21,0x8A,0x49,0xF8,0x10,
0x08,0xE4,0x18,0xE8,0x70,0xE0,0x5C,0x08,0xE0,0x14,
0x64,0x53,0x62,0x4C,0x0A,0xE0,0x14,0xF4,0xA0,0x52,
0x40,0x08,0xE4,0x14,0xE9,0x53,0xA2,0x4E,0x08,0xE0,
0x14,0xD3,0x27,0x13,0x00,0x02,0x88,0x11,0x82,0x04,
0xE7,0x91,0x48,0xCA,0x06,0xC4,0x14,0x4A,0x21,0x08,
0x0C,0x60,0x9D,0xF8,0x07,0xE0,0x06,0xC4,0x15,0x0A,
0x09,0x20,0x08,0xE0,0x15,0xC9,0x81,0x11,0x04,0x13,
0x43,0xA8,0x3C,0x30,0x88,0x14,0xF5,0x4D,0x52,0x55,
0xA5,0xB4,0x82,0x1F,0x00,0x10,0xE0,0x20,0x21,0x05,
0x04,0x81,0xE1,0x11,0x8E,0x0C,0xE0,0x1D,0xF4,0x22,
0x7A,0x11,0x7E,0x0C,0xE0,0x1C,0xFA,0x19,0x81,0x19,
0xC0,0x0E,0xE0,0x21,0xF0,0x8E,0x50,0x91,0x3E,0x00,
0x0C,0xE0,0x19,0xF4,0x24,0x78,0x91,0x17,0xE0,0x0A,
0xE0,0x19,0xF2,0x4A,0x38,0xA2,0x1C,0x10,0xE0,0x20,
0x7C,0x42,0x41,0x21,0xD0,0x44,0x21,0xE0,0x10,0xE0,
0x21,0xCF,0x08,0x47,0xE8,0x42,0x73,0x80,0x06,0xE0,
0x11,0xED,0x38,0x08,0xE0,0x10,0xF6,0x4C,0x10,0xE0,
0x21,0xDC,0x48,0x28,0x1C,0x0B,0x04,0xC7,0x38,0x0C,
0xE0,0x19,0xC5,0x20,0x45,0xF8,0x12,0xE0,0x25,0x83,
0x31,0x8C,0xA8,0x55,0x12,0x4E,0xB8,0x10,0xE0,0x21,
0x8E,0x62,0x29,0x42,0x51,0x19,0xC4,0x0E,0xE0,0x20,
0x70,0x8A,0x60,0x91,0x0E,0x00,0x0A,0xE0,0x19,0xE8,
0x49,0xD0,0x87,0x00,0x0F,0x23,0xA0,0x70,0x8A,0x60,
0xA1,0x11,0x0E,0x01,0x80,0x0E,0xE0,0x1D,0xF2,0x11,
0x12,0x1E,0x12,0x39,0x80,0x08,0xE4,0x19,0xE9,0x41,
0xA2,0x5C,0x0A,0xE4,0x19,0xF5,0x68,0x87,0x00,0x10,
0xE0,0x21,0xCF,0x68,0x43,0xC0,0x10,0xE0,0x21,0xCE,
0x44,0x12,0x0A,0x20,0x60,0x20,0x14,0xE0,0x29,0xF9,
0x91,0x21,0x28,0x2D,0x06,0x64,0x09,0x00,0x10,0xE0,
0x21,0xCC,0x24,0x81,0x81,0x41,0x11,0xDE,0x0E,0xE0,
0x21,0xCC,0x88,0x52,0x44,0x0E,0x00,0x0C,0xE0,0x18,
0xFA,0x20,0x90,0x41,0x17,0xE0,0x05,0x27,0x95,0xEC,
0xC0,0x06,0xE0,0x0E,0x64,0xA1,0x05,0x27,0x95,0xEA,
0xC0,0x0C,0xC8,0x28,0x20,0xC2,0x90,0x92,0x10,0x0A,
0x23,0xD5,0xF0,0x04,0x45,0x51,0x10,0x0A,0xA0,0x14,
0xE4,0x8E,0x49,0xF0,0x08,0xE0,0x15,0x84,0x3C,0xA9,
0x80,0x08,0xA0,0x14,0xF1,0x09,0x30,0x0A,0xE0,0x14,
0x60,0x8E,0x99,0x1E,0x08,0xA0,0x14,0xEF,0x42,0x4E,
0x09,0x00,0x10,0x65,0x23,0xA5,0x1C,0x0A,0xE3,0x98,
0xF8,0x93,0x8F,0xA2,0xF0,0x0A,0xE0,0x15,0x82,0x0E,
0x95,0x3E,0x06,0xE0,0x0C,0x81,0xA5,0x38,0x07,0x3F,
0x8C,0x40,0xEC,0xB0,0x0C,0xE0,0x15,0x81,0x02,0xD0,
0xC1,0x47,0xE0,0x06,0xE0,0x0D,0xAD,0x38,0x12,0xA0,
0x24,0xFE,0x64,0xA1,0x24,0xFF,0x80,0x0A,0xA0,0x14,
0xE6,0xA1,0x4F,0x80,0x08,0xA0,0x14,0xD3,0x26,0x08,
0xE3,0x94,0xED,0x85,0x31,0x1C,0x0A,0xE3,0x94,0xE9,
0x91,0xC1,0x0E,0x08,0xA0,0x11,0xF2,0x8E,0x06,0xA4,
0x11,0xD5,0x23,0x00,0x06,0xC0,0x0C,0x8D,0xA1,0x18,
0x0A,0xA0,0x15,0xE9,0x51,0xE0,0x0A,0xA0,0x15,0x98,
0x54,0x10,0x10,0xA0,0x21,0xB6,0x4A,0x2E,0x09,0x05,
0x00,0x0A,0xA0,0x15,0xB8,0x21,0x4D,0x80,0x0A,0xE3,
0x95,0x92,0x86,0x92,0x30,0x0A,0xA0,0x14,0xF5,0x04,
0x29,0xE0,0x07,0x83,0x10,0x6D,0x35,0x21,0x03,0x27,
0x8B,0x71,0x07,0x87,0x11,0x2D,0x1D,0x24,0x0C,0x40,
0x98,0xCA,0x60,
};
/* font data size: 673 bytes */

static const unsigned char Lateef_10_index[] = {
0x00,0x00,0x30,0x1C,0x0B,0x04,0xC1,0xD0,0xA0,0x33,
0x0D,0xC3,0xC1,0x04,0x49,0x13,0xC5,0x31,0x5C,0x5B,
0x18,0x46,0x61,0xB0,0x73,0x1E,0x88,0x22,0x24,0x90,
0x25,0xC9,0xE2,0x94,0xA9,0x2B,0x8B,0x42,0xE8,0xC0,
0x31,0xCD,0x73,0x84,0xE9,0x3C,0x4F,0xA4,0x0D,0x0B,
0x45,0x92,0x04,0x95,0x2A,0x4D,0x53,0xC5,0x1D,0x51,
0x56,0x96,0x25,0xB5,0x77,0x5F,0x98,0x56,0x31,0x96,
0x68,0x9A,0xC6,0xD5,0xBE,0x70,0xDC,0x87,0x35,0xD5,
0x76,0x5D,0xD7,0x91,0xEB,0x7C,0x5F,0x87,0xFA,0x05,
0x83,0x61,0x48,0x6A,0x20,0x8A,0x62,0xE8,0xDE,0x3E,
0x90,0xE4,0xA9,0x46,0x56,0x97,0x26,0x29,0xA2,0x6E,
0x9D,0xE7,0xEA,0x16,0x8C,0xA4,0xA9,0x6A,0x70,
};
/* font index size: 119 bytes */

const ILI9341_t3_font_t Lateef_10 = {
	Lateef_10_index,
	0,
	Lateef_10_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	20,
	7
};



static const unsigned char Lateef_11_data[] = {
0x00,0x00,0x0C,0x04,0xE4,0x12,0xE0,0xC0,0x06,0x65,
0x16,0x68,0x0A,0xE0,0x18,0x52,0x5F,0x29,0xF8,0x90,
0x09,0x27,0xD8,0x91,0xC4,0x14,0x6B,0x88,0x11,0x04,
0x28,0x88,0xBC,0x4C,0x2A,0xDE,0xA2,0x91,0x51,0x18,
0x12,0xE0,0x24,0x38,0x12,0x05,0x63,0xD1,0x38,0x46,
0x4E,0x60,0x04,0x61,0x09,0xC4,0x05,0x27,0xD4,0xE5,
0x08,0x05,0x2B,0xD6,0x2B,0x62,0x0A,0xC3,0xD8,0x45,
0x5F,0x29,0x51,0x00,0x0A,0xA4,0x5E,0x08,0xFC,0x10,
0x04,0x63,0x8D,0x94,0x06,0x20,0x91,0xC0,0x04,0x24,
0x15,0x80,0x09,0x63,0x90,0x72,0x56,0x91,0x00,0x0A,
0xE0,0x18,0xEB,0x89,0xC0,0x06,0xE4,0x18,0x9A,0x93,
0x80,0x08,0xE4,0x18,0xE9,0x0C,0x13,0x5E,0x0A,0xE0,
0x18,0xE4,0x84,0x1A,0x02,0x70,0x0A,0xE0,0x14,0x21,
0x8A,0x49,0xF8,0x10,0x08,0xE4,0x18,0xE8,0x70,0xE0,
0x5C,0x08,0xE4,0x18,0x64,0x53,0x62,0x4C,0x0A,0xE0,
0x18,0xF4,0x64,0x50,0x40,0x08,0xE4,0x18,0xE9,0x53,
0xA2,0x4E,0x0A,0xE0,0x18,0xE9,0x89,0xE1,0x38,0x02,
0x88,0x11,0x82,0x04,0xE7,0x91,0x48,0xCA,0x08,0xE4,
0x18,0x64,0x98,0x20,0xC0,0x0E,0x60,0x9D,0xFC,0x01,
0xFC,0x08,0xE4,0x19,0x04,0x10,0x44,0x44,0x00,0x06,
0xE4,0x15,0x96,0x09,0x21,0x00,0x15,0x43,0xAC,0x3E,
0x08,0x22,0x02,0x8F,0x62,0x49,0x4B,0x49,0xB4,0xC1,
0x07,0xC0,0x10,0xE0,0x20,0x20,0x18,0x14,0x09,0x07,
0x84,0x66,0x38,0x0C,0xE0,0x1D,0xF4,0x22,0x7A,0x11,
0x7E,0x0C,0xE4,0x20,0xFB,0x19,0x81,0x89,0xE0,0x0E,
0xE0,0x21,0xF0,0x8E,0x50,0x91,0x3E,0x00,0x0C,0xE0,
0x1D,0xF9,0x12,0x47,0x89,0x11,0x7E,0x0C,0xE0,0x19,
0xF1,0x12,0x47,0x89,0x10,0x70,0x10,0xE0,0x20,0x7C,
0x42,0x43,0xC4,0x11,0x08,0x78,0x10,0xE0,0x21,0xCF,
0x08,0x47,0xE8,0x42,0x73,0x80,0x06,0xE0,0x11,0xED,
0x38,0x08,0xE0,0x10,0xF6,0x4C,0x10,0xE0,0x21,0xDC,
0x48,0x28,0x1C,0x0B,0x04,0xC7,0x78,0x0C,0xE0,0x1D,
0xC4,0xA1,0x08,0xBF,0x14,0xE0,0x29,0x81,0x98,0x63,
0x14,0x52,0xA1,0x32,0x74,0xE0,0x10,0xE0,0x21,0x8E,
0x62,0x29,0x42,0x51,0x19,0xC4,0x0E,0xE0,0x20,0x70,
0x8A,0x60,0x91,0x0E,0x00,0x0A,0xE0,0x19,0xE8,0x49,
0xD0,0x87,0x00,0x0F,0x23,0xA0,0x70,0x8A,0x60,0xA1,
0x12,0x0E,0x01,0x80,0x10,0xE0,0x21,0xF1,0x08,0x86,
0x82,0xC1,0x31,0xCE,0x08,0xE4,0x19,0xE9,0x41,0xA2,
0x5C,0x0E,0xE0,0x1D,0xFD,0x26,0x84,0x0E,0x00,0x10,
0xE0,0x21,0xCF,0x68,0x43,0xC0,0x10,0xE0,0x21,0xC6,
0x62,0x12,0x0D,0x20,0x60,0x10,0x16,0xE0,0x2D,0xDD,
0xC8,0x90,0x49,0x05,0x50,0x36,0x20,0x44,0x00,0x10,
0xE0,0x21,0xEE,0x24,0x0C,0x02,0x07,0x82,0x47,0x38,
0x0E,0xE4,0x21,0xCC,0x88,0x52,0x44,0x0E,0x00,0x0E,
0xE0,0x1C,0xFD,0x12,0x04,0x08,0x91,0x3F,0x00,0x05,
0x47,0x95,0xEC,0x98,0x07,0x00,0x0E,0x64,0xA8,0x20,
0x05,0x4B,0x95,0xEA,0x58,0x0A,0xEC,0x2C,0x43,0x0A,
0x89,0x44,0x40,0x0A,0x23,0x95,0xF0,0x04,0x45,0x91,
0x10,0x0A,0xA0,0x14,0xE4,0x8E,0x49,0xF0,0x0B,0x00,
0x19,0x88,0x41,0xD2,0x93,0x80,0x08,0xA0,0x14,0xF1,
0x09,0x30,0x0D,0x00,0x18,0x34,0x04,0x7A,0x62,0x3E,
0x08,0xA0,0x14,0xEF,0x43,0x4E,0x0B,0x00,0x10,0x62,
0x48,0x72,0x50,0xE0,0x0C,0xE3,0x9D,0xFC,0x44,0xF1,
0xFA,0x17,0xC0,0x0D,0x00,0x19,0x84,0x20,0x7A,0x52,
0x7E,0x06,0xE0,0x0C,0x81,0xA5,0x38,0x07,0x3F,0x8C,
0x40,0xEC,0xB0,0x0D,0x00,0x19,0x84,0x20,0x5C,0xE1,
0x82,0x8F,0xC0,0x07,0x00,0x0D,0xB1,0x38,0x12,0xA0,
0x24,0xFE,0x64,0xA1,0x24,0xFF,0x80,0x0C,0xA0,0x18,
0xF3,0x28,0x49,0xF8,0x0A,0xA0,0x18,0xE9,0x89,0xC0,
0x0A,0xE3,0x98,0xE6,0x61,0x27,0x10,0xE0,0x0C,0xE3,
0x98,0xF4,0xC4,0x78,0x10,0x70,0x08,0xA0,0x11,0xF2,
0x8E,0x06,0xA4,0x11,0xD5,0x23,0x00,0x06,0xE0,0x0E,
0x11,0xB4,0x23,0x0C,0xA0,0x19,0xB4,0xA4,0x7C,0x0C,
0xA0,0x19,0x99,0x28,0x30,0x40,0x10,0xA0,0x21,0xB6,
0x4A,0x2D,0x41,0x20,0x0C,0xA0,0x19,0xF4,0x10,0x51,
0xB8,0x0C,0xE3,0x99,0x99,0x28,0x32,0x08,0x60,0x0A,
0xA0,0x14,0xF4,0x84,0x25,0xF0,0x07,0x83,0x10,0x6D,
0x35,0x21,0x03,0x47,0x8B,0x73,0x07,0x87,0x11,0x2D,
0x1D,0x24,0x0C,0x40,0x98,0xCA,0x60,
};
/* font data size: 697 bytes */

static const unsigned char Lateef_11_index[] = {
0x00,0x00,0x30,0x20,0x0C,0x05,0x01,0xC0,0xA0,0x34,
0x0E,0x03,0xD1,0x08,0x4A,0x14,0x05,0x41,0x60,0x5C,
0x18,0xC6,0x91,0xBC,0x76,0x1F,0x88,0x62,0x34,0x94,
0x26,0xCA,0x22,0xA4,0xAD,0x2C,0x8B,0x92,0xFC,0xC7,
0x33,0x8D,0xE3,0xA4,0xF1,0x3E,0x50,0x24,0x2D,0x14,
0x47,0x92,0x84,0xB5,0x32,0x4F,0x54,0x45,0x41,0x5A,
0x58,0xD6,0xB5,0xD9,0x80,0x61,0xD8,0xF6,0x59,0xA0,
0x6B,0x5B,0x87,0x05,0xCB,0x74,0x1D,0x67,0x6D,0xE3,
0x79,0xDE,0xB7,0xC9,0xFA,0x80,0x20,0x88,0x3A,0x16,
0x87,0xE2,0x78,0xB6,0x33,0x8F,0x64,0x29,0x2E,0x52,
0x96,0x26,0x09,0xA2,0x6D,0x9C,0xE7,0x99,0xFE,0x86,
0xA3,0xA9,0x5A,0x76,0xA4,0xAA,0xAA,0xEA,0xD0,
};
/* font index size: 119 bytes */

const ILI9341_t3_font_t Lateef_11 = {
	Lateef_11_index,
	0,
	Lateef_11_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	21,
	7
};



static const unsigned char Lateef_12_data[] = {
0x00,0x00,0x10,0x05,0x04,0x13,0x66,0x06,0x65,0x56,
0x68,0x0D,0x00,0x18,0x48,0xA7,0xF0,0x93,0xF2,0x89,
0x00,0x0B,0x47,0xD8,0x47,0x96,0x70,0x61,0xE2,0xA7,
0x08,0x13,0x24,0x2C,0x04,0x3F,0x12,0x84,0xC1,0x53,
0x69,0x42,0x91,0x24,0x46,0x13,0x04,0x28,0x38,0x12,
0x05,0x03,0x9D,0x34,0x46,0x11,0x93,0x98,0x02,0x65,
0x4A,0x60,0x05,0x4B,0xD8,0xED,0x08,0x05,0x4B,0xDA,
0x2C,0x62,0x0D,0x07,0x9C,0x42,0xA7,0xE5,0x1F,0x2A,
0x82,0x00,0x0E,0xC4,0x62,0x44,0x3F,0xC0,0x80,0x04,
0x67,0x8D,0x94,0x06,0x24,0x91,0xC0,0x02,0x28,0x15,
0x07,0x87,0x96,0x0D,0x2C,0x80,0x0B,0x00,0x18,0xEB,
0x8A,0x47,0x00,0x07,0x08,0x18,0x9A,0xD3,0x80,0x0D,
0x00,0x18,0xE2,0x28,0x08,0x20,0x82,0x6F,0x80,0x0B,
0x04,0x18,0xE4,0x82,0x10,0xB8,0x0B,0xC0,0x0D,0x00,
0x1C,0x10,0x61,0x44,0x91,0x3F,0x80,0x80,0x0B,0x04,
0x1C,0x72,0x0C,0x0E,0x02,0x8B,0xC0,0x0B,0x04,0x18,
0x72,0x14,0x6A,0x64,0x60,0x0D,0x00,0x18,0xFA,0x28,
0x0A,0x44,0x10,0x0B,0x04,0x18,0xE8,0x89,0x4B,0x44,
0x4E,0x0B,0x00,0x18,0x69,0x48,0xE0,0x84,0xE0,0x04,
0xA4,0x15,0xA0,0x98,0x05,0x07,0x91,0xD0,0xCA,0x08,
0xE4,0x18,0x22,0x22,0x08,0x20,0x80,0x0E,0x84,0xA1,
0xFE,0x00,0x3F,0x80,0x08,0xE4,0x19,0x04,0x10,0x44,
0x44,0x00,0x09,0x04,0x19,0xC9,0x81,0x82,0x84,0x17,
0x83,0x70,0x1F,0x06,0x18,0x80,0x49,0xF5,0x12,0x52,
0x25,0x26,0x52,0x49,0x3F,0x48,0x08,0x41,0x83,0xE0,
0x13,0x00,0x24,0x10,0x0C,0x20,0x90,0x3E,0x10,0x84,
0x33,0x8E,0x0D,0x04,0x21,0xF4,0x22,0x7A,0x51,0x7C,
0x0F,0x04,0x24,0xFC,0x86,0x60,0x20,0xB1,0x1E,0x00,
0x11,0x00,0x25,0xF8,0x42,0xA4,0x12,0x13,0xF0,0x0F,
0x04,0x21,0xF8,0x88,0x90,0xF0,0x92,0x10,0xBF,0x00,
0x0D,0x04,0x1D,0xF9,0x12,0x47,0x89,0x42,0x0E,0x00,
0x13,0x00,0x24,0x7E,0x20,0x90,0x24,0x1E,0x20,0x44,
0x10,0xF8,0x13,0x00,0x25,0xC7,0x84,0x11,0xFD,0x28,
0x27,0x1C,0x07,0x04,0x11,0xF1,0x38,0x09,0x04,0x14,
0xF8,0x4C,0x11,0x04,0x25,0xDC,0x48,0x28,0x18,0x0A,
0x04,0x82,0x63,0xBC,0x0F,0x04,0x21,0xC2,0x90,0x42,
0x17,0xE0,0x17,0x00,0x2D,0xC1,0xCC,0x1A,0x14,0x54,
0x25,0x22,0x22,0x72,0x70,0x11,0x04,0x25,0x8E,0x62,
0x85,0x22,0x51,0x18,0x84,0xE2,0x11,0x00,0x24,0x78,
0x42,0xA8,0x12,0x10,0xF0,0x0D,0x00,0x1D,0xF4,0x22,
0x7A,0x50,0x70,0x11,0x63,0x64,0x78,0x42,0xB8,0x12,
0x10,0xF0,0x18,0x03,0x13,0x00,0x25,0xF8,0x84,0x21,
0x10,0x78,0x13,0x04,0x63,0x8E,0x0B,0x04,0x1C,0xD4,
0xD0,0x20,0x68,0x8B,0xC0,0x0F,0x00,0x21,0xFD,0x26,
0xC4,0x0E,0x00,0x13,0x00,0x25,0xC7,0xB4,0x11,0x8C,
0x3E,0x00,0x13,0x00,0x25,0xE7,0x10,0x84,0x40,0x90,
0x28,0x0E,0x01,0x80,0x40,0x19,0x00,0x31,0xDE,0xE6,
0x22,0x11,0x20,0x9D,0x02,0xA9,0x03,0x30,0x11,0x00,
0x13,0x00,0x25,0xE7,0x19,0x02,0x80,0x40,0x18,0x0B,
0x04,0x47,0x3C,0x13,0x00,0x25,0xE7,0x11,0x06,0x80,
0xA2,0x42,0x01,0xC0,0x0F,0x00,0x20,0xFC,0x89,0x10,
0x10,0x20,0x44,0x85,0xFC,0x07,0x6B,0x99,0xF6,0x44,
0x70,0x09,0x20,0x12,0x62,0x52,0x08,0x60,0x07,0x67,
0x99,0xF4,0xC1,0x70,0x0D,0x0C,0x30,0x24,0x19,0x29,
0x44,0x20,0x0C,0x23,0x99,0xF8,0x06,0x45,0xD5,0x0C,
0x0C,0xC0,0x18,0xF4,0x44,0xF9,0x13,0xF0,0x0B,0x20,
0x19,0x88,0x41,0xD4,0x93,0x80,0x0A,0xC0,0x18,0xE9,
0x82,0x67,0x00,0x0D,0x20,0x18,0x34,0x04,0x7A,0xA2,
0x3E,0x0A,0xC0,0x18,0xE4,0x5F,0x41,0x93,0x80,0x0B,
0x24,0x10,0x62,0x48,0x7A,0x90,0xE0,0x0D,0x23,0x5C,
0xFC,0x44,0x51,0x43,0xE8,0x84,0xF0,0x0D,0x20,0x19,
0x84,0x20,0x7A,0x92,0x7E,0x07,0x00,0x10,0x80,0x9A,
0x53,0x80,0x07,0x7F,0x50,0x40,0xF0,0xAB,0x00,0x0D,
0x20,0x18,0x83,0x02,0x04,0xCA,0x18,0x28,0x59,0xD8,
0x07,0x20,0x10,0x9B,0x13,0x80,0x14,0xC0,0x28,0xBB,
0x39,0xA9,0x44,0x9D,0xF8,0x0C,0xC0,0x18,0xB3,0xA9,
0x49,0xF8,0x0A,0xC0,0x18,0xEA,0x89,0xC0,0x0B,0x23,
0x58,0xE6,0x65,0x25,0x18,0x43,0x80,0x0D,0x23,0x58,
0xF5,0x44,0x7A,0x02,0x0E,0x08,0xC0,0x10,0xAE,0x94,
0x70,0x08,0xC4,0x15,0xE9,0x43,0x94,0xE0,0x09,0x00,
0x12,0x11,0xD4,0x87,0x0C,0xC0,0x19,0xB5,0x24,0x7C,
0x0C,0xC0,0x19,0xD9,0x21,0x43,0x20,0x40,0x12,0xC0,
0x25,0xBB,0x24,0x85,0xA1,0xB0,0x64,0x11,0x00,0x0C,
0xC0,0x19,0xD8,0xC1,0x03,0x09,0x33,0x0D,0x23,0x59,
0xD9,0x28,0x2A,0x04,0x82,0x18,0x00,0x0C,0xC0,0x18,
0xFA,0x40,0x82,0x09,0x3E,0x07,0xA3,0x10,0x6D,0x25,
0xA1,0x03,0x87,0x4F,0x77,0x07,0xA7,0x11,0x2D,0x0D,
0xA4,0x0E,0x40,0x9C,0xE5,0x38,
};
/* font data size: 776 bytes */

static const unsigned char Lateef_12_index[] = {
0x00,0x00,0x30,0x1C,0x0B,0x05,0x41,0xF0,0xB4,0x3A,
0x0F,0x84,0x31,0x20,0x52,0x16,0x45,0xD1,0x84,0x64,
0x1A,0x87,0x11,0xDC,0x81,0x22,0x89,0x42,0x74,0xA5,
0x2B,0x4B,0x52,0xF4,0xC2,0x31,0xCC,0xF3,0x58,0xDE,
0x39,0x4F,0xA4,0x19,0x0E,0x46,0x12,0x14,0xB1,0x36,
0x50,0x94,0xC5,0x45,0x56,0x58,0x96,0xA5,0xDD,0x82,
0x62,0xD9,0x36,0x79,0xAA,0x6C,0xDB,0xB7,0x11,0xD1,
0x78,0x1E,0xD7,0xE2,0x03,0x82,0x61,0x08,0x5A,0x1E,
0x88,0xA2,0x68,0xBA,0x36,0x8F,0x64,0x59,0x36,0x55,
0x97,0xE6,0x79,0xBA,0x75,0xA0,0x28,0x6A,0x3E,0x96,
0xA7,0x2A,0x5A,0xB6,0xB3,0xAE,0xAC,0x0B,0x1A,0xCE,
0xB6,0x6E,0x1B,0xAE,0xF3,0xBE,0x6F,0xDC,0x0C,
};
/* font index size: 119 bytes */

const ILI9341_t3_font_t Lateef_12 = {
	Lateef_12_index,
	0,
	Lateef_12_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	24,
	8
};



static const unsigned char Lateef_13_data[] = {
0x00,0x00,0x10,0x05,0x04,0x13,0x56,0x08,0x85,0x5A,
0xA4,0x0F,0x20,0x1E,0x49,0x3F,0x92,0x3F,0x92,0x14,
0x24,0x00,0x0B,0x67,0xDC,0x47,0xD5,0x50,0xC1,0x85,
0x8A,0x9C,0x20,0x15,0x24,0x30,0xE6,0x23,0x84,0x60,
0x95,0x9D,0x48,0x31,0x0A,0x42,0x48,0x46,0x00,0x13,
0x24,0x2C,0x38,0x82,0x40,0xAE,0x52,0x26,0x88,0xC2,
0x32,0x73,0x80,0x02,0x85,0x4A,0xA0,0x05,0x6B,0xD8,
0xEC,0xA1,0x05,0x6B,0xDA,0x2D,0x62,0x0F,0x03,0xA0,
0x21,0x29,0xFC,0x50,0xF9,0xAE,0x04,0x00,0x0E,0xC4,
0x66,0x04,0x3F,0xC8,0x80,0x04,0x67,0x8D,0x94,0x06,
0x24,0x95,0xC0,0x02,0x28,0x19,0x07,0xA7,0x96,0x4D,
0x2C,0x80,0x0D,0x20,0x1C,0x61,0x2B,0x84,0x90,0xC0,
0x07,0x28,0x1C,0x9B,0x13,0x80,0x0D,0x24,0x1C,0xE2,
0x28,0x0A,0x04,0x10,0x4D,0xF0,0x0B,0x24,0x1C,0xE4,
0x82,0x10,0xE8,0x0A,0x2F,0x00,0x0D,0x20,0x1C,0x10,
0x68,0x28,0x92,0x27,0xF0,0x10,0x0B,0x24,0x1C,0x72,
0x0C,0x4A,0x42,0x93,0x80,0x0B,0x24,0x1C,0x31,0x08,
0x59,0x99,0x89,0xC0,0x0B,0x24,0x1D,0xF4,0x64,0x52,
0x42,0x00,0x0B,0x24,0x1C,0xE8,0x89,0x47,0x4C,0x4E,
0x0B,0x24,0x1C,0xEA,0x89,0xE1,0x08,0xC0,0x04,0xA8,
0x15,0xA0,0x98,0x05,0x07,0x91,0xD0,0xCA,0x0B,0x04,
0x1C,0x31,0x08,0x88,0x10,0x20,0x60,0x0E,0x84,0xA5,
0xFE,0x00,0x3F,0x80,0x0B,0x04,0x1D,0x02,0x04,0x08,
0x31,0x08,0x40,0x09,0x24,0x18,0xD1,0x30,0x22,0x84,
0x30,0x19,0x83,0x74,0x3F,0x02,0x06,0x20,0x0A,0x3E,
0x51,0x32,0x91,0x94,0x98,0xA4,0xC9,0x3B,0xE4,0x02,
0x10,0x20,0x7E,0x00,0x15,0x20,0x28,0x10,0x48,0xA0,
0x22,0x07,0xC1,0x0C,0x20,0x8E,0x3C,0x11,0x24,0x25,
0xF9,0x28,0x47,0xC9,0x43,0x7F,0x00,0x11,0x20,0x24,
0x3E,0x61,0x20,0xCE,0x03,0x04,0xC2,0x3E,0x11,0x24,
0x29,0xF8,0x46,0xB4,0x32,0x33,0xF0,0x0F,0x24,0x21,
0xF8,0x88,0x80,0x88,0xF8,0x8A,0x10,0xBF,0x80,0x0D,
0x24,0x21,0xF9,0x12,0x04,0x8F,0x12,0x84,0x1C,0x00,
0x15,0x20,0x28,0x3D,0x18,0x62,0x04,0xC1,0xE7,0x02,
0x30,0x41,0xF0,0x11,0x24,0x29,0xCF,0x28,0x47,0xE9,
0x42,0x73,0x80,0x07,0x24,0x15,0xF5,0x38,0x09,0x24,
0x14,0xFA,0x4C,0x13,0x24,0x29,0xDC,0x24,0x0A,0x08,
0x60,0x14,0x04,0x81,0x30,0xEF,0x80,0x0F,0x24,0x21,
0xC2,0xD0,0x42,0x17,0xF0,0x17,0x20,0x31,0x80,0xE1,
0x83,0x42,0x8A,0x84,0xA4,0x44,0x4E,0x4E,0x13,0x24,
0x29,0x87,0x30,0x8A,0x22,0xC8,0x92,0x22,0x88,0x62,
0x09,0xC2,0x13,0x20,0x28,0x7C,0x31,0xAF,0x06,0x63,
0x0F,0x80,0x0D,0x24,0x21,0xF4,0xA6,0x7A,0x50,0x70,
0x13,0x83,0x68,0x7C,0x31,0x88,0x3A,0xC1,0x90,0x42,
0x20,0x70,0x06,0x00,0x60,0x11,0x24,0x25,0xF1,0x28,
0x85,0x83,0xC1,0x20,0x88,0xE7,0x0D,0x24,0x20,0xEA,
0x34,0x24,0x06,0x03,0x88,0x5F,0x00,0x0F,0x24,0x21,
0xFE,0x24,0xD8,0x81,0xC0,0x13,0x24,0x29,0xC7,0xC4,
0x11,0x8C,0x3E,0x00,0x15,0x20,0x29,0xE3,0xC1,0x08,
0x32,0x02,0x40,0x68,0x80,0xC0,0x10,0x00,0x1B,0x20,
0x35,0xDE,0x73,0x11,0x04,0x44,0x1A,0x90,0x2A,0x80,
0xAE,0x03,0x18,0x80,0x88,0x00,0x15,0x20,0x29,0xE7,
0x0C,0x40,0x91,0x01,0x80,0x58,0x09,0x02,0x31,0xC7,
0x80,0x13,0x20,0x29,0xE7,0x11,0x06,0x40,0xA0,0x30,
0x90,0x80,0x70,0x11,0x20,0x20,0xFE,0x42,0x42,0x02,
0x20,0x40,0x42,0x41,0x7F,0x80,0x07,0x8B,0x99,0xF6,
0x4C,0x70,0x09,0x20,0x12,0x62,0x12,0x48,0x20,0x07,
0x87,0x99,0xF4,0xC9,0x70,0x0F,0x0C,0x34,0x20,0x62,
0x0A,0x42,0x24,0x24,0x10,0x0E,0x23,0x9D,0xFC,0x06,
0x45,0xD5,0x0C,0x0A,0xC4,0x18,0xE8,0x93,0xC9,0x3E,
0x0D,0x20,0x1D,0x84,0x20,0x58,0xCC,0xA2,0x78,0x0A,
0xC0,0x18,0xF9,0x82,0x27,0x00,0x0F,0x20,0x1C,0x1A,
0x01,0x0F,0x31,0x4C,0x23,0xF0,0x0A,0xC0,0x18,0xE4,
0x5F,0x41,0x93,0x80,0x0B,0x44,0x14,0x62,0x61,0x0F,
0x52,0x1C,0x0F,0x23,0x60,0xFE,0x21,0x12,0x2C,0x3F,
0x44,0x13,0xE0,0x0F,0x20,0x1D,0x82,0x10,0x17,0x19,
0x4A,0x27,0x70,0x07,0x20,0x10,0xA0,0x35,0x27,0x07,
0x9F,0x50,0x60,0x1E,0x15,0x60,0x0F,0x20,0x1D,0x82,
0x10,0x13,0x14,0x18,0x14,0x16,0x3B,0x80,0x07,0x20,
0x11,0xB5,0x38,0x16,0xC0,0x2C,0xBB,0x9C,0xCA,0x51,
0x13,0xBB,0x80,0x0E,0xC0,0x1C,0xB9,0xCA,0x51,0x3B,
0x80,0x0C,0xC0,0x1C,0xF2,0x38,0x85,0x89,0xE0,0x0D,
0x23,0x5C,0xB3,0x99,0x44,0x91,0xC2,0x0E,0x00,0x0F,
0x23,0x5C,0x79,0x8A,0x61,0x1F,0x40,0x20,0x70,0x08,
0xC0,0x15,0xA6,0x94,0x70,0x08,0xC4,0x15,0xF1,0x2E,
0x53,0x80,0x09,0x00,0x12,0x11,0xD4,0x87,0x0E,0xC0,
0x1D,0x9A,0x91,0x1F,0x80,0x0E,0xC0,0x1D,0xCC,0xCA,
0x0A,0x40,0x80,0x14,0xC0,0x29,0xF9,0x91,0x21,0x68,
0x33,0x06,0x40,0x88,0x0E,0xC0,0x1D,0xDA,0x4C,0x12,
0x33,0x80,0x0F,0x23,0x5D,0xCC,0x8A,0x0A,0x48,0x81,
0x06,0x00,0x0C,0xC0,0x18,0xFA,0x20,0x82,0x08,0xBF,
0x09,0xC3,0x14,0x78,0x8C,0xB4,0x18,0x03,0x87,0x4F,
0x77,0x09,0xC3,0x15,0x98,0x43,0xB2,0x60,0x0E,0x60,
0x9C,0xE5,0x19,0x00,
};
/* font data size: 834 bytes */

static const unsigned char Lateef_13_index[] = {
0x00,0x00,0x30,0x1C,0x0B,0x05,0x82,0x10,0xC4,0x3F,
0x10,0xC4,0x81,0x34,0x58,0x17,0xC6,0x31,0x9C,0x6A,
0x1C,0x07,0x81,0xF8,0x88,0x24,0x89,0xC2,0x94,0xAE,
0x2D,0x8B,0xE3,0x18,0xCB,0x34,0x0D,0x93,0x80,0xE9,
0x3C,0x50,0x84,0x55,0x1F,0x4A,0x93,0x34,0xFD,0x4A,
0x55,0xD6,0x15,0x99,0x6B,0x5E,0x58,0x16,0x39,0x9C,
0x69,0x9A,0xE6,0xF5,0xC8,0x74,0xDD,0xB7,0x91,0xF2,
0x81,0x21,0x38,0x7E,0x2C,0x8C,0xA3,0x98,0xFE,0x49,
0x93,0x65,0x19,0x62,0x61,0x9A,0x27,0x29,0xEA,0x82,
0xA3,0x69,0x7A,0x76,0xA4,0xAC,0x2B,0x5A,0xFE,0xC7,
0xB3,0xED,0x9B,0x8E,0xE9,0xBC,0x2F,0x6B,0xF7,0x05,
0xC4,0x31,0x8C,0x8B,0x2A,0xCC,0x73,0x5C,0xF0,
};
/* font index size: 119 bytes */

const ILI9341_t3_font_t Lateef_13 = {
	Lateef_13_index,
	0,
	Lateef_13_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	26,
	9
};



static const unsigned char Lateef_14_data[] = {
0x00,0x00,0x10,0x05,0x24,0x17,0x10,0x58,0x08,0x65,
0x9A,0x64,0x0F,0x20,0x1E,0x49,0x3F,0x92,0x3F,0xC2,
0x42,0x80,0x0B,0x67,0xDC,0x47,0xD5,0x50,0xC1,0x85,
0x8A,0x9C,0x20,0x17,0x44,0x30,0x02,0x0E,0xE1,0x14,
0x12,0x81,0x29,0x9D,0x24,0x14,0x42,0x44,0x24,0x84,
0x30,0x13,0x24,0x2C,0x38,0x82,0x40,0xEE,0x52,0x26,
0x88,0xC2,0x32,0x73,0x80,0x02,0x65,0x8E,0x60,0x07,
0x6B,0xDC,0xB6,0x31,0x18,0x07,0x6B,0xDC,0x98,0xF0,
0xC2,0x0F,0x03,0xA0,0x21,0x29,0xFC,0x50,0xF9,0xAE,
0x04,0x00,0x0E,0xE4,0x66,0x44,0x3F,0xC8,0x80,0x04,
0x67,0x91,0x94,0x06,0x24,0x95,0xC0,0x02,0x28,0x19,
0x07,0xC7,0x96,0x8D,0x2C,0x80,0x0B,0x24,0x1C,0xE4,
0xAE,0x29,0x1C,0x07,0x28,0x1C,0x9B,0x13,0x80,0x0D,
0x24,0x1C,0xE2,0x28,0x0A,0x04,0x10,0x4D,0xF0,0x0B,
0x24,0x1C,0xE4,0x82,0x10,0xE8,0x0A,0x2F,0x00,0x0D,
0x20,0x1C,0x10,0x61,0x44,0x91,0x3F,0x90,0x80,0x0B,
0x24,0x1C,0x72,0x10,0x78,0x38,0x0A,0x2F,0x00,0x0D,
0x24,0x1C,0x38,0x82,0x0B,0x19,0x4C,0x47,0x00,0x0D,
0x24,0x1D,0xFA,0x20,0x52,0x24,0x90,0x0B,0x24,0x1C,
0xE8,0x89,0x47,0x4C,0x4E,0x0D,0x20,0x1C,0x75,0x22,
0x3C,0x10,0x47,0x00,0x04,0xA8,0x19,0xA0,0x98,0x05,
0x07,0x91,0xA9,0x19,0x40,0x0B,0x04,0x1C,0x31,0x08,
0x88,0x10,0x20,0x60,0x10,0x64,0xE5,0xFE,0x00,0x7F,
0x80,0x0B,0x04,0x1D,0x02,0x04,0x08,0x31,0x08,0x40,
0x09,0x24,0x18,0xD1,0x30,0x22,0x84,0x30,0x19,0xA7,
0x78,0x1F,0x03,0x06,0x30,0x11,0x00,0x50,0xF2,0x89,
0x94,0x8C,0xA4,0x49,0x26,0x49,0xDD,0x20,0x08,0x81,
0x83,0xF0,0x15,0x20,0x28,0x10,0x03,0x00,0xA0,0x12,
0x04,0x40,0xFC,0x10,0x84,0x19,0xC7,0x80,0x11,0x24,
0x25,0xF9,0x28,0x47,0xC9,0x43,0x7F,0x00,0x13,0x20,
0x28,0x3E,0x30,0x88,0x29,0xC0,0x30,0x26,0x10,0xF8,
0x11,0x24,0x29,0xF8,0x46,0xB4,0x32,0x33,0xF0,0x0F,
0x24,0x25,0xFE,0x10,0x91,0x1F,0x11,0x42,0x17,0xF0,
0x0D,0x24,0x21,0xFC,0x22,0x48,0xF1,0x28,0x41,0xC0,
0x15,0x20,0x28,0x3D,0x18,0x62,0x04,0xC1,0xE7,0x02,
0x30,0x41,0xF0,0x11,0x24,0x29,0xCF,0x28,0x47,0xE9,
0x42,0x73,0x80,0x07,0x24,0x15,0xF5,0x38,0x09,0x24,
0x18,0xFA,0x4C,0x15,0x24,0x29,0xCF,0x11,0x02,0x40,
0x50,0x0E,0x01,0x60,0x26,0x04,0x61,0xCF,0x80,0x0F,
0x24,0x25,0xC2,0xD0,0x42,0x17,0xF0,0x19,0x20,0x35,
0xC0,0xE6,0x06,0x85,0x0A,0x84,0x92,0x84,0x62,0x72,
0x38,0x13,0x20,0x29,0xC7,0x18,0x87,0x21,0x4A,0x09,
0x42,0x30,0x84,0x71,0x00,0x13,0x20,0x28,0x7C,0x31,
0xAF,0x06,0x63,0x0F,0x80,0x0D,0x24,0x21,0xF4,0xA6,
0x7A,0x50,0x70,0x13,0x83,0x68,0x7C,0x31,0x88,0x3A,
0xC1,0x90,0x42,0x20,0x70,0x04,0x00,0xE0,0x13,0x24,
0x29,0xF8,0x94,0x61,0x20,0x78,0x11,0x04,0x63,0x8E,
0x0D,0x24,0x20,0xEA,0x34,0x24,0x06,0x23,0x88,0x5F,
0x00,0x0F,0x24,0x25,0xFE,0x24,0xD8,0x81,0xC0,0x13,
0x24,0x2D,0xC7,0xC4,0x11,0x8C,0x3E,0x00,0x15,0x20,
0x29,0xE3,0x88,0x21,0x88,0x11,0x03,0x44,0x05,0x00,
0xC0,0x08,0x00,0x1B,0x20,0x39,0xEE,0x31,0x18,0x84,
0x22,0x19,0x90,0x2B,0x40,0xA5,0x03,0x98,0x04,0x60,
0x11,0x00,0x15,0x20,0x29,0xF3,0x8C,0x40,0xD0,0x0C,
0x00,0x80,0x38,0x09,0x82,0x11,0xC7,0x80,0x13,0x24,
0x29,0xE7,0x31,0x06,0x40,0xA0,0x30,0x90,0x80,0x70,
0x11,0x20,0x24,0xFE,0x42,0x42,0x03,0x01,0x01,0x01,
0x09,0x05,0xFE,0x07,0x8B,0x99,0xF6,0x4C,0x70,0x09,
0x40,0x12,0x62,0x52,0x0A,0x04,0x07,0x8B,0x99,0xF4,
0xC9,0x70,0x0F,0x0C,0x3A,0x06,0x0A,0x09,0x42,0x22,
0x14,0x10,0x0E,0x23,0x9D,0xFC,0x06,0x65,0xD5,0x08,
0x40,0x0A,0xC4,0x18,0xE8,0x93,0xC9,0x3E,0x0D,0x40,
0x1C,0x83,0x08,0x40,0xF5,0x22,0x78,0x0A,0xC4,0x18,
0xE4,0xD0,0x88,0x9C,0x0F,0x40,0x1C,0x08,0x1A,0x01,
0x0F,0x31,0x4C,0x23,0xF0,0x0A,0xC4,0x18,0xF7,0xE2,
0x0C,0x9C,0x0B,0x44,0x14,0x72,0x61,0x0F,0x52,0x1C,
0x0F,0x23,0x61,0xFE,0x21,0x1A,0x24,0x3F,0x44,0x13,
0xE0,0x0F,0x40,0x1C,0x81,0x82,0x10,0x1F,0x52,0x27,
0x70,0x07,0x24,0x10,0xA0,0x35,0x27,0x09,0x9F,0x50,
0x30,0x03,0xC1,0x49,0x80,0x0F,0x40,0x1C,0x81,0x82,
0x10,0x13,0x94,0x18,0x14,0x12,0x3B,0x80,0x07,0x44,
0x10,0x9B,0x53,0x80,0x16,0xC0,0x2C,0xBB,0x9C,0xCA,
0x51,0x13,0xBB,0x80,0x0E,0xC0,0x1C,0xB9,0xCA,0x51,
0x3B,0x80,0x0C,0xC0,0x1C,0xF2,0x38,0x85,0x89,0xE0,
0x0D,0x23,0x5C,0xB3,0x99,0x44,0x91,0xC2,0x0E,0x00,
0x0F,0x23,0x5C,0x79,0x8A,0x61,0x1F,0x40,0x20,0x70,
0x0A,0xC0,0x15,0xB3,0x25,0x0E,0x00,0x08,0xC4,0x19,
0xF1,0x2E,0x4B,0x80,0x09,0x20,0x12,0x51,0xF4,0x87,
0x0E,0xC0,0x1D,0x9A,0x91,0x1F,0x80,0x0E,0xC0,0x1D,
0xCC,0xC8,0x50,0x70,0x30,0x20,0x14,0xC0,0x29,0xDD,
0x91,0x21,0x34,0x2B,0x02,0x60,0x48,0x0E,0xC0,0x1D,
0xD8,0x50,0x20,0x70,0x91,0x9C,0x0F,0x23,0x5D,0xCC,
0xC8,0x48,0x70,0x32,0x04,0x08,0x38,0x00,0x0C,0xC0,
0x18,0xFA,0x20,0x82,0x08,0xBF,0x09,0xE2,0xD4,0x78,
0x88,0xC4,0x18,0x03,0xA7,0x4F,0x79,0x09,0xE6,0xD5,
0x98,0x41,0xC2,0x60,0x10,0x40,0xE0,0xE2,0x8E,
};
/* font data size: 859 bytes */

static const unsigned char Lateef_14_index[] = {
0x00,0x00,0x30,0x20,0x0C,0x05,0x82,0x10,0xCC,0x41,
0x11,0x44,0xB1,0x44,0x5C,0x18,0xC6,0x71,0xAC,0x6E,
0x1D,0x07,0xB2,0x04,0x8B,0x25,0x49,0xF2,0xA4,0xB3,
0x2E,0xCC,0x33,0x30,0xD1,0x35,0xCE,0x03,0x9C,0xF0,
0x3E,0x11,0x04,0x81,0x2A,0x4D,0x93,0xF5,0x29,0x54,
0x58,0x56,0xB5,0xC1,0x75,0x61,0x58,0xD6,0x6D,0xA9,
0x6C,0xDB,0xB7,0x29,0xD6,0x78,0x5E,0x97,0xCA,0x01,
0x85,0x22,0x48,0xC2,0x3D,0x90,0xE4,0xA9,0x42,0x5A,
0x97,0xA6,0x39,0xAA,0x73,0x9E,0xA8,0x5A,0x32,0x94,
0xA7,0xEA,0x9A,0xBE,0xB7,0xB1,0x2C,0xAB,0x52,0xDC,
0xB9,0x2E,0xEB,0xE2,0xFF,0xC1,0xB0,0xCC,0x4F,0x1C,
0xC9,0xF3,0x0C,0xF3,0x44,0xD2,0xF4,0xFD,0x58,
};
/* font index size: 119 bytes */

const ILI9341_t3_font_t Lateef_14 = {
	Lateef_14_index,
	0,
	Lateef_14_data,
	1,
	0,
	32,
	126,
	0,
	0,
	10,
	4,
	4,
	3,
	4,
	4,
	26,
	9
};



static const unsigned char Lateef_16_data[] = {
0x00,0x00,0x00,0xA0,0x02,0x51,0x00,0xBB,0x04,0xC0,
0x05,0x20,0x9C,0xF1,0xB8,0x88,0x08,0x58,0x01,0x10,
0x25,0x04,0x4F,0xF8,0x24,0x7F,0x91,0x21,0x20,0x06,
0x68,0xFD,0x01,0x0F,0xC4,0xAD,0x0E,0x06,0x0E,0x16,
0x25,0x3C,0x10,0x0D,0x58,0x81,0xC7,0x8C,0x21,0xE0,
0x85,0x02,0x24,0x09,0xA7,0x1D,0x26,0x04,0x88,0x24,
0x20,0x91,0x04,0x4C,0x30,0xE0,0x0C,0x58,0x01,0xA0,
0xE0,0x81,0x10,0x09,0x00,0x33,0x87,0x88,0x4C,0x86,
0x34,0x31,0xC1,0x8B,0x27,0x8E,0x01,0x20,0x9C,0x75,
0x03,0x69,0x7D,0x10,0xB6,0x24,0x23,0x03,0x69,0x7D,
0x08,0xC5,0xA6,0x50,0x08,0x48,0x79,0x30,0x30,0xDB,
0x33,0x0A,0x0F,0xED,0xB8,0x18,0x09,0x40,0x85,0x72,
0x10,0x7F,0xE8,0x20,0x02,0x28,0xF4,0x91,0xC2,0x80,
0x04,0x08,0x8C,0xCF,0x02,0x11,0x00,0xF1,0x80,0x04,
0x80,0xF4,0xD2,0x34,0x54,0x97,0x00,0x06,0x58,0x81,
0x03,0x09,0x6E,0x64,0x86,0x00,0x04,0x59,0x01,0x02,
0x76,0x90,0x8E,0x07,0x58,0x81,0x07,0x91,0x0A,0x41,
0x02,0x04,0x08,0x10,0xBF,0x00,0x06,0x58,0x81,0x07,
0x91,0x40,0x41,0x07,0x48,0x28,0x5F,0x00,0x07,0x58,
0x01,0x00,0x40,0xD0,0x28,0x4A,0x11,0x3F,0xC8,0x20,
0x06,0x58,0x81,0x03,0xE1,0x03,0x89,0x81,0xC8,0x28,
0x9E,0x00,0x06,0x58,0x81,0x00,0xC6,0x18,0x20,0xFA,
0xB1,0x24,0x30,0x07,0x58,0x81,0x0F,0xE8,0x40,0x52,
0x12,0x44,0x41,0x00,0x07,0x58,0x81,0x07,0x93,0x08,
0xD0,0xB1,0x0E,0x60,0x9F,0x00,0x06,0x58,0x81,0x07,
0x11,0x54,0x67,0xC1,0x06,0x08,0xE0,0x02,0x31,0x00,
0xC9,0xC0,0x98,0x02,0x51,0x74,0xB1,0x48,0x5C,0x28,
0x05,0x49,0x05,0x01,0x88,0x44,0xC0,0x81,0x03,0x09,
0x20,0x8D,0x6F,0xFC,0x00,0x1F,0xF0,0x05,0x49,0x05,
0x08,0x10,0x20,0x40,0x84,0x21,0x08,0x00,0x05,0x58,
0x80,0xE7,0x4C,0xE0,0x42,0x42,0x20,0x80,0x0E,0x78,
0xF1,0xE0,0xFC,0x06,0x04,0x10,0x04,0x20,0x04,0x87,
0xC9,0x11,0x92,0x42,0x24,0x8C,0x49,0x19,0x12,0x76,
0x27,0x39,0x20,0x04,0x20,0x08,0x20,0x60,0x3F,0x00,
0x0C,0x58,0x01,0x80,0x40,0x80,0x60,0x80,0xB0,0x08,
0x80,0x46,0x03,0xF1,0x04,0x18,0xF1,0xF0,0x0B,0x58,
0x01,0x6F,0xF1,0x46,0x18,0x7F,0x06,0x1E,0x4C,0x1B,
0xFF,0x00,0x0A,0x58,0x81,0x61,0xF8,0x41,0x10,0x26,
0x05,0x58,0x01,0x03,0x30,0x41,0xF0,0x0B,0x58,0x01,
0x8F,0xF0,0x30,0xC3,0x05,0x66,0x0C,0x60,0x86,0x11,
0xFE,0x00,0x0A,0x58,0x01,0x4F,0xFA,0x0C,0x21,0x80,
0x31,0x07,0xE4,0x18,0x90,0x60,0xBF,0xE0,0x09,0x58,
0x01,0x2F,0xFC,0x18,0x46,0x01,0x88,0x7E,0x83,0x14,
0x18,0x1F,0x80,0x0B,0x58,0x81,0x81,0xF4,0x20,0xC4,
0x04,0xC0,0x4C,0x00,0xC1,0xF1,0x81,0x8C,0x18,0x41,
0x83,0xF0,0x0C,0x58,0x01,0x8F,0xFF,0xA3,0x0C,0x1F,
0xE5,0x18,0x63,0xFF,0xC0,0x06,0x58,0x00,0xCF,0xF4,
0xC8,0x31,0xF8,0x07,0x58,0x00,0xC7,0xFA,0x30,0x31,
0x21,0xC0,0x0C,0x58,0x01,0x8F,0xDE,0x18,0x40,0xC4,
0x06,0x40,0x34,0x01,0xE0,0x0D,0x80,0x66,0x03,0x18,
0x18,0x63,0xF7,0xC0,0x0A,0x58,0x01,0x4F,0xC3,0x4C,
0x08,0x30,0x5F,0xF8,0x0F,0x58,0x01,0xEF,0x01,0xE3,
0x01,0x83,0x83,0x82,0x85,0x82,0xC5,0x82,0x49,0x90,
0x4D,0x32,0x08,0xC6,0x3E,0x9F,0x80,0x0C,0x58,0x01,
0x8E,0x1F,0x18,0x20,0xE1,0x05,0x88,0x24,0x41,0x32,
0x08,0xD0,0x43,0x82,0x0C,0x10,0x23,0xE1,0x00,0x0A,
0x58,0x81,0x81,0xE0,0x43,0x10,0x2B,0xC0,0xC8,0x11,
0x84,0x0F,0x00,0x08,0x58,0x01,0x2F,0xEA,0x33,0x1F,
0x51,0x83,0xF0,0x0A,0x70,0xF5,0x81,0xE0,0x43,0x10,
0x2B,0xC0,0xC8,0x11,0x84,0x0F,0x00,0xC0,0x04,0x00,
0x70,0x0B,0x58,0x01,0x6F,0xF1,0x26,0x30,0x62,0x06,
0xC0,0x7C,0x06,0x60,0x62,0x06,0x31,0xF9,0xC0,0x07,
0x58,0x81,0x27,0xA8,0x71,0x04,0xC0,0x70,0x1A,0x20,
0xB0,0xAF,0x00,0x0A,0x58,0x01,0x4F,0xFE,0x23,0x1D,
0x0C,0x07,0xE0,0x0C,0x58,0x01,0x8F,0x1F,0xD6,0x04,
0x30,0x20,0xC2,0x03,0xE0,0x0C,0x58,0x01,0x8F,0x8F,
0x10,0x20,0xC1,0x02,0x10,0x18,0x80,0x44,0x40,0x68,
0x40,0x30,0x00,0x80,0x10,0x58,0x02,0x0F,0x7C,0xF1,
0x0C,0x20,0xC6,0x10,0x63,0x10,0x11,0xC8,0x0D,0x64,
0x06,0x94,0x01,0x4E,0x00,0xC3,0x08,0x04,0x20,0x0C,
0x58,0x01,0x8F,0x8F,0x08,0x40,0x62,0x01,0xA1,0x00,
0xC0,0x0B,0x00,0x4C,0x04,0x60,0x41,0x8F,0x1F,0x0C,
0x58,0x01,0x8F,0x8F,0x18,0x20,0xC2,0x03,0x11,0x01,
0xA1,0x40,0xC0,0x1F,0x80,0x0A,0x58,0x01,0x47,0xFC,
0x82,0x10,0xC0,0x30,0x04,0x01,0x80,0x60,0x08,0x02,
0x04,0xC1,0x3F,0xE0,0x03,0x79,0x74,0xEF,0xB3,0x23,
0x80,0x05,0x60,0x00,0xB1,0x09,0x44,0x92,0x44,0x18,
0x03,0x79,0x74,0xEF,0xA7,0x0B,0x80,0x08,0x52,0x02,
0x10,0x30,0x28,0x82,0x42,0x24,0x21,0x44,0x08,0x08,
0x08,0x79,0x0F,0xF0,0x04,0x18,0xA0,0xC8,0x20,0xC0,
0x06,0x38,0x80,0xE7,0x22,0x23,0xC8,0x91,0xBF,0x07,
0x60,0x01,0x04,0x0C,0x12,0x80,0xFA,0x90,0x91,0x0E,
0x00,0x06,0x38,0x80,0xE7,0x91,0x44,0x08,0x51,0x1C,
0x07,0x60,0x81,0x00,0x40,0xD2,0x08,0x78,0x8A,0xB1,
0x1F,0x80,0x06,0x38,0x80,0xE7,0x91,0xBF,0x40,0x85,
0x89,0xE0,0x06,0x60,0x80,0xC3,0x89,0xCA,0x0F,0x2D,
0x07,0x80,0x07,0x58,0xF1,0x2F,0x88,0x68,0x4C,0x47,
0x88,0x0F,0x87,0xF1,0x04,0xF8,0x08,0x60,0x01,0x04,
0x06,0x04,0xA0,0x17,0x0C,0x54,0x84,0xE7,0x03,0x58,
0x80,0xB0,0xA0,0x13,0x52,0x70,0x04,0x7F,0xF0,0xA3,
0x0C,0x00,0x47,0xA2,0x97,0x00,0x08,0x60,0x81,0x04,
0x06,0x04,0xA0,0x13,0x89,0x07,0x02,0x81,0x60,0x98,
0xEF,0x03,0x60,0x80,0xA4,0xDA,0xA1,0x38,0x0C,0x38,
0x81,0xA5,0xDC,0x73,0x15,0x22,0x13,0xB9,0xC0,0x08,
0x38,0x01,0x0D,0xC3,0x15,0x21,0x39,0xC0,0x06,0x38,
0x81,0x07,0x89,0xCE,0x64,0x8F,0x00,0x07,0x58,0x71,
0x0D,0xC6,0x32,0x86,0x11,0x1E,0x42,0x07,0x00,0x07,
0x58,0xF1,0x03,0xCC,0x55,0x08,0xFA,0x41,0x03,0x80,
0x05,0x38,0x80,0xC5,0xBD,0x48,0x70,0x04,0x38,0x80,
0xCF,0x89,0x34,0x4B,0x80,0x04,0x50,0x00,0xB2,0x8F,
0xA4,0x29,0x80,0x08,0x38,0x01,0x0C,0x6B,0x42,0x1F,
0x80,0x08,0x38,0x01,0x0F,0x31,0x10,0x90,0x68,0x14,
0x0C,0x02,0x00,0x0C,0x38,0x01,0x8E,0xF7,0x31,0x10,
0x89,0x06,0xE9,0x03,0x30,0x10,0x80,0x08,0x38,0x01,
0x0F,0x61,0xA4,0x0C,0x0B,0x08,0x8E,0x70,0x08,0x58,
0x71,0x0F,0x33,0x10,0x88,0x68,0x14,0x0C,0x40,0x44,
0x08,0x38,0x00,0x07,0x38,0x00,0xE7,0xE8,0x40,0x81,
0x02,0x26,0x2F,0xE0,0x04,0x88,0xEC,0xC3,0xD4,0x46,
0xA0,0xC0,0x01,0x80,0xF0,0x7B,0xDC,0x40,0x04,0x88,
0xEC,0xCC,0xD2,0x0E,0x93,0x00,0x09,0x18,0x0D,0x27,
0x09,0x24,0x87,0x00,
};
/* font data size: 1104 bytes */

static const unsigned char Lateef_16_index[] = {
0x00,0x00,0x10,0x05,0x01,0x00,0x3A,0x0A,0xC2,0x10,
0x56,0x0B,0x41,0x84,0x34,0x07,0x40,0xF8,0x20,0x84,
0x30,0x8B,0x12,0x62,0x70,0x51,0x8B,0x01,0x78,0x32,
0x06,0xA0,0xDF,0x1D,0x43,0xD8,0x80,0x90,0x72,0x1C,
0x45,0xC8,0xF9,0x2A,0x26,0x85,0x50,0xB3,0x17,0x43,
0x06,0x64,0x8D,0x11,0xB1,0x38,0x87,0x44,0xEC,0x9E,
0x23,0xF0,0x80,0x90,0xCA,0x2F,0x47,0xA9,0x1D,0x2C,
0xA6,0xB4,0xF2,0xA0,0xD4,0x7A,0xA2,0x57,0x6B,0x3D,
0x6F,0xAF,0x25,0xF2,0xC0,0x98,0x4B,0x15,0x63,0x4C,
0x81,0x94,0xB3,0x56,0x7C,0xD2,0x9A,0xA3,0x5E,0x6D,
0x8D,0xE1,0xC0,0x38,0xA7,0x32,0xE8,0x1D,0x5B,0xB4,
0x77,0xAF,0x25,0xEA,0x3D,0xB7,0xC6,0xFA,0xDF,0x9B,
0xFF,0x81,0xB0,0x62,0x13,0xC3,0x28,0x75,0x10,0x22,
0x40,
};
/* font index size: 131 bytes */

const ILI9341_t3_font_t Lateef_16 = {
	Lateef_16_index,
	0,
	Lateef_16_data,
	1,
	0,
	32,
	126,
	0,
	0,
	11,
	5,
	5,
	4,
	5,
	5,
	31,
	11
};


