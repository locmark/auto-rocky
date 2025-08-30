#include "lcd/lcd.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/system/system.h"
#include "weightSensor/weightSensor.h"

int main(void) {
    __delay_ms(1000);
    SYSTEM_Initialize();
    //    INTERRUPT_GlobalInterruptEnable();

    LCD_RW_SetLow();
    LCD_LED_ON_SetHigh();

    __delay_ms(100);
    WeightSensor_Init();

    LCD_Begin();
    __delay_ms(100);

    while (1) {
        WeightSensor_Update();
        int weight = (int)(WeightSensor_reading * 10000);
        
        char buffer[15];
        sprintf(buffer, "%d    ", weight);
        
        LCD_Goto(1, 1);
        LCD_Print(buffer);
        
        __delay_ms(200);
    }
}