/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_PM_H__
#define NRFX_PM_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_pm Power Management
 * @{
 * @ingroup nrfx
 * @brief   Power Management interface.
 */

/** @brief Power management event types. */
typedef enum {
    NRFX_PM_EVENT_SHUTDOWN, ///< Event generated when the instance of the peripheral has been turned off.
    NRFX_PM_EVENT_RESTORED, ///< Event generated when the instance of the peripheral has been turned on.
} nrfx_pm_event_t;

/**
 * @brief Power management event handler type.
 *
 * @param[in] pm_event Event.
 */
typedef void (*nrfx_pm_event_handler_t)(nrfx_pm_event_t pm_event);

/**
 * @brief Function for initializing the power management.
 *
 * @param[in] p_pm          Pointer to the instance of driver's power management structure.
 * @param[in] event_handler Event handler provided by the user.
 */
void nrfx_pm_init(void *p_pm, nrfx_pm_event_handler_t event_handler);

/**
 * @brief Function for starting power on sequence on a given instance of the peripheral.
 *
 * @param[in] p_pm Pointer to the instance of driver's power management structure.
 *
 * @retval NRFX_SUCCESS                   Powering up is delegated.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED Peripheral is already powered up.
 */
nrfx_err_t nrfx_pm_power_on(void *p_pm);

/**
 * @brief Function for starting power off sequence on a given instance of the peripheral.
 *
 * @param[in] p_pm  Pointer to the instance of the power management structure of the peripheral instance.
 * @param[in] force True if power off sequence is forced, false otherwise.
 *
 * @retval NRFX_SUCCESS                   Powering down is delegated.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED Peripheral is already powered down.
 */
nrfx_err_t nrfx_pm_power_off(void *p_pm, bool force);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_PM_H__
