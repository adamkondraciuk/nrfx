/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_MVDMA_H__
#define NRFY_MVDMA_H__

#include <nrfx.h>
#include <hal/nrf_mvdma.h>
#include <helpers/nrf_vdma.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nrfy_mvdma_list_request_t nrfy_mvdma_list_request_t;

NRFY_STATIC_INLINE bool __nrfy_internal_mvdma_event_handle(NRF_MVDMA_Type *  p_reg,
                                                           uint32_t          mask,
                                                           nrf_mvdma_event_t event,
                                                           uint32_t *        p_event_mask);

NRFY_STATIC_INLINE
uint32_t __nrfy_internal_mvdma_events_process(NRF_MVDMA_Type *                  p_reg,
                                              uint32_t                          mask,
                                              nrfy_mvdma_list_request_t const * p_list_request);

NRFY_STATIC_INLINE void __nrfy_internal_mvdma_event_enabled_clear(NRF_MVDMA_Type *  p_reg,
                                                                  uint32_t          mask,
                                                                  nrf_mvdma_event_t event);

NRFY_STATIC_INLINE void __nrfy_internal_mvdma_source_buffers_flush(nrf_vdma_job_t * p_source_job);

NRFY_STATIC_INLINE uint32_t __nrfy_internal_mvdma_sink_job_count_get(NRF_MVDMA_Type const * p_reg);

/**
 * @defgroup nrfy_mvdma MVDMA HALY
 * @{
 * @ingroup nrf_mvdma
 * @brief   Hardware access layer with cache and barrier support for managing the MVDMA peripheral.
 */

#if NRF_MVDMA_HAS_NEW_VER || defined(__NRFX_DOXYGEN__)
/** @refhal{NRF_MVDMA_HAS_NEW_VER} */
#define NRFY_MVDMA_HAS_NEW_VER 1
#else
#define NRFY_MVDMA_HAS_NEW_VER 0
#endif

/** @brief Structure describing list execution request for the MVDMA.*/
struct nrfy_mvdma_list_request_t
{
    nrf_vdma_job_t * p_source_job_list; ///< Pointer to the source job list.
    nrf_vdma_job_t * p_sink_job_list;   ///< Pointer to the sink job list.
};

/** @brief Auxiliary structure describing the MVDMA job list with unspecified direction. */
typedef struct
{
    nrf_vdma_job_t * p_jobs;    ///< Pointer to the job list.
    size_t           job_count; ///< Number of jobs executed, including terminating job.
    uint32_t         last_addr; ///< Last sink or source address accessed by the peripheral when the list was processed.
} nrfy_mvdma_list_desc_t;

/**
 * @brief Function for initializing the specified MVDMA interrupts.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] mask         Mask of interrupts to be initialized.
 * @param[in] irq_priority Interrupt priority.
 * @param[in] enable       True if the interrupts are to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_mvdma_int_init(NRF_MVDMA_Type * p_reg,
                                            uint32_t         mask,
                                            uint8_t          irq_priority,
                                            bool             enable)
{
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_END);
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_RESET);
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_STARTED);
#if NRFY_MVDMA_HAS_NEW_VER
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_PAUSED);
#else
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_STOPPED);
#endif
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_SINKBUSERROR);
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_SOURCEBUSERROR);
#if NRFY_MVDMA_HAS_NEW_VER
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_SINKSELECTJOBDONE);
    __nrfy_internal_mvdma_event_enabled_clear(p_reg, mask, NRF_MVDMA_EVENT_SOURCESELECTJOBDONE);
#endif
    nrf_barrier_w();

    NRFX_IRQ_PRIORITY_SET(nrfx_get_irq_number(p_reg), irq_priority);
    NRFX_IRQ_ENABLE(nrfx_get_irq_number(p_reg));
    if (enable)
    {
        nrf_mvdma_int_enable(p_reg, mask);
    }
    nrf_barrier_w();
}

/**
 * @brief Function for uninitializing the specified MVDMA interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRFY_STATIC_INLINE void nrfy_mvdma_int_uninit(NRF_MVDMA_Type * p_reg)
{
    NRFX_IRQ_DISABLE(nrfx_get_irq_number(p_reg));
    nrf_barrier_w();
}

/**
 * @brief Function for processing the specified MVDMA events.
 *
 * @param[in] p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in] mask           Mask of events to be processed,
 *                           created by @ref NRFY_EVENT_TO_INT_BITMASK().
 * @param[in] p_list_request Pointer to the structure of list execution request associated with
 *                           the last operation. Can be NULL.
 *
 * @return Mask of events that were generated and processed.
 *         To be checked against the result of @ref NRFY_EVENT_TO_INT_BITMASK().
 */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_events_process(NRF_MVDMA_Type *            p_reg,
                                                      uint32_t                    mask,
                                                      nrfy_mvdma_list_request_t * p_list_request)
{
    uint32_t evt_mask = __nrfy_internal_mvdma_events_process(p_reg, mask, p_list_request);
    nrf_barrier_w();
    return evt_mask;
}

