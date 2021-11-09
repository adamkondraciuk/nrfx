/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_VDMA_H__
#define NRF_VDMA_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vdma Generic Vector DMA layer.
 * @{
 * @ingroup nrf_mvdma
 * @brief   Helper layer that provides the common functionality for Vector DMA (VDMA).
 */

/** @brief Structure describing VDMA job. */
typedef struct __PACKED
{
    uint8_t * p_buffer;   ///< Pointer to the job buffer.
    uint32_t  size : 24;  ///< Size of the job buffer.
    uint8_t   attributes; ///< Attributes of the job.
} nrf_vdma_job_t;

/** @brief VDMA attributes. */
typedef enum
{
    NRF_VDMA_ATTRIBUTE_NEWJOBLISTPTR = 0x55, ///< Job buffer contains pointer to the new list.
} nrf_vdma_attributes_t;

/**
 * @brief Function for filling the specified structure of the job with given job parameters.
 *
 * @param[out] p_job      Pointer to the structure of the job to be filled.
 * @param[in]  p_buffer   Job buffer.
 * @param[in]  size       Size of the job buffer.
 * @param[in]  attributes Attributes of the job.
 */
__STATIC_INLINE void nrf_vdma_job_fill(nrf_vdma_job_t * p_job,
                                       void const *     p_buffer,
                                       size_t           size,
                                       uint8_t          attributes)
{
    p_job->p_buffer   = (uint8_t *)p_buffer;
    p_job->size       = (uint32_t)size;
    p_job->attributes = attributes;
}

/**
 * @brief Function for getting the pointer to the buffer associated with specified job.
 *
 * @param[in] p_job Pointer to the structure of the specified job.
 *
 * @return Pointer to the job buffer.
 */
__STATIC_INLINE void * nrf_vdma_job_buffer_get(nrf_vdma_job_t const * p_job)
{
    return (void *)p_job->p_buffer;
}

/**
 * @brief Function for getting the size of the buffer associated with specified job.
 *
 * @param[in] p_job Pointer to the structure of the specified job.
 *
 * @return Size of the job buffer.
 */
__STATIC_INLINE size_t nrf_vdma_job_size_get(nrf_vdma_job_t const * p_job)
{
    return (size_t)p_job->size;
}

/**
 * @brief Function for terminating the specified job.
 *
 * When VectorDMA encounters job that is terminated, processing of the job list stops.
 *
 * @param[out] p_job Pointer to the structure of the job to be terminated.
 */
__STATIC_INLINE void nrf_vdma_job_terminate(nrf_vdma_job_t * p_job)
{
    p_job->p_buffer = NULL;
}

/**
 * @brief Function for linking the job with another job.
 *
 * When VectorDMA encounters job that is linked to another job,
 * execution of the linked job starts.
 *
 * @param[out] p_job        Pointer to the structure of the job to become link.
 * @param[in]  p_job_linked Pointer to the structure of the job to be linked.
 */
__STATIC_INLINE void nrf_vdma_job_link(nrf_vdma_job_t *       p_job,
                                       nrf_vdma_job_t const * p_job_linked)
{
    p_job->p_buffer   = (uint8_t *)p_job_linked;
    p_job->attributes = NRF_VDMA_ATTRIBUTE_NEWJOBLISTPTR;
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VDMA_H__
