/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/

#ifndef NRFX_SYSTICK_H__
#define NRFX_SYSTICK_H__

#include <nrfx.h>
#include <hal/nrf_systick.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_systick ARM(R) SysTick driver
 * @{
 * @ingroup nrf_systick
 *
 * @brief   ARM(R) SysTick driver.
 *
 * This driver configures ARM(R) SysTick as a free-running timer.
 * This timer is used to generate delays and pool for timeouts.
 * Only relatively short timeouts are supported.
 * The SysTick works on 64MHz and is 24-bit wide.
 * This means that it overflows around 4 times per second and
 * around 250 microseconds will be the highest supported time in the library.
 * As it is hard to detect if the overflow is generated without
 * using interrupts, the maximum delay range is halved for safety reasons.
 */

/**
 * @brief The value type that holds the SysTick state.
 *
 * This variable is used to count the requested timeout.
 * @sa nrfx_systick_get
 */
typedef struct {
    uint32_t time; //!< Registered time value.
} nrfx_systick_state_t;

/**
 * @brief Function for configuring and starting the timer.
 *
 * Function configures SysTick as a free-running timer without interrupt.
 */
void nrfx_systick_init(void);

/**
 * @brief Function for getting the current SysTick state.
 *
 * Function gets the current state of the SysTick timer.
 * It can be used to check time-out by @ref nrfx_systick_test.
 *
 * @param[out] p_state The pointer to the state variable to be filled.
 */
void nrfx_systick_get(nrfx_systick_state_t * p_state);

/**
 * @brief Function for testing if the current time is higher in relation to the remembered state.
 *
 * @param[in] p_state Remembered state set by @ref nrfx_systick_get
 * @param[in] us      Required time-out.
 *
 * @retval true  The current time is higher than the specified state plus the given time-out.
 * @retval false The current time is lower than the specified state plus the given time-out.
 */
bool nrfx_systick_test(nrfx_systick_state_t const * p_state, uint32_t us);

/**
 * @brief Function for delaying the execution for the specified amount of CPU ticks.
 *
 * @param[in] ticks Number of CPU ticks when the execution is blocked.
 */
void nrfx_systick_delay_ticks(uint32_t ticks);

/**
 * @brief Function for delaying the execution for the specified amount of microseconds.
 *
 * @param[in] us Number of microseconds when the execution is blocked.
 */
void nrfx_systick_delay_us(uint32_t us);

/**
 * @brief Function for delaying the execution for the specified amount of milliseconds.
 *
 * This delay function removes the limits of the highest possible delay value.
 *
 * @param[in] ms Number of milliseconds when the execution is blocked.
 */
void nrfx_systick_delay_ms(uint32_t ms);

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* NRFX_SYSTICK_H__ */
