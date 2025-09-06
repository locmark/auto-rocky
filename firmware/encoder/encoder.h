#ifndef ENCODER_H
#define ENCODER_H

#include <xc.h>

#include "../mcc_generated_files/system/interrupt.h"
#include "../mcc_generated_files/system/pins.h"

// Callback function type definitions
typedef void (*NoArgsCallback)(void);

// Function prototypes
void Encoder_Init(void);
void Encoder_Update(void);

// Callback registration functions
void Encoder_OnUserButtonClick(NoArgsCallback callback);
void Encoder_OnEncoderButtonClick(NoArgsCallback callback);
void Encoder_OnEncoderRotateCW(NoArgsCallback callback);
void Encoder_OnEncoderRotateCCW(NoArgsCallback callback);

#endif  // ENCODER_H
