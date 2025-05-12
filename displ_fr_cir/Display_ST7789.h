#pragma once
#include <Arduino.h>
#include <SPI.h>
#define LCD_WIDTH   172 //LCD width
#define LCD_HEIGHT  320 //LCD height

#define SPIFreq                        80000000
#define EXAMPLE_PIN_NUM_MISO           -1
// #define EXAMPLE_PIN_NUM_MOSI           13
// #define EXAMPLE_PIN_NUM_SCLK           12
// #define EXAMPLE_PIN_NUM_LCD_CS         14
// #define EXAMPLE_PIN_NUM_LCD_DC         27
// #define EXAMPLE_PIN_NUM_LCD_RST        26
// #define EXAMPLE_PIN_NUM_BK_LIGHT       25
#define EXAMPLE_PIN_NUM_MOSI           23        // (Better use IO23 for MOSI)
#define EXAMPLE_PIN_NUM_SCLK           18        // (Use IO18 for SCLK)
#define EXAMPLE_PIN_NUM_LCD_CS         5         // (Use IO5 for Chip Select CS)
#define EXAMPLE_PIN_NUM_LCD_DC         2         // (Use IO2 for Data/Command DC)
#define EXAMPLE_PIN_NUM_LCD_RST        4         // (Use IO4 for Reset)
#define EXAMPLE_PIN_NUM_BK_LIGHT       15        // (Use IO15 for Backlight PWM)
#define Frequency       1000                    // PWM frequencyconst 
#define Resolution      10                      

#define VERTICAL   0
#define HORIZONTAL 1

#define Offset_X 34
#define Offset_Y 0


void LCD_SetCursor(uint16_t x1, uint16_t y1, uint16_t x2,uint16_t y2);

void LCD_Init(void);
void LCD_SetCursor(uint16_t Xstart, uint16_t Ystart, uint16_t Xend, uint16_t  Yend);
void LCD_addWindow(uint16_t Xstart, uint16_t Ystart, uint16_t Xend, uint16_t Yend,uint16_t* color);

void Backlight_Init(void);
void Set_Backlight(uint8_t Light);
