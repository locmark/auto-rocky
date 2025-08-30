/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.1
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define LCD_RS_TRIS                 TRISAbits.TRISA0
#define LCD_RS_LAT                  LATAbits.LATA0
#define LCD_RS_PORT                 PORTAbits.RA0
#define LCD_RS_WPU                  WPUAbits.WPUA0
#define LCD_RS_OD                   ODCONAbits.ODCA0
#define LCD_RS_ANS                  ANSELAbits.ANSELA0
#define LCD_RS_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LCD_RS_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LCD_RS_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LCD_RS_GetValue()           PORTAbits.RA0
#define LCD_RS_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LCD_RS_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LCD_RS_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LCD_RS_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LCD_RS_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LCD_RS_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LCD_RS_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define LCD_RS_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA1 aliases
#define LCD_RW_TRIS                 TRISAbits.TRISA1
#define LCD_RW_LAT                  LATAbits.LATA1
#define LCD_RW_PORT                 PORTAbits.RA1
#define LCD_RW_WPU                  WPUAbits.WPUA1
#define LCD_RW_OD                   ODCONAbits.ODCA1
#define LCD_RW_ANS                  ANSELAbits.ANSELA1
#define LCD_RW_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LCD_RW_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LCD_RW_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LCD_RW_GetValue()           PORTAbits.RA1
#define LCD_RW_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LCD_RW_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LCD_RW_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LCD_RW_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LCD_RW_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LCD_RW_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LCD_RW_SetAnalogMode()      do { ANSELAbits.ANSELA1 = 1; } while(0)
#define LCD_RW_SetDigitalMode()     do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 aliases
#define LCD_E_TRIS                 TRISAbits.TRISA2
#define LCD_E_LAT                  LATAbits.LATA2
#define LCD_E_PORT                 PORTAbits.RA2
#define LCD_E_WPU                  WPUAbits.WPUA2
#define LCD_E_OD                   ODCONAbits.ODCA2
#define LCD_E_ANS                  ANSELAbits.ANSELA2
#define LCD_E_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LCD_E_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LCD_E_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LCD_E_GetValue()           PORTAbits.RA2
#define LCD_E_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LCD_E_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LCD_E_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LCD_E_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LCD_E_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LCD_E_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LCD_E_SetAnalogMode()      do { ANSELAbits.ANSELA2 = 1; } while(0)
#define LCD_E_SetDigitalMode()     do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set RA3 aliases
#define LCD_D4_TRIS                 TRISAbits.TRISA3
#define LCD_D4_LAT                  LATAbits.LATA3
#define LCD_D4_PORT                 PORTAbits.RA3
#define LCD_D4_WPU                  WPUAbits.WPUA3
#define LCD_D4_OD                   ODCONAbits.ODCA3
#define LCD_D4_ANS                  ANSELAbits.ANSELA3
#define LCD_D4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LCD_D4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LCD_D4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LCD_D4_GetValue()           PORTAbits.RA3
#define LCD_D4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LCD_D4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LCD_D4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LCD_D4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LCD_D4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LCD_D4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LCD_D4_SetAnalogMode()      do { ANSELAbits.ANSELA3 = 1; } while(0)
#define LCD_D4_SetDigitalMode()     do { ANSELAbits.ANSELA3 = 0; } while(0)

