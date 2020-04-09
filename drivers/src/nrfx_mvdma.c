/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_MVDMA_ENABLED) || NRFX_CHECK(NRFX_GMVDMA_ENABLED)

#include <nrfx_mvdma.h>

#define NRFX_LOG_MODULE MVDMA
#include <nrfx_log.h>

typedef struct
{
    nrfx_mvdma_event_handler_t handler;
    nrfx_vdma_job_t            source_job;
    nrfx_vdma_job_t            source_terminating_job;
    nrfx_vdma_job_t            sink_job;
    nrfx_vdma_job_t            sink_terminating_job;
    void *                     p_context;
    nrfx_drv_state_t           state;
    bool                       busy;
} mvdma_control_block_t;
static mvdma_control_block_t m_cb[NRFX_MVDMA_ENABLED_COUNT];

static void mvdma_config_reset(NRF_MVDMA_Type * p_reg)
{
    // Event RESET arrives immediately after triggering the corresponding task.
    nrf_mvdma_task_trigger(p_reg, NRF_MVDMA_TASK_RESET);
    while (!nrf_mvdma_event_check(p_reg, NRF_MVDMA_EVENT_RESET))
    {}
    nrf_mvdma_event_clear(p_reg, NRF_MVDMA_EVENT_RESET);
    nrf_mvdma_mode_set(p_reg, NRF_MVDMA_MODE_SINGLE);
}

nrfx_err_t nrfx_mvdma_init(nrfx_mvdma_t const *       p_instance,
                           uint8_t                    interrupt_priority,
                           nrfx_mvdma_event_handler_t event_handler)
{
    NRFX_ASSERT(event_handler);

    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    nrfx_err_t err_code = NRFX_SUCCESS;

    if (p_cb->state != NRFX_DRV_STATE_UNINITIALIZED)
    {
        err_code = NRFX_ERROR_INVALID_STATE;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    mvdma_config_reset(p_instance->p_reg);
    nrf_mvdma_int_enable(p_instance->p_reg, NRF_MVDMA_INT_END_MASK |
                                            NRF_MVDMA_INT_STOPPED_MASK |
                                            NRF_MVDMA_INT_SOURCEBUSERROR_MASK |
                                            NRF_MVDMA_INT_SINKBUSERROR_MASK);
    NRFX_IRQ_PRIORITY_SET(nrfx_get_irq_number((void *)p_instance->p_reg), interrupt_priority);
    NRFX_IRQ_ENABLE(nrfx_get_irq_number((void *)p_instance->p_reg));

    p_cb->busy = false;
    p_cb->handler = event_handler;
    nrfx_vdma_job_terminate(&p_cb->source_terminating_job);
    nrfx_vdma_job_terminate(&p_cb->sink_terminating_job);

    p_cb->state = NRFX_DRV_STATE_INITIALIZED;
    NRFX_LOG_WARNING("Function: %s, error code: %s.",
                     __func__,
                     NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}

nrfx_err_t nrfx_mvdma_copy(nrfx_mvdma_t const *              p_instance,
                           nrfx_mvdma_copy_request_t const * p_request)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    if (p_cb->busy)
    {
        return NRFX_ERROR_BUSY;
    }
    p_cb->busy = true;

    // MVDMA reset is needed in case of starting new transfer after abort or error.
    mvdma_config_reset(p_instance->p_reg);

    nrfx_vdma_job_fill(&p_cb->source_job, p_request->p_source, p_request->size, 0);
    nrfx_vdma_job_fill(&p_cb->sink_job, p_request->p_sink, p_request->size, 0);
    p_cb->p_context = p_request->p_context;

    nrf_mvdma_source_address_set(p_instance->p_reg, (uint32_t)&p_cb->source_job);
    nrf_mvdma_sink_address_set(p_instance->p_reg, (uint32_t)&p_cb->sink_job);
    nrf_mvdma_task_trigger(p_instance->p_reg, NRF_MVDMA_TASK_START0);

    return NRFX_SUCCESS;
}

nrfx_err_t nrfx_mvdma_list_execute(nrfx_mvdma_t const *              p_instance,
                                   nrfx_mvdma_list_request_t const * p_job_list)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    if (p_cb->busy)
    {
        return NRFX_ERROR_BUSY;
    }
    p_cb->busy = true;

    // MVDMA reset is needed in case of starting new transfer after abort or error.
    mvdma_config_reset(p_instance->p_reg);

    p_cb->p_context = p_job_list->p_context;

    nrf_mvdma_source_address_set(p_instance->p_reg, (uint32_t)p_job_list->p_source_job_list);
    nrf_mvdma_sink_address_set(p_instance->p_reg, (uint32_t)p_job_list->p_sink_job_list);
    nrf_mvdma_task_trigger(p_instance->p_reg, NRF_MVDMA_TASK_START0);

    return NRFX_SUCCESS;
}

