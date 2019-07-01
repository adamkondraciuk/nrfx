/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRF_MUTEX_H__
#define NRF_MUTEX_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_mutex_hal MUTEX HAL
 * @{
 * @ingroup nrf_mutex
 * @brief   Hardware access layer for managing the MUTEX peripheral.
 */

/**
 * @brief Function for locking the specified mutex.
 *
 * If the specified mutex is already locked, its state remains unchanged.
 *
 * @note Faults are not managed by the MUTEX peripheral.
 *       One consequence is that if a mutex is locked and a fault happens,
 *       it is the responsability of the fault handler to release the mutex.
 *       If a fault handler is not managing the mutex release, the mutex will remain locked.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mutex Index of the mutex to be locked.
 *
 * @retval true  Mutex is successfully locked.
 * @retval false Mutex was already locked.
 */
__STATIC_INLINE bool nrf_mutex_lock(NRF_MUTEX_Type * p_reg, uint8_t mutex);

/**
 * @brief Function for unlocking the specified mutex.
 *
 * If the specified mutex is already unlocked, its state remains unchanged.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mutex Index of the mutex to be locked.
 */
__STATIC_INLINE void nrf_mutex_unlock(NRF_MUTEX_Type * p_reg, uint8_t mutex);

#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE bool nrf_mutex_lock(NRF_MUTEX_Type * p_reg, uint8_t mutex)
{
    NRFX_ASSERT(mutex < NRFX_ARRAY_SIZE(NRF_MUTEX->MUTEX));
    return (p_reg->MUTEX[mutex] == MUTEX_MUTEX_MUTEX_Unlocked);
}

__STATIC_INLINE void nrf_mutex_unlock(NRF_MUTEX_Type * p_reg, uint8_t mutex)
{
    NRFX_ASSERT(mutex < NRFX_ARRAY_SIZE(NRF_MUTEX->MUTEX));
    p_reg->MUTEX[mutex] = MUTEX_MUTEX_MUTEX_Unlocked;
}

#endif // SUPPRESS_INLINE_IMPLEMENTATION

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_MUTEX_H__