/**
 * @brief Function for starting the MVDMA jobs.
 *
 * @param[in] p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in] p_list_request Pointer to the structure of list execution request if the transaction
 *                           is to be blocking. NULL for non-blocking transactions.
 */
NRFY_STATIC_INLINE void nrfy_mvdma_start(NRF_MVDMA_Type *                  p_reg,
                                         nrfy_mvdma_list_request_t const * p_list_request)
{
    nrf_mvdma_task_trigger(p_reg, NRF_MVDMA_TASK_START0);
    if (p_list_request)
    {
        nrf_barrier_w();
        uint32_t evt_mask = NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_END);
        while (!__nrfy_internal_mvdma_events_process(p_reg, evt_mask, p_list_request))
        {}
    }
    nrf_barrier_w();
}

/**
 * @brief Function for setting the MVDMA jobs.
 *
 * @param[in] p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in] p_list_request Pointer to the structure of list execution request.
 */
NRFY_STATIC_INLINE void nrfy_mvdma_job_list_set(NRF_MVDMA_Type *                  p_reg,
                                                nrfy_mvdma_list_request_t const * p_list_request)
{
    __nrfy_internal_mvdma_source_buffers_flush(p_list_request->p_source_job_list);

    nrf_mvdma_source_list_ptr_set(p_reg, p_list_request->p_source_job_list);
    nrf_mvdma_sink_list_ptr_set(p_reg, p_list_request->p_sink_job_list);
    nrf_barrier_w();
}

/**
 * @brief Function for resetting the MVDMA peripheral.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] wait  True if reset is to be done in blocking mode, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_mvdma_reset(NRF_MVDMA_Type * p_reg,
                                         bool             wait)
{
    nrf_mvdma_task_trigger(p_reg, NRF_MVDMA_TASK_RESET);
    if (wait)
    {
        nrf_barrier_w();
        uint32_t evt_mask = NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_RESET);
        while (!__nrfy_internal_mvdma_events_process(p_reg, evt_mask, NULL))
        {}
    }
    nrf_barrier_w();
}

/**
 * @brief Function for aborting the MVDMA transaction.
 *
 * @param[in] p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in] p_list_request Pointer to the structure of list execution request.
 */
NRFY_STATIC_INLINE void nrfy_mvdma_abort(NRF_MVDMA_Type *                  p_reg,
                                         nrfy_mvdma_list_request_t const * p_list_request)
{
#if NRF_MVDMA_HAS_NEW_VER
    nrf_mvdma_task_trigger(p_reg, NRF_MVDMA_TASK_PAUSE);
#else
    nrf_mvdma_task_trigger(p_reg, NRF_MVDMA_TASK_STOP);
#endif

    if (p_list_request)
    {
        nrf_barrier_w();
#if NRF_MVDMA_HAS_NEW_VER
        uint32_t evt_mask = NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_PAUSED);
#else
        uint32_t evt_mask = NRFY_EVENT_TO_INT_BITMASK(NRF_MVDMA_EVENT_STOPPED);
#endif
        while (!__nrfy_internal_mvdma_events_process(p_reg, evt_mask, p_list_request))
        {}
    }
    nrf_barrier_w();
}

/**
 * @brief Function for getting the MVDMA source job details
 *
 * @param[in] p_reg           Pointer to the structure of registers of the peripheral.
 * @param[in] p_job_list_desc Pointer to the structure to be filled with job list description.
 */
