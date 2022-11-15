/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREGSU_H__
#define NRF_VREGSU_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vregsu_hal Startup Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Startup Voltage Regulator (VREGSU).
 */

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VREGSU_DFT_ATB1_SELMUX_SPARE0  = VREGSU_DFT_ATB1CONFIG_SELMUX_Spare0, /**< For future use. */
    NRF_VREGSU_DFT_ATB1_SELMUX_VFB_1V2 = VREGSU_DFT_ATB1CONFIG_SELMUX_VFB1V2, /**< VDD_AO_1V8 scaled by 2/3. */
} nrf_vregsu_dft_atb1_selmux_t;

/**
 * @brief Function for powering up the volatage regulator.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the voltage regulator is to be powered up, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vregsu_pwrup_ctrl_set(NRF_VREGSU_Type * p_reg, bool enable);

/**
 * @brief Function for getting the volatage regulator power up state.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return True if the voltage regulator is powered up, false otherwise.
 */
NRF_STATIC_INLINE bool nrf_vregsu_pwrup_ctrl_get(NRF_VREGSU_Type const * p_reg);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregsu_dft_atb1_config_set(NRF_VREGSU_Type *            p_reg,
                                                      nrf_vregsu_dft_atb1_selmux_t selmux,
                                                      bool                         enable);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vregsu_pwrup_ctrl_set(NRF_VREGSU_Type * p_reg, bool enable)
{
    p_reg->PWRUPCTRL = (enable ? VREGSU_PWRUPCTRL_CTRL_PowerUp : VREGSU_PWRUPCTRL_CTRL_PowerDown) <<
                       VREGSU_PWRUPCTRL_CTRL_Pos;
}

NRF_STATIC_INLINE bool nrf_vregsu_pwrup_ctrl_get(NRF_VREGSU_Type const * p_reg)
{
    return ((p_reg->PWRUPCTRL & VREGSU_PWRUPCTRL_CTRL_Msk) >> VREGSU_PWRUPCTRL_CTRL_Pos) ==
           VREGSU_PWRUPCTRL_CTRL_PowerUp;
}

NRF_STATIC_INLINE void nrf_vregsu_dft_atb1_config_set(NRF_VREGSU_Type *            p_reg,
                                                      nrf_vregsu_dft_atb1_selmux_t selmux,
                                                      bool                         enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VREGSU_DFT_ATB1CONFIG_EN_Enabled :
                              VREGSU_DFT_ATB1CONFIG_EN_Disabled) <<
                             VREGSU_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VREGSU_DFT_ATB1CONFIG_SELMUX_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREGSU_H__
