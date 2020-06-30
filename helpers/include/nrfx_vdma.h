/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_VDMA_H__
#define NRFX_VDMA_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_vdma Generic Vector DMA layer.
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
} nrfx_vdma_job_t;

typedef enum
{
    NRFX_VDMA_ATTRIBUTE_NEWJOBLISTPTR = 0x55, ///< Job buffer contains pointer to the new list.
} nrfx_vdma_attributes_t;

/**
 * @brief Function for filling the specified structure of the job with given job parameters.
 *
 * @param[out] p_job      Pointer to the structure of the job to be filled.
 * @param[in]  p_buffer   Job buffer.
 * @param[in]  size       Size of the job buffer.
 * @param[in]  attributes Attributes of the job.
 */
__STATIC_INLINE void nrfx_vdma_job_fill(nrfx_vdma_job_t * p_job,
                                        void const *      p_buffer,
                                        size_t            size,
                                        uint8_t           attributes)
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
__STATIC_INLINE void * nrfx_vdma_job_buffer_get(nrfx_vdma_job_t const * p_job)
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
__STATIC_INLINE size_t nrfx_vdma_job_size_get(nrfx_vdma_job_t const * p_job)
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
__STATIC_INLINE void nrfx_vdma_job_terminate(nrfx_vdma_job_t * p_job)
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
__STATIC_INLINE void nrfx_vdma_job_link(nrfx_vdma_job_t *       p_job,
                                        nrfx_vdma_job_t const * p_job_linked)
{
    p_job->p_buffer   = (uint8_t *)p_job_linked;
    p_job->attributes = NRFX_VDMA_ATTRIBUTE_NEWJOBLISTPTR;
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_VDMA_H__
