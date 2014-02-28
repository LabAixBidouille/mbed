#include "atsam4s.h"

#ifdef __cplusplus
extern "C" {
#endif

uint32_t SystemCoreClock = CHIP_FREQ_MAINCK_RC_4MHZ;

/**
 * \brief Setup the microcontroller system.
 * Initialize the System and update the SystemFrequency variable.
 */
void SystemInit( void )
{
	// We stay at 4MHz on internal RC here to let the user choose a given frequency fitting his needs in main().
	// Rationale: putting the core at maximum frequency could be overkill in lot of contexts.
}

void SystemCoreClockUpdate( void )
{
	// The user will see the SystemCoreClock global variable being updated through the clocking API.
}

#ifdef __cplusplus
}
#endif
