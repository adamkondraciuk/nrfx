/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_TBM_H__
#define NRF_TBM_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_tbm_hal TBM HAL
 * @{
 * @ingroup nrf_tbm
 * @brief   Hardware access layer for managing the Trace Buffer Monitor (TBM) peripheral.
 */

/** @brief TBM tasks. */
typedef enum
{
    NRF_TBM_TASK_START = offsetof(NRF_TBM_Type, TASKS_START), ///< Start counter.
    NRF_TBM_TASK_STOP  = offsetof(NRF_TBM_Type, TASKS_STOP),  ///< Stop counter.
    NRF_TBM_TASK_FLUSH = offsetof(NRF_TBM_Type, TASKS_FLUSH), ///< Stop counter, keep counter value.
} nrf_tbm_task_t;

/** @brief TBM events. */
typedef enum
{
    NRF_TBM_EVENT_HALFFULL = offsetof(NRF_TBM_Type, EVENTS_HALFFULL), ///< Buffer half-full.
    NRF_TBM_EVENT_FULL     = offsetof(NRF_TBM_Type, EVENTS_FULL),     ///< Buffer full.
    NRF_TBM_EVENT_FLUSH    = offsetof(NRF_TBM_Type, EVENTS_FLUSH),    ///< Stopped due to flush.
} nrf_tbm_event_t;

/** @brief TBM interrupts. */
typedef enum
{
    NRF_TBM_INT_HALFFULL_MASK = TBM_INTENSET_HALFFULL_Msk, ///< Interrupt on HALFFULL event.
    NRF_TBM_INT_FULL_MASK     = TBM_INTENSET_FULL_Msk,     ///< Interrupt on FULL event.
    NRF_TBM_INT_FLUSH_MASK    = TBM_INTENSET_FLUSH_Msk,    ///< Interrupt on FLUSH event.
} nrf_tbm_int_mask_t;

/**
 * @brief Function for activating the specified TBM task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_tbm_task_trigger(NRF_TBM_Type * p_reg, nrf_tbm_task_t task);

/**
 * @brief Function for clearing the specified TBM event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_tbm_event_clear(NRF_TBM_Type * p_reg, nrf_tbm_event_t event);

/**
 * @brief Function for retrieving the state of the TBM event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_tbm_event_check(NRF_TBM_Type const * p_reg,
                                           nrf_tbm_event_t      event);

/**
 * @brief Function for enabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_tbm_int_enable(NRF_TBM_Type * p_reg, uint32_t mask);

/**
 * @brief Function for setting the configuration of interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be set.
 */
NRF_STATIC_INLINE void nrf_tbm_int_set(NRF_TBM_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_tbm_int_disable(NRF_TBM_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_tbm_int_enable_check(NRF_TBM_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for retrieving the state of pending interrupts of the receive event.
 *
 * States of pending interrupt are saved as a bitmask. First position corresponds with
 * EVENTS_RECEIVE[0] event, second one with EVENTS_RECEIVE[1] etc.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts of EVENTS_RECEIVE[n] events.
 */
NRF_STATIC_INLINE uint32_t nrf_tbm_int_pending_get(NRF_TBM_Type const * p_reg);

/**
 * @brief Function for setting the buffer size.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] size   Size in 32 bit words.
 */
NRF_STATIC_INLINE void nrf_tbm_buffersize_set(NRF_TBM_Type * p_reg, uint32_t size);

/**
 * @brief Function for getting current count value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current count value.
 */
NRF_STATIC_INLINE uint32_t nrf_tbm_count_get(NRF_TBM_Type * p_reg);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE void nrf_tbm_task_trigger(NRF_TBM_Type * p_reg, nrf_tbm_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE void nrf_tbm_event_clear(NRF_TBM_Type * p_reg, nrf_tbm_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_tbm_event_check(NRF_TBM_Type const * p_reg,
                                           nrf_tbm_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_tbm_int_enable(NRF_TBM_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_tbm_int_set(NRF_TBM_Type * p_reg, uint32_t mask)
{
    p_reg->INTEN = mask;
}

NRF_STATIC_INLINE void nrf_tbm_int_disable(NRF_TBM_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_tbm_int_enable_check(NRF_TBM_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_tbm_int_pending_get(NRF_TBM_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE void nrf_tbm_buffersize_set(NRF_TBM_Type * p_reg, uint32_t size)
{
    p_reg->BUFFERSIZE = size;
}

NRF_STATIC_INLINE uint32_t nrf_tbm_count_get(NRF_TBM_Type * p_reg)
{
    return p_reg->COUNT;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_TBM_H__
