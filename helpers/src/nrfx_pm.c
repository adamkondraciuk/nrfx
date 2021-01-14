/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_PM_ENABLED)
#include <helpers/include/nrfx_pm_driver.h>

#define NRFX_LOG_MODULE PM
#include <nrfx_log.h>

static nrfx_err_t pm_mode_handler(nrfx_pm_t *p_driver_pm)
{
    NRFX_ASSERT((p_driver_pm->required_state == NRFX_PM_STATE_OFF)
                || (p_driver_pm->required_state == NRFX_PM_STATE_ON));

    if (p_driver_pm->current_state == p_driver_pm->required_state)
    {
        return NRFX_ERROR_ALREADY_INITIALIZED;
    }

    nrfx_pm_state_t const previous_state = p_driver_pm->current_state;

    switch (previous_state)
    {
        case NRFX_PM_STATE_OFF:
            p_driver_pm->current_state = NRFX_PM_STATE_WAKING_UP;
            p_driver_pm->transition_handler(NRFX_PM_OPERATION_TURN_ON);
            break;
        case NRFX_PM_STATE_WAKING_UP:
            if (p_driver_pm->required_state == NRFX_PM_STATE_ON)
            {
                p_driver_pm->current_state = NRFX_PM_STATE_ON;
                p_driver_pm->event_handler(NRFX_PM_EVENT_RESTORED);
            }
            else
            {
                p_driver_pm->current_state = NRFX_PM_STATE_POWERING_DOWN;
                p_driver_pm->transition_handler(NRFX_PM_OPERATION_TURN_OFF);
            }
            break;
        case NRFX_PM_STATE_ON:
            p_driver_pm->current_state = NRFX_PM_STATE_POWERING_DOWN;
            p_driver_pm->transition_handler(NRFX_PM_OPERATION_TURN_OFF);
            break;
        case NRFX_PM_STATE_POWERING_DOWN:
            if (p_driver_pm->required_state == NRFX_PM_STATE_OFF)
            {
                p_driver_pm->current_state = NRFX_PM_STATE_OFF;
                p_driver_pm->event_handler(NRFX_PM_EVENT_SHUTDOWN);
            }
            else
            {
                p_driver_pm->current_state = NRFX_PM_STATE_WAKING_UP;
                p_driver_pm->transition_handler(NRFX_PM_OPERATION_TURN_ON);
            }
            break;
        default:
            return NRFX_ERROR_INVALID_STATE;
    }

    return NRFX_SUCCESS;
}

void nrfx_pm_init(void *p_pm, nrfx_pm_event_handler_t event_handler)
{
    nrfx_pm_t *p_driver_pm = (nrfx_pm_t *)p_pm;
    p_driver_pm->event_handler = event_handler;
}

nrfx_err_t nrfx_pm_power_on(void *p_pm)
{
    nrfx_pm_t *p_driver_pm = (nrfx_pm_t *)p_pm;

    p_driver_pm->required_state = NRFX_PM_STATE_ON;

    return pm_mode_handler(p_driver_pm);
}

nrfx_err_t nrfx_pm_power_off(void *p_pm, bool force)
{
    nrfx_pm_t *p_driver_pm = (nrfx_pm_t *)p_pm;

    if ((!force) && (p_driver_pm->peripheral_busy))
    {
        return NRFX_ERROR_BUSY;
    }

    p_driver_pm->required_state = NRFX_PM_STATE_OFF;

    return pm_mode_handler(p_driver_pm);
}

void nrfx_pm_notify(nrfx_pm_t *p_pm)
{
    pm_mode_handler(p_pm);
}

bool nrfx_pm_is_powered(nrfx_pm_t *p_pm)
{
    nrfx_pm_t *p_driver_pm = (nrfx_pm_t *)p_pm;
    return p_driver_pm->current_state == NRFX_PM_STATE_ON;
}

void nrfx_pm_powered_set(nrfx_pm_t *p_pm)
{
    nrfx_pm_t *p_driver_pm = (nrfx_pm_t *)p_pm;
    p_driver_pm->current_state = NRFX_PM_STATE_ON;
    p_driver_pm->required_state = NRFX_PM_STATE_ON;
}

void nrfx_pm_busy_set(nrfx_pm_t *p_pm, bool is_busy)
{
    nrfx_pm_t *p_driver_pm = (nrfx_pm_t *)p_pm;
    p_driver_pm->peripheral_busy = is_busy;
}

#endif // NRFX_CHECK(NRFX_PM_ENABLED)
