/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRFX_TEMP_H__
#define NRFX_TEMP_H__

#include <nrfx.h>
#include <hal/nrf_temp.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_temp TEMP driver
 * @{
 * @ingroup nrf_temp
 * @brief   Temperature sensor (TEMP) driver.
 */

/** @brief Structure for TEMP configuration. */
typedef struct
{
    uint8_t interrupt_priority;    /**< interrupt priority. */
} nrfx_temp_config_t;

/** @brief TEMP default configuration. */
#define NRFX_TEMP_DEFAULT_CONFIG                                        \
    {                                                                   \
        .interrupt_priority = NRFX_TEMP_DEFAULT_CONFIG_IRQ_PRIORITY,    \
    }

/**
 * @brief TEMP driver data ready handler type.
 *
 * @param temperature  Raw temperature in a 2's complement signed value
 *                     representation. This value can be converted to Celsius
 *                     scale using @ref nrfx_temp_calculate() function.
 */
typedef void (* nrfx_temp_data_handler_t)(int32_t raw_temperature);

/**
 * @brief Function for initializing the TEMP driver.
 *
 * @param[in] p_config  Pointer to the structure with initial configuration.
 * @param[in] handler   Data handler provided by the user. If not provided
 *                      the driver is initialized in blocking mode.
 *
 * @retval NRFX_SUCCESS                    Driver was successfully initialized.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED  Driver was already initialized.
 */
nrfx_err_t nrfx_temp_init(nrfx_temp_config_t const * p_config, nrfx_temp_data_handler_t handler);

/** @brief Function for uninitializing the TEMP driver. */
void nrfx_temp_uninit(void);

/**
 * @brief Function for getting the temperature measurement in a 2's complement
 *        signed value representation.
 *
 * This function returns last value prepared by the TEMP peripheral.
 * In blocking mode should be used after calling to the @ref nrfx_temp_measure()
 * function. In non blocking raw value is passed to handler. However
 * this function can be used to read value of last conversion.
 *
 * @retval Temperature measurement result in a 2's complement signed value
 *         representation.
 */
__STATIC_INLINE int32_t nrfx_temp_result_get(void);

/**
 * @brief Function for calculate temperature value in Celsius scale from raw data.
 *
 * Returned temperature value is in Celsius scale, multiplied by 100
 * (e.g. actual temperature 25.75[C] will be returned as 2575 signed integer).
 * Measurement accuracy is 0.25[C].
 *
 * @param[in] raw_measurement Temperature value in a 2's complement signed
 *                            value representation.
 *
 * @return Temperature measurement result.
 */
int32_t nrfx_temp_calculate(int32_t raw_measurement);

/**
 * @brief Function for starting the temperature measurement.
 *
 * Non-blocking mode:
 * This function returns immediately. After measurement, handler specified
 * during initialization will be called, with measurement result as parameter.
 *
 * Blocking mode:
 * This function is waiting until measurement finished. Value should be read
 * using @ref nrfx_temp_result_get() function.
 *
 * @retval NRFX_SUCCESS        In non-blocking mode: Measurement was started.
 *                             Interrupt will be generated soon.
 *                             In blocking mode:
 *                             Measurement was started and finished. Data can
 *                             be read using @ref nrfx_temp_result_get() function.
 * @retval NRFX_ERROR_INTERNAL In non-blocking mode:
 *                             Not applicable.
 *                             In blocking mode:
 *                             Measurement data ready event did not occur.
 */
nrfx_err_t nrfx_temp_measure(void);

#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE int32_t nrfx_temp_result_get(void)
{
    return nrf_temp_result_get(NRF_TEMP);
}

#endif // SUPPRESS_INLINE_IMPLEMENTATION

/** @} */

void nrfx_temp_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_TEMP_H__
