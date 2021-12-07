/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_VEVIF_ENABLED)

#include <nrfx_vevif.h>
#include <nrf_bitmask.h>

#define NRFX_VEVIF_IRQ_HANDLER(idx)       \
void nrfx_vevif_##idx##_irq_handler(void) \
{                                         \
    nrfx_vevif_irq_handler(idx);          \
}

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

    while (mask != 0)
    {
        uint32_t event_no = nrf_bitmask_trailing_zeros_get(mask);
        nrfy_vpr_int_enable(NRF_VPR, event_no);
        nrf_bitmask_bit_clear(event_no, (void *)&mask);
    }
}

void nrfx_vevif_int_disable(uint32_t mask)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    while (mask != 0)
    {
        uint32_t event_no = nrf_bitmask_trailing_zeros_get(mask);
        nrfy_vpr_int_disable(NRF_VPR, event_no);
        nrf_bitmask_bit_clear(event_no, (void *)&mask);
    }
}

static void nrfx_vevif_irq_handler(uint32_t irq_idx)
{
    m_cb.handler((uint8_t)irq_idx, m_cb.p_context);

    nrf_vpr_csr_task_trigger_clear(NRF_VPR, (1UL << irq_idx));
}


NRFX_VEVIF_IRQ_HANDLER(0)
NRFX_VEVIF_IRQ_HANDLER(1)
NRFX_VEVIF_IRQ_HANDLER(2)
NRFX_VEVIF_IRQ_HANDLER(3)
NRFX_VEVIF_IRQ_HANDLER(4)
NRFX_VEVIF_IRQ_HANDLER(5)
NRFX_VEVIF_IRQ_HANDLER(6)
NRFX_VEVIF_IRQ_HANDLER(7)
NRFX_VEVIF_IRQ_HANDLER(8)
NRFX_VEVIF_IRQ_HANDLER(9)
NRFX_VEVIF_IRQ_HANDLER(10)
NRFX_VEVIF_IRQ_HANDLER(11)
NRFX_VEVIF_IRQ_HANDLER(12)
NRFX_VEVIF_IRQ_HANDLER(13)
NRFX_VEVIF_IRQ_HANDLER(14)
NRFX_VEVIF_IRQ_HANDLER(15)
NRFX_VEVIF_IRQ_HANDLER(16)
NRFX_VEVIF_IRQ_HANDLER(17)
NRFX_VEVIF_IRQ_HANDLER(18)
NRFX_VEVIF_IRQ_HANDLER(19)
NRFX_VEVIF_IRQ_HANDLER(20)
NRFX_VEVIF_IRQ_HANDLER(21)
NRFX_VEVIF_IRQ_HANDLER(22)
NRFX_VEVIF_IRQ_HANDLER(23)
NRFX_VEVIF_IRQ_HANDLER(24)
NRFX_VEVIF_IRQ_HANDLER(25)
NRFX_VEVIF_IRQ_HANDLER(26)
NRFX_VEVIF_IRQ_HANDLER(27)
NRFX_VEVIF_IRQ_HANDLER(28)
NRFX_VEVIF_IRQ_HANDLER(29)
NRFX_VEVIF_IRQ_HANDLER(30)
NRFX_VEVIF_IRQ_HANDLER(31)

#endif // NRFX_CHECK(NRFX_VEVIF_ENABLED)
