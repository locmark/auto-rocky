#include "encoder/encoder.h"
#include "lcd/interface.h"
#include "lcd/lcd.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/system/system.h"
#include "weightSensor/weightSensor.h"

// Weight variables (in g x10)
int32_t current_weight_g_x10 = 0;
int32_t target_weight_g_x10 = 180;  // Default target weight

// Callback functions for encoder events
void OnUserButtonClick(void) {
    // Handle user button click
    // Add your custom logic here
}

void OnEncoderButtonClick(void) {
    // Handle encoder button click
    // Add your custom logic here
}

void OnEncoderRotateCW(void) {
    // Adjust target weight based on encoder direction
    // Each step changes target by 1g (10 units in g x10)
    target_weight_g_x10 += 10;  // Increase by 1g

    // Keep target weight within reasonable bounds (0-500g)
    if (target_weight_g_x10 < 0) {
        target_weight_g_x10 = 0;
    } else if (target_weight_g_x10 > 5000) {  // 500g in g x10
        target_weight_g_x10 = 5000;
    }
}

void OnEncoderRotateCCW(void) {
    // Adjust target weight based on encoder direction
    // Each step changes target by 1g (10 units in g x10)
    target_weight_g_x10 -= 10;  // Decrease by 1g

    // Keep target weight within reasonable bounds (0-500g)
    if (target_weight_g_x10 < 0) {
        target_weight_g_x10 = 0;
    } else if (target_weight_g_x10 > 5000) {  // 500g in g x10
        target_weight_g_x10 = 5000;
    }
}

int main(void) {
    // __delay_ms(1000);
    SYSTEM_Initialize();
    RELAY_SetHigh();
    INTERRUPT_GlobalInterruptEnable();

    LCD_RW_SetLow();
    LCD_LED_ON_SetHigh();

    // __delay_ms(100);
    WeightSensor_Init();
    UI_Init();

    Encoder_Init();

    Encoder_OnUserButtonClick(OnUserButtonClick);
    Encoder_OnEncoderButtonClick(OnEncoderButtonClick);
    Encoder_OnEncoderRotateCW(OnEncoderRotateCW);
    Encoder_OnEncoderRotateCCW(OnEncoderRotateCCW);

    while (1) {
        WeightSensor_Update();

        // Update current weight from weight sensor
        current_weight_g_x10 = WeightSensor_reading_g_x10;

        UI_Update();
        Encoder_Update();  // Update encoder state

        __delay_ms(10);
    }
}