NRFY_STATIC_INLINE
void nrfy_mvdma_source_job_description_get(NRF_MVDMA_Type const *   p_reg,
                                           nrfy_mvdma_list_desc_t * p_job_list_desc)
{
    nrf_barrier_rw();
    p_job_list_desc->p_jobs    = nrf_mvdma_source_list_ptr_get(p_reg);
    p_job_list_desc->job_count = nrf_mvdma_source_job_count_get(p_reg);
    p_job_list_desc->last_addr = nrf_mvdma_last_source_address_get(p_reg);
    nrf_barrier_r();
}

/**
 * @brief Function for getting the MVDMA sink job details
 *
 * @param[in] p_reg           Pointer to the structure of registers of the peripheral.
 * @param[in] p_job_list_desc Pointer to the structure to be filled with job list description.
 */
NRFY_STATIC_INLINE
void nrfy_mvdma_sink_job_description_get(NRF_MVDMA_Type const *   p_reg,
                                         nrfy_mvdma_list_desc_t * p_job_list_desc)
{
    nrf_barrier_rw();
    p_job_list_desc->p_jobs    = nrf_mvdma_sink_list_ptr_get(p_reg);
    p_job_list_desc->job_count = nrf_mvdma_sink_job_count_get(p_reg);
    p_job_list_desc->last_addr = nrf_mvdma_last_sink_address_get(p_reg);
    nrf_barrier_r();
}

