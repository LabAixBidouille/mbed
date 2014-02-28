#include "us_ticker_api.h"

uint32_t us_ticker_read( void )
{
	return 0l ;
}

void us_ticker_set_handler( ticker_event_handler handler )
{
}

void us_ticker_init( void )
{
}

void us_ticker_set_interrupt( unsigned int timestamp )
{
}

void us_ticker_disable_interrupt( void )
{
}

void us_ticker_clear_interrupt( void )
{
}

void us_ticker_irq_handler( void )
{
}

void us_ticker_insert_event( ticker_event_t *obj, unsigned int timestamp, uint32_t id )
{
}

void us_ticker_remove_event( ticker_event_t *obj )
{
}
