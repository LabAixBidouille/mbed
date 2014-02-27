#ifndef _92BAA14D_309C_47B0_BB91_043340C166C1_
#define _92BAA14D_309C_47B0_BB91_043340C166C1_

#include "cmsis.h"
#include "PortNames.h"
#include "PeripheralNames.h"
#include "PinNames.h"

#ifdef __cplusplus
extern "C" {
#endif

struct gpio_irq_s {
};

struct port_s {
};

struct pwmout_s {
};

struct serial_s {
};

struct analogin_s {
};

struct dac_s {
};

#if (DEVICE_CAN == 1)
struct can_s {
};
#endif

struct i2c_s {
};

struct spi_s {
};

#include "gpio_object.h"

#ifdef __cplusplus
}
#endif

#endif // _92BAA14D_309C_47B0_BB91_043340C166C1_