/** @refhal{nrf_mvdma_task_trigger} */
NRFY_STATIC_INLINE void nrfy_mvdma_task_trigger(NRF_MVDMA_Type * p_reg,
                                                nrf_mvdma_task_t task)
{
    nrf_mvdma_task_trigger(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_task_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_task_address_get(NRF_MVDMA_Type const * p_reg,
                                                        nrf_mvdma_task_t       task)
{
    return nrf_mvdma_task_address_get(p_reg, task);
}

/** @refhal{nrf_mvdma_start_task_get} */
NRFY_STATIC_INLINE nrf_mvdma_task_t nrfy_mvdma_start_task_get(NRF_MVDMA_Type const * p_reg,
                                                              uint8_t                index)
{
    return nrf_mvdma_start_task_get(p_reg, index);
}

/** @refhal{nrf_mvdma_event_clear} */
NRFY_STATIC_INLINE void nrfy_mvdma_event_clear(NRF_MVDMA_Type *  p_reg,
                                               nrf_mvdma_event_t event)
{
    nrf_mvdma_event_clear(p_reg, event);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_event_check} */
NRFY_STATIC_INLINE bool nrfy_mvdma_event_check(NRF_MVDMA_Type const * p_reg,
                                               nrf_mvdma_event_t      event)
{
    nrf_barrier_r();
    bool check = nrf_mvdma_event_check(p_reg, event);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_mvdma_event_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_event_address_get(NRF_MVDMA_Type const * p_reg,
                                                         nrf_mvdma_event_t      event)
{
    return nrf_mvdma_event_address_get(p_reg, event);
}

/** @refhal{nrf_mvdma_int_enable} */
NRFY_STATIC_INLINE void nrfy_mvdma_int_enable(NRF_MVDMA_Type * p_reg,
                                              uint32_t         mask)
{
    nrf_mvdma_int_enable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_int_disable} */
NRFY_STATIC_INLINE void nrfy_mvdma_int_disable(NRF_MVDMA_Type * p_reg,
                                               uint32_t         mask)
{
    nrf_mvdma_int_disable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_int_enable_check} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_int_enable_check(NRF_MVDMA_Type const * p_reg,
                                                        uint32_t               mask)
{
    nrf_barrier_rw();
    uint32_t check = nrf_mvdma_int_enable_check(p_reg, mask);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_mvdma_int_pending_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_int_pending_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t pending = nrf_mvdma_int_pending_get(p_reg);
    nrf_barrier_r();
    return pending;
}

#if defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_mvdma_subscribe_set} */
NRFY_STATIC_INLINE void nrfy_mvdma_subscribe_set(NRF_MVDMA_Type * p_reg,
                                                 nrf_mvdma_task_t task,
                                                 uint8_t          channel)
{
    nrf_mvdma_subscribe_set(p_reg, task, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_subscribe_clear} */
NRFY_STATIC_INLINE void nrfy_mvdma_subscribe_clear(NRF_MVDMA_Type * p_reg,
                                                   nrf_mvdma_task_t task)
{
    nrf_mvdma_subscribe_clear(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_publish_set} */
NRFY_STATIC_INLINE void nrfy_mvdma_publish_set(NRF_MVDMA_Type *  p_reg,
                                               nrf_mvdma_event_t event,
                                               uint8_t           channel)
{
    nrf_mvdma_publish_set(p_reg, event, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_publish_clear} */
NRFY_STATIC_INLINE void nrfy_mvdma_publish_clear(NRF_MVDMA_Type *  p_reg,
                                                 nrf_mvdma_event_t event)
{
    nrf_mvdma_publish_clear(p_reg, event);
    nrf_barrier_w();
}
#endif

/** @refhal{nrf_mvdma_mode_set} */
NRFY_STATIC_INLINE void nrfy_mvdma_mode_set(NRF_MVDMA_Type * p_reg,
                                            nrf_mvdma_mode_t mode)
{
    nrf_mvdma_mode_set(p_reg, mode);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_source_list_ptr_set} */
NRFY_STATIC_INLINE void nrfy_mvdma_source_list_ptr_set(NRF_MVDMA_Type *       p_reg,
                                                       nrf_vdma_job_t const * p_job)
{
    nrf_mvdma_source_list_ptr_set(p_reg, p_job);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_source_list_ptr_get} */
NRFY_STATIC_INLINE nrf_vdma_job_t * nrfy_mvdma_source_list_ptr_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_rw();
    nrf_vdma_job_t * p_job = nrf_mvdma_source_list_ptr_get(p_reg);
    nrf_barrier_r();
    return p_job;
}

/** @refhal{nrf_mvdma_sink_list_ptr_set} */
NRFY_STATIC_INLINE void nrfy_mvdma_sink_list_ptr_set(NRF_MVDMA_Type *       p_reg,
                                                     nrf_vdma_job_t const * p_job)
{
    nrf_mvdma_sink_list_ptr_set(p_reg, p_job);
    nrf_barrier_w();
}

/** @refhal{nrf_mvdma_sink_list_ptr_get} */
NRFY_STATIC_INLINE nrf_vdma_job_t * nrfy_mvdma_sink_list_ptr_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_rw();
    nrf_vdma_job_t * p_job = nrf_mvdma_sink_list_ptr_get(p_reg);
    nrf_barrier_r();
    return p_job;
}

/** @refhal{nrf_mvdma_crc_result_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_crc_result_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t crc_result = nrf_mvdma_crc_result_get(p_reg);
    nrf_barrier_r();
    return crc_result;
}

/** @refhal{nrf_mvdma_fifo_status_get} */
NRFY_STATIC_INLINE nrf_mvdma_fifo_status_t nrfy_mvdma_fifo_status_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    nrf_mvdma_fifo_status_t fifo_status = nrf_mvdma_fifo_status_get(p_reg);
    nrf_barrier_r();
    return fifo_status;
}

/** @refhal{nrf_mvdma_activity_check} */
NRFY_STATIC_INLINE bool nrfy_mvdma_activity_check(NRF_MVDMA_Type * p_reg)
{
    nrf_barrier_r();
    bool check = nrf_mvdma_activity_check(p_reg);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_mvdma_source_error_get} */
NRFY_STATIC_INLINE
nrf_mvdma_source_error_t nrfy_mvdma_source_error_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    nrf_mvdma_source_error_t error = nrf_mvdma_source_error_get(p_reg);
    nrf_barrier_r();
    return error;
}

/** @refhal{nrf_mvdma_sink_error_get} */
NRFY_STATIC_INLINE nrf_mvdma_sink_error_t nrfy_mvdma_sink_error_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    nrf_mvdma_sink_error_t error = nrf_mvdma_sink_error_get(p_reg);
    nrf_barrier_r();
    return error;
}

/** @refhal{nrf_mvdma_last_source_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_last_source_address_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t address = nrf_mvdma_last_source_address_get(p_reg);
    nrf_barrier_r();
    return address;
}

/** @refhal{nrf_mvdma_last_sink_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_last_sink_address_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t address = nrf_mvdma_last_sink_address_get(p_reg);
    nrf_barrier_r();
    return address;
}

/** @refhal{nrf_mvdma_source_job_count_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_source_job_count_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t job_count = nrf_mvdma_source_job_count_get(p_reg);
    nrf_barrier_r();
    return job_count;
}

/** @refhal{nrf_mvdma_sink_job_count_get} */
NRFY_STATIC_INLINE uint32_t nrfy_mvdma_sink_job_count_get(NRF_MVDMA_Type const * p_reg)
{
    return __nrfy_internal_mvdma_sink_job_count_get(p_reg);
}

/** @} */

NRFY_STATIC_INLINE bool __nrfy_internal_mvdma_event_handle(NRF_MVDMA_Type *  p_reg,
                                                           uint32_t          mask,
                                                           nrf_mvdma_event_t event,
                                                           uint32_t *        p_event_mask)
{
    if ((mask & NRFY_EVENT_TO_INT_BITMASK(event)) && nrf_mvdma_event_check(p_reg, event))
    {
        nrf_mvdma_event_clear(p_reg, event);
        if (p_event_mask)
        {
            *p_event_mask |= NRFY_EVENT_TO_INT_BITMASK(event);
        }
        return true;
    }
    return false;
}

NRFY_STATIC_INLINE
uint32_t __nrfy_internal_mvdma_events_process(NRF_MVDMA_Type *                  p_reg,
                                              uint32_t                          mask,
                                              nrfy_mvdma_list_request_t const * p_list_request)
{
    uint32_t evt_mask = 0;

    nrf_barrier_r();
    (void)__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_RESET, &evt_mask);
    (void)__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_STARTED, &evt_mask);
    (void)__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_SINKBUSERROR, &evt_mask);
    (void)__nrfy_internal_mvdma_event_handle(p_reg,
                                             mask,
                                             NRF_MVDMA_EVENT_SOURCEBUSERROR,
                                             &evt_mask);