// get/set RA4 aliases
#define LCD_D5_TRIS                 TRISAbits.TRISA4
#define LCD_D5_LAT                  LATAbits.LATA4
#define LCD_D5_PORT                 PORTAbits.RA4
#define LCD_D5_WPU                  WPUAbits.WPUA4
#define LCD_D5_OD                   ODCONAbits.ODCA4
#define LCD_D5_ANS                  ANSELAbits.ANSELA4
#define LCD_D5_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LCD_D5_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LCD_D5_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LCD_D5_GetValue()           PORTAbits.RA4
#define LCD_D5_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LCD_D5_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LCD_D5_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LCD_D5_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LCD_D5_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LCD_D5_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LCD_D5_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define LCD_D5_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define LCD_D6_TRIS                 TRISAbits.TRISA5
#define LCD_D6_LAT                  LATAbits.LATA5
#define LCD_D6_PORT                 PORTAbits.RA5
#define LCD_D6_WPU                  WPUAbits.WPUA5
#define LCD_D6_OD                   ODCONAbits.ODCA5
#define LCD_D6_ANS                  ANSELAbits.ANSELA5
#define LCD_D6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LCD_D6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LCD_D6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LCD_D6_GetValue()           PORTAbits.RA5
#define LCD_D6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LCD_D6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LCD_D6_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LCD_D6_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LCD_D6_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LCD_D6_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LCD_D6_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LCD_D6_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA7 aliases
#define LCD_D7_olc_TRIS                 TRISAbits.TRISA7
#define LCD_D7_olc_LAT                  LATAbits.LATA7
#define LCD_D7_olc_PORT                 PORTAbits.RA7
#define LCD_D7_olc_WPU                  WPUAbits.WPUA7
#define LCD_D7_olc_OD                   ODCONAbits.ODCA7
#define LCD_D7_olc_ANS                  ANSELAbits.ANSELA7
#define LCD_D7_olc_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LCD_D7_olc_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LCD_D7_olc_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LCD_D7_olc_GetValue()           PORTAbits.RA7
#define LCD_D7_olc_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LCD_D7_olc_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LCD_D7_olc_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LCD_D7_olc_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LCD_D7_olc_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LCD_D7_olc_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LCD_D7_olc_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LCD_D7_olc_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB0 aliases
#define USER_BTN_TRIS                 TRISBbits.TRISB0
#define USER_BTN_LAT                  LATBbits.LATB0
#define USER_BTN_PORT                 PORTBbits.RB0
#define USER_BTN_WPU                  WPUBbits.WPUB0
#define USER_BTN_OD                   ODCONBbits.ODCB0
#define USER_BTN_ANS                  ANSELBbits.ANSELB0
#define USER_BTN_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define USER_BTN_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define USER_BTN_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define USER_BTN_GetValue()           PORTBbits.RB0
#define USER_BTN_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define USER_BTN_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define USER_BTN_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define USER_BTN_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define USER_BTN_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define USER_BTN_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define USER_BTN_SetAnalogMode()      do { ANSELBbits.ANSELB0 = 1; } while(0)
#define USER_BTN_SetDigitalMode()     do { ANSELBbits.ANSELB0 = 0; } while(0)

// get/set RB1 aliases
#define ENC_B_TRIS                 TRISBbits.TRISB1
#define ENC_B_LAT                  LATBbits.LATB1
#define ENC_B_PORT                 PORTBbits.RB1
#define ENC_B_WPU                  WPUBbits.WPUB1
#define ENC_B_OD                   ODCONBbits.ODCB1
#define ENC_B_ANS                  ANSELBbits.ANSELB1
#define ENC_B_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define ENC_B_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define ENC_B_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define ENC_B_GetValue()           PORTBbits.RB1
#define ENC_B_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define ENC_B_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define ENC_B_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define ENC_B_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define ENC_B_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define ENC_B_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define ENC_B_SetAnalogMode()      do { ANSELBbits.ANSELB1 = 1; } while(0)
#define ENC_B_SetDigitalMode()     do { ANSELBbits.ANSELB1 = 0; } while(0)

// get/set RB2 aliases
#define ENC_A_INT_TRIS                 TRISBbits.TRISB2
#define ENC_A_INT_LAT                  LATBbits.LATB2
#define ENC_A_INT_PORT                 PORTBbits.RB2
#define ENC_A_INT_WPU                  WPUBbits.WPUB2
#define ENC_A_INT_OD                   ODCONBbits.ODCB2
#define ENC_A_INT_ANS                  ANSELBbits.ANSELB2
#define ENC_A_INT_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define ENC_A_INT_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define ENC_A_INT_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define ENC_A_INT_GetValue()           PORTBbits.RB2
#define ENC_A_INT_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define ENC_A_INT_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define ENC_A_INT_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define ENC_A_INT_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define ENC_A_INT_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define ENC_A_INT_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define ENC_A_INT_SetAnalogMode()      do { ANSELBbits.ANSELB2 = 1; } while(0)
#define ENC_A_INT_SetDigitalMode()     do { ANSELBbits.ANSELB2 = 0; } while(0)

