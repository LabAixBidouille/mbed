#include "spi_api.h"
#include "pinmap.h"

#if (defined DEVICE_SPI) && (DEVICE_SPI == 1)
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

#if (defined DEVICE_SPISLAVE) && (DEVICE_SPISLAVE == 1)

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
#endif // (defined  DEVICE_SPISLAVE) && ( DEVICE_SPISLAVE == 1)

int spi_busy( spi_t *obj )
{
	return 0 ;
}
#endif // (defined DEVICE_SPI) && (DEVICE_SPI == 1)
