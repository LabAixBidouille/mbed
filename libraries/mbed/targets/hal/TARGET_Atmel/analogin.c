#include "analogin_api.h"

#if (defined DEVICE_ANALOGIN) && (DEVICE_ANALOGIN == 1)
void analogin_init( analogin_t *obj, PinName pin )
{
}

float analogin_read( analogin_t *obj )
{
	return 0.0f ;
}

uint16_t analogin_read_u16( analogin_t *obj )
{
	return 0u ;
}
#endif // (defined DEVICE_ANALOGIN) && (DEVICE_ANALOGIN == 1)
