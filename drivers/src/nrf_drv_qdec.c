/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(QDEC_ENABLED)

#include <nrf_drv_qdec.h>
#include <hal/nrf_gpio.h>

#define NRFX_LOG_MODULE_NAME QDEC
#include <nrfx_log.h>

#define EVT_TO_STR(event)   (event == NRF_QDEC_EVENT_SAMPLERDY ? "NRF_QDEC_EVENT_SAMPLERDY" :        \
                            (event == NRF_QDEC_EVENT_REPORTRDY ? "NRF_QDEC_EVENT_REPORTRDY" :        \
                            (event == NRF_QDEC_EVENT_ACCOF ? "NRF_QDEC_EVENT_ACCOF" : "UNKNOWN EVENT")))


static qdec_event_handler_t m_qdec_event_handler = NULL;
static const nrf_drv_qdec_config_t m_default_config = NRF_DRV_QDEC_DEFAULT_CONFIG;
static nrfx_drv_state_t m_state = NRFX_DRV_STATE_UNINITIALIZED;

void nrfx_qdec_irq_handler(void)
{
    nrf_drv_qdec_event_t event;
    if ( nrf_qdec_event_check(NRF_QDEC_EVENT_SAMPLERDY) &&
         nrf_qdec_int_enable_check(NRF_QDEC_INT_SAMPLERDY_MASK) )
    {
        nrf_qdec_event_clear(NRF_QDEC_EVENT_SAMPLERDY);
        NRFX_LOG_DEBUG("Event: %s.\r\n", (uint32_t)EVT_TO_STR(NRF_QDEC_EVENT_SAMPLERDY));

        event.type = NRF_QDEC_EVENT_SAMPLERDY;
        event.data.sample.value = (int8_t)nrf_qdec_sample_get();
        m_qdec_event_handler(event);
    }

    if ( nrf_qdec_event_check(NRF_QDEC_EVENT_REPORTRDY) &&
         nrf_qdec_int_enable_check(NRF_QDEC_INT_REPORTRDY_MASK) )
    {
        nrf_qdec_event_clear(NRF_QDEC_EVENT_REPORTRDY);
        NRFX_LOG_DEBUG("Event: %s.\r\n", (uint32_t)EVT_TO_STR(NRF_QDEC_EVENT_REPORTRDY));

        event.type = NRF_QDEC_EVENT_REPORTRDY;

        event.data.report.acc    = (int16_t)nrf_qdec_accread_get();
        event.data.report.accdbl = (uint16_t)nrf_qdec_accdblread_get();
        m_qdec_event_handler(event);
    }

    if ( nrf_qdec_event_check(NRF_QDEC_EVENT_ACCOF) &&
         nrf_qdec_int_enable_check(NRF_QDEC_INT_ACCOF_MASK) )
    {
        nrf_qdec_event_clear(NRF_QDEC_EVENT_ACCOF);
        NRFX_LOG_DEBUG("Event: %s.\r\n", (uint32_t)EVT_TO_STR(NRF_QDEC_EVENT_ACCOF));

        event.type = NRF_QDEC_EVENT_ACCOF;
        m_qdec_event_handler(event);
    }
}


