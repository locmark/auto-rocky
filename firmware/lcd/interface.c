#include "interface.h"

#include <stdio.h>
#include <stdint.h>
#include "../weightSensor/weightSensor.h"

static char line1[15];
static char line2[15];

static void cleanLines(void) {
    for (uint8_t i = 0; i < 15; i++) {
        line1[i] = ' ';
        line2[i] = ' ';
    }
}

static void drawLines(void) {
    LCD_Goto(1, 1);
    LCD_Print(line1);
    LCD_Goto(1, 2);
    LCD_Print(line2);
}

static void printWeight(int32_t weight_g_x10, char* buf, size_t maxSize) {
    int weight_g_x10_abs = abs(weight_g_x10);

    int integer_part = weight_g_x10 / 10;
    int fractional_part = weight_g_x10_abs % 10;

    snprintf(buf, maxSize, "%3d.%1d", integer_part, fractional_part);
}

void UI_Init(void) {
    LCD_Begin();
    cleanLines();
    snprintf(line1, sizeof(line1), "auto grinder");
    snprintf(line2, sizeof(line2), "starting...");
    drawLines();
}

void UI_Update(void) {
    cleanLines();

    snprintf(line1, sizeof(line1), "auto grinder");
    printWeight(current_weight_g_x10, line2, sizeof(line2));
    line2[5] = '/';
    printWeight(target_weight_g_x10, line2 + 6, sizeof(line2) - 6);

    drawLines();
}