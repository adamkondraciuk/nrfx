/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRF_VREQCTRL_H__
#define NRF_VREQCTRL_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vreqctrl_hal VREQCTRL HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the VREQCTRL peripheral.
 */

/**
 * @brief Function for requesting high voltage on RADIO, to increase its output power by 3 dBm.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if high voltage on RADIO is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vreqctrl_radio_high_voltage_set(NRF_VREQCTRL_Type * p_reg, bool enable);

/**
 * @brief Function for checking if high voltage on RADIO is ready.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The high voltage is ready.
 * @retval false The high voltage is not ready.
 */
NRF_STATIC_INLINE bool nrf_vreqctrl_radio_high_voltage_check(NRF_VREQCTRL_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vreqctrl_radio_high_voltage_set(NRF_VREQCTRL_Type * p_reg, bool enable)
{
    p_reg->VREGRADIO.VREQH =
        (enable ? VREQCTRL_VREGRADIO_VREQH_VREQH_Enabled : VREQCTRL_VREGRADIO_VREQH_VREQH_Disabled);
}

NRF_STATIC_INLINE bool nrf_vreqctrl_radio_high_voltage_check(NRF_VREQCTRL_Type const * p_reg)
{
    return (bool)(p_reg->VREGRADIO.VREQHREADY & VREQCTRL_VREGRADIO_VREQHREADY_READY_Msk);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREQCTRL_H__
