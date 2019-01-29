/*$$$LICENCE_NORDIC_STANDARD<2014>$$$*/

#ifndef NRF_RNG_H__
#define NRF_RNG_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_rng_hal RNG HAL
 * @{
 * @ingroup nrf_rng
 * @brief   Hardware access layer (HAL) for managing the Random Number Generator (RNG) peripheral.
 */

/** @brief RNG tasks. */
typedef enum
{
    NRF_RNG_TASK_START = offsetof(NRF_RNG_Type, TASKS_START), /**< Start the random number generator. */
    NRF_RNG_TASK_STOP  = offsetof(NRF_RNG_Type, TASKS_STOP)   /**< Stop the random number generator. */
} nrf_rng_task_t;

/** @brief RNG events. */
typedef enum
{
    NRF_RNG_EVENT_VALRDY = offsetof(NRF_RNG_Type, EVENTS_VALRDY) /**< New random number generated event. */
} nrf_rng_event_t;

/** @brief RNG interrupts. */
typedef enum
{
    NRF_RNG_INT_VALRDY_MASK = RNG_INTENSET_VALRDY_Msk /**< Mask for enabling or disabling an interrupt on VALRDY event. */
} nrf_rng_int_mask_t;

/** @brief Types of RNG shortcuts. */
typedef enum
{
    NRF_RNG_SHORT_VALRDY_STOP_MASK = RNG_SHORTS_VALRDY_STOP_Msk /**< Mask for setting shortcut between EVENT_VALRDY and TASK_STOP. */
} nrf_rng_short_mask_t;


/**
 * @brief Function for enabling interrupts.
 *
 * @param[in] mask Mask of interrupts to be enabled.
 */
__STATIC_INLINE void nrf_rng_int_enable(uint32_t mask);

/**
 * @brief Function for disabling interrupts.
 *
 * @param[in] mask Mask of interrupts to be disabled.
 */
__STATIC_INLINE void nrf_rng_int_disable(uint32_t mask);

/**
 * @brief Function for getting the state of the specified interrupt.
 *
 * @param[in] mask Interrupts to be checked.
 *
 * @retval true  The interrupt is not enabled.
 * @retval false The interrupt is enabled.
 */
__STATIC_INLINE bool nrf_rng_int_get(nrf_rng_int_mask_t mask);

/**
 * @brief Function for getting the address of the specified task.
 *
 * This function can be used by the PPI module.
 *
 * @param[in] rng_task The specified task.
 *
 * @return Address of the specified task.
 */
__STATIC_INLINE uint32_t * nrf_rng_task_address_get(nrf_rng_task_t rng_task);

/**
 * @brief Function for triggering the specified task.
 *
 * @param[in] rng_task The specified Task.
 */
__STATIC_INLINE void nrf_rng_task_trigger(nrf_rng_task_t rng_task);

/**
 * @brief Function for getting address of the specified event.
 *
 * This function can be used by the PPI module.
 *
 * @param[in] rng_event The specified event.
 *
 * @return Address of the specified event.
 */
__STATIC_INLINE uint32_t * nrf_rng_event_address_get(nrf_rng_event_t rng_event);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] rng_event The specified event.
 */
__STATIC_INLINE void nrf_rng_event_clear(nrf_rng_event_t rng_event);

/**
 * @brief Function for getting the state of the specified event.
 *
 * @param[in] rng_event The specified event.
 *
 * @retval true  The event is not set.
 * @retval false The event is set.
 */
__STATIC_INLINE bool nrf_rng_event_get(nrf_rng_event_t rng_event);

/**
 * @brief Function for setting shortcuts.
 *
 * @param[in] mask Mask of shortcuts.
 */
__STATIC_INLINE void nrf_rng_shorts_enable(uint32_t mask);

/**
 * @brief Function for clearing shortcuts.
 *
 * @param[in] mask Mask of shortcuts.
 */
__STATIC_INLINE void nrf_rng_shorts_disable(uint32_t mask);

/**
 * @brief Function for getting the previously generated random value.
 *
 * @return Previously generated random value.
 */
__STATIC_INLINE uint8_t nrf_rng_random_value_get(void);

/** @brief Function for enabling digital error correction. */
__STATIC_INLINE void nrf_rng_error_correction_enable(void);

/** @brief Function for disabling digital error correction. */
__STATIC_INLINE void nrf_rng_error_correction_disable(void);


#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE void nrf_rng_int_enable(uint32_t mask)
{
    NRF_RNG->INTENSET = mask;
}

__STATIC_INLINE void nrf_rng_int_disable(uint32_t mask)
{
    NRF_RNG->INTENCLR = mask;
}

__STATIC_INLINE bool nrf_rng_int_get(nrf_rng_int_mask_t mask)
{
    return (bool)(NRF_RNG->INTENCLR & mask);
}

__STATIC_INLINE uint32_t * nrf_rng_task_address_get(nrf_rng_task_t rng_task)
{
    return (uint32_t *)((uint8_t *)NRF_RNG + rng_task);
}

__STATIC_INLINE void nrf_rng_task_trigger(nrf_rng_task_t rng_task)
{
    *((volatile uint32_t *)((uint8_t *)NRF_RNG + rng_task)) = 0x1UL;
}

__STATIC_INLINE uint32_t * nrf_rng_event_address_get(nrf_rng_event_t rng_event)
{
    return (uint32_t *)((uint8_t *)NRF_RNG + rng_event);
}

__STATIC_INLINE void nrf_rng_event_clear(nrf_rng_event_t rng_event)
{
    *((volatile uint32_t *)((uint8_t *)NRF_RNG + rng_event)) = 0x0UL;
#if __CORTEX_M == 0x04
    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)NRF_RNG + rng_event));
    (void)dummy;
#endif
}

__STATIC_INLINE bool nrf_rng_event_get(nrf_rng_event_t rng_event)
{
    return (bool) * ((volatile uint32_t *)((uint8_t *)NRF_RNG + rng_event));
}

__STATIC_INLINE void nrf_rng_shorts_enable(uint32_t mask)
{
     NRF_RNG->SHORTS |= mask;
}

__STATIC_INLINE void nrf_rng_shorts_disable(uint32_t mask)
{
     NRF_RNG->SHORTS &= ~mask;
}

__STATIC_INLINE uint8_t nrf_rng_random_value_get(void)
{
    return (uint8_t)(NRF_RNG->VALUE & RNG_VALUE_VALUE_Msk);
}

__STATIC_INLINE void nrf_rng_error_correction_enable(void)
{
    NRF_RNG->CONFIG |= RNG_CONFIG_DERCEN_Msk;
}

__STATIC_INLINE void nrf_rng_error_correction_disable(void)
{
    NRF_RNG->CONFIG &= ~RNG_CONFIG_DERCEN_Msk;
}

#endif

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* NRF_RNG_H__ */
