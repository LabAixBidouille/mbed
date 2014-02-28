/* mbed Microcontroller Library - cmsis_nvic
 * Copyright (c) 2014 FabLab Provence
 *
 * CMSIS-style functionality to support dynamic vectors
 */

#ifndef MBED_CMSIS_NVIC_H
#define MBED_CMSIS_NVIC_H

#include "atsam.h"

#define NVIC_NUM_VECTORS      (16 + PERIPH_COUNT_IRQn)   // CORE + MCU Peripherals
#define NVIC_USER_IRQ_OFFSET  16

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

void NVIC_SetVector( IRQn_Type IRQn, uint32_t vector ) ;
uint32_t NVIC_GetVector( IRQn_Type IRQn ) ;

#ifdef __cplusplus
}
#endif

#endif
