#ifndef _HSB_LOG_H_
#define _HSB_LOG_H_

const unsigned char HSBLOGO1 [] = {
	// 'hsb로고, 128x64px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x3f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xe0, 0x00, 0xf8, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x60, 0xf0, 0xf8, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x38, 0x21, 0xf0, 0xf8, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3c, 0x21, 0xf8, 0x70, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x01, 0xf8, 0x70, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x01, 0xf8, 0x31, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x00, 0x0c, 0x21, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x00, 0xfc, 0x01, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x01, 0xfc, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x21, 0xfe, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3c, 0x21, 0xfe, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x38, 0x61, 0xff, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xcf, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xe0, 0x07, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xfc, 0x0f, 0xef, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xfc, 0xff, 0x3e, 0x03, 0xc0, 0xff, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xf0, 0xfc, 0x30, 0x01, 0x00, 0x3f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xf0, 0xfc, 0x20, 0x7f, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0xff, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0xff, 0x0e, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0xff, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xf0, 0xfc, 0x30, 0x7f, 0x0c, 0x1f, 0xff,
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x38, 0x1f, 0x00, 0x7f, 0xff,
	0xff, 0xf8, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x3e, 0x07, 0x00, 0x1f, 0xff,
	0xff, 0xf8, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0x03, 0x0c, 0x0f, 0xff,
	0xff, 0xf8, 0x7f, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0xc1, 0x0e, 0x0f, 0xff,
	0xff, 0xfc, 0x7f, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0xc0, 0x0e, 0x0f, 0xff,
	0xff, 0xfc, 0x3f, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0xe0, 0x0e, 0x0f, 0xff,
	0xff, 0xfe, 0x0f, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x1f, 0xc0, 0x0e, 0x0f, 0xff,
	0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0x81, 0x00, 0x1f, 0xff,
	0xff, 0xff, 0x80, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0x03, 0x00, 0x3f, 0xff,
	0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};
const unsigned char HSBLOGO2 [] = {
	// 'hsb로고reverse, 128x64px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xfc, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xfe, 0x1f, 0x00, 0x07, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xfe, 0x1f, 0x0f, 0x06, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xfe, 0x1f, 0x0f, 0x84, 0x1c, 0x3f, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf8, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x0e, 0x1f, 0x84, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf0, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x0e, 0x1f, 0x80, 0x7c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x8c, 0x1f, 0x80, 0x7c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x84, 0x30, 0x00, 0x7c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x80, 0x3f, 0x00, 0x7c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xc0, 0x3f, 0x80, 0x7c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xc0, 0x7f, 0x84, 0x7c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xc0, 0x7f, 0x84, 0x3c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe0, 0xff, 0x86, 0x1c, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe0, 0xe0, 0x07, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xf3, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf7, 0xf0, 0x3f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcf, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff,
	0xff, 0xff, 0x03, 0xc0, 0x7c, 0xff, 0x3f, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff,
	0xff, 0xfc, 0x00, 0x80, 0x0c, 0x3f, 0x0f, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff,
	0xff, 0xf8, 0x30, 0xfe, 0x04, 0x3f, 0x0f, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff,
	0xff, 0xf8, 0x30, 0xff, 0x00, 0x3f, 0x0f, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff,
	0xff, 0xf8, 0x70, 0xff, 0x00, 0x3f, 0x0f, 0xff, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff,
	0xff, 0xf8, 0x30, 0xff, 0x00, 0x3f, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff,
	0xff, 0xf8, 0x30, 0xfe, 0x0c, 0x3f, 0x0f, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xff,
	0xff, 0xfe, 0x00, 0xf8, 0x1c, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0x0f, 0xff,
	0xff, 0xf8, 0x00, 0xe0, 0x7c, 0x00, 0x0f, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0x1f, 0xff,
	0xff, 0xf0, 0x30, 0xc0, 0xfc, 0x3f, 0x0f, 0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 0xff, 0x1f, 0xff,
	0xff, 0xf0, 0x70, 0x83, 0xfc, 0x3f, 0x0f, 0xff, 0xff, 0xff, 0x01, 0xff, 0xff, 0xfe, 0x1f, 0xff,
	0xff, 0xf0, 0x70, 0x03, 0xfc, 0x3f, 0x0f, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xfe, 0x3f, 0xff,
	0xff, 0xf0, 0x70, 0x07, 0xfc, 0x3f, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xfc, 0x3f, 0xff,
	0xff, 0xf0, 0x70, 0x03, 0xf8, 0x3f, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x7f, 0xf0, 0x7f, 0xff,
	0xff, 0xf8, 0x00, 0x81, 0x00, 0x3f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0xff, 0xff,
	0xff, 0xfc, 0x00, 0xc0, 0x00, 0x3f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x01, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};
