/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_PM_DRIVER_H__
#define NRFX_PM_DRIVER_H__

#include <helpers/nrfx_pm.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_pm_driver Power Management
 * @{
 * @ingroup nrfx
 * @brief   Helper layer that provides support for nrfx_pm interface.
 *          This file contains functionality that should be used only from inside drivers.
 */

/** @brief Work states of the internal Power Management finite-state machine. */
typedef enum {
    NRFX_PM_STATE_OFF,           ///< Last completed state of the machine is Power Off.
    NRFX_PM_STATE_WAKING_UP,     ///< Last completed state of the machine is Waking Up.
    NRFX_PM_STATE_ON,            ///< Last completed state of the machine is Power On.
    NRFX_PM_STATE_POWERING_DOWN, ///< Last completed state of the machine is Powering Down.
} nrfx_pm_state_t;

/** @brief Operations that can be triggered on the driver instance. */
typedef enum {
    NRFX_PM_OPERATION_TURN_OFF, ///< Turn off instance of the peripheral.
    NRFX_PM_OPERATION_TURN_ON,  ///< Turn on instance of the peripheral.
} nrfx_pm_operation_t;

/** @brief Power management transition handler type. */
typedef nrfx_err_t (*nrfx_pm_transition_handler_t)(nrfx_pm_operation_t operation);

/** @brief Internal power management structure.*/
typedef struct
{
    nrfx_pm_transition_handler_t transition_handler; ///< Handler used to control the peripheral instance.
    nrfx_pm_event_handler_t      event_handler;      ///< Event handler. Set by the global Power Management API to send information outside Power Management system.
    nrfx_pm_state_t              current_state;      ///< Current state of the peripheral instance.
    nrfx_pm_state_t              required_state;     ///< Next state to be set in the peripheral instance.
    bool                         peripheral_busy;    ///< The busy state of the peripheral instance.
} nrfx_pm_t;


/**
 * @brief Power Management default configuration.
 * This configuration must be used internally in the drivers.
 *
 * @param[in] _transition_handler Transition handler provided by driver.
 */
#define NRFX_PM_DEFAULT_CONFIG(_transition_handler) \
    {                                               \
        .transition_handler = _transition_handler,  \
        .event_handler      = NULL,                 \
        .current_state      = NRFX_PM_STATE_OFF,    \
        .required_state     = NRFX_PM_STATE_OFF,    \
        .peripheral_busy    = false                 \
    }

/**
 * @brief Function to be called when power up or power down procedure is finished.
 *
 * @param[in] p_pm Pointer to the instance of driver's power management structure.
 */
void nrfx_pm_notify(nrfx_pm_t *p_pm);

/**
 * @brief Function for checking if the peripheral is powered.
 *
 * @param[in] p_pm Pointer to the instance of driver's power management structure.
 *
 * @retval true  Peripheral instance is powered on.
 * @retval false Peripheral instance is powered off.
 */
bool nrfx_pm_is_powered(nrfx_pm_t *p_pm);

/**
 * @brief Fuction for setting the busy state.
 *
 * @param[in] p_pm    Pointer to the instance of driver's power management structure.
 * @param[in] is_busy True if the busy state is to be enabled, false otherwise.
 */
void nrfx_pm_busy_set(nrfx_pm_t *p_pm, bool is_busy);

/**
 * @brief Function for setting the powered status.
 *
 * @param[in] p_pm Pointer to the instance of driver's power management structure.
 */
void nrfx_pm_powered_set(nrfx_pm_t *p_pm);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_PM_DRIVER_H__