// get/set RB3 aliases
#define ENC_SW_TRIS                 TRISBbits.TRISB3
#define ENC_SW_LAT                  LATBbits.LATB3
#define ENC_SW_PORT                 PORTBbits.RB3
#define ENC_SW_WPU                  WPUBbits.WPUB3
#define ENC_SW_OD                   ODCONBbits.ODCB3
#define ENC_SW_ANS                  ANSELBbits.ANSELB3
#define ENC_SW_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define ENC_SW_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define ENC_SW_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define ENC_SW_GetValue()           PORTBbits.RB3
#define ENC_SW_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define ENC_SW_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define ENC_SW_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define ENC_SW_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define ENC_SW_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define ENC_SW_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define ENC_SW_SetAnalogMode()      do { ANSELBbits.ANSELB3 = 1; } while(0)
#define ENC_SW_SetDigitalMode()     do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 aliases
#define TENS_CLK_TRIS                 TRISBbits.TRISB4
#define TENS_CLK_LAT                  LATBbits.LATB4
#define TENS_CLK_PORT                 PORTBbits.RB4
#define TENS_CLK_WPU                  WPUBbits.WPUB4
#define TENS_CLK_OD                   ODCONBbits.ODCB4
#define TENS_CLK_ANS                  ANSELBbits.ANSELB4
#define TENS_CLK_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define TENS_CLK_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define TENS_CLK_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define TENS_CLK_GetValue()           PORTBbits.RB4
#define TENS_CLK_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define TENS_CLK_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define TENS_CLK_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define TENS_CLK_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define TENS_CLK_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define TENS_CLK_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define TENS_CLK_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define TENS_CLK_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB5 aliases
#define TENS_DATA_TRIS                 TRISBbits.TRISB5
#define TENS_DATA_LAT                  LATBbits.LATB5
#define TENS_DATA_PORT                 PORTBbits.RB5
#define TENS_DATA_WPU                  WPUBbits.WPUB5
#define TENS_DATA_OD                   ODCONBbits.ODCB5
#define TENS_DATA_ANS                  ANSELBbits.ANSELB5
#define TENS_DATA_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define TENS_DATA_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define TENS_DATA_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define TENS_DATA_GetValue()           PORTBbits.RB5
#define TENS_DATA_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define TENS_DATA_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define TENS_DATA_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define TENS_DATA_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define TENS_DATA_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define TENS_DATA_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define TENS_DATA_SetAnalogMode()      do { ANSELBbits.ANSELB5 = 1; } while(0)
#define TENS_DATA_SetDigitalMode()     do { ANSELBbits.ANSELB5 = 0; } while(0)

