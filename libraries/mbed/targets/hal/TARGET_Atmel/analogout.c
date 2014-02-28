#include "analogout_api.h"

#if (defined DEVICE_ANALOGOUT) && (DEVICE_ANALOGOUT == 1)

void analogout_init( dac_t *obj, PinName pin )
{
}

void analogout_free( dac_t *obj )
{
}

void analogout_write( dac_t *obj, float value )
{
}

void analogout_write_u16( dac_t *obj, uint16_t value )
{
}

float analogout_read( dac_t *obj )
{
	return 0.0f ;
}

uint16_t analogout_read_u16 (dac_t *obj )
{
	return 0u ;
}
#endif // (defined DEVICE_ANALOGOUT) && (DEVICE_ANALOGOUT == 1)
