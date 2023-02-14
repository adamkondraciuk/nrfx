/*$$$LICENCE_NORDIC_STANDARD<2014>$$$*/

#ifndef NRFX_LPCOMP_H__
#define NRFX_LPCOMP_H__

#include <nrfx.h>
#include <haly/nrfy_lpcomp.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_lpcomp LPCOMP driver
 * @{
 * @ingroup nrf_lpcomp
 * @brief   Low Power Comparator (LPCOMP) peripheral driver.
 */

/**
 * @brief LPCOMP event handler function type.
 * @param[in] event LPCOMP event.
 */
typedef void (* nrfx_lpcomp_event_handler_t)(nrf_lpcomp_event_t event);

/** @brief LPCOMP configuration. */
typedef struct
{
    nrf_lpcomp_config_t config;             ///< Peripheral configuration.
    nrf_lpcomp_input_t  input;              ///< Input to be monitored.
    uint8_t             interrupt_priority; ///< LPCOMP interrupt priority.
} nrfx_lpcomp_config_t;

/**
 * @brief LPCOMP driver default configuration.
 *
 * This configuration sets up LPCOMP with the following options:
 * - reference voltage: 4/8 of supply voltage
 * - detection of both up and down crossings
 * - hysteresis disabled
 *
 * @param[in] _input Comparator input pin.
 */
#define NRFX_LPCOMP_DEFAULT_CONFIG(_input)                                                   \
{                                                                                            \
    .config =                                                                                \
    {                                                                                        \
        .reference = NRF_LPCOMP_REF_SUPPLY_4_8,                                              \
        .detection = NRF_LPCOMP_DETECT_CROSS,                                                \
        NRFX_COND_CODE_1(LPCOMP_FEATURE_HYST_PRESENT, (.hyst = NRF_LPCOMP_HYST_NOHYST,), ()) \
    },                                                                                       \
    .input = (nrf_lpcomp_input_t)_input,                                                     \
    .interrupt_priority = NRFX_LPCOMP_DEFAULT_CONFIG_IRQ_PRIORITY                            \
}

/**
 * @brief Function for initializing the LPCOMP driver.
 *
 * This function initializes the LPCOMP driver, but does not enable the peripheral or any interrupts.
 * To start the driver, call the function nrfx_lpcomp_enable() after initialization.
 *
 * @param[in] p_config      Pointer to the structure with the initial configuration.
 * @param[in] event_handler Event handler provided by the user.
 *                          Must not be NULL.
 *
 * @retval NRFX_SUCCESS             Initialization was successful.
 * @retval NRFX_ERROR_INVALID_STATE The driver has already been initialized.
 * @retval NRFX_ERROR_BUSY          The COMP peripheral is already in use.
 *                                  This is possible only if @ref nrfx_prs module
 *                                  is enabled.
 */
nrfx_err_t nrfx_lpcomp_init(nrfx_lpcomp_config_t const * p_config,
                            nrfx_lpcomp_event_handler_t  event_handler);

/**
 * @brief Function for uninitializing the LCOMP driver.
 *
 * This function uninitializes the LPCOMP driver. The LPCOMP peripheral and
 * its interrupts are disabled, and local variables are cleaned. After this call, you must
 * initialize the driver again by calling nrfx_lpcomp_init() if you want to use it.
 *
 * @sa nrfx_lpcomp_disable
 * @sa nrfx_lpcomp_init
 */
void  nrfx_lpcomp_uninit(void);

/**
 * @brief Function for enabling the LPCOMP peripheral and interrupts.
 *
 * Before calling this function, the driver must be initialized. This function
 * enables the LPCOMP peripheral and its interrupts.
 *
 * @sa nrfx_lpcomp_disable
 */
void nrfx_lpcomp_enable(void);

/**
 * @brief Function for disabling the LPCOMP peripheral.
 *
 * Before calling this function, the driver must be initialized. This function disables the LPCOMP
 * peripheral and its interrupts.
 *
 * @sa nrfx_lpcomp_enable
 */
void nrfx_lpcomp_disable(void);

/** @} */


void nrfx_lpcomp_irq_handler(void);


#ifdef __cplusplus
}
#endif

#endif // NRFX_LPCOMP_H__
