#ifndef _E526DDA9_25E8_4664_9BCA_2A428618CB4E_
#define _E526DDA9_25E8_4664_9BCA_2A428618CB4E_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    PinName  pin;
    uint32_t mask;

    __IO uint32_t *reg_mode;
    __IO uint16_t *reg_set;
    __IO uint16_t *reg_clr;
    __I  uint32_t *reg_in;
    __O  uint32_t *reg_out;
} gpio_t;

static inline void gpio_write( gpio_t *obj, int value )
{
    if (value)
	{
        *obj->reg_set = obj->mask;
	}
    else
	{
        *obj->reg_clr = obj->mask;
	}
}

static inline int gpio_read( gpio_t *obj )
{
    return ((*obj->reg_in & obj->mask) ? 1 : 0) ;
}

#ifdef __cplusplus
}
#endif

#endif // _E526DDA9_25E8_4664_9BCA_2A428618CB4E_
