/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_QDEC_ENABLED)

#if !(NRFX_CHECK(NRFX_QDEC0_ENABLED) || NRFX_CHECK(NRFX_QDEC1_ENABLED))
#error "No enabled QDEC instances. Check <nrfx_config.h>."
#endif

#include <nrfx_qdec.h>
#include <hal/nrf_gpio.h>

#define NRFX_LOG_MODULE QDEC
#include <nrfx_log.h>

#define EVT_TO_STR(event)                                             \
    (event == NRF_QDEC_EVENT_SAMPLERDY ? "NRF_QDEC_EVENT_SAMPLERDY" : \
    (event == NRF_QDEC_EVENT_REPORTRDY ? "NRF_QDEC_EVENT_REPORTRDY" : \
    (event == NRF_QDEC_EVENT_ACCOF     ? "NRF_QDEC_EVENT_ACCOF"     : \
                                         "UNKNOWN EVENT")))
// Control block - driver instance local data.
typedef struct
{
    nrfx_drv_state_t          state;
    bool                      skip_gpio_cfg;
    nrfx_qdec_event_handler_t handler;
    void *                    p_context;
} qdec_control_block_t;

static qdec_control_block_t m_cb[NRFX_QDEC_ENABLED_COUNT];

nrfx_err_t nrfx_qdec_init(nrfx_qdec_t const *        p_instance,
                          nrfx_qdec_config_t const * p_config,
                          nrfx_qdec_event_handler_t  handler,
                          void *                     p_context)
{
    NRFX_ASSERT(handler);
    NRFX_ASSERT(p_instance);
    NRFX_ASSERT(p_config);

    qdec_control_block_t * const p_cb = &m_cb[p_instance->drv_inst_idx];
    nrfx_err_t err_code;

    if (p_cb->state != NRFX_DRV_STATE_UNINITIALIZED)
    {
        err_code = NRFX_ERROR_INVALID_STATE;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    p_cb->handler = handler;
    p_cb->p_context = p_context;
    p_cb->skip_gpio_cfg = p_config->skip_gpio_cfg;

    if (!p_config->skip_gpio_cfg)
    {
        nrf_gpio_cfg_input(p_config->psela, NRF_GPIO_PIN_NOPULL);
        nrf_gpio_cfg_input(p_config->pselb, NRF_GPIO_PIN_NOPULL);
        if (p_config->pselled != NRF_QDEC_LED_NOT_CONNECTED)
        {
            nrf_gpio_cfg_input(p_config->pselled, NRF_GPIO_PIN_NOPULL);
        }
    }
    if (!p_config->skip_psel_cfg)
    {
        nrf_qdec_pins_set(p_instance->p_reg, p_config->psela, p_config->pselb, p_config->pselled);
    }

    nrf_qdec_sampleper_set(p_instance->p_reg, p_config->sampleper);
    // Change the period and polarity of the LED only when it is used,
    // otherwise the ledpre field might have an invalid value.
    if (nrf_qdec_led_pin_get(p_instance->p_reg) != NRF_QDEC_LED_NOT_CONNECTED)
    {
        nrf_qdec_ledpre_set(p_instance->p_reg, p_config->ledpre);
        nrf_qdec_ledpol_set(p_instance->p_reg, p_config->ledpol);
    }

    if (p_config->dbfen)
    {
        nrf_qdec_dbfen_enable(p_instance->p_reg);
    }
    else
    {
        nrf_qdec_dbfen_disable(p_instance->p_reg);
    }

    uint32_t int_mask = NRF_QDEC_INT_ACCOF_MASK;

    if (p_config->reportper != NRF_QDEC_REPORTPER_DISABLED)
    {
        nrf_qdec_shorts_enable(p_instance->p_reg, NRF_QDEC_SHORT_REPORTRDY_READCLRACC_MASK);
        nrf_qdec_reportper_set(p_instance->p_reg, p_config->reportper);
        int_mask |= NRF_QDEC_INT_REPORTRDY_MASK;
    }

    if (p_config->sample_inten)
    {
        int_mask |= NRF_QDEC_INT_SAMPLERDY_MASK;
    }

    nrf_qdec_int_enable(p_instance->p_reg, int_mask);
    NRFX_IRQ_PRIORITY_SET(nrfx_get_irq_number(p_instance->p_reg), p_config->interrupt_priority);
    NRFX_IRQ_ENABLE(nrfx_get_irq_number(p_instance->p_reg));

    p_cb->state = NRFX_DRV_STATE_INITIALIZED;

    err_code = NRFX_SUCCESS;
    NRFX_LOG_INFO("Function: %s, error code: %s.", __func__, NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}

void nrfx_qdec_uninit(nrfx_qdec_t const * p_instance)
{
    NRFX_ASSERT(p_instance);

    qdec_control_block_t * const p_cb = &m_cb[p_instance->drv_inst_idx];

    NRFX_ASSERT(p_cb->state != NRFX_DRV_STATE_UNINITIALIZED);

    nrfx_qdec_disable(p_instance);
    NRFX_IRQ_DISABLE(nrfx_get_irq_number(p_instance->p_reg));

    nrf_qdec_shorts_disable(p_instance->p_reg, NRF_QDEC_SHORT_REPORTRDY_READCLRACC_MASK);
    if (!p_cb->skip_gpio_cfg)
    {
        nrf_gpio_cfg_default(nrf_qdec_phase_a_pin_get(p_instance->p_reg));
        nrf_gpio_cfg_default(nrf_qdec_phase_b_pin_get(p_instance->p_reg));

        uint32_t led_pin = nrf_qdec_led_pin_get(p_instance->p_reg);
        if (led_pin != NRF_QDEC_LED_NOT_CONNECTED)
        {
            nrf_gpio_cfg_default(led_pin);
        }
    }

    p_cb->state = NRFX_DRV_STATE_UNINITIALIZED;
    NRFX_LOG_INFO("Uninitialized.");
}

void nrfx_qdec_enable(nrfx_qdec_t const * p_instance)
{
    NRFX_ASSERT(p_instance);

    qdec_control_block_t * const p_cb = &m_cb[p_instance->drv_inst_idx];

    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    nrf_qdec_enable(p_instance->p_reg);
    nrf_qdec_task_trigger(p_instance->p_reg, NRF_QDEC_TASK_START);
    p_cb->state = NRFX_DRV_STATE_POWERED_ON;
    NRFX_LOG_INFO("Enabled.");
}

void nrfx_qdec_disable(nrfx_qdec_t const * p_instance)
{
    NRFX_ASSERT(p_instance);

    qdec_control_block_t * const p_cb = &m_cb[p_instance->drv_inst_idx];

    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_POWERED_ON);
    nrf_qdec_task_trigger(p_instance->p_reg, NRF_QDEC_TASK_STOP);
    nrf_qdec_disable(p_instance->p_reg);
    p_cb->state = NRFX_DRV_STATE_INITIALIZED;
    NRFX_LOG_INFO("Disabled.");
}

void nrfx_qdec_accumulators_read(nrfx_qdec_t const * p_instance,
                                 int16_t *           p_acc,
                                 int16_t *           p_accdbl)
{

    NRFX_ASSERT(p_instance);

    qdec_control_block_t * const p_cb = &m_cb[p_instance->drv_inst_idx];

    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_POWERED_ON);
    nrf_qdec_task_trigger(p_instance->p_reg, NRF_QDEC_TASK_READCLRACC);

    *p_acc    = (int16_t)nrf_qdec_accread_get(p_instance->p_reg);
    *p_accdbl = (int16_t)nrf_qdec_accdblread_get(p_instance->p_reg);

    NRFX_LOG_DEBUG("Accumulators data, ACC register:");
    NRFX_LOG_HEXDUMP_DEBUG((uint8_t *)p_acc, sizeof(p_acc[0]));
    NRFX_LOG_DEBUG("Accumulators data, ACCDBL register:");
    NRFX_LOG_HEXDUMP_DEBUG((uint8_t *)p_accdbl, sizeof(p_accdbl[0]));
}

