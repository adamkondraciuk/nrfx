/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_POWER_ENABLED)

#include <nrfx_power.h>
#include <nrf_drv_clock.h>
#ifdef SOFTDEVICE_PRESENT
#include "softdevice_handler.h"
#include "nrf_sdm.h"
#include "nrf_soc.h"
#endif

/**
 * @internal
 * @defgroup nrfx_power_internals POWER driver internals
 * @ingroup nrfx_power
 *
 * Internal variables, auxiliary macros and functions of POWER driver.
 * @{
 */

/**
 * @brief Default configuration
 *
 * The structure with default configuration data.
 * This structure would be used if configuration pointer given
 * to the @ref nrfx_power_init is set to NULL.
 */
static const nrfx_power_config_t m_drv_power_config_default =
{
    .dcdcen = NRFX_POWER_CONFIG_DEFAULT_DCDCEN,
#if NRF_POWER_HAS_VDDH || defined(__SDK_DOXYGEN__)
    .dcdcenhv = NRFX_POWER_CONFIG_DEFAULT_DCDCENHV,
#endif
};

/**
 * @brief The initialization flag
 */
static bool m_initialized;

/**
 * @brief The handler of power fail comparator warning event
 */
static nrfx_power_pofwarn_event_handler_t m_pofwarn_handler;

#if NRF_POWER_HAS_SLEEPEVT || defined(__SDK_DOXYGEN__)
/**
 * @brief The handler of sleep event handler
 */
static nrfx_power_sleep_event_handler_t m_sleepevt_handler;
#endif

#if NRF_POWER_HAS_USBREG || defined(__SDK_DOXYGEN__)
/**
 * @brief The handler of USB power events
 */
static nrfx_power_usb_event_handler_t m_usbevt_handler;
#endif

/** @} */

bool nrfx_power_init_check(void)
{
    return m_initialized;
}

ret_code_t nrfx_power_init(nrfx_power_config_t const * p_config)
{
    nrfx_power_config_t const * p_used_config;
    if (m_initialized)
    {
        return NRFX_ERROR_MODULE_ALREADY_INITIALIZED;
    }
#ifdef SOFTDEVICE_PRESENT
    if (softdevice_handler_is_enabled())
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

void nrfx_power_uninit(void)
{
    NRFX_ASSERT(m_initialized);

#if NRFX_CHECK(CLOCK_ENABLED)
    if (!nrf_drv_clock_init_check())
#endif
    {
        NRFX_IRQ_DISABLE(POWER_CLOCK_IRQn);
    }

    nrfx_power_pof_uninit();
#if NRF_POWER_HAS_SLEEPEVT || defined(__SDK_DOXYGEN__)
    nrfx_power_sleepevt_uninit();
#endif
#if NRF_POWER_HAS_USBREG || defined(__SDK_DOXYGEN__)
    nrfx_power_usbevt_uninit();
#endif
    m_initialized = false;
}

ret_code_t nrfx_power_pof_init(nrfx_power_pofwarn_config_t const * p_config)
{
    NRFX_ASSERT(p_config != NULL);

    nrfx_power_pof_uninit();

#ifdef SOFTDEVICE_PRESENT
    if (softdevice_handler_is_enabled())
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
            sd_power_pof_threshold_set(thr);
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

    if (p_config->handler != NULL)
    {
        m_pofwarn_handler = p_config->handler;
#ifdef SOFTDEVICE_PRESENT
        if (softdevice_handler_is_enabled())
        {
            sd_power_pof_enable(true);
        }
        else
#endif
        {
            nrf_power_int_enable(NRF_POWER_INT_POFWARN_MASK);
        }
    }
    return NRFX_SUCCESS;
}

void nrfx_power_pof_uninit(void)
{
#ifdef SOFTDEVICE_PRESENT
    if (softdevice_handler_is_enabled())
    {
        sd_power_pof_enable(false);
    }
    else
#endif
    {
        nrf_power_int_disable(NRF_POWER_INT_POFWARN_MASK);
    }
    m_pofwarn_handler = NULL;
}

#if NRF_POWER_HAS_SLEEPEVT || defined(__SDK_DOXYGEN__)
ret_code_t nrfx_power_sleepevt_init(nrfx_power_sleepevt_config_t const * p_config)
{
    NRFX_ASSERT(p_config != NULL);

    nrfx_power_sleepevt_uninit();
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
        if (softdevice_handler_is_enabled())
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

void nrfx_power_sleepevt_uninit(void)
{
#ifdef SOFTDEVICE_PRESENT
    if (softdevice_handler_is_enabled())
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

#if NRF_POWER_HAS_USBREG || defined(__SDK_DOXYGEN__)
ret_code_t nrfx_power_usbevt_init(nrfx_power_usbevt_config_t const * p_config)
{
    nrfx_power_usbevt_uninit();
    if (p_config->handler != NULL)
    {
        m_usbevt_handler = p_config->handler;
#ifdef SOFTDEVICE_PRESENT
        if (softdevice_handler_is_enabled())
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

void nrfx_power_usbevt_uninit(void)
{
#ifdef SOFTDEVICE_PRESENT
    if (softdevice_handler_is_enabled())
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
#if NRF_POWER_HAS_SLEEPEVT || defined(__SDK_DOXYGEN__)
    if ((0 != (enabled & NRF_POWER_INT_SLEEPENTER_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_SLEEPENTER))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_sleepevt_handler != NULL);
        m_sleepevt_handler(NRFX_POWER_SLEEP_EVT_ENTER);
    }
    if ((0 != (enabled & NRF_POWER_INT_SLEEPEXIT_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_SLEEPEXIT))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_sleepevt_handler != NULL);
        m_sleepevt_handler(NRFX_POWER_SLEEP_EVT_EXIT);
    }
#endif
#if NRF_POWER_HAS_USBREG || defined(__SDK_DOXYGEN__)
    if ((0 != (enabled & NRF_POWER_INT_USBDETECTED_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_USBDETECTED))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_usbevt_handler != NULL);
        m_usbevt_handler(NRFX_POWER_USB_EVT_DETECTED);
    }
    if ((0 != (enabled & NRF_POWER_INT_USBREMOVED_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_USBREMOVED))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_usbevt_handler != NULL);
        m_usbevt_handler(NRFX_POWER_USB_EVT_REMOVED);
    }
    if ((0 != (enabled & NRF_POWER_INT_USBPWRRDY_MASK)) &&
        nrf_power_event_get_and_clear(NRF_POWER_EVENT_USBPWRRDY))
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_usbevt_handler != NULL);
        m_usbevt_handler(NRFX_POWER_USB_EVT_READY);
    }
#endif
}

#ifdef SOFTDEVICE_PRESENT

NRF_SDH_SOC_OBSERVER(m_soc_observer, POWER_CONFIG_SOC_OBSERVER_PRIO,
                     nrfx_power_sdh_soc_evt_handler, NULL);

NRF_SDH_STATE_OBSERVER(m_sd_observer, NRFX_POWER_CONFIG_STATE_OBSERVER_PRIO) =
{
    .handler   = nrfx_power_sdh_state_evt_handler,
    .p_context = NULL
};

static void nrfx_power_sdh_soc_evt_handler(uint32_t evt_id, void * p_context)
{
    if (evt_id == NRF_EVT_POWER_FAILURE_WARNING)
    {
        /* Cannot be null if event is enabled */
        NRFX_ASSERT(m_pofwarn_handler != NULL);
        m_pofwarn_handler();
    }
}

static void nrfx_power_on_sd_enable(void)
{
    NRFX_ASSERT(m_initialized); /* This module has to be enabled first */
    NRFX_CRITICAL_SECTION_ENTER();
    if (m_pofwarn_handler != NULL)
    {
        (void) sd_power_pof_enable(true);
    }
    NRFX_CRITICAL_SECTION_EXIT();
}

static void nrfx_power_on_sd_disable(void)
{
    /* Reinit interrupts */
    NRFX_ASSERT(m_initialized);
    NRFX_IRQ_PRIORITY_SET(POWER_CLOCK_IRQn, NRFX_CLOCK_CONFIG_IRQ_PRIORITY);
    NRFX_IRQ_ENABLE(POWER_CLOCK_IRQn);

    if (m_pofwarn_handler != NULL)
    {
        nrf_power_int_enable(NRF_POWER_INT_POFWARN_MASK);
    }
#if NRF_POWER_HAS_USBREG || defined(__SDK_DOXYGEN__)
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
            nrfx_power_on_sd_enable();
            break;

        case NRF_SDH_EVT_STATE_DISABLED:
            nrfx_power_on_sd_disable();
            break;

        default:
            break;
    }
}



#endif // SOFTDEVICE_PRESENT

#endif // NRFX_CHECK(NRFX_POWER_ENABLED)
