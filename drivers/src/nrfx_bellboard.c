/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_BELLBOARD_ENABLED)

#include <nrfx_bellboard.h>
#include <nrf_bitmask.h>

typedef struct
{
    nrfx_bellboard_event_handler_t handler;
    void * context;
    uint32_t int_pend;
    uint8_t int_idx;
    nrfx_drv_state_t state;
} nrfx_bellboard_cb_t;

static nrfx_bellboard_cb_t m_cb[NRFX_BELLBOARD_ENABLED_COUNT];

nrfx_err_t nrfx_bellboard_init(nrfx_bellboard_t const *       p_instance,
                               uint8_t                        interrupt_priority,
                               nrfx_bellboard_event_handler_t event_handler,
                               void *                         p_context)
{
    NRFX_ASSERT(p_instance);

    nrfx_bellboard_cb_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    if (p_cb->state == NRFX_DRV_STATE_INITIALIZED) {
        return NRFX_ERROR_ALREADY;
    }

    p_cb->state   = NRFX_DRV_STATE_INITIALIZED;
    p_cb->handler = event_handler;
    p_cb->context = p_context;
    p_cb->int_idx = p_instance->int_idx;

    nrfy_bellboard_int_init(NRF_BELLBOARD,
                            0,
                            interrupt_priority,
                            false,
                            p_instance->int_idx);

    return NRFX_SUCCESS;
}

void nrfx_bellboard_uninit(nrfx_bellboard_t const * p_instance)
{
    NRFX_ASSERT(p_instance);
    NRFX_ASSERT(m_cb[p_instance->drv_inst_idx].state == NRFX_DRV_STATE_INITIALIZED);

    nrfy_bellboard_int_uninit(p_instance->int_idx);

    nrfx_bellboard_cb_t * p_cb = &m_cb[p_instance->drv_inst_idx];

    p_cb->handler = NULL;
    p_cb->int_idx = 0;
}

bool nrfx_bellboard_init_check(nrfx_bellboard_t const * p_instance)
{
    NRFX_ASSERT(p_instance);

    nrfx_bellboard_cb_t * p_cb = &m_cb[p_instance->drv_inst_idx];

    return (p_cb->state != NRFX_DRV_STATE_UNINITIALIZED);
}

void nrfx_bellboard_int_enable(nrfx_bellboard_t const * p_instance, uint32_t mask)
{
    NRFX_ASSERT(p_instance);
    NRFX_ASSERT(m_cb[p_instance->drv_inst_idx].state == NRFX_DRV_STATE_INITIALIZED);

    nrfy_bellboard_int_enable(NRF_BELLBOARD, p_instance->int_idx, mask);
}

void nrfx_bellboard_int_disable(nrfx_bellboard_t const * p_instance, uint32_t mask)
{
    NRFX_ASSERT(p_instance);
    NRFX_ASSERT(m_cb[p_instance->drv_inst_idx].state == NRFX_DRV_STATE_INITIALIZED);

    nrfy_bellboard_int_disable(NRF_BELLBOARD, p_instance->int_idx, mask);
}

static void bellboard_irq_handler(uint8_t interrupt_idx)
{
    uint8_t inst_idx = NRFX_BELLBOARD_ENABLED_COUNT;

    /* Pending interrupts registers are cleared when event is cleared.
     * Add current pending interrupts to be processed later.
     */
    for (uint8_t i = 0; i < NRFX_BELLBOARD_ENABLED_COUNT; i++)
    {
        if (m_cb[i].state == NRFX_DRV_STATE_INITIALIZED)
        {
            m_cb[i].int_pend |= nrfy_bellboard_int_pending_get(NRF_BELLBOARD, m_cb[i].int_idx);

            if (m_cb[i].int_idx == interrupt_idx)
            {
                inst_idx = i;
            }
        }
    }

    uint32_t int_pend = m_cb[inst_idx].int_pend;
    m_cb[inst_idx].int_pend = 0;

    (void)nrfy_bellboard_events_process(NRF_BELLBOARD, int_pend);

    if (m_cb[inst_idx].handler != NULL)
    {
        while (int_pend)
        {
            uint8_t event_no = (uint8_t)NRF_CTZ(int_pend);
            m_cb[inst_idx].handler(event_no, m_cb[inst_idx].context);
            nrf_bitmask_bit_clear(event_no, &int_pend);
        }
    }
}

#if NRFX_CHECK(NRFX_BELLBOARD0_ENABLED)
void nrfx_bellboard_0_irq_handler(void)
{
    bellboard_irq_handler(0);
}
#endif

#if NRFX_CHECK(NRFX_BELLBOARD1_ENABLED)
void nrfx_bellboard_1_irq_handler(void)
{
    bellboard_irq_handler(1);
}
#endif

#if NRFX_CHECK(NRFX_BELLBOARD2_ENABLED)
void nrfx_bellboard_2_irq_handler(void)
{
    bellboard_irq_handler(2);
}
#endif

#if NRFX_CHECK(NRFX_BELLBOARD3_ENABLED)
void nrfx_bellboard_3_irq_handler(void)
{
    bellboard_irq_handler(3);
}
#endif

#endif // NRFX_CHECK(NRFX_BELLBOARD_ENABLED)
