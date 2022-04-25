/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_TBM_H__
#define NRFX_TBM_H__

#include <nrfx.h>
#include <hal/nrf_tbm.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_tbm TBM driver
 * @{
 * @ingroup nrf_tbm
 * @brief   Trace Buffer Monitor (TBM) driver.
 */

/** @brief Structure for TBM configuration. */
typedef struct
{
    uint32_t size;               /**< Buffer size (32 bit words). */
    uint8_t  interrupt_priority; /**< Interrupt priority. */
} nrfx_tbm_config_t;

/** @brief tbm default configuration. */
#define NRFX_TBM_DEFAULT_CONFIG                                        \
    {                                                                  \
        .size = 128,                                                   \
        .interrupt_priority = NRFX_TBM_DEFAULT_CONFIG_IRQ_PRIORITY,    \
    }

/**
 * @brief tbm driver data ready handler type.
 *
 * @param event Event.
 */
typedef void (* nrfx_tbm_event_handler_t)(nrf_tbm_event_t event);

/**
 * @brief Function for initializing the TBM driver.
 *
 * @param[in] p_config  pointer to the structure with initial configuration.
 * @param[in] handler   data handler provided by the user. if not provided,
 *                      the driver is initialized in blocking mode.
 *
 * @retval NRFX_SUCCESS                    Driver was successfully initialized.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED  Driver was already initialized.
 */
nrfx_err_t nrfx_tbm_init(nrfx_tbm_config_t const * p_config, nrfx_tbm_event_handler_t handler);

/** @brief Function for starting the TBM. */
void nrfx_tbm_start(void);

/** @brief Function for stopping the TBM. */
void nrfx_tbm_stop(void);

/** @brief Function for uninitializing the TBM driver. */
void nrfx_tbm_uninit(void);

/**
 * @brief Function for getting current counter value.
 *
 * @return Current counter value.
 */
uint32_t nrfx_tbm_count_get(void);

/** @} */

void nrfx_tbm_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_TBM_H__
