#ifndef _FC657EE0_8783_49CA_B0DE_2B55215D3017_
#define _FC657EE0_8783_49CA_B0DE_2B55215D3017_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

extern uint32_t SystemCoreClock; /* System Clock Frequency (Core Clock) */

/**
 * @brief Setup the microcontroller system.
 * Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void);

/**
 * @brief Updates the SystemCoreClock with current core Clock
 * retrieved from cpu registers.
 */
void SystemCoreClockUpdate(void);

/**
 * Initialize flash.
 */
void system_init_flash(uint32_t dw_clk);

#ifdef __cplusplus
}
#endif

#endif /* _FC657EE0_8783_49CA_B0DE_2B55215D3017_ */
