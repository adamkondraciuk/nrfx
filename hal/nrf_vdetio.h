/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_VDETIO_H__
#define NRF_VDETIO_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vdetio_hal IO VDETIO HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Input/Output Voltage Detector (VDETIO).
 */

/**
 * @brief Function for checking if voltage detected by the power good detector from the specified
 *        port has exceeded the threshold value.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of power good detector port.
 *
 * @retval true  Detected voltage is above the threshold level.
 * @retval false Detected voltage is below the threshold level.
 */
NRF_STATIC_INLINE bool nrf_vdetio_thr_status_check(NRF_VDETIO_Type const * p_reg, uint8_t port_idx);

/**
 * @brief Function for enabling the power good detector for the specified port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of power good detector port.
 * @param[in] enable   True if the power good detector is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vedtio_pwrgood_config_set(NRF_VDETIO_Type * p_reg,
                                                     uint8_t           port_idx,
                                                     bool              enable);

/**
 * @brief Function for getting the configuration of the power good detector for the specified port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of power good detector port.
 *
 * @return True if the detector is enabled, false otherwise.
 */
NRF_STATIC_INLINE bool nrf_vedtio_pwrgood_config_get(NRF_VDETIO_Type const * p_reg,
                                                     uint8_t                 port_idx);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE bool nrf_vdetio_thr_status_check(NRF_VDETIO_Type const * p_reg, uint8_t port_idx)
{
    return (p_reg->STATUS & (1UL << port_idx)) == VDETIO_STATUS_PWRGOOD0_AboveThr;
}

NRF_STATIC_INLINE void nrf_vedtio_pwrgood_config_set(NRF_VDETIO_Type * p_reg,
                                                     uint8_t           port_idx,
                                                     bool              enable)
{
    p_reg->CONFIG.PWRGOOD = (uint32_t)((enable ? VDETIO_CONFIG_PWRGOOD_EN0_Enabled :
                                        VDETIO_CONFIG_PWRGOOD_EN0_Disabled) <<
                                       (1UL << port_idx));
}

NRF_STATIC_INLINE bool nrf_vedtio_pwrgood_config_get(NRF_VDETIO_Type const * p_reg,
                                                     uint8_t                 port_idx)
{
    return (p_reg->CONFIG.PWRGOOD & (1UL << port_idx)) == VDETIO_CONFIG_PWRGOOD_EN0_Enabled;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VDETIO_H__
