#include "lcd/interface.h"
#include "lcd/lcd.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/system/system.h"
#include "weightSensor/weightSensor.h"

int main(void) {
    // __delay_ms(1000);
    SYSTEM_Initialize();
    RELAY_SetHigh();
    //    INTERRUPT_GlobalInterruptEnable();

    LCD_RW_SetLow();
    LCD_LED_ON_SetHigh();

    // __delay_ms(100);
    WeightSensor_Init();
    UI_Init();
    // __delay_ms(100);

    while (1) {
        WeightSensor_Update();
        UI_Update();

        __delay_ms(200);
    }
}