/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRFX_POWER_COMPAT_H__
#define NRFX_POWER_COMPAT_H__

#include <hal/nrf_usbreg.h>

#if NRF_USBREG_CONTROL

#include "nrfx_usbreg.h"

/**
 * POWER compatibility layer.
 *
 * The following definitions allow using of common code involving the POWER peripheral
 * driver for different SoCs, regardless of whether certain regulator registers
 * are located in the POWER peripheral or in separate peripherals like USBREG and REGULATORS.
 */

typedef nrfx_usbreg_event_handler_t nrfx_power_usb_event_handler_t;
typedef nrfx_usbreg_config_t        nrfx_power_usbevt_config_t;

typedef nrfx_usbreg_evt_t           nrfx_power_usb_evt_t;
#define NRFX_POWER_USB_EVT_DETECTED NRFX_USBREG_EVT_DETECTED
#define NRFX_POWER_USB_EVT_REMOVED  NRFX_USBREG_EVT_REMOVED
#define NRFX_POWER_USB_EVT_READY    NRFX_USBREG_EVT_READY

typedef nrfx_usbreg_state_t               nrfx_power_usb_state_t;
#define NRFX_POWER_USB_STATE_DISCONNECTED NRFX_USBREG_STATE_DISCONNECTED
#define NRFX_POWER_USB_STATE_CONNECTED    NRFX_USBREG_STATE_CONNECTED
#define NRFX_POWER_USB_STATE_READY        NRFX_USBREG_STATE_READY

#define nrfx_power_usb_handler_get nrfx_usbreg_handler_get
#define nrfx_power_usbevt_init     nrfx_usbreg_init
#define nrfx_power_usbevt_enable   nrfx_usbreg_enable
#define nrfx_power_usbevt_disable  nrfx_usbreg_disable
#define nrfx_power_usbevt_uninit   nrfx_usbreg_uninit
#define nrfx_power_usbstatus_get   nrfx_usbreg_usbstatus_get

#endif // NRF_USBREG_CONTROL

#endif // NRFX_POWER_COMPAT_H__
