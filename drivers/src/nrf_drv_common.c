/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>
#include <nrf_drv_common.h>

#if NRF_DRV_COMMON_POWER_CLOCK_ISR
#include "nrf_drv_power.h"
#include "nrf_drv_clock.h"
#endif
#ifdef SOFTDEVICE_PRESENT
#include "nrf_soc.h"
#endif


#if NRFX_CHECK(POWER_ENABLED)
void nrf_drv_common_power_irq_disable(void)
{
#if NRF_DRV_COMMON_POWER_CLOCK_ISR
    if(!nrf_drv_clock_init_check())
#endif
    {
        NRFX_IRQ_DISABLE(POWER_CLOCK_IRQn);
    }
}
#endif // NRFX_CHECK(POWER_ENABLED)

#if NRFX_CHECK(CLOCK_ENABLED)
void nrf_drv_common_clock_irq_disable(void)
{
#if NRF_DRV_COMMON_POWER_CLOCK_ISR
    if(!nrf_drv_power_init_check())
#endif
    {
        NRFX_IRQ_DISABLE(POWER_CLOCK_IRQn);
    }
}
#endif // NRFX_CHECK(CLOCK_ENABLED)

#if NRF_DRV_COMMON_POWER_CLOCK_ISR
void POWER_CLOCK_IRQHandler(void)
{
    extern void nrf_drv_clock_onIRQ(void);
    extern void nrf_drv_power_onIRQ(void);

    nrf_drv_clock_onIRQ();
    nrf_drv_power_onIRQ();
}
#endif // NRF_DRV_COMMON_POWER_CLOCK_ISR
