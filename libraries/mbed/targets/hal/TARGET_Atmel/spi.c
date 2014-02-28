#include "spi_api.h"

void spi_init( spi_t *obj, PinName mosi, PinName miso, PinName sclk, PinName ssel )
{
}

void spi_free( spi_t *obj )
{
}

void spi_format( spi_t *obj, int bits, int mode, int slave )
{
}

void spi_frequency( spi_t *obj, int hz )
{
}

int spi_master_write( spi_t *obj, int value )
{
	return 0 ;
}

int spi_slave_receive( spi_t *obj )
{
	return 0 ;
}

int spi_slave_read( spi_t *obj )
{
	return 0 ;
}

void spi_slave_write( spi_t *obj, int value )
{
}

int spi_busy( spi_t *obj )
{
	return 0 ;
}
