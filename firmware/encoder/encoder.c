#include "encoder.h"

#include <stdbool.h>

// Internal variables
static NoArgsCallback userButtonCallback = NULL;
static NoArgsCallback encoderButtonCallback = NULL;
static NoArgsCallback encoderRotateCWCallback = NULL;
static NoArgsCallback encoderRotateCCWCallback = NULL;

static void Enc_A_int_Callback(void) {
    bool currentEncoderB = ENC_B_GetValue();

    if (currentEncoderB) {
        if (encoderRotateCWCallback) {
            encoderRotateCWCallback();
        }
    } else {
        if (encoderRotateCCWCallback) {
            encoderRotateCCWCallback();
        }
    }
}

void Encoder_Init(void) {
    INT0_SetInterruptHandler(Enc_A_int_Callback);
}

void Encoder_Update(void) {
}

// Callback registration functions
void Encoder_OnUserButtonClick(NoArgsCallback callback) {
    userButtonCallback = callback;
}

void Encoder_OnEncoderButtonClick(NoArgsCallback callback) {
    encoderButtonCallback = callback;
}

void Encoder_OnEncoderRotateCW(NoArgsCallback callback) {
    encoderRotateCWCallback = callback;
}

void Encoder_OnEncoderRotateCCW(NoArgsCallback callback) {
    encoderRotateCCWCallback = callback;
}
