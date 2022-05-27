/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_MVDMA_ENABLED) || NRFX_CHECK(NRFX_GMVDMA_ENABLED)

#include <nrfx_mvdma.h>

#define NRFX_LOG_MODULE MVDMA
#include <nrfx_log.h>

typedef struct
{
    nrfx_mvdma_event_handler_t handler;
    nrf_vdma_job_t             source_job;
    nrf_vdma_job_t             source_terminating_job;
    nrf_vdma_job_t             sink_job;
    nrf_vdma_job_t             sink_terminating_job;
    void *                     p_context;
    nrfx_drv_state_t           state;
    nrf_mvdma_mode_t           mode;
    bool                       busy;
} mvdma_control_block_t;
static mvdma_control_block_t m_cb[NRFX_MVDMA_ENABLED_COUNT];

static void mvdma_config_reset(nrfx_mvdma_t const * p_instance)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];

    // Event RESET arrives immediately after triggering the corresponding task.
    nrfy_mvdma_reset(p_instance->p_reg, true);
    nrfy_mvdma_mode_set(p_instance->p_reg, p_cb->mode);
}

static void mvdma_state_change(nrfx_mvdma_t const * p_instance)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];

    p_cb->mode = (p_cb->mode == NRF_MVDMA_MODE_SINGLE) ?
                 NRF_MVDMA_MODE_MULTI : NRF_MVDMA_MODE_SINGLE;
    nrfy_mvdma_mode_set(p_instance->p_reg, p_cb->mode);
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

    p_cb->mode = NRF_MVDMA_MODE_SINGLE;

    mvdma_config_reset(p_instance);
    nrfy_mvdma_int_init(p_instance->p_reg,
                        NRF_MVDMA_INT_END_MASK |
#if NRF_MVDMA_HAS_NEW_VER
                        NRF_MVDMA_INT_PAUSED_MASK |
                        NRF_MVDMA_INT_SINKSELECTJOBDONE_MASK |
                        NRF_MVDMA_INT_SOURCESELECTJOBDONE_MASK |
#else
                        NRF_MVDMA_INT_STOPPED_MASK |
#endif
                        NRF_MVDMA_INT_SINKBUSERROR_MASK |
                        NRF_MVDMA_INT_SOURCEBUSERROR_MASK,
                        interrupt_priority,
                        true);

    p_cb->busy = false;
    p_cb->handler = event_handler;
    nrf_vdma_job_terminate(&p_cb->source_terminating_job);
    nrf_vdma_job_terminate(&p_cb->sink_terminating_job);

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
    mvdma_config_reset(p_instance);

    nrf_vdma_job_fill(&p_cb->source_job,
                      p_request->p_source,
                      p_request->size,
                      NRF_VDMA_ATTRIBUTE_PLAIN_DATA);
    nrf_vdma_job_fill(&p_cb->sink_job,
                      p_request->p_sink,
                      p_request->size,
                      NRF_VDMA_ATTRIBUTE_PLAIN_DATA);
    p_cb->p_context = p_request->p_context;

    nrfx_mvdma_list_request_t p_list_request =
    {
        .p_source_job_list = &p_cb->source_job,
        .p_sink_job_list   = &p_cb->sink_job
    };

    if (p_cb->mode == NRF_MVDMA_MODE_MULTI)
    {
        mvdma_state_change(p_instance);
    }

    nrfy_mvdma_job_list_set(p_instance->p_reg, &p_list_request);
    nrfy_mvdma_start(p_instance->p_reg, NULL);

    return NRFX_SUCCESS;
}

nrfx_err_t nrfx_mvdma_buffer_clear(nrfx_mvdma_t const * p_instance,
                                   void const *         p_buffer,
                                   size_t               size)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    if (p_cb->busy)
    {
        return NRFX_ERROR_BUSY;
    }
    p_cb->busy = true;

    nrf_vdma_job_fill(&p_cb->sink_job, p_buffer, size, NRF_VDMA_ATTRIBUTE_BUFFER_FILL);

    nrfx_mvdma_list_request_t p_list_request =
    {
        .p_source_job_list = &p_cb->source_terminating_job,
        .p_sink_job_list   = &p_cb->sink_job
    };

    if (p_cb->mode == NRF_MVDMA_MODE_MULTI)
    {
        mvdma_state_change(p_instance);
    }

    nrfy_mvdma_job_list_set(p_instance->p_reg, &p_list_request);
    nrfy_mvdma_start(p_instance->p_reg, NULL);

    return NRFX_SUCCESS;
}