bool nrfx_mvdma_busy_check(nrfx_mvdma_t const * p_instance)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    return p_cb->busy;
}

void nrfx_mvdma_abort(nrfx_mvdma_t const * p_instance)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    nrf_mvdma_task_trigger(p_instance->p_reg, NRF_MVDMA_TASK_STOP);
}

void nrfx_mvdma_uninit(nrfx_mvdma_t const * p_instance)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    NRFX_IRQ_DISABLE(nrfx_get_irq_number((void *)p_instance->p_reg));
    nrf_mvdma_task_trigger(p_instance->p_reg, NRF_MVDMA_TASK_RESET);
    p_cb->state = NRFX_DRV_STATE_UNINITIALIZED;
}

static void mvdma_irq_handler(NRF_MVDMA_Type * p_reg, mvdma_control_block_t * p_cb)
{
    nrfx_mvdma_event_t event;

    event.source.list.p_jobs    = (nrfx_vdma_job_t *)nrf_mvdma_source_address_get(p_reg);
    event.source.list.job_count = nrf_mvdma_source_job_count_get(p_reg);
    event.source.list.last_addr = nrf_mvdma_last_source_address_get(p_reg);
    event.source.error          = NRF_MVDMA_SOURCE_ERROR_NONE;

    event.sink.list.p_jobs    = (nrfx_vdma_job_t *)nrf_mvdma_sink_address_get(p_reg);
    event.sink.list.job_count = nrf_mvdma_sink_job_count_get(p_reg);
    event.sink.list.last_addr = nrf_mvdma_last_sink_address_get(p_reg);
    event.sink.error          = NRF_MVDMA_SINK_ERROR_NONE;

    event.type = NRFX_MVDMA_EVT_REQUEST_DONE;

    if (nrf_mvdma_event_check(p_reg, NRF_MVDMA_EVENT_SOURCEBUSERROR))
    {
        nrf_mvdma_event_clear(p_reg, NRF_MVDMA_EVENT_SOURCEBUSERROR);
        event.type = NRFX_MVDMA_EVT_ERROR;
        event.source.error = nrf_mvdma_source_error_get(p_reg);
    }

    if (nrf_mvdma_event_check(p_reg, NRF_MVDMA_EVENT_SINKBUSERROR))
    {
        nrf_mvdma_event_clear(p_reg, NRF_MVDMA_EVENT_SINKBUSERROR);
        event.type = NRFX_MVDMA_EVT_ERROR;
        event.sink.error = nrf_mvdma_sink_error_get(p_reg);
    }

    if (event.type != NRFX_MVDMA_EVT_ERROR)
    {
        if (nrf_mvdma_event_check(p_reg, NRF_MVDMA_EVENT_STOPPED))
        {
            nrf_mvdma_event_clear(p_reg, NRF_MVDMA_EVENT_STOPPED);
        }
        else
        {
            nrf_mvdma_event_clear(p_reg, NRF_MVDMA_EVENT_END);
        }
    }

    p_cb->busy = false;
    p_cb->handler(&event, p_cb->p_context);
}

#if NRFX_CHECK(NRFX_MVDMA_ENABLED)
void nrfx_mvdma_irq_handler(void)
{
    mvdma_irq_handler(NRF_MVDMA, &m_cb[NRFX_MVDMA_INST_IDX]);
}
#endif

#if NRFX_CHECK(NRFX_GMVDMA_ENABLED)
void nrfx_gmvdma_irq_handler(void)
{
    mvdma_irq_handler(NRF_GMVDMA, &m_cb[NRFX_GMVDMA_INST_IDX]);
}
#endif

#endif // NRFX_CHECK(NRFX_MVDMA_ENABLED) || NRFX_CHECK(NRFX_GMVDMA_ENABLED)
