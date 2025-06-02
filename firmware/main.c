#include "lcd/lcd.h"
#include "mcc_generated_files/system/system.h"

int main(void) {
    __delay_ms(1000);
//    SYSTEM_Initialize();
//    INTERRUPT_GlobalInterruptEnable();

//    LCD_RW_SetHigh();
//    LCD_LED_ON_SetHigh();

    __delay_ms(100);

//    LCD_Begin();
//    __delay_ms(100);

//    LCD_Print("Hello World!");

    while (1) {
        //        LCD_LED_ON_Toggle();
//        DEBUG1_Toggle();
//        __delay_ms(1000);
//        DEBUG2_Toggle();
//        __delay_ms(1000);
        TRISAbits.TRISA7 = 0; // 0 - output; 1 - input
        LCD_D7_Toggle();
        __delay_ms(10);
//        
//        __delay_ms(100);
//
//        LCD_Begin();
//        __delay_ms(100);
//
//        LCD_Print("Hello World!");
    }
}