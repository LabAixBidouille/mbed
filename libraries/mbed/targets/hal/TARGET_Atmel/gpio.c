#include "gpio_api.h"

/*
	Following functions are implemented in dedicated gpio_object.h to have them inlined
	- void gpio_write( gpio_t *obj, int value ) ;
	- int  gpio_read( gpio_t *obj ) ;
*/

uint32_t gpio_set( PinName pin )
{
	return 0ul ;
}

void gpio_init( gpio_t *obj, PinName pin, PinDirection direction )
{
}

void gpio_mode( gpio_t *obj, PinMode mode )
{
}

void gpio_dir( gpio_t *obj, PinDirection direction )
{
}

