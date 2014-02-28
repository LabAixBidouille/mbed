#include "device.h"
#include "serial_api.h"

#if (defined DEVICE_SERIAL) && (DEVICE_SERIAL == 1)

void serial_init( serial_t *obj, PinName tx, PinName rx )
{
}

void serial_free( serial_t *obj )
{
}

void serial_baud( serial_t *obj, int baudrate )
{
}

void serial_format( serial_t *obj, int data_bits, SerialParity parity, int stop_bits )
{
}

void serial_irq_handler( serial_t *obj, uart_irq_handler handler, uint32_t id )
{
}

void serial_irq_set( serial_t *obj, SerialIrq irq, uint32_t enable )
{
}

int serial_getc( serial_t *obj )
{
  return 0 ;
}

void serial_putc( serial_t *obj, int c )
{
}

int serial_readable( serial_t *obj )
{
  return 0 ;
}

int serial_writable( serial_t *obj )
{
  return 0 ;
}

void serial_clear( serial_t *obj )
{
}

void serial_break_set( serial_t *obj )
{
}

void serial_break_clear( serial_t *obj )
{
}

void serial_pinout_tx( PinName tx )
{
}

void serial_set_flow_control( serial_t *obj, FlowControl type, PinName rxflow, PinName txflow )
{
}

#endif // (defined DEVICE_SERIAL) && (DEVICE_SERIAL == 1)
