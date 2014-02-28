#include "rtc_api.h"

#if (defined DEVICE_RTC) && (DEVICE_RTC == 1)
void rtc_init( void )
{
}

void rtc_free( void )
{
}

int rtc_isenabled( void )
{
	return 0l ;
}

time_t rtc_read( void )
{
	return 0l ;
}

void rtc_write( time_t t )
{
}
#endif // (defined DEVICE_RTC) && (DEVICE_RTC == 1)
