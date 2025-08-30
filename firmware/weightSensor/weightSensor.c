#include "weightSensor.h"

#include <stdbool.h>
#include <stdint.h>

#include "../mcc_generated_files/system/system.h"

static const float maxLoadKg = 2.0f;
static const float cellSensitivityVoltPerVolt = 0.00095f;
static const float maxReadingValue = ((int32_t)1) << 23;  // 2^23
static const float gain = 128;

static const float scaleFactor = maxLoadKg / (maxReadingValue * cellSensitivityVoltPerVolt * gain * 2);

int32_t WeightSensor_reading_g_x10 = 0;

static int32_t offset_g_x10 = 200;

static uint32_t rawReading = 0;

static int32_t interpret24bitAsInt32(uint32_t number) {
    if (number >= ((int32_t)1) << 23)
        // return (uint32_t)number | 0xFF000000u;
        return number - 16777216;
    return number;
}

static bool isReadingReady(void) {
    bool dataLineState = TENS_DATA_GetValue();

    return !dataLineState;
}

void WeightSensor_Init(void) {
    TENS_CLK_SetLow();
}

void WeightSensor_Update(void) {
    if (!isReadingReady()) {
        return;
    }

    rawReading = 0;

    for (size_t i = 0; i < 25; i++) {
        TENS_CLK_SetHigh();

        rawReading <<= 1;

        TENS_CLK_SetLow();

        rawReading |= TENS_DATA_GetValue();

        // __NOP();
    }

    // discard last bit
    rawReading >>= 1;

    const float reading = (float)interpret24bitAsInt32(rawReading);
    const float weight = reading * scaleFactor;
    WeightSensor_reading_g_x10 = -weight * 10000 - offset_g_x10;
}

void WeightSensor_SetOffset(int32_t weight_g_x10) {
    offset_g_x10 = weight_g_x10;
}
