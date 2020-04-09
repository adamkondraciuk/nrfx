/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_MVDMA_H__
#define NRFX_MVDMA_H__

#include <nrfx.h>
#include <hal/nrf_mvdma.h>
#include <helpers/include/nrfx_vdma.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_mvdma MVDMA driver
 * @{
 * @ingroup nrf_mvdma
 * @brief   Memory-to-Memory Vector DMA (MVDMA) peripheral driver.
 */

/** @brief Structure for the MVDMA driver instance. */
typedef struct
{
    NRF_MVDMA_Type * p_reg;        ///< Pointer to a structure with MVDMA registers.
    uint8_t          drv_inst_idx; ///< Index of the driver instance. For internal use only.
} nrfx_mvdma_t;

#ifndef __NRFX_DOXYGEN__
enum {
#if NRFX_CHECK(NRFX_MVDMA_ENABLED)
    NRFX_MVDMA_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_GMVDMA_ENABLED)
    NRFX_GMVDMA_INST_IDX,
#endif
    NRFX_MVDMA_ENABLED_COUNT
};
#endif

/**
 * @brief Macro for creating a MVDMA driver instance.
 *
 * @param[in] _inst_name Name of the peripheral instance, without the @c NRF_ prefix.
 *                       Valid values are: @c MVDMA and @c GMVDMA.
 */
#define NRFX_MVDMA_INSTANCE(_inst_name)                         \
{                                                               \
    .p_reg        = NRFX_CONCAT_2(NRF_, _inst_name),            \
    .drv_inst_idx = NRFX_CONCAT_3(NRFX_, _inst_name, _INST_IDX) \
}

/** @brief Structure describing copy request for the MVDMA driver. */
typedef struct
{
    uint8_t const * p_source;  ///< Pointer to the source buffer.
    uint8_t *       p_sink;    ///< Pointer to the sink buffer.
    size_t          size;      ///< Number of bytes to copy.
    void *          p_context; ///< Request context.
} nrfx_mvdma_copy_request_t;

/** @brief Structure describing list execution request for the MVDMA driver. */
typedef struct
{
    nrfx_vdma_job_t * p_source_job_list; ///< Pointer to the source job list.
    nrfx_vdma_job_t * p_sink_job_list;   ///< Pointer to the sink job list.
    void *            p_context;         ///< Request context.
} nrfx_mvdma_list_request_t;

/** @brief MVDMA driver event types. */
typedef enum
{
    NRFX_MVDMA_EVT_REQUEST_DONE, ///< Request done.
    NRFX_MVDMA_EVT_ERROR,        ///< Source and/or sink error.
} nrfx_mvdma_evt_type_t;

/** @brief Auxiliary structure describing the MVDMA event for job list with unspecified direction. */
typedef struct
{
    nrfx_vdma_job_t * p_jobs;    ///< Pointer to the job list.
    size_t            job_count; ///< Number of jobs executed, including terminating job.
    uint32_t          last_addr; ///< Last source address accessed by the peripheral when the list was processed.
} nrfx_mvdma_list_evt_t;

/** @brief Stucture describing the MVDMA event for the source job list. */
typedef struct
{
    nrfx_mvdma_list_evt_t    list;  ///< Source job list details.
    nrf_mvdma_source_error_t error; ///< Source error code.
} nrfx_mvdma_source_evt_t;

/** @brief Stucture describing the MVDMA event for the sink job list. */
typedef struct
{
    nrfx_mvdma_list_evt_t  list;  ///< Sink job list details.
    nrf_mvdma_sink_error_t error; ///< Sink error code.
} nrfx_mvdma_sink_evt_t;

/** @brief Structure describing event of the MVDMA driver. */
typedef struct
{
    nrfx_mvdma_evt_type_t   type;   ///< Event type.
    nrfx_mvdma_source_evt_t source; ///< Event data for the source job list.
    nrfx_mvdma_sink_evt_t   sink;   ///< Event data for the sink job list.
} nrfx_mvdma_event_t;

/**
 * @brief MVDMA driver event handler.
 *
 * @param[in] p_event   Pointer to event structure. Event is allocated on the stack so it is available
 *                      only within the context of the event handler.
 * @param[in] p_context Context passed to the interrupt handler, set on copy or list execution request.
 */
typedef void (*nrfx_mvdma_event_handler_t)(nrfx_mvdma_event_t const * p_event, void * p_context);

/**
 * @brief Function for initializing the MVDMA driver instance.
 *
 * @param[in] p_instance         Pointer to the driver instance structure.
 * @param[in] interrupt_priority Interrupt priority.
 * @param[in] event_handler      Event handler provided by the user. Must not be NULL.
 *
 * @retval NRFX_SUCCESS                   Initialization was successful.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED The driver is already initialized.
 */
nrfx_err_t nrfx_mvdma_init(nrfx_mvdma_t const *       p_instance,
                           uint8_t                    interrupt_priority,
                           nrfx_mvdma_event_handler_t event_handler);

/**
 * @brief Function for uninitializing the MVDMA driver instance.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 */
void nrfx_mvdma_uninit(nrfx_mvdma_t const * p_instance);

/**
 * @brief Function for requesting a single copy operation.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] p_request  Pointer to the structure that decribe the request.
 *
 * @retval NRFX_SUCCESS    Copy operation requested successfully.
 * @retval NRFX_ERROR_BUSY Different request is executed at the moment.
 */
nrfx_err_t nrfx_mvdma_copy(nrfx_mvdma_t const *              p_instance,
                           nrfx_mvdma_copy_request_t const * p_request);

/**
 * @brief Function for executing the specified source and sink job lists.
 *
 * @warning Job lists must remain valid while being processed by the MVDMA peripheral.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] p_request  Pointer to the structure that decribe the request.
 *
 * @retval NRFX_SUCCESS    Execution of job list requested successfully.
 * @retval NRFX_ERROR_BUSY Different request is executed at the moment.
 */
nrfx_err_t nrfx_mvdma_list_execute(nrfx_mvdma_t const *              p_instance,
                                   nrfx_mvdma_list_request_t const * p_request);

/**
 * @brief Function for checking if the specified driver instance is busy.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 *
 * @retval true  Driver is busy.
 * @retval false Driver is not busy.
 */
bool nrfx_mvdma_busy_check(nrfx_mvdma_t const * p_instance);

/**
 * @brief Function for aborting an ongoing request.
 *
 * @note @ref NRFX_MVDMA_EVT_REQUEST_DONE event will be generated when the request is aborted.
 *       It will contain number of jobs performed until the abort was called. The event
 *       handler will be called from the MVDMA interrupt context.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 */
void nrfx_mvdma_abort(nrfx_mvdma_t const * p_instance);

/** @} */

void nrfx_mvdma_irq_handler(void);

void nrfx_gmvdma_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_MVDMA_H__
