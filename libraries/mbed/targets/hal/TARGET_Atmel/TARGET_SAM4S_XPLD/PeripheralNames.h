#ifndef _51DDD351_F24B_4DDB_AB24_60290FC3D04B_
#define _51DDD351_F24B_4DDB_AB24_60290FC3D04B_

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    UART_0 = (unsigned long)UART0,
    UART_1 = (unsigned long)UART1,
    UART_2 = (unsigned long)USART0,
    UART_3 = (unsigned long)USART1,
} UARTName;

#define STDIO_UART_TX     USBTX
#define STDIO_UART_RX     USBRX
#define STDIO_UART        UART_0

typedef enum {
    ADC0_0 = 0,
    ADC0_1,
    ADC0_2,
    ADC0_3,
    ADC0_4,
    ADC0_5,
    ADC0_6,
    ADC0_7,
    ADC0_8,
    ADC0_9,
    ADC0_10,
    ADC0_11,
    ADC0_12,
    ADC0_13,
    ADC0_14,
    ADC0_15
} ADCName;

typedef enum {
    DAC_0 = 0,
    DAC_1
} DACName;

typedef enum {
    SPI_0 = (unsigned long)SPI,
} SPIName;

typedef enum {
    I2C_1 = (unsigned long)TWI0,
    I2C_2 = (unsigned long)TWI1,
} I2CName;

typedef enum {
    PWM_1 = 1,
    PWM_2,
    PWM_3,
    PWM_4
} PWMName;

#ifdef __cplusplus
}
#endif

#endif // _51DDD351_F24B_4DDB_AB24_60290FC3D04B_
