/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(POWER_ENABLED)

#include <nrf_drv_power.h>
#include <nrf_drv_clock.h>
#ifdef SOFTDEVICE_PRESENT
#include "nrf_sdh.h"
#include "nrf_sdh_soc.h"
#endif

/**
 * @internal
 * @defgroup nrf_drv_power_internals POWER driver internals
 * @ingroup nrf_drv_power
 *
 * Internal variables, auxiliary macros and functions of POWER driver.
 * @{
 */

/**
 * @brief Default configuration
 *
 * The structure with default configuration data.
 * This structure would be used if configuration pointer given
 * to the @ref nrf_drv_power_init is set to NULL.
 */
static const nrf_drv_power_config_t m_drv_power_config_default =
{
    .dcdcen = POWER_CONFIG_DEFAULT_DCDCEN,
#if NRF_POWER_HAS_VDDH
    .dcdcenhv = POWER_CONFIG_DEFAULT_DCDCENHV,
#endif
};

/**
 * @brief The initialization flag
 */
static bool m_initialized;

/**
 * @brief The handler of power fail comparator warning event
 */
static nrf_drv_power_pofwarn_event_handler_t m_pofwarn_handler;

#if NRF_POWER_HAS_SLEEPEVT
/**
 * @brief The handler of sleep event handler
 */
static nrf_drv_power_sleep_event_handler_t m_sleepevt_handler;
#endif

#if NRF_POWER_HAS_USBREG
/**
 * @brief The handler of USB power events
 */
static nrf_drv_power_usb_event_handler_t m_usbevt_handler;
#endif

/** @} */

bool nrf_drv_power_init_check(void)
{
    return m_initialized;
}

ret_code_t nrf_drv_power_init(nrf_drv_power_config_t const * p_config)
{
    nrf_drv_power_config_t const * p_used_config;
    if (m_initialized)
    {
        return NRFX_ERROR_MODULE_ALREADY_INITIALIZED;
    }
#ifdef SOFTDEVICE_PRESENT
    if (nrf_sdh_is_enabled())
    {
        return NRFX_ERROR_INVALID_STATE;
    }
#endif

    p_used_config = (p_config != NULL) ?
        p_config : (&m_drv_power_config_default);
#if NRF_POWER_HAS_VDDH
    nrf_power_dcdcen_vddh_set(p_used_config->dcdcenhv);
#endif
    nrf_power_dcdcen_set(p_used_config->dcdcen);

    nrfx_power_clock_irq_init();

    m_initialized = true;
    return NRFX_SUCCESS;
}

void nrf_drv_power_uninit(void)
{
    NRFX_ASSERT(m_initialized);

#if NRFX_CHECK(CLOCK_ENABLED)
    if (!nrf_drv_clock_init_check())
#endif
    {
        NRFX_IRQ_DISABLE(POWER_CLOCK_IRQn);
    }

    nrf_drv_power_pof_uninit();
#if NRF_POWER_HAS_SLEEPEVT
    nrf_drv_power_sleepevt_uninit();
#endif
#if NRF_POWER_HAS_USBREG
    nrf_drv_power_usbevt_uninit();
#endif
    m_initialized = false;
}

ret_code_t nrf_drv_power_pof_init(nrf_drv_power_pofwarn_config_t const * p_config)
{
    ret_code_t err_code = NRF_SUCCESS;
    NRFX_ASSERT(p_config != NULL);

    nrf_drv_power_pof_uninit();

#ifdef SOFTDEVICE_PRESENT
    if (nrf_sdh_is_enabled())
    {
        /* Currently when SD is enabled - the configuration can be changed
         * in very limited range.
         * It is the SoftDevice limitation.
         */
#if NRF_POWER_HAS_VDDH
        if (p_config->thrvddh != nrf_power_pofcon_vddh_get())
        {
            /* Cannot change THRVDDH with current SD API */
            return NRFX_ERROR_INVALID_STATE;
        }
#endif
        if (p_config->thr != nrf_power_pofcon_get(NULL))
        {
            /* Only limited number of THR values are supported and
             * the values taken by SD is different than the one in hardware
             */
            uint8_t thr;
            switch(p_config->thr)
            {
                case NRF_POWER_POFTHR_V21:
                    thr = NRF_POWER_THRESHOLD_V21;
                    break;
                case NRF_POWER_POFTHR_V23:
                    thr = NRF_POWER_THRESHOLD_V23;
                    break;
                case NRF_POWER_POFTHR_V25:
                    thr = NRF_POWER_THRESHOLD_V25;
                    break;
                case NRF_POWER_POFTHR_V27:
                    thr = NRF_POWER_THRESHOLD_V27;
                    break;
                default:
                    /* Cannot configure */
                    return NRFX_ERROR_INVALID_STATE;
            }

            err_code = sd_power_pof_threshold_set(thr);
        }
    }
    else
#endif /* SOFTDEVICE_PRESENT */
    {
        nrf_power_pofcon_set(true, p_config->thr);
#if NRF_POWER_HAS_VDDH
        nrf_power_pofcon_vddh_set(p_config->thrvddh);
#endif
    }

    if ((p_config->handler != NULL) && (err_code == NRFX_SUCCESS))
    {
        m_pofwarn_handler = p_config->handler;
#ifdef SOFTDEVICE_PRESENT
        if (nrf_sdh_is_enabled())
        {
            err_code = sd_power_pof_enable(true);
        }
        else
#endif
        {
            nrf_power_int_enable(NRF_POWER_INT_POFWARN_MASK);
        }
    }
    return err_code;
}

