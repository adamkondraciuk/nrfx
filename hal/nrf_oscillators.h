/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRF_OSCILLATORS_H__
#define NRF_OSCILLATORS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_oscillators_hal OSCILLATORS HAL
 * @{
 * @ingroup nrf_clock
 * @brief   Hardware access layer for managing the OSCILLATORS peripheral.
 */

/** @brief Capacitors configuration for LFXO. */
typedef enum
{
    NRF_OSCILLATORS_LFXO_CAP_EXTERNAL = OSCILLATORS_XOSC32KI_INTCAP_INTCAP_External, ///< Use external capacitors.
    NRF_OSCILLATORS_LFXO_CAP_6PF      = OSCILLATORS_XOSC32KI_INTCAP_INTCAP_C6PF,     ///< Use 6 pF internal capacitors.
    NRF_OSCILLATORS_LFXO_CAP_7PF      = OSCILLATORS_XOSC32KI_INTCAP_INTCAP_C7PF,     ///< Use 7 pF internal capacitors.
    NRF_OSCILLATORS_LFXO_CAP_11PF     = OSCILLATORS_XOSC32KI_INTCAP_INTCAP_C11PF,    ///< Use 11 pF internal capacitors.
} nrf_oscillators_lfxo_cap_t;

/**
 * @brief Function for enabling or disabling the bypass of LFXO with external clock source.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if bypass is to be enabled (use with rail-to-rail external source).
 *                   False if bypass is to be disabled (use with xtal or low-swing external source).
 */
NRF_STATIC_INLINE void nrf_oscillators_lfxo_bypass_set(NRF_OSCILLATORS_Type * p_reg, bool enable);

/**
 * @brief Function for configuring the internal capacitors of LFXO.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cap   Capacitors configuration.
 */
NRF_STATIC_INLINE void nrf_oscillators_lfxo_cap_set(NRF_OSCILLATORS_Type *     p_reg,
                                                    nrf_oscillators_lfxo_cap_t cap);

/**
 * @brief Function for configuring the internal capacitors of HXFO.
 *
 * The capacitance of internal capacitors ranges from 7 pF to 20 pF in 0.5 pF steps.
 * To calculate the correct @p cap_value, use the following equation:
 * CAPVALUE = (1+FICR->XOSC32MTRIM.SLOPE/16) * (CAPACITANCE*2-14) + FICR->XOSC32MTRIM.OFFSET
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] enable    True if internal capacitors are to be enabled, false otherwise.
 * @param[in] cap_value Value representing capacitance, calculated using provided equation.
 *                      Ignored when internal capacitors are disabled.
 */
NRF_STATIC_INLINE void nrf_oscillators_hfxo_cap_set(NRF_OSCILLATORS_Type * p_reg,
                                                    bool                   enable,
                                                    uint32_t               cap_value);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE void nrf_oscillators_lfxo_bypass_set(NRF_OSCILLATORS_Type * p_reg, bool enable)
{
    p_reg->XOSC32KI.BYPASS = (enable ? OSCILLATORS_XOSC32KI_BYPASS_BYPASS_Enabled :
                                       OSCILLATORS_XOSC32KI_BYPASS_BYPASS_Disabled);
}

NRF_STATIC_INLINE void nrf_oscillators_lfxo_cap_set(NRF_OSCILLATORS_Type *     p_reg,
                                                    nrf_oscillators_lfxo_cap_t cap)
{
    p_reg->XOSC32KI.INTCAP = (uint32_t)cap;
}

NRF_STATIC_INLINE void nrf_oscillators_hfxo_cap_set(NRF_OSCILLATORS_Type * p_reg,
                                                    bool                   enable,
                                                    uint32_t               cap_value)
{
    p_reg->XOSC32MCAPS =
        (enable ? ((OSCILLATORS_XOSC32MCAPS_ENABLE_Enabled << OSCILLATORS_XOSC32MCAPS_ENABLE_Pos) |
                   (cap_value << OSCILLATORS_XOSC32MCAPS_CAPVALUE_Pos))
                : (OSCILLATORS_XOSC32MCAPS_ENABLE_Disabled << OSCILLATORS_XOSC32MCAPS_ENABLE_Pos));
}
#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_OSCILLATORS_H__
