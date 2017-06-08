/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>

#if NRFX_MODULE_ENABLED(WDT)

#include <nrf_drv_wdt.h>
#include <nrf_drv_common.h>

#define NRFX_LOG_MODULE_NAME WDT
#include <nrfx_log.h>


/**@brief WDT event handler. */
static nrf_wdt_event_handler_t m_wdt_event_handler;

/**@brief WDT state. */
static nrf_drv_state_t m_state;

/**@brief WDT alloc table. */
static uint32_t m_alloc_index;

static const nrf_drv_wdt_config_t m_default_config = NRF_DRV_WDT_DEAFULT_CONFIG;

/**@brief WDT interrupt handler. */
void WDT_IRQHandler(void)
{
    if (nrf_wdt_int_enable_check(NRF_WDT_INT_TIMEOUT_MASK) == true)
    {
        nrf_wdt_event_clear(NRF_WDT_EVENT_TIMEOUT);
        m_wdt_event_handler();
    }
}


ret_code_t nrf_drv_wdt_init(nrf_drv_wdt_config_t const * p_config,
                            nrf_wdt_event_handler_t     wdt_event_handler)
{
    NRFX_ASSERT(wdt_event_handler != NULL);
    ret_code_t err_code;
    m_wdt_event_handler = wdt_event_handler;

    if (m_state == NRF_DRV_STATE_UNINITIALIZED)
    {
        m_state = NRF_DRV_STATE_INITIALIZED;
    }
    else
    {
        err_code = NRFX_ERROR_INVALID_STATE;
        NRFX_LOG_WARNING("Function: %s, error code: %s.\r\n", (uint32_t)__func__, (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    if (p_config == NULL)
    {
        p_config = &m_default_config;
    }

    nrf_wdt_behaviour_set(p_config->behaviour);

    nrf_wdt_reload_value_set((p_config->reload_value * 32768) / 1000);

    nrf_drv_common_irq_enable(WDT_IRQn, p_config->interrupt_priority);

    err_code = NRFX_SUCCESS;
    NRFX_LOG_INFO("Function: %s, error code: %s.\r\n", (uint32_t)__func__, (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}


void nrf_drv_wdt_enable(void)
{
    NRFX_ASSERT(m_alloc_index != 0);
    NRFX_ASSERT(m_state == NRF_DRV_STATE_INITIALIZED);
    nrf_wdt_int_enable(NRF_WDT_INT_TIMEOUT_MASK);
    nrf_wdt_task_trigger(NRF_WDT_TASK_START);
    m_state = NRF_DRV_STATE_POWERED_ON;
    NRFX_LOG_INFO("Enabled.\r\n");
}


void nrf_drv_wdt_feed(void)
{
    NRFX_ASSERT(m_state == NRF_DRV_STATE_POWERED_ON);
    for (uint32_t i = 0; i < m_alloc_index; i++)
    {
        nrf_wdt_reload_request_set((nrf_wdt_rr_register_t)(NRF_WDT_RR0 + i));
    }
}

ret_code_t nrf_drv_wdt_channel_alloc(nrf_drv_wdt_channel_id * p_channel_id)
{
    ret_code_t result;
    NRFX_ASSERT(p_channel_id);
    NRFX_ASSERT(m_state == NRF_DRV_STATE_INITIALIZED);

    NRFX_CRITICAL_SECTION_ENTER();
    if (m_alloc_index < NRF_WDT_CHANNEL_NUMBER)
    {
        *p_channel_id = (nrf_drv_wdt_channel_id)(NRF_WDT_RR0 + m_alloc_index);
        m_alloc_index++;
        nrf_wdt_reload_request_enable(*p_channel_id);
        result = NRFX_SUCCESS;
    }
    else
    {
        result = NRFX_ERROR_NO_MEM;
    }
    NRFX_CRITICAL_SECTION_EXIT();
    NRFX_LOG_INFO("Function: %s, error code: %s.\r\n", (uint32_t)__func__, (uint32_t)NRFX_LOG_ERROR_STRING_GET(result));
    return result;
}

void nrf_drv_wdt_channel_feed(nrf_drv_wdt_channel_id channel_id)
{
    NRFX_ASSERT(m_state == NRF_DRV_STATE_POWERED_ON);
    nrf_wdt_reload_request_set(channel_id);
}

#endif // NRFX_MODULE_ENABLED(WDT)
