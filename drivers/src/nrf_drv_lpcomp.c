/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(LPCOMP_ENABLED)

#include <nrf_drv_lpcomp.h>
#include "prs/nrfx_prs.h"

#define NRFX_LOG_MODULE LPCOMP
#include <nrfx_log.h>
NRFX_LOG_MODULE_REGISTER();

#define EVT_TO_STR(event)   (event == NRF_LPCOMP_EVENT_READY ? "NRF_LPCOMP_EVENT_READY" :                \
                            (event == NRF_LPCOMP_EVENT_DOWN ? "NRF_LPCOMP_EVENT_DOWN" :                  \
                            (event == NRF_LPCOMP_EVENT_UP ? "NRF_LPCOMP_EVENT_UP" :                      \
                            (event == NRF_LPCOMP_EVENT_CROSS ? "NRF_LPCOMP_EVENT_CROSS" : "UNKNOWN EVENT"))))


static lpcomp_events_handler_t m_lpcomp_events_handler = NULL;
static nrfx_drv_state_t        m_state = NRFX_DRV_STATE_UNINITIALIZED;

static void lpcomp_execute_handler(nrf_lpcomp_event_t event, uint32_t event_mask)
{
    if ( nrf_lpcomp_event_check(event) && nrf_lpcomp_int_enable_check(event_mask) )
    {
        nrf_lpcomp_event_clear(event);
        NRFX_LOG_DEBUG("Event: %s.", (uint32_t)EVT_TO_STR(event));

        m_lpcomp_events_handler(event);
    }
}


void nrfx_lpcomp_irq_handler(void)
{
    lpcomp_execute_handler(NRF_LPCOMP_EVENT_READY, LPCOMP_INTENSET_READY_Msk);
    lpcomp_execute_handler(NRF_LPCOMP_EVENT_DOWN, LPCOMP_INTENSET_DOWN_Msk);
    lpcomp_execute_handler(NRF_LPCOMP_EVENT_UP, LPCOMP_INTENSET_UP_Msk);
    lpcomp_execute_handler(NRF_LPCOMP_EVENT_CROSS, LPCOMP_INTENSET_CROSS_Msk);
}


ret_code_t nrf_drv_lpcomp_init(const nrf_drv_lpcomp_config_t * p_config,
                               lpcomp_events_handler_t   events_handler)
{
    NRFX_ASSERT(p_config);
    ret_code_t err_code;

    if (m_state != NRFX_DRV_STATE_UNINITIALIZED)
    { // LPCOMP driver is already initialized
        err_code = NRFX_ERROR_INVALID_STATE;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         (uint32_t)__func__,
                         (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

#if NRFX_CHECK(NRFX_PRS_ENABLED)
    if (nrfx_prs_acquire(NRF_LPCOMP, nrfx_lpcomp_irq_handler) != NRFX_SUCCESS)
    {
        err_code = NRFX_ERROR_BUSY;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         (uint32_t)__func__,
                         (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
#endif

    nrf_lpcomp_configure(&(p_config->hal) );

    if (events_handler)
    {
        m_lpcomp_events_handler = events_handler;
    }
    else
    {
        err_code = NRFX_ERROR_INVALID_PARAM;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         (uint32_t)__func__,
                         (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    nrf_lpcomp_input_select(p_config->input);

    switch (p_config->hal.detection)
    {
        case NRF_LPCOMP_DETECT_UP:
            nrf_lpcomp_int_enable(LPCOMP_INTENSET_UP_Msk);
            break;

        case NRF_LPCOMP_DETECT_DOWN:
            nrf_lpcomp_int_enable(LPCOMP_INTENSET_DOWN_Msk);
            break;

        case NRF_LPCOMP_DETECT_CROSS:
            nrf_lpcomp_int_enable(LPCOMP_INTENSET_CROSS_Msk);
            break;

        default:
            break;
    }
    nrf_lpcomp_shorts_enable(NRF_LPCOMP_SHORT_READY_SAMPLE_MASK);

    NRFX_IRQ_PRIORITY_SET(LPCOMP_IRQn, p_config->interrupt_priority);
    NRFX_IRQ_ENABLE(LPCOMP_IRQn);

    m_state = NRFX_DRV_STATE_INITIALIZED;

    err_code = NRFX_SUCCESS;
    NRFX_LOG_INFO("Function: %s, error code: %s.",
                  (uint32_t)__func__,
                  (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}

void nrf_drv_lpcomp_uninit(void)
{
    NRFX_ASSERT(m_state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_IRQ_DISABLE(LPCOMP_IRQn);
    nrf_drv_lpcomp_disable();
#if NRFX_CHECK(NRFX_PRS_ENABLED)
    nrfx_prs_release(NRF_LPCOMP);
#endif
    m_state = NRFX_DRV_STATE_UNINITIALIZED;
    m_lpcomp_events_handler = NULL;
    NRFX_LOG_INFO("Uninitialized.");
}

void nrf_drv_lpcomp_enable(void)
{
    NRFX_ASSERT(m_state == NRFX_DRV_STATE_INITIALIZED);
    nrf_lpcomp_enable();
    nrf_lpcomp_task_trigger(NRF_LPCOMP_TASK_START);
    m_state = NRFX_DRV_STATE_POWERED_ON;
    NRFX_LOG_INFO("Enabled.");
}

void nrf_drv_lpcomp_disable(void)
{
    NRFX_ASSERT(m_state == NRFX_DRV_STATE_POWERED_ON);
    nrf_lpcomp_disable();
    nrf_lpcomp_task_trigger(NRF_LPCOMP_TASK_STOP);
    m_state = NRFX_DRV_STATE_INITIALIZED;
    NRFX_LOG_INFO("Disabled.");
}

void nrf_drv_lpcomp_event_handler_register(lpcomp_events_handler_t lpcomp_events_handler)
{
    m_lpcomp_events_handler = lpcomp_events_handler;
}

#endif // NRFX_CHECK(LPCOMP_ENABLED)
