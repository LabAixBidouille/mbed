#include "i2c_api.h"
#include "pinmap.h"

#if (defined DEVICE_I2C) && (DEVICE_I2C == 1)
void i2c_init( i2c_t *obj, PinName sda, PinName scl )
{
}

void i2c_frequency( i2c_t *obj, int hz )
{
}

int  i2c_start( i2c_t *obj )
{
}

int  i2c_stop( i2c_t *obj )
{
}

int  i2c_read( i2c_t *obj, int address, char *data, int length, int stop )
{
}

int  i2c_write( i2c_t *obj, int address, const char *data, int length, int stop )
{
}

void i2c_reset( i2c_t *obj )
{
}

int  i2c_byte_read( i2c_t *obj, int last )
{
}

int  i2c_byte_write( i2c_t *obj, int data )
{
}

void i2c_slave_mode( i2c_t *obj, int enable_slave )
{
}

#if (defined DEVICE_I2CSLAVE) && (DEVICE_I2CSLAVE == 1)
int  i2c_slave_receive( i2c_t *obj )
{
}

int i2c_slave_read( i2c_t *obj, char *data, int length )
{
}

int i2c_slave_write( i2c_t *obj, const char *data, int length )
{
}

void i2c_slave_address( i2c_t *obj, int idx, uint32_t address, uint32_t mask )
{
}
#endif // (defined DEVICE_I2CSLAVE) && (DEVICE_I2CSLAVE == 1)
#endif // (defined DEVICE_I2C) && (DEVICE_I2C == 1)