#if NRF_MVDMA_HAS_NEW_VER
    (void)__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_SINKSELECTJOBDONE, &evt_mask);
    (void)__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_SOURCESELECTJOBDONE, &evt_mask);
#endif

    bool invalidated = false;

#if NRF_MVDMA_HAS_NEW_VER
    if (__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_PAUSED, &evt_mask))
#else
    if (__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_STOPPED, &evt_mask))
#endif
    {
        size_t job_count = __nrfy_internal_mvdma_sink_job_count_get(p_reg);
        for (size_t i = 0; i < job_count; i++)
        {
            NRFY_CACHE_INV(p_list_request->p_sink_job_list[i].p_buffer,
                           p_list_request->p_sink_job_list[i].size);
        }
        invalidated = true;
    }

    if (__nrfy_internal_mvdma_event_handle(p_reg, mask, NRF_MVDMA_EVENT_END, &evt_mask) &&
        !invalidated)
    {
        for (nrf_vdma_job_t * p_job = p_list_request->p_sink_job_list;
             p_job->p_buffer != NULL;
             p_job++)
        {
            NRFY_CACHE_INV(p_job->p_buffer, p_job->size);
        }
    }

    return evt_mask;
}

NRFY_STATIC_INLINE void __nrfy_internal_mvdma_event_enabled_clear(NRF_MVDMA_Type *  p_reg,
                                                                  uint32_t          mask,
                                                                  nrf_mvdma_event_t event)
{
    if (mask & NRFY_EVENT_TO_INT_BITMASK(event))
    {
        nrf_mvdma_event_clear(p_reg, event);
    }
}

NRFY_STATIC_INLINE void __nrfy_internal_mvdma_source_buffers_flush(nrf_vdma_job_t * p_source_job)
{
    for (nrf_vdma_job_t * p_job = p_source_job; p_job->p_buffer != NULL; p_job++)
    {
        NRFY_CACHE_WB(p_job->p_buffer, p_job->size);
    }
}

NRFY_STATIC_INLINE uint32_t __nrfy_internal_mvdma_sink_job_count_get(NRF_MVDMA_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t job_count = nrf_mvdma_sink_job_count_get(p_reg);
    nrf_barrier_r();
    return job_count;
}

#ifdef __cplusplus
}
#endif

#endif // NRFY_MVDMA_H__
