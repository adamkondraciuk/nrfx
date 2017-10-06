/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>
#include <nrfx_power.h>
#include <nrfx_clock.h>


#if NRFX_CHECK(NRFX_POWER_ENABLED) && NRFX_CHECK(NRFX_CLOCK_ENABLED)
void nrfx_power_clock_irq_handler(void)
{
    nrfx_power_irq_handler();
    nrfx_clock_irq_handler();
}
#endif
