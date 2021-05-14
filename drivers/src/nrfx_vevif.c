/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_VEVIF_ENABLED)

#include <nrfx_vevif.h>

typedef struct
{
    nrfx_vevif_event_handler_t handler;
    void *                     p_context;
    nrfx_drv_state_t           state;
} nrfx_vevif_cb_t;

static nrfx_vevif_cb_t m_cb;

static uint32_t vevif_event_mask_get_and_clear(uint32_t int_mask)
{
    uint32_t event_mask = 0;
    for (uint8_t event_idx = 0; event_idx < NRFX_ARRAY_SIZE(NRF_VPR->EVENTS_TRIGGERED); event_idx++)
    {
        if (int_mask & (1UL << event_idx))
        {
            nrf_vpr_event_t event = nrf_vpr_triggered_event_get(event_idx);
            if (nrf_vpr_event_check(NRF_VPR, event))
            {
                nrf_vpr_event_clear(NRF_VPR, event);
                event_mask |= (1UL << event_idx);
            }
        }
    }
    return event_mask;
}

nrfx_err_t nrfx_vevif_trigger(nrfx_vevif_domain_t domain, uint8_t task_id)
{
    NRF_VPR_Type * p_reg;
    switch (domain) {
        case NRFX_VEVIF_DOMAIN_SYSCTRL:
            p_reg = NRF_SYSCTRL_VPR;
            break;
        case NRFX_VEVIF_DOMAIN_FLPR:
            p_reg = NRF_FLPR_VPR;
            break;
        default:
            return NRFX_ERROR_INVALID_PARAM;
    }

    /* TODO: Check if domain has access to given task, return NRFX_ERROR_FORBIDDEN if not */
    nrf_vpr_task_trigger(p_reg, nrf_vpr_trigger_task_get(task_id));
    return NRFX_SUCCESS;
}

nrfx_err_t nrfx_vevif_init(uint8_t                    interrupt_priority,
                           nrfx_vevif_event_handler_t event_handler,
                           void *                     p_context)
{
    if (m_cb.state == NRFX_DRV_STATE_INITIALIZED)
    {
        return NRFX_ERROR_ALREADY_INITIALIZED;
    }

    m_cb.handler   = event_handler;
    m_cb.p_context = p_context;
    m_cb.state     = NRFX_DRV_STATE_INITIALIZED;

    if (event_handler)
    {
        NRFX_IRQ_ENABLE(VPR_IRQn);
        NRFX_IRQ_PRIORITY_SET(VPR_IRQn, interrupt_priority);
    }
    return NRFX_SUCCESS;
}

void nrfx_vevif_uninit(void)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    NRFX_IRQ_DISABLE(VPR_IRQn);
    m_cb.handler = NULL;
    m_cb.state = NRFX_DRV_STATE_UNINITIALIZED;
}

void nrfx_vpr_int_enable(uint32_t mask)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    (void)vevif_event_mask_get_and_clear(mask);
    nrf_vpr_int_enable(NRF_VPR, mask);
}

void nrfx_vpr_int_disable(uint32_t mask)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);
    nrf_vpr_int_disable(NRF_VPR, mask);
}

void nrfx_vevif_irq_handler(void)
{
    uint32_t int_mask = nrf_vpr_int_enable_check(NRF_VPR, ~0uL);

    /* Check (and clear) only the events that are set to generate interrupts.
       Leave the other ones untouched. */
    uint32_t event_mask = vevif_event_mask_get_and_clear(int_mask);
    for (uint8_t event_idx = 0; event_idx < NRFX_ARRAY_SIZE(NRF_VPR->EVENTS_TRIGGERED); event_idx++)
    {
        if (event_mask & (1UL << event_idx))
        {
            m_cb.handler(event_idx, m_cb.p_context);
        }
    }
}

#endif // NRFX_CHECK(NRFX_VEVIF_ENABLED)
