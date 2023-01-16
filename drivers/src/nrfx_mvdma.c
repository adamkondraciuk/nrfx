/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_MVDMA_ENABLED) || NRFX_CHECK(NRFX_GMVDMA_ENABLED) || \
    NRFX_CHECK(NRFX_MVDMA110_ENABLED)

#include <nrfx_mvdma.h>

#define NRFX_LOG_MODULE MVDMA
#include <nrfx_log.h>

typedef enum
{
    NRFX_MVDMA_AXIMODE_AXI     = NRF_MVDMA_AXIMODE_AXI,
    NRFX_MVDMA_AXIMODE_AXILITE = NRF_MVDMA_AXIMODE_AXILITE,
    NRFX_MVDMA_AXIMODE_DETECT
} nrfx_mvdma_aximode_t;

typedef struct
{
    nrfx_mvdma_event_handler_t handler;
    nrf_vdma_job_t             source_job[2];
    nrf_vdma_job_t             sink_job[2];
    void *                     p_context;
    nrfx_drv_state_t           state;
    nrf_mvdma_mode_t           mode;
    nrf_mvdma_aximode_t        aximode;
    bool                       busy;
    bool                       reset_req;
} mvdma_control_block_t;
static mvdma_control_block_t m_cb[NRFX_MVDMA_ENABLED_COUNT];

/* Function checks if a job desciptor uses peripheral mode. */
static bool mvdma_peripheral_job_check(nrf_vdma_job_t const * p_job)
{
    return p_job->attributes & NRF_VDMA_EXT_ATTRIBUTE_PERIPHERAL_MODE;
}

static void mvdma_mode_set(NRF_MVDMA_Type *        p_reg,
                           mvdma_control_block_t * p_cb,
                           nrf_mvdma_mode_t        mode)
{
    if (!NRF_MVDMA_HAS_MULTIMODE)
    {
        return;
    }

    if (p_cb->mode == mode)
    {
        return;
    }

    p_cb->mode = mode;
    (void)p_reg;
    nrfy_mvdma_mode_set(p_reg, mode);
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

    p_cb->mode    = NRF_MVDMA_MODE_SINGLE;
    p_cb->aximode = NRF_MVDMA_AXIMODE_AXI;

    nrfy_mvdma_reset(p_instance->p_reg, true);
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
    nrf_vdma_job_terminate(&p_cb->source_job[1]);
    nrf_vdma_job_terminate(&p_cb->sink_job[1]);

    p_cb->state = NRFX_DRV_STATE_INITIALIZED;
    NRFX_LOG_WARNING("Function: %s, error code: %s.",
                     __func__,
                     NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}

static void mvdma_job_start(NRF_MVDMA_Type *                  p_reg,
                            mvdma_control_block_t *           p_cb,
                            nrfx_mvdma_list_request_t const * p_list_request,
                            nrfx_mvdma_aximode_t              aximode,
                            void *                            p_context)
{
    nrf_mvdma_aximode_t prev_aximode = p_cb->aximode;

    if (p_cb->reset_req)
    {
        p_cb->reset_req = false;
        // Reset task also resets MODE and AXIMODE settings.
        nrfy_mvdma_reset(p_reg, true);
    }

    if (aximode == NRFX_MVDMA_AXIMODE_DETECT)
    {
        p_cb->aximode = (mvdma_peripheral_job_check(p_list_request->p_source_job_list) ||
                         mvdma_peripheral_job_check(p_list_request->p_sink_job_list)) ?
                        NRF_MVDMA_AXIMODE_AXILITE : NRF_MVDMA_AXIMODE_AXI;
    }
    else
    {
        p_cb->aximode = (nrf_mvdma_aximode_t)aximode;
    }

    // Change aximode if it changed compared to the previous transfer .
    if (p_cb->aximode != prev_aximode)
    {
        nrfy_mvdma_aximode_set(p_reg, p_cb->aximode);
    }

    p_cb->p_context = p_context;

    mvdma_mode_set(p_reg, p_cb, NRF_MVDMA_MODE_SINGLE);
    nrfy_mvdma_job_list_set(p_reg, p_list_request);
    nrfy_mvdma_start(p_reg, NULL);
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


    nrf_vdma_job_fill(p_cb->source_job,
                      p_request->p_source,
                      p_request->size,
                      NRF_VDMA_ATTRIBUTE_PLAIN_DATA);
    nrf_vdma_job_fill(p_cb->sink_job,
                      p_request->p_sink,
                      p_request->size,
                      NRF_VDMA_ATTRIBUTE_PLAIN_DATA);

    nrfx_mvdma_list_request_t list_request =
    {
        .p_source_job_list = p_cb->source_job,
        .p_sink_job_list   = p_cb->sink_job
    };

    mvdma_job_start(p_instance->p_reg,
                    p_cb,
                    &list_request,
                    NRFX_MVDMA_AXIMODE_AXI,
                    p_request->p_context);

    return NRFX_SUCCESS;
}

nrfx_err_t nrfx_mvdma_buffer_clear(nrfx_mvdma_t const * p_instance,
                                   void const *         p_buffer,
                                   size_t               size,
                                   void *               p_context)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    NRFX_ASSERT(p_cb->state == NRFX_DRV_STATE_INITIALIZED);

    if (p_cb->busy)
    {
        return NRFX_ERROR_BUSY;
    }
    p_cb->busy = true;

    nrf_vdma_job_fill(p_cb->sink_job, p_buffer, size, NRF_VDMA_ATTRIBUTE_BUFFER_FILL);
    nrf_vdma_job_terminate(p_cb->source_job);

    nrfx_mvdma_list_request_t list_request =
    {
        .p_source_job_list = p_cb->source_job,
        .p_sink_job_list   = p_cb->sink_job
    };

    mvdma_job_start(p_instance->p_reg, p_cb, &list_request, NRFX_MVDMA_AXIMODE_AXI, p_context);

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

    mvdma_job_start(p_instance->p_reg, p_cb, p_request, NRFX_MVDMA_AXIMODE_DETECT, p_context);

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

    mvdma_mode_set(p_instance->p_reg, p_cb, NRF_MVDMA_MODE_MULTI);
    nrfy_mvdma_multi_job_list_set(p_instance->p_reg, p_request);

    return NRFX_SUCCESS;
}