nrfx_err_t nrfx_mvdma_list_execute(nrfx_mvdma_t const *              p_instance,
                                   nrfx_mvdma_list_request_t const * p_request,
                                   void *                            p_context)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    if (p_cb->busy)
    {
        return NRFX_ERROR_BUSY;
    }
    p_cb->busy = true;

    // MVDMA reset is needed in case of starting new transfer after abort or error.
    mvdma_config_reset(p_instance);


    p_cb->p_context = p_context;

    if (p_cb->mode == NRF_MVDMA_MODE_MULTI)
    {
        mvdma_state_change(p_instance);
    }

    nrfy_mvdma_job_list_set(p_instance->p_reg, p_request);
    nrfy_mvdma_start(p_instance->p_reg, NULL);

    return NRFX_SUCCESS;
}

#if NRF_MVDMA_HAS_MULTIMODE
nrfx_err_t nrfx_mvdma_multi_list_set(nrfx_mvdma_t const *                    p_instance,
                                     nrfx_mvdma_multi_list_request_t const * p_request)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);
    NRFX_ASSERT(p_request->length < MVDMA_JOBLISTCOUNT);

    // Avoid changing job lists when instance is busy.
    if (p_cb->busy)
    {
        return NRFX_ERROR_BUSY;
    }

    if (p_cb->mode == NRF_MVDMA_MODE_SINGLE)
    {
        mvdma_state_change(p_instance);
    }

    nrfy_mvdma_multi_job_list_set(p_instance->p_reg, p_request);

    return NRFX_SUCCESS;
}

nrfx_err_t nrfx_mvdma_multi_list_start(nrfx_mvdma_t const * p_instance,
                                       uint8_t              idx,
                                       void *               p_context)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    if (p_cb->mode != NRF_MVDMA_MODE_MULTI)
    {
        return NRFX_ERROR_INVALID_STATE;
    }

    if (p_cb->busy)
    {
        return NRFX_ERROR_BUSY;
    }
    p_cb->busy = true;

    // MVDMA reset is needed in case of starting new transfer after abort or error.
    mvdma_config_reset(p_instance);

    p_cb->p_context = p_context;

    nrfy_mvdma_multi_start(p_instance->p_reg, idx, NULL);

    return NRFX_SUCCESS;
}
#endif // NRF_MVDMA_HAS_MULTIMODE

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

    nrfy_mvdma_abort(p_instance->p_reg, NULL);
}

void nrfx_mvdma_uninit(nrfx_mvdma_t const * p_instance)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    nrfy_mvdma_reset(p_instance->p_reg, false);

    p_cb->state = NRFX_DRV_STATE_UNINITIALIZED;
}

static void mvdma_irq_handler(NRF_MVDMA_Type * p_reg, mvdma_control_block_t * p_cb)
{
    nrfx_mvdma_event_t event;

    nrfy_mvdma_source_job_description_get(p_reg, (nrfy_mvdma_list_desc_t*)&event.source.list);
    event.source.error = NRF_MVDMA_SOURCE_ERROR_NONE;

    nrfy_mvdma_sink_job_description_get(p_reg, (nrfy_mvdma_list_desc_t*)&event.sink.list);
    event.sink.error = NRF_MVDMA_SINK_ERROR_NONE;

    nrfx_mvdma_list_request_t list_request =
    {
        .p_source_job_list = event.source.list.p_jobs,
        .p_sink_job_list   = event.sink.list.p_jobs
    };

    uint32_t mask = NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_END) |
#if NRF_MVDMA_HAS_NEW_VER
                    NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_PAUSED) |
                    NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SINKSELECTJOBDONE) |
                    NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SOURCESELECTJOBDONE) |
#else
                    NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_STOPPED) |
#endif
                    NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SINKBUSERROR) |
                    NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SOURCEBUSERROR);

    uint32_t event_mask = nrfy_mvdma_events_process(p_reg, mask, &list_request);

    event.type = NRFX_MVDMA_EVT_REQUEST_DONE;

    if (event_mask & NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SOURCEBUSERROR))
    {
        event.type = NRFX_MVDMA_EVT_ERROR;
        event.source.error = nrfy_mvdma_source_error_get(p_reg);
    }

    if (event_mask & NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SINKBUSERROR))
    {
        event.type = NRFX_MVDMA_EVT_ERROR;
        event.sink.error = nrfy_mvdma_sink_error_get(p_reg);
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
