/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_RNG_ENABLED)

#include <nrfx_rng.h>

#define NRFX_LOG_MODULE RNG
#include <nrfx_log.h>

/**
 * @brief Internal state of RNG driver.
 */
static nrfx_drv_state_t m_rng_state;

/**
 * @brief Pointer to handler calling from interrupt routine.
 */
static nrfx_rng_evt_handler_t m_rng_hndl;

nrfx_err_t nrfx_rng_init(nrfx_rng_config_t const * p_config, nrfx_rng_evt_handler_t handler)
{
    NRFX_ASSERT(p_config);
    NRFX_ASSERT(handler);
    if (m_rng_state != NRFX_DRV_STATE_UNINITIALIZED)
    {
        return NRFX_ERROR_ALREADY_INITIALIZED;
    }

    m_rng_hndl = handler;

    if (p_config->error_correction)
    {
        nrf_rng_error_correction_enable(NRF_RNG);
    }
    nrf_rng_shorts_disable(NRF_RNG, NRF_RNG_SHORT_VALRDY_STOP_MASK);
    NRFX_IRQ_PRIORITY_SET(RNG_IRQn, p_config->interrupt_priority);
    NRFX_IRQ_ENABLE(RNG_IRQn);

    m_rng_state = NRFX_DRV_STATE_INITIALIZED;

    return NRFX_SUCCESS;
}

void nrfx_rng_start(void)
{
    NRFX_ASSERT(m_rng_state == NRFX_DRV_STATE_INITIALIZED);
    nrf_rng_event_clear(NRF_RNG, NRF_RNG_EVENT_VALRDY);
    nrf_rng_int_enable(NRF_RNG, NRF_RNG_INT_VALRDY_MASK);
    nrf_rng_task_trigger(NRF_RNG, NRF_RNG_TASK_START);
}

void nrfx_rng_stop(void)
{
    NRFX_ASSERT(m_rng_state == NRFX_DRV_STATE_INITIALIZED);
    nrf_rng_int_disable(NRF_RNG, NRF_RNG_INT_VALRDY_MASK);
    nrf_rng_task_trigger(NRF_RNG, NRF_RNG_TASK_STOP);
}

void nrfx_rng_uninit(void)
{
    NRFX_ASSERT(m_rng_state == NRFX_DRV_STATE_INITIALIZED);

    nrf_rng_int_disable(NRF_RNG, NRF_RNG_INT_VALRDY_MASK);
    nrf_rng_task_trigger(NRF_RNG, NRF_RNG_TASK_STOP);
    NRFX_IRQ_DISABLE(RNG_IRQn);

    m_rng_state = NRFX_DRV_STATE_UNINITIALIZED;
    NRFX_LOG_INFO("Uninitialized.");
}

void nrfx_rng_irq_handler(void)
{
    nrf_rng_event_clear(NRF_RNG, NRF_RNG_EVENT_VALRDY);

    uint8_t rng_value = nrf_rng_random_value_get(NRF_RNG);

    m_rng_hndl(rng_value);

    NRFX_LOG_DEBUG("Event: NRF_RNG_EVENT_VALRDY.");
}

#endif // NRFX_CHECK(NRFX_RNG_ENABLED)