const unsigned char HSBLOGO3 [] = {
	// 'hsb로고reverse2, 128x64px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x80, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0x03, 0x00, 0x3f, 0xff,
	0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0x81, 0x00, 0x1f, 0xff,
	0xff, 0xfe, 0x0f, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x1f, 0xc0, 0x0e, 0x0f, 0xff,
	0xff, 0xfc, 0x3f, 0xff, 0xe0, 0x0f, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0xe0, 0x0e, 0x0f, 0xff,
	0xff, 0xfc, 0x7f, 0xff, 0xfc, 0x03, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0xc0, 0x0e, 0x0f, 0xff,
	0xff, 0xf8, 0x7f, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0xc1, 0x0e, 0x0f, 0xff,
	0xff, 0xf8, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xf0, 0xfc, 0x3f, 0x03, 0x0c, 0x0f, 0xff,
	0xff, 0xf8, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x3e, 0x07, 0x00, 0x1f, 0xff,
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x38, 0x1f, 0x00, 0x7f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 0xff, 0xf0, 0xfc, 0x30, 0x7f, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0xff, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0xff, 0x0e, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xf0, 0xfc, 0x00, 0xff, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xf0, 0xfc, 0x20, 0x7f, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xf0, 0xfc, 0x30, 0x01, 0x00, 0x3f, 0xff,
	0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xfc, 0xff, 0x3e, 0x03, 0xc0, 0xff, 0xff,
	0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xfc, 0x0f, 0xef, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xcf, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x00, 0xe0, 0x07, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x38, 0x61, 0xff, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3c, 0x21, 0xfe, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x21, 0xfe, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x01, 0xfc, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x00, 0xfc, 0x01, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x00, 0x0c, 0x21, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x01, 0xf8, 0x31, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3e, 0x01, 0xf8, 0x70, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xfc, 0x3c, 0x21, 0xf8, 0x70, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x38, 0x21, 0xf0, 0xf8, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x60, 0xf0, 0xf8, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xe0, 0x00, 0xf8, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x3f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};
const unsigned char HSBLOGO4 [] = {
	// 'hsb로고회전, 128x64px
	0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xf8, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xfc, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf9, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf8, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf8, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x0f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc7, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xc3, 0x0f, 0xff, 0xff, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xc2, 0x01, 0xff, 0xff, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xc2, 0x1e, 0x3f, 0xff, 0xff,
	0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xc0, 0x1f, 0x0f, 0xff, 0xff,
	0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xc0, 0x1f, 0x0f, 0xff, 0xff,
	0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0x3f, 0x0f, 0x8f, 0xff,
	0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x80, 0x1f, 0x0f, 0x07, 0xff,
	0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x03, 0x0f, 0x0f, 0xff,
	0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x80, 0x08, 0x7f, 0x0e, 0x1f, 0xff,
	0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xf0, 0x18, 0x7f, 0x0c, 0x1f, 0xff,
	0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0x08, 0x3f, 0xff,
	0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xf0, 0xff, 0x80, 0x7f, 0xff,
	0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0x00, 0xff, 0xff,
	0xff, 0xf8, 0x1f, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0x01, 0xff, 0xff,
	0xff, 0xfc, 0x03, 0xff, 0xff, 0xf8, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x81, 0xff, 0xff,
	0xff, 0xff, 0x00, 0x7f, 0xff, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0xff, 0xff,
	0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0xff, 0xff,
	0xff, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xe0, 0x00, 0x1f, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xc0, 0x07, 0x0f, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x0f, 0xc8, 0x7f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0f, 0x03, 0x0f, 0xf0, 0x0f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0x83, 0x07, 0xf0, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0x83, 0x87, 0xf0, 0x41, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0x87, 0xc3, 0xf0, 0xc1, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0x07, 0xe1, 0xe0, 0xc1, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x07, 0xf0, 0xe0, 0xc1, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xf0, 0x60, 0x03, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xf0, 0x00, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xf0, 0x01, 0x0f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x70, 0x03, 0x87, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x03, 0x83, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0x83, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x83, 0x83, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff,
};
const unsigned char HSBLOGO5 [] = {
	// 'hsb로고회전2, 128x64px
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xf1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x70, 0x71, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf8, 0x31, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xfc, 0x11, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xfe, 0x01, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x30, 0xfe, 0x01, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x01, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1e, 0x00, 0x3f, 0x81, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0x00, 0x7f, 0xc1, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0x80, 0x7f, 0xe3, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xc0, 0x3d, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xc6, 0x03, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0x87, 0xc6, 0x0f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0x87, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0x87, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xc3, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x7f, 0xff, 0xff, 0xf8, 0x7f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x1f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x0c, 0x1f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x0e, 0x1f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0x0e, 0x1f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0x06, 0x1f, 0xff,
	0xff, 0xff, 0xfb, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0x00, 0x07, 0xff,
	0xff, 0xff, 0xe1, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb8, 0xff, 0x80, 0x03, 0xff,
	0xff, 0xff, 0xf1, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x10, 0xff, 0x83, 0x83, 0xff,
	0xff, 0xff, 0xf0, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x7f, 0xc3, 0xc3, 0xff,
	0xff, 0xff, 0xf0, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x07, 0xc1, 0xc3, 0xff,
	0xff, 0xff, 0xf8, 0x7f, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xfc, 0x7e, 0x00, 0x00, 0x01, 0xc7, 0xff,
	0xff, 0xff, 0xf8, 0x7f, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xf8, 0x7e, 0x0f, 0x00, 0x01, 0xcf, 0xff,
	0xff, 0xff, 0xfc, 0x7f, 0xff, 0x87, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x0f, 0xf0, 0x00, 0x1f, 0xff,
	0xff, 0xff, 0xfe, 0x3f, 0xff, 0xcf, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0x07, 0xf8, 0x00, 0x3f, 0xff,
	0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xfc, 0x3e, 0x07, 0xfc, 0x01, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xfc, 0x10, 0x03, 0xfc, 0x3f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xfe, 0x03, 0x83, 0xfc, 0x7f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xfe, 0x0f, 0xc3, 0x80, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x9f, 0xff, 0xff, 0xff, 0x8f, 0xff, 0xfe, 0x0f, 0xc0, 0x03, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0x0f, 0xc0, 0x3f, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 0x07, 0xe1, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0x07, 0xef, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x7f, 0xff, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x3f, 0xff, 0xff, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x0f, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x8f, 0xff, 0xff, 0xf0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x87, 0xff, 0xff, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xc7, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xc3, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe3, 0xff, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xe1, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf0, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xf8, 0x3f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xfc, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

#endif