void nrf_drv_power_pof_uninit(void)
{
#ifdef SOFTDEVICE_PRESENT
    if (nrf_sdh_is_enabled())
    {
        (void)sd_power_pof_enable(false);
    }
    else
#endif
    {
        nrf_power_int_disable(NRF_POWER_INT_POFWARN_MASK);
    }
    m_pofwarn_handler = NULL;
}

#if NRF_POWER_HAS_SLEEPEVT
ret_code_t nrf_drv_power_sleepevt_init(nrf_drv_power_sleepevt_config_t const * p_config)
{
    NRFX_ASSERT(p_config != NULL);

    nrf_drv_power_sleepevt_uninit();
    if (p_config->handler != NULL)
    {
        uint32_t enmask = 0;
        m_sleepevt_handler = p_config->handler;
        if (p_config->en_enter)
        {
            enmask |= NRF_POWER_INT_SLEEPENTER_MASK;
            nrf_power_event_clear(NRF_POWER_EVENT_SLEEPENTER);
        }
        if (p_config->en_exit)
        {
            enmask |= NRF_POWER_INT_SLEEPEXIT_MASK;
            nrf_power_event_clear(NRF_POWER_EVENT_SLEEPEXIT);
        }
#ifdef SOFTDEVICE_PRESENT
        if (nrf_sdh_is_enabled())
        {
            if (enmask != 0)
            {
                return NRFX_ERROR_INVALID_STATE;
            }
        }
        else
#endif
        {
            nrf_power_int_enable(enmask);
        }
    }

    return NRFX_SUCCESS;
}

void nrf_drv_power_sleepevt_uninit(void)
{
#ifdef SOFTDEVICE_PRESENT
    if (nrf_sdh_is_enabled())
    {
        /* Nothing to do */
    }
    else
#endif
    {
        nrf_power_int_disable(
            NRF_POWER_INT_SLEEPENTER_MASK |
            NRF_POWER_INT_SLEEPEXIT_MASK);
    }
    m_sleepevt_handler = NULL;
}
#endif /* NRF_POWER_HAS_SLEEPEVT */

#if NRF_POWER_HAS_USBREG
ret_code_t nrf_drv_power_usbevt_init(nrf_drv_power_usbevt_config_t const * p_config)
{
    nrf_drv_power_usbevt_uninit();
    if (p_config->handler != NULL)
    {
        m_usbevt_handler = p_config->handler;
#ifdef SOFTDEVICE_PRESENT
        if (nrf_sdh_is_enabled())
        {
            /** @todo Implement USB power events when SD support it */
            return NRFX_ERROR_INVALID_STATE;
        }
        else
#endif
        {
            nrf_power_int_enable(
                NRF_POWER_INT_USBDETECTED_MASK |
                NRF_POWER_INT_USBREMOVED_MASK  |
                NRF_POWER_INT_USBPWRRDY_MASK);
        }
    }
    return NRFX_SUCCESS;
}

void nrf_drv_power_usbevt_uninit(void)
{
#ifdef SOFTDEVICE_PRESENT
    if (nrf_sdh_is_enabled())
    {
        /** @todo Implement USB power events when SD support it */
    }
    else
#endif
    {
        nrf_power_int_disable(
            NRF_POWER_INT_USBDETECTED_MASK |
            NRF_POWER_INT_USBREMOVED_MASK  |
            NRF_POWER_INT_USBPWRRDY_MASK);
    }
    m_usbevt_handler = NULL;
}
#endif /* NRF_POWER_HAS_USBREG */