// get/set RC0 aliases
#define LCD_LED_ON_TRIS                 TRISCbits.TRISC0
#define LCD_LED_ON_LAT                  LATCbits.LATC0
#define LCD_LED_ON_PORT                 PORTCbits.RC0
#define LCD_LED_ON_WPU                  WPUCbits.WPUC0
#define LCD_LED_ON_OD                   ODCONCbits.ODCC0
#define LCD_LED_ON_ANS                  ANSELCbits.ANSELC0
#define LCD_LED_ON_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LCD_LED_ON_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LCD_LED_ON_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LCD_LED_ON_GetValue()           PORTCbits.RC0
#define LCD_LED_ON_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LCD_LED_ON_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LCD_LED_ON_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LCD_LED_ON_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LCD_LED_ON_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LCD_LED_ON_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LCD_LED_ON_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define LCD_LED_ON_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 aliases
#define LCD_D7_TRIS                 TRISCbits.TRISC1
#define LCD_D7_LAT                  LATCbits.LATC1
#define LCD_D7_PORT                 PORTCbits.RC1
#define LCD_D7_WPU                  WPUCbits.WPUC1
#define LCD_D7_OD                   ODCONCbits.ODCC1
#define LCD_D7_ANS                  ANSELCbits.ANSELC1
#define LCD_D7_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LCD_D7_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LCD_D7_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LCD_D7_GetValue()           PORTCbits.RC1
#define LCD_D7_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LCD_D7_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LCD_D7_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LCD_D7_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LCD_D7_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LCD_D7_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LCD_D7_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define LCD_D7_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 aliases
#define IO_RC2_TRIS                 TRISCbits.TRISC2
#define IO_RC2_LAT                  LATCbits.LATC2
#define IO_RC2_PORT                 PORTCbits.RC2
#define IO_RC2_WPU                  WPUCbits.WPUC2
#define IO_RC2_OD                   ODCONCbits.ODCC2
#define IO_RC2_ANS                  ANSELCbits.ANSELC2
#define IO_RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IO_RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IO_RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IO_RC2_GetValue()           PORTCbits.RC2
#define IO_RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IO_RC2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IO_RC2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IO_RC2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define IO_RC2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define IO_RC2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define IO_RC2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_WPU                  WPUCbits.WPUC3
#define IO_RC3_OD                   ODCONCbits.ODCC3
#define IO_RC3_ANS                  ANSELCbits.ANSELC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IO_RC3_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IO_RC3_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define IO_RC3_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 aliases
#define BUZZER_TRIS                 TRISCbits.TRISC4
#define BUZZER_LAT                  LATCbits.LATC4
#define BUZZER_PORT                 PORTCbits.RC4
#define BUZZER_WPU                  WPUCbits.WPUC4
#define BUZZER_OD                   ODCONCbits.ODCC4
#define BUZZER_ANS                  ANSELCbits.ANSELC4
#define BUZZER_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define BUZZER_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define BUZZER_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define BUZZER_GetValue()           PORTCbits.RC4
#define BUZZER_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define BUZZER_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define BUZZER_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define BUZZER_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define BUZZER_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define BUZZER_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define BUZZER_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define BUZZER_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define RELAY_TRIS                 TRISCbits.TRISC5
#define RELAY_LAT                  LATCbits.LATC5
#define RELAY_PORT                 PORTCbits.RC5
#define RELAY_WPU                  WPUCbits.WPUC5
#define RELAY_OD                   ODCONCbits.ODCC5
#define RELAY_ANS                  ANSELCbits.ANSELC5
#define RELAY_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RELAY_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RELAY_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RELAY_GetValue()           PORTCbits.RC5
#define RELAY_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RELAY_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RELAY_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define RELAY_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define RELAY_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define RELAY_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define RELAY_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RELAY_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define DEBUG1_TRIS                 TRISCbits.TRISC6
#define DEBUG1_LAT                  LATCbits.LATC6
#define DEBUG1_PORT                 PORTCbits.RC6
#define DEBUG1_WPU                  WPUCbits.WPUC6
#define DEBUG1_OD                   ODCONCbits.ODCC6
#define DEBUG1_ANS                  ANSELCbits.ANSELC6
#define DEBUG1_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define DEBUG1_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define DEBUG1_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define DEBUG1_GetValue()           PORTCbits.RC6
#define DEBUG1_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define DEBUG1_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define DEBUG1_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define DEBUG1_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define DEBUG1_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define DEBUG1_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define DEBUG1_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define DEBUG1_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 aliases
#define DEBUG2_TRIS                 TRISCbits.TRISC7
#define DEBUG2_LAT                  LATCbits.LATC7
#define DEBUG2_PORT                 PORTCbits.RC7
#define DEBUG2_WPU                  WPUCbits.WPUC7
#define DEBUG2_OD                   ODCONCbits.ODCC7
#define DEBUG2_ANS                  ANSELCbits.ANSELC7
#define DEBUG2_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define DEBUG2_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define DEBUG2_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define DEBUG2_GetValue()           PORTCbits.RC7
#define DEBUG2_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define DEBUG2_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define DEBUG2_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define DEBUG2_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define DEBUG2_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define DEBUG2_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define DEBUG2_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define DEBUG2_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/