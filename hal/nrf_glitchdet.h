/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_GLITCHDET_H__
#define NRF_GLITCHDET_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TODO: when MDK aligns to Geras IPS and introduces separate GLITCHDET,
 * remove RRAMC typedef and use proper defines.
 */
typedef NRF_RRAMC_Type NRF_GLITCHDET_Type;

/**
 * @defgroup nrf_glitchdet_hal GLITCHDET HAL
 * @{
 * @ingroup nrf_glitchdet
 * @brief   Hardware access layer for managing the Voltage Glitch Detectors (GLITCHDET) peripheral.
 */

/** @brief Glitch detector mode. */
typedef enum
{
    NRF_GLITCHDET_MODE_HIGH_PASS = RRAMC_GLITCHDETECTOR_CONFIG_MODE_HighPassFilter, ///< High pass filter mode.
    NRF_GLITCHDET_MODE_CAP_DIV   = RRAMC_GLITCHDETECTOR_CONFIG_MODE_CapDiv,         ///< Cap divider mode.
} nrf_glitchdet_mode_t;

/**
 * @brief Function for checking whether glitch detector is enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Glitch detector is enabled.
 * @retval false Glitch detector is disabled.
 */
NRF_STATIC_INLINE bool nrf_glitchdet_enable_check(NRF_GLITCHDET_Type const * p_reg);

/**
 * @brief Function for enabling or disabling glitch detector.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if glitch detector is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_glitchdet_enable_set(NRF_GLITCHDET_Type * p_reg, bool enable);

/**
 * @brief Function for getting glitch detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Glitch detector mode.
 */
NRF_STATIC_INLINE nrf_glitchdet_mode_t nrf_glitchdet_mode_get(NRF_GLITCHDET_Type const * p_reg);

/**
 * @brief Function for setting glitch detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Glitch detector mode to be set.
 */
NRF_STATIC_INLINE void nrf_glitchdet_mode_set(NRF_GLITCHDET_Type * p_reg,
                                              nrf_glitchdet_mode_t mode);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE bool nrf_glitchdet_enable_check(NRF_GLITCHDET_Type const * p_reg)
{
    return ((p_reg->GLITCHDETECTOR.CONFIG & RRAMC_GLITCHDETECTOR_CONFIG_ENABLE_Msk)
            >> RRAMC_GLITCHDETECTOR_CONFIG_ENABLE_Pos) == RRAMC_GLITCHDETECTOR_CONFIG_ENABLE_Enable;
}

NRF_STATIC_INLINE void nrf_glitchdet_enable_set(NRF_GLITCHDET_Type * p_reg, bool enable)
{
    p_reg->GLITCHDETECTOR.CONFIG = (p_reg->GLITCHDETECTOR.CONFIG &
                                    ~RRAMC_GLITCHDETECTOR_CONFIG_ENABLE_Msk) |
                                   ((enable ? RRAMC_GLITCHDETECTOR_CONFIG_ENABLE_Enable :
                                     RRAMC_GLITCHDETECTOR_CONFIG_ENABLE_Disable)
                                    << RRAMC_GLITCHDETECTOR_CONFIG_ENABLE_Pos);
}

NRF_STATIC_INLINE nrf_glitchdet_mode_t nrf_glitchdet_mode_get(NRF_GLITCHDET_Type const * p_reg)
{
    return (nrf_glitchdet_mode_t)((p_reg->GLITCHDETECTOR.CONFIG &
                                  RRAMC_GLITCHDETECTOR_CONFIG_MODE_Msk) >>
                                  RRAMC_GLITCHDETECTOR_CONFIG_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_glitchdet_mode_set(NRF_GLITCHDET_Type * p_reg,
                                              nrf_glitchdet_mode_t mode)
{
    p_reg->GLITCHDETECTOR.CONFIG = (p_reg->GLITCHDETECTOR.CONFIG &
                                    ~RRAMC_GLITCHDETECTOR_CONFIG_MODE_Msk) |
                                   (mode << RRAMC_GLITCHDETECTOR_CONFIG_MODE_Pos);
}
#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_GLITCHDET_H__
