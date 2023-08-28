/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_VEVIF_ENABLED)

#include <nrfx_vevif.h>
#include <nrf_bitmask.h>
#include <hal/nrf_vpr_csr.h>
#include <hal/nrf_vpr_csr_vevif.h>

#define NRFX_VEVIF_IRQ_HANDLER_DEFINE(idx, _) \
void nrfx_vevif_##idx##_irq_handler(void)     \
{                                             \
    nrfx_vevif_irq_handler(idx);              \
}

typedef struct
{
    nrfx_vevif_event_handler_t handler;
    void *                     p_context;
    nrfx_drv_state_t           state;
} nrfx_vevif_cb_t;

static nrfx_vevif_cb_t m_cb;

nrfx_err_t nrfx_vevif_init(nrf_vpr_clic_priority_t    interrupt_priority,
                           nrfx_vevif_event_handler_t event_handler,
                           void *                     p_context)
{
    if (m_cb.state == NRFX_DRV_STATE_INITIALIZED)
    {
        return NRFX_ERROR_ALREADY;
    }

    m_cb.handler   = event_handler;
    m_cb.p_context = p_context;
    m_cb.state     = NRFX_DRV_STATE_INITIALIZED;

    /* @todo This should be done in startup */
    nrf_vpr_csr_machine_interrupts_enable();

    nrf_vpr_csr_rtperiph_enable_set(true);
    nrf_vpr_csr_vevif_tasks_set(0);

    for (uint8_t i = 0; i < NRF_VPR_CSR_VEVIF_EVENT_TASK_COUNT; i++)
    {
        NRFY_IRQ_PRIORITY_SET((VPRCLIC_0_IRQn + i), interrupt_priority);
    }

    return NRFX_SUCCESS;
}

void nrfx_vevif_uninit(void)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    for (uint8_t i = 0; i < NRF_VPR_CSR_VEVIF_EVENT_TASK_COUNT; i++)
    {
        NRFY_IRQ_DISABLE(VPRCLIC_0_IRQn + i);
    }

    m_cb.handler = NULL;
    m_cb.state = NRFX_DRV_STATE_UNINITIALIZED;
}

void nrfx_vevif_int_enable(uint32_t mask)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    while (mask != 0)
    {
        uint32_t event_no = NRF_CTZ(mask);
        NRFY_IRQ_ENABLE(VPRCLIC_0_IRQn + event_no);
        nrf_bitmask_bit_clear(event_no, (void *)&mask);
    }
}

bool nrfx_vevif_init_check(void)
{
    return (m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
}

void nrfx_vevif_int_disable(uint32_t mask)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

    while (mask != 0)
    {
        uint32_t event_no = NRF_CTZ(mask);
        NRFY_IRQ_DISABLE(VPRCLIC_0_IRQn + event_no);
        nrf_bitmask_bit_clear(event_no, (void *)&mask);
    }
}

static void nrfx_vevif_irq_handler(uint8_t irq_idx)
{
    nrf_vpr_csr_vevif_tasks_clear(1UL << irq_idx);

    m_cb.handler(irq_idx, m_cb.p_context);
}

/* Define interrupt handlers for 0..31 NRF_VEVIF driver instances. */
NRFX_LISTIFY(32, NRFX_VEVIF_IRQ_HANDLER_DEFINE, (;), _)

#endif // NRFX_CHECK(NRFX_VEVIF_ENABLED)