ret_code_t nrf_drv_qdec_init(const nrf_drv_qdec_config_t * p_config,
                             qdec_event_handler_t event_handler)
{
    ret_code_t err_code;

    if (m_state != NRFX_DRV_STATE_UNINITIALIZED)
    {
        err_code = NRFX_ERROR_INVALID_STATE;
        NRFX_LOG_WARNING("Function: %s, error code: %s.\r\n", (uint32_t)__func__, (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    if (p_config == NULL)
    {
        p_config = &m_default_config;
    }

    if (event_handler)
    {
        m_qdec_event_handler = event_handler;
    }
    else
    {
        err_code = NRFX_ERROR_INVALID_PARAM;
        NRFX_LOG_WARNING("Function: %s, error code: %s.\r\n", (uint32_t)__func__, (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    nrf_qdec_sampleper_set(p_config->sampleper);
    nrf_gpio_cfg_input(p_config->pselled, NRF_GPIO_PIN_NOPULL);
    nrf_gpio_cfg_input(p_config->psela, NRF_GPIO_PIN_NOPULL);
    nrf_gpio_cfg_input(p_config->pselb, NRF_GPIO_PIN_NOPULL);
    nrf_qdec_pio_assign( p_config->psela, p_config->pselb, p_config->pselled);
    nrf_qdec_ledpre_set(p_config->ledpre);
    nrf_qdec_ledpol_set(p_config->ledpol);
    nrf_qdec_shorts_enable(NRF_QDEC_SHORT_REPORTRDY_READCLRACC_MASK);

    if (p_config->dbfen)
    {
        nrf_qdec_dbfen_enable();
    }
    else
    {
        nrf_qdec_dbfen_disable();
    }

    uint32_t int_mask = NRF_QDEC_INT_ACCOF_MASK;

    if (p_config->reportper != NRF_QDEC_REPORTPER_DISABLED)
    {
        nrf_qdec_reportper_set(p_config->reportper);
        int_mask |= NRF_QDEC_INT_REPORTRDY_MASK;
    }

    if (p_config->sample_inten)
    {
        int_mask |= NRF_QDEC_INT_SAMPLERDY_MASK;
    }

    nrf_qdec_int_enable(int_mask);
    NRFX_IRQ_PRIORITY_SET(QDEC_IRQn, p_config->interrupt_priority);
    NRFX_IRQ_ENABLE(QDEC_IRQn);

    m_state = NRFX_DRV_STATE_INITIALIZED;

    err_code = NRFX_SUCCESS;
    NRFX_LOG_INFO("Function: %s, error code: %s.\r\n", (uint32_t)__func__, (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}

void nrf_drv_qdec_uninit(void)
{
    NRFX_ASSERT(m_state != NRFX_DRV_STATE_UNINITIALIZED);
    nrf_drv_qdec_disable();
    NRFX_IRQ_DISABLE(QDEC_IRQn);
    m_state = NRFX_DRV_STATE_UNINITIALIZED;
    NRFX_LOG_INFO("Uninitialized.\r\n");
}

void nrf_drv_qdec_enable(void)
{
    NRFX_ASSERT(m_state == NRFX_DRV_STATE_INITIALIZED);
    nrf_qdec_enable();
    nrf_qdec_task_trigger(NRF_QDEC_TASK_START);
    m_state = NRFX_DRV_STATE_POWERED_ON;
    NRFX_LOG_INFO("Enabled.\r\n");
}

void nrf_drv_qdec_disable(void)
{
    NRFX_ASSERT(m_state == NRFX_DRV_STATE_POWERED_ON);
    nrf_qdec_task_trigger(NRF_QDEC_TASK_STOP);
    nrf_qdec_disable();
    m_state = NRFX_DRV_STATE_INITIALIZED;
    NRFX_LOG_INFO("Disabled.\r\n");
}

void nrf_drv_qdec_accumulators_read(int16_t * p_acc, int16_t * p_accdbl)
{
    NRFX_ASSERT(m_state == NRFX_DRV_STATE_POWERED_ON);
    nrf_qdec_task_trigger(NRF_QDEC_TASK_READCLRACC);

    *p_acc    = (int16_t)nrf_qdec_accread_get();
    *p_accdbl = (int16_t)nrf_qdec_accdblread_get();

    NRFX_LOG_DEBUG("Accumulators data, ACC register:\r\n");
    NRFX_LOG_HEXDUMP_DEBUG((uint8_t *)p_acc, sizeof(p_acc));
    NRFX_LOG_DEBUG("Accumulators data, ACCDBL register:\r\n");
    NRFX_LOG_HEXDUMP_DEBUG((uint8_t *)p_accdbl, sizeof(p_accdbl));
}

void nrf_drv_qdec_task_address_get(nrf_qdec_task_t task, uint32_t * p_task)
{
    *p_task = (uint32_t)nrf_qdec_task_address_get(task);
}

void nrf_drv_qdec_event_address_get(nrf_qdec_event_t event, uint32_t * p_event)
{
    *p_event = (uint32_t)nrf_qdec_event_address_get(event);
}

#endif // NRFX_CHECK(QDEC_ENABLED)