/* Function checks if sink or source of a job descriptor in the list (in multimode) is using
 * peripheral mode.
 */
static bool mvdma_multi_peripheral_check(NRF_MVDMA_Type * p_reg, bool sink, uint8_t idx)
{
    nrf_vdma_job_t *p_job = sink ?
            (nrf_vdma_job_t *)((uint32_t **)nrfy_mvdma_sink_list_ptr_get(p_reg))[idx] :
            (nrf_vdma_job_t *)((uint32_t **)nrfy_mvdma_source_list_ptr_get(p_reg))[idx];

    return mvdma_peripheral_job_check(p_job);
}

nrfx_err_t nrfx_mvdma_multi_list_start(nrfx_mvdma_t const * p_instance,
                                       uint8_t              idx,
                                       void *               p_context)
{
    mvdma_control_block_t * p_cb = &m_cb[p_instance->drv_inst_idx];
    nrf_mvdma_aximode_t prev_aximode;
    nrfx_mvdma_aximode_t aximode = NRFX_MVDMA_AXIMODE_DETECT;
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

    prev_aximode = p_cb->aximode;
    if (aximode == NRFX_MVDMA_AXIMODE_DETECT)
    {
        bool periph = mvdma_multi_peripheral_check(p_instance->p_reg, true, idx) ||
                      mvdma_multi_peripheral_check(p_instance->p_reg, false, idx);
        p_cb->aximode = periph ? NRF_MVDMA_AXIMODE_AXILITE : NRF_MVDMA_AXIMODE_AXI;
    }
    else
    {
        p_cb->aximode = (nrf_mvdma_aximode_t)aximode;
    }

    if (p_cb->aximode != prev_aximode)
    {
        nrfy_mvdma_aximode_set(p_instance->p_reg, p_cb->aximode);
    }

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

    uint32_t reset_req_mask = NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SINKBUSERROR)   |
                              NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_SOURCEBUSERROR) |
#if NRF_MVDMA_HAS_NEW_VER
                              NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_PAUSED);
#else
                              NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_STOPPED);
#endif

    uint32_t event_mask = nrfy_mvdma_events_process(p_reg, mask, &list_request);

    event.type = NRFX_MVDMA_EVT_REQUEST_DONE;

    if (event_mask & reset_req_mask)
    {
        // Request DMA reset before next transfer. It's deferred from here to because
        // process involves pending on hardware event and it should be avoided in the
        // interrupt handler.
        p_cb->reset_req = true;

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
    }

    // Store user context and handler as once busy flag is cleared both can be overwritten.
    void * p_context = p_cb->p_context;
    nrfx_mvdma_event_handler_t handler = p_cb->handler;

    p_cb->busy = false;
    if (handler)
    {
        handler(&event, p_context);
    }
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

#if NRFX_CHECK(NRFX_MVDMA110_ENABLED)
void nrfx_mvdma_irq_handler(void)
{
    mvdma_irq_handler(NRF_MVDMA110, &m_cb[NRFX_MVDMA110_INST_IDX]);
}
#endif

#endif // NRFX_CHECK(NRFX_MVDMA_ENABLED) || NRFX_CHECK(NRFX_GMVDMA_ENABLED)