void nrfx_power_irq_handler(void)
{
    uint32_t enabled = nrf_power_int_enable_get();
    if ((0 != (enabled & NRF_POWER_INT_POFWARN_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_POFWARN))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_pofwarn_handler != NULL);
        m_pofwarn_handler();
    }
#if NRF_POWER_HAS_SLEEPEVT
    if ((0 != (enabled & NRF_POWER_INT_SLEEPENTER_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_SLEEPENTER))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_sleepevt_handler != NULL);
        m_sleepevt_handler(NRF_DRV_POWER_SLEEP_EVT_ENTER);
    }
    if ((0 != (enabled & NRF_POWER_INT_SLEEPEXIT_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_SLEEPEXIT))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_sleepevt_handler != NULL);
        m_sleepevt_handler(NRF_DRV_POWER_SLEEP_EVT_EXIT);
    }
#endif
#if NRF_POWER_HAS_USBREG
    if ((0 != (enabled & NRF_POWER_INT_USBDETECTED_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_USBDETECTED))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_usbevt_handler != NULL);
        m_usbevt_handler(NRF_DRV_POWER_USB_EVT_DETECTED);
    }
    if ((0 != (enabled & NRF_POWER_INT_USBREMOVED_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_USBREMOVED))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_usbevt_handler != NULL);
        m_usbevt_handler(NRF_DRV_POWER_USB_EVT_REMOVED);
    }
    if ((0 != (enabled & NRF_POWER_INT_USBPWRRDY_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_USBPWRRDY))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_usbevt_handler != NULL);
        m_usbevt_handler(NRF_DRV_POWER_USB_EVT_READY);
    }
#endif
}

#ifdef SOFTDEVICE_PRESENT
static void nrf_drv_power_sdh_soc_evt_handler(uint32_t evt_id, void * p_context);
static void nrf_drv_power_sdh_state_evt_handler(nrf_sdh_state_evt_t state, void * p_context);

NRF_SDH_SOC_OBSERVER(m_soc_observer, POWER_CONFIG_SOC_OBSERVER_PRIO,
                     nrf_drv_power_sdh_soc_evt_handler, NULL);

NRF_SDH_STATE_OBSERVER(m_sd_observer, POWER_CONFIG_STATE_OBSERVER_PRIO) =
{
    .handler   = nrf_drv_power_sdh_state_evt_handler,
    .p_context = NULL
};

static void nrf_drv_power_sdh_soc_evt_handler(uint32_t evt_id, void * p_context)
{
    if (evt_id == NRF_EVT_POWER_FAILURE_WARNING)
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_pofwarn_handler != NULL);
        m_pofwarn_handler();
    }
}

static void nrf_drv_power_on_sd_enable(void)
{
    NRFX_ASSERT(m_initialized); /* This module has to be enabled first */
    NRFX_CRITICAL_SECTION_ENTER();
    if (m_pofwarn_handler != NULL)
    {
        (void) sd_power_pof_enable(true);
    }
    NRFX_CRITICAL_SECTION_EXIT();
}

static void nrf_drv_power_on_sd_disable(void)
{
    /* Reinit interrupts */
    NRFX_ASSERT(m_initialized);
    NRFX_IRQ_PRIORITY_SET(POWER_CLOCK_IRQn, CLOCK_CONFIG_IRQ_PRIORITY);
    NRFX_IRQ_ENABLE(POWER_CLOCK_IRQn);

    if (m_pofwarn_handler != NULL)
    {
        nrf_power_int_enable(NRF_POWER_INT_POFWARN_MASK);
    }
#if NRF_POWER_HAS_USBREG
    if (m_usbevt_handler != NULL)
    {
       nrf_power_int_enable(
           NRF_POWER_INT_USBDETECTED_MASK |
           NRF_POWER_INT_USBREMOVED_MASK  |
           NRF_POWER_INT_USBPWRRDY_MASK);
    }
#endif
}

static void nrf_drv_power_sdh_state_evt_handler(nrf_sdh_state_evt_t state, void * p_context)
{
    switch (state)
    {
        case NRF_SDH_EVT_STATE_ENABLED:
            nrf_drv_power_on_sd_enable();
            break;

        case NRF_SDH_EVT_STATE_DISABLED:
            nrf_drv_power_on_sd_disable();
            break;

        default:
            break;
    }
}



#endif // SOFTDEVICE_PRESENT

#endif // NRFX_CHECK(POWER_ENABLED)
