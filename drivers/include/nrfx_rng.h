/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/
#ifndef NRFX_RNG_H__
#define NRFX_RNG_H__

#include <nrfx.h>
#include <hal/nrf_rng.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_rng RNG driver
 * @{
 * @ingroup nrf_rng
 * @brief   Random Number Generator (RNG) peripheral driver.
 */

/** @brief Struct for RNG configuration. */
typedef struct
{
    bool     error_correction : 1;  /**< Error correction flag. */
    uint8_t  interrupt_priority;    /**< Interrupt priority. */
} nrfx_rng_config_t;

/**
 * @brief RNG default configuration.
 *        Basic usage:
 *        @code
 *            nrfx_rng_config_t config = NRFX_RNG_DEFAULT_CONFIG;
 *            if (nrfx_rng_init(&config, handler)
 *            { ...
 *        @endcode
 *
 * This configuration sets up randon number generator with the following options:
 * - error correction enabled
 */
#define NRFX_RNG_DEFAULT_CONFIG                                  \
{                                                                \
    .error_correction   = true,                                  \
    .interrupt_priority = NRFX_RNG_DEFAULT_CONFIG_IRQ_PRIORITY,  \
}

/** @brief RNG driver event handler type. */
typedef void (* nrfx_rng_evt_handler_t)(uint8_t rng_data);

/**
 * @brief Function for initializing the nrfx_rng module.
 *
 * @param[in] p_config Pointer to the structure with the initial configuration.
 * @param[in] handler  Event handler provided by the user. Must not be NULL.
 *
 * @retval NRFX_SUCCESS                   Driver was successfully initialized.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED Driver was already initialized.
 */
nrfx_err_t nrfx_rng_init(nrfx_rng_config_t const * p_config, nrfx_rng_evt_handler_t handler);

/**
 * @brief Function for starting the generation of random values.
 *
 * New data should be handled by handler passed to the @ref nrfx_rng_init() function.
 */
void nrfx_rng_start(void);

/**
 * @brief Function for stopping the generation of random values.
 *
 * Function disables interrupts in peripheral and stops the generation of new random values.
 */
void nrfx_rng_stop(void);

/** @brief Function for uninitializing the nrfx_rng module. */
void nrfx_rng_uninit(void);

/** @} */


void nrfx_rng_irq_handler(void);


#ifdef __cplusplus
}
#endif

#endif // NRFX_RNG_H__
