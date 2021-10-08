/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_VEVIF_ENABLED)

#include <nrfx_vevif.h>
#include <nrf_bitmask.h>

typedef struct
{
    nrfx_vevif_event_handler_t handler;
    void *                     p_context;
    nrfx_drv_state_t           state;
} nrfx_vevif_cb_t;

static nrfx_vevif_cb_t m_cb;

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

    nrfy_vpr_int_init(NRF_VPR, 0, interrupt_priority, false);

    return NRFX_SUCCESS;
}

void nrfx_vevif_uninit(void)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    nrfy_vpr_int_uninit(NRF_VPR);

    m_cb.handler = NULL;
    m_cb.state = NRFX_DRV_STATE_UNINITIALIZED;
}

void nrfx_vevif_int_enable(uint32_t mask)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    nrfy_vpr_int_enable(NRF_VPR, mask);
}

void nrfx_vevif_int_disable(uint32_t mask)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    nrfy_vpr_int_disable(NRF_VPR, mask);
}

void nrfx_vevif_irq_handler(void)
{
    uint32_t evt_mask = nrfy_vpr_events_process(NRF_VPR, NRF_VPR_ALL_CHANNELS_INT_MASK);

    while (evt_mask)
    {
        uint8_t event_index = nrf_bitmask_trailing_zeros_get(evt_mask);
        m_cb.handler(event_index, m_cb.p_context);
        evt_mask &= ~(1UL << event_index);
    }
}

#endif // NRFX_CHECK(NRFX_VEVIF_ENABLED)
