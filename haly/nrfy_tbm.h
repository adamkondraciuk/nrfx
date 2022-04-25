/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFY_TBM_H__
#define NRFY_TBM_H__

#include <nrfx.h>
#include <hal/nrf_tbm.h>

#ifdef __cplusplus
extern "C" {
#endif

NRFY_STATIC_INLINE uint32_t  __nrfy_internal_tbm_event_handle(NRF_TBM_Type *  p_reg,
                                                              uint32_t        mask,
                                                              nrf_tbm_event_t event);

NRFY_STATIC_INLINE void __nrfy_internal_tbm_event_enabled_clear(NRF_TBM_Type *  p_reg,
                                                                uint32_t        mask,
                                                                nrf_tbm_event_t event);
/**
* @defgroup nrfy_tbm_hal TBM HAL
* @{
* @ingroup nrf_tbm
* @brief   Hardware access layer with cache and barrier support
*          for managing the Trace Buffer Monitor (TBM).
*/

/**
 * @brief Function for configuring the TBM.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] size  Buffer size (in 32 bit words).
 */
NRFY_STATIC_INLINE void nrfy_tbm_configure(NRF_TBM_Type * p_reg, uint32_t size)
{
    nrf_tbm_buffersize_set(p_reg, size);
    nrf_barrier_w();
}

/**
 * @brief Function for initializing the specified TBM interrutps.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] mask         Mask of interrupts to be initialized.
 * @param[in] irq_priority Interrupt priority.
 * @param[in] enable       True if the interrupts are to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_tbm_int_init(NRF_TBM_Type * p_reg,
                                          uint32_t       mask,
                                          uint8_t        irq_priority,
                                          bool           enable)
{
    __nrfy_internal_tbm_event_enabled_clear(p_reg, mask, NRF_TBM_EVENT_HALFFULL);
    __nrfy_internal_tbm_event_enabled_clear(p_reg, mask, NRF_TBM_EVENT_FULL);
    __nrfy_internal_tbm_event_enabled_clear(p_reg, mask, NRF_TBM_EVENT_FLUSH);
    nrf_barrier_w();

    NRFX_IRQ_PRIORITY_SET(nrfx_get_irq_number(p_reg), irq_priority);
    NRFX_IRQ_ENABLE(nrfx_get_irq_number(p_reg));
    if (enable)
    {
        nrf_tbm_int_enable(p_reg, mask);
    }
    nrf_barrier_w();
}

/**
 * @brief Function for uninitializing the TBM interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRFY_STATIC_INLINE void nrfy_tbm_int_uninit(NRF_TBM_Type * p_reg)
{
    NRFX_IRQ_DISABLE(nrfx_get_irq_number(p_reg));
    nrf_barrier_w();
}

/**
 * @brief Function for processing the specified TBM events.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of events to be processed,
 *                  created by @ref NRFY_EVENT_TO_INT_BITMASK().
 *
 * @return Mask of events that were generated and processed.
 *         To be checked against the result of @ref NRFY_EVENT_TO_INT_BITMASK().
 */
NRFY_STATIC_INLINE uint32_t nrfy_tbm_events_process(NRF_TBM_Type * p_reg, uint32_t mask)
{
    uint32_t evt_mask;

    nrf_barrier_r();

    evt_mask = __nrfy_internal_tbm_event_handle(p_reg, mask, NRF_TBM_EVENT_HALFFULL);
    evt_mask |= __nrfy_internal_tbm_event_handle(p_reg, mask, NRF_TBM_EVENT_FULL);
    evt_mask |= __nrfy_internal_tbm_event_handle(p_reg, mask, NRF_TBM_EVENT_FLUSH);

    nrf_barrier_w();
    return evt_mask;
}

/** @refhal{nrf_tbm_count_get} */
NRFY_STATIC_INLINE uint32_t nrfy_tbm_count_get(NRF_TBM_Type * p_reg)
{
    nrf_barrier_r();
    return nrf_tbm_count_get(p_reg);
}

/** @refhal{nrf_tbm_task_trigger} */
NRFY_STATIC_INLINE void nrfy_tbm_task_trigger(NRF_TBM_Type * p_reg, nrf_tbm_task_t task)
{
    nrf_tbm_task_trigger(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_tbm_event_clear} */
NRFY_STATIC_INLINE void nrfy_tbm_event_clear(NRF_TBM_Type *  p_reg,
                                             nrf_tbm_event_t event)
{
    nrf_tbm_event_clear(p_reg, event);
    nrf_barrier_w();
}

/** @refhal{nrf_tbm_event_check} */
NRFY_STATIC_INLINE bool nrfy_tbm_event_check(NRF_TBM_Type const * p_reg,
                                             nrf_tbm_event_t      event)
{
    nrf_barrier_r();
    bool check = nrf_tbm_event_check(p_reg, event);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_tbm_int_enable} */
NRFY_STATIC_INLINE void nrfy_tbm_int_enable(NRF_TBM_Type * p_reg, uint32_t mask)
{
    nrf_tbm_int_enable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_tbm_int_disable} */
NRFY_STATIC_INLINE void nrfy_tbm_int_disable(NRF_TBM_Type * p_reg, uint32_t mask)
{
    nrf_tbm_int_disable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_tbm_int_enable_check} */
NRFY_STATIC_INLINE uint32_t nrfy_tbm_int_enable_check(NRF_TBM_Type const * p_reg, uint32_t mask)
{
    nrf_barrier_rw();
    uint32_t check = nrf_tbm_int_enable_check(p_reg, mask);
    nrf_barrier_r();
    return check;
}

/** @} */

NRFY_STATIC_INLINE uint32_t  __nrfy_internal_tbm_event_handle(NRF_TBM_Type *  p_reg,
                                                              uint32_t        mask,
                                                              nrf_tbm_event_t event)
{
    if ((mask & NRFY_EVENT_TO_INT_BITMASK(event)) && nrf_tbm_event_check(p_reg, event))
    {
        nrf_tbm_event_clear(p_reg, event);
        return NRFY_EVENT_TO_INT_BITMASK(event);
    }
    return 0;
}

NRFY_STATIC_INLINE void __nrfy_internal_tbm_event_enabled_clear(NRF_TBM_Type *  p_reg,
                                                                uint32_t        mask,
                                                                nrf_tbm_event_t event)
{
    if (mask & NRFY_EVENT_TO_INT_BITMASK(event))
    {
        nrf_tbm_event_clear(p_reg, event);
    }
}

#ifdef __cplusplus
}
#endif

#endif // NRFY_TBM_H__
