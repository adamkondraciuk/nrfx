/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>
#include <nrf_drv_power.h>
#include <nrf_drv_clock.h>


#if NRFX_CHECK(POWER_ENABLED) && NRFX_CHECK(CLOCK_ENABLED)
void nrfx_power_clock_irq_handler(void)
{
    nrfx_power_irq_handler();
    nrfx_clock_irq_handler();
}
#endif
