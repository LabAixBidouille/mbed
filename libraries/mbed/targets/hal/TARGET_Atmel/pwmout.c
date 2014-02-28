#include "pwmout_api.h"

#if (defined DEVICE_PWMOUT) && (DEVICE_PWMOUT == 1)

void pwmout_init( pwmout_t* obj, PinName pin )
{
}

void pwmout_free( pwmout_t* obj )
{
}


void  pwmout_write( pwmout_t* obj, float percent )
{
}

float pwmout_read( pwmout_t* obj )
{
	return 0.0f ;
}


void pwmout_period( pwmout_t* obj, float seconds )
{
}

void pwmout_period_ms( pwmout_t* obj, int ms )
{
}

void pwmout_period_us( pwmout_t* obj, int us )
{
}


void pwmout_pulsewidth( pwmout_t* obj, float seconds )
{
}

void pwmout_pulsewidth_ms( pwmout_t* obj, int ms )
{
}

void pwmout_pulsewidth_us( pwmout_t* obj, int us )
{
}

#endif // (defined DEVICE_PWMOUT) && (DEVICE_PWMOUT == 1)