static void irq_handler(NRF_QDEC_Type * p_qdec, qdec_control_block_t * p_cb)
{
    nrfx_qdec_event_t event;

    if ( nrf_qdec_event_check(p_qdec, NRF_QDEC_EVENT_SAMPLERDY) &&
         nrf_qdec_int_enable_check(p_qdec, NRF_QDEC_INT_SAMPLERDY_MASK) )
    {
        nrf_qdec_event_clear(p_qdec, NRF_QDEC_EVENT_SAMPLERDY);
        NRFX_LOG_DEBUG("Event: %s.", EVT_TO_STR(NRF_QDEC_EVENT_SAMPLERDY));

        event.type = NRF_QDEC_EVENT_SAMPLERDY;
        event.data.sample.value = (int8_t)nrf_qdec_sample_get(p_qdec);
        p_cb->handler(event, p_cb->p_context);
    }

    if ( nrf_qdec_event_check(p_qdec, NRF_QDEC_EVENT_REPORTRDY) &&
         nrf_qdec_int_enable_check(p_qdec, NRF_QDEC_INT_REPORTRDY_MASK) )
    {
        nrf_qdec_event_clear(p_qdec, NRF_QDEC_EVENT_REPORTRDY);
        NRFX_LOG_DEBUG("Event: %s.", EVT_TO_STR(NRF_QDEC_EVENT_REPORTRDY));

        event.type = NRF_QDEC_EVENT_REPORTRDY;

        event.data.report.acc    = (int16_t)nrf_qdec_accread_get(p_qdec);
        event.data.report.accdbl = (uint16_t)nrf_qdec_accdblread_get(p_qdec);
        p_cb->handler(event, p_cb->p_context);
    }

    if ( nrf_qdec_event_check(p_qdec, NRF_QDEC_EVENT_ACCOF) &&
         nrf_qdec_int_enable_check(p_qdec, NRF_QDEC_INT_ACCOF_MASK) )
    {
        nrf_qdec_event_clear(p_qdec, NRF_QDEC_EVENT_ACCOF);
        NRFX_LOG_DEBUG("Event: %s.", EVT_TO_STR(NRF_QDEC_EVENT_ACCOF));

        event.type = NRF_QDEC_EVENT_ACCOF;
        p_cb->handler(event, p_cb->p_context);
    }

}

#if NRFX_CHECK(NRFX_QDEC0_ENABLED)
void nrfx_qdec_0_irq_handler(void)
{
    irq_handler(NRF_QDEC0, &m_cb[NRFX_QDEC0_INST_IDX]);
}
#endif

#if NRFX_CHECK(NRFX_QDEC1_ENABLED)
void nrfx_qdec_1_irq_handler(void)
{
    irq_handler(NRF_QDEC1, &m_cb[NRFX_QDEC1_INST_IDX]);
}
#endif

#endif // NRFX_CHECK(NRFX_QDEC_ENABLED)
