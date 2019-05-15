/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#include <nrfx_ipc.h>

#if NRFX_CHECK(NRFX_IPC_ENABLED)

// Control block - driver instance local data.
typedef struct
{
    nrfx_ipc_handler_t handler;
    nrfx_drv_state_t   state;
    void *             p_context;
} ipc_control_block_t;

static ipc_control_block_t m_ipc_cb;

nrfx_err_t nrfx_ipc_init(nrfx_ipc_handler_t handler,
                         uint8_t            irq_priority,
                         void *             p_context)
{
    NRFX_ASSERT(handler);
    if (m_ipc_cb.state != NRFX_DRV_STATE_UNINITIALIZED)
    {
        return NRFX_ERROR_ALREADY_INITIALIZED;
    }

    NRFX_IRQ_PRIORITY_SET(IPC_IRQn, irq_priority);
    NRFX_IRQ_ENABLE(IPC_IRQn);

    m_ipc_cb.state = NRFX_DRV_STATE_INITIALIZED;
    m_ipc_cb.handler = handler;
    m_ipc_cb.p_context = p_context;

    return NRFX_SUCCESS;
}

nrfx_err_t nrfx_ipc_config_load(const nrfx_ipc_config_t *p_config)
{
    if (m_ipc_cb.state == NRFX_DRV_STATE_UNINITIALIZED)
    {
        return NRFX_ERROR_INVALID_STATE;
    }

    if (!p_config)
    {
        return NRFX_ERROR_INVALID_PARAM;
    }

    uint32_t i;
    for (i = 0; i < IPC_TASKS_NUM; ++i)
    {
        nrf_ipc_send_config(NRF_IPC,
                            nrf_ipc_send_task_get(i),
                            p_config->tx_signals_channels_cfg[i]);
    }

    for (i = 0; i < IPC_EVENTS_NUM; ++i)
    {
        nrf_ipc_receive_config(NRF_IPC,
                               nrf_ipc_receive_event_get(i),
                               p_config->rx_events_channels_cfg[i]);
    }

    nrf_ipc_int_enable(NRF_IPC, p_config->rx_events_enable_cfg);

    return NRFX_SUCCESS;
}

void nrfx_ipc_uninit(void)
{
    NRFX_ASSERT(m_ipc_cb.state == NRFX_DRV_STATE_INITIALIZED);

    uint32_t i;
    for (i = 0; i < IPC_TASKS_NUM; ++i)
    {
        nrf_ipc_send_config(NRF_IPC, nrf_ipc_send_task_get(i), 0);
    }

    for (i = 0; i < IPC_EVENTS_NUM; ++i)
    {
        nrf_ipc_receive_config(NRF_IPC, nrf_ipc_receive_event_get(i), 0);
    }

    nrf_ipc_int_disable(NRF_IPC, 0xFFFFFFFF);
    m_ipc_cb.state = NRFX_DRV_STATE_UNINITIALIZED;
}

void nrfx_ipc_receive_event_enable(uint8_t event_index)
{
    NRFX_ASSERT(m_ipc_cb.state == NRFX_DRV_STATE_INITIALIZED);
    nrf_ipc_int_enable(NRF_IPC, (1 << event_index));
}

void nrfx_ipc_receive_event_disable(uint8_t event_index)
{
    NRFX_ASSERT(m_ipc_cb.state == NRFX_DRV_STATE_INITIALIZED);
    nrf_ipc_int_disable(NRF_IPC, (1 << event_index));
}

void nrfx_ipc_receive_events_set_enable(uint32_t events_bitmask)
{
    NRFX_ASSERT(m_ipc_cb.state == NRFX_DRV_STATE_INITIALIZED);
    nrf_ipc_int_enable(NRF_IPC, events_bitmask);
}

void nrfx_ipc_receive_events_set_disable(uint32_t events_bitmask)
{
    NRFX_ASSERT(m_ipc_cb.state == NRFX_DRV_STATE_INITIALIZED);
    nrf_ipc_int_disable(NRF_IPC, events_bitmask);
}

void nrfx_ipc_receive_event_channel_assign(uint8_t event_index,
                                      uint8_t channel_index)
{
    nrf_ipc_receive_channel_config(NRF_IPC,
                                   nrf_ipc_receive_event_get(event_index),
                                   (nrf_ipc_channel_t)(1 << channel_index));
}

void nrfx_ipc_send_task_channel_assign(uint8_t send_task_index,
                                       uint8_t channel_index)
{
    nrf_ipc_send_channel_config(NRF_IPC,
                                nrf_ipc_send_task_get(send_task_index),
                                (nrf_ipc_channel_t)(1 << channel_index));
}

void nrfx_ipc_receive_event_channels_config(uint8_t  event_index,
                                            uint32_t channels_bitmask)
{
    nrf_ipc_receive_config(NRF_IPC,
                           nrf_ipc_receive_event_get(event_index),
                           channels_bitmask);
}

void nrfx_ipc_send_task_channels_config(uint8_t  send_task_index,
                                        uint32_t channels_bitmask)
{
    nrf_ipc_send_config(NRF_IPC,
                        nrf_ipc_send_task_get(send_task_index),
                        channels_bitmask);
}

void nrfx_ipc_irq_handler(void)
{
    // Get the information about events that fire this interrupt
    uint32_t events_map = nrf_ipc_int_pending_get(NRF_IPC);

    // Clear these events
    uint32_t bitmask = events_map;
    uint32_t bitpos = 0;
    while (bitmask) {
        if (bitmask & 0x01)
        {
            nrf_ipc_event_clear(NRF_IPC, nrfx_bitpos_to_event(bitpos));
            // Execute interrupt handler to provide information about events to app
            m_ipc_cb.handler(bitpos, m_ipc_cb.p_context);
        }
        bitmask >>= 1;
        bitpos++;
    }

}

#endif // NRFX_CHECK(NRFX_IPC_ENABLED)
