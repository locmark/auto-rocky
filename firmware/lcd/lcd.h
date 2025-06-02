#pragma once

#include <stdint.h>

#include "../mcc_generated_files/system/system.h"

#define LCD_CHAR_ARROW_RIGHT (char)0b01111110

void LCD_Write_Nibble(uint8_t n);
void LCD_Cmd(uint8_t Command);
void LCD_Goto(uint8_t col, uint8_t row);
void LCD_PutC(char LCD_Char);
void LCD_Print(char* LCD_Str);
void LCD_Begin(void);
