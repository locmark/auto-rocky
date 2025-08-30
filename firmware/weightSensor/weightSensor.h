#pragma once

#include <stdint.h>

extern int32_t WeightSensor_reading_g_x10;

void WeightSensor_Init(void);
void WeightSensor_Update(void);
void WeightSensor_SetOffset(int32_t weight_g_x10);