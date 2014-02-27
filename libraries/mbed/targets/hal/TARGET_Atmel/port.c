#include "port_api.h"

PinName port_pin( PortName port, int pin_n )
{
}

void port_init ( port_t *obj, PortName port, int mask, PinDirection dir )
{
}

void port_mode( port_t *obj, PinMode mode)
{
}

void port_dir( port_t *obj, PinDirection dir )
{
}

void port_write( port_t *obj, int value )
{
}

int  port_read( port_t *obj )
{
}
