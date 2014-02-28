#include "gpio_irq_api.h"

#if (defined DEVICE_INTERRUPTIN) && (DEVICE_INTERRUPTIN == 1)
int  gpio_irq_init( gpio_irq_t *obj, PinName pin, gpio_irq_handler handler, uint32_t id )
{
	return 0l ;
}

void gpio_irq_free( gpio_irq_t *obj )
{
}

void gpio_irq_set( gpio_irq_t *obj, gpio_irq_event event, uint32_t enable )
{
}

void gpio_irq_enable( gpio_irq_t *obj )
{
}

void gpio_irq_disable( gpio_irq_t *obj )
{
}
#endif // (defined DEVICE_INTERRUPTIN) && (DEVICE_INTERRUPTIN == 1)
