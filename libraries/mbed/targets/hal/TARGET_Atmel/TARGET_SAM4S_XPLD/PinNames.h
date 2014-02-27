#ifndef _EC8586E2_C40F_4A8E_BBD0_5304418D4684_
#define _EC8586E2_C40F_4A8E_BBD0_5304418D4684_

#include "atsam4s.h"

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT
} PinDirection;

typedef enum {
    // Other mbed Pin Names
    LED1,
    LED2,

    USBTX,
    USBRX,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

typedef enum {
    PullUp = 2,
    PullDown = 1,
    PullNone = 0,
    Repeater = 3,
    OpenDrain = 4
} PinMode;

#endif // _EC8586E2_C40F_4A8E_BBD0_5304418D4684_
