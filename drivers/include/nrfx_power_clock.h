/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#ifndef NRFX_POWER_CLOCK_H__
#define NRFX_POWER_CLOCK_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif


__STATIC_INLINE void nrfx_power_clock_irq_init(void)
{
    uint8_t priority;
#if NRFX_CHECK(NRFX_POWER_ENABLED) && NRFX_CHECK(NRFX_CLOCK_ENABLED)
    #if NRFX_POWER_DEFAULT_CONFIG_IRQ_PRIORITY != NRFX_CLOCK_DEFAULT_CONFIG_IRQ_PRIORITY
    #error "IRQ priorities for POWER and CLOCK must be the same. Check <nrfx_config.h>."
    #endif
    priority = NRFX_POWER_DEFAULT_CONFIG_IRQ_PRIORITY;
#elif NRFX_CHECK(NRFX_POWER_ENABLED)
    priority = NRFX_POWER_DEFAULT_CONFIG_IRQ_PRIORITY;
#elif NRFX_CHECK(NRFX_CLOCK_ENABLED)
    priority = NRFX_CLOCK_DEFAULT_CONFIG_IRQ_PRIORITY;
#else
    #error "This code is not supposed to be compiled when neither POWER nor CLOCK is enabled."
#endif

    if (!NRFX_IRQ_IS_ENABLED(nrfx_get_irq_number(NRF_CLOCK)))
    {
        NRFX_IRQ_PRIORITY_SET(nrfx_get_irq_number(NRF_CLOCK), priority);
        NRFX_IRQ_ENABLE(nrfx_get_irq_number(NRF_CLOCK));
    }
}

#if NRFX_CHECK(NRFX_POWER_ENABLED) && NRFX_CHECK(NRFX_CLOCK_ENABLED)
void nrfx_power_clock_irq_handler(void);
#elif NRFX_CHECK(NRFX_POWER_ENABLED)
#define nrfx_power_irq_handler  nrfx_power_clock_irq_handler
#elif NRFX_CHECK(NRFX_CLOCK_ENABLED)
#define nrfx_clock_irq_handler  nrfx_power_clock_irq_handler
#endif


#ifdef __cplusplus
}
#endif

#endif // NRFX_POWER_CLOCK_H__
