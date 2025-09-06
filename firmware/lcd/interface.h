#pragma once

#include "lcd.h"
#include <stdint.h>

// External weight variables from main.c
extern int32_t current_weight_g_x10;
extern int32_t target_weight_g_x10;

void UI_Init(void);
void UI_Update(void);