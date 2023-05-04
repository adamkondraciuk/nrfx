/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_OSCRFR_H__
#define NRF_OSCRFR_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_oscrfr_hal OSCRFR HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Oscillator for Refresh (OSCRFR).
 */

#if defined(OSCRFR_STATUS_MODE_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether STATUS register is present. */
#define NRF_OSCRFR_HAS_STATUS 1
#else
#define NRF_OSCRFR_HAS_STATUS 0
#endif

#if defined(OSCRFR_MODE_MODE_Auto) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether Oscillator Auto mode is present. */
#define NRF_OSCRFR_HAS_MODE_AUTO 1
#else
#define NRF_OSCRFR_HAS_MODE_AUTO 0
#endif

#if defined(OSCRFR_OVERRIDE_MODE_VAL_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether overriding the MODE signal is available. */
#define NRF_OSCRFR_HAS_OVERRIDE_MODE 1
#else
#define NRF_OSCRFR_HAS_OVERRIDE_MODE 0
#endif

#if defined(OSCRFR_DFT_ATB0CONFIG_SELMUX_IBPP50N) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether selecting the IBPP_50N signal for Analog Test Bus 0 multiplexer is available. */
#define NRF_OSCRFR_HAS_DFT_ATB0_SELMUX_IBPP_50NA 1
#else
#define NRF_OSCRFR_HAS_DFT_ATB0_SELMUX_IBPP_50NA 0
#endif

#if defined(OSCRFR_DFT_ATB0CONFIG_SELMUX_Spare) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether selecting the SPARE signal for Analog Test Bus 0 multiplexer is available. */
#define NRF_OSCRFR_HAS_DFT_ATB0_SELMUX_SPARE 1
#else
#define NRF_OSCRFR_HAS_DFT_ATB0_SELMUX_SPARE 0
#endif

#if NRF_OSCRFR_HAS_STATUS
/** @brief STATUS register states. */
typedef enum
{
    NRF_OSCRFR_STATUS_NORMAL = OSCRFR_STATUS_MODE_Normal, ///< Normal mode.
    NRF_OSCRFR_STATUS_BYPASS = OSCRFR_STATUS_MODE_Bypass, ///< Bypass mode.
} nrf_oscrfr_status_t;
#endif

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_OSCRFR_STATUSANA_READY_MASK   = OSCRFR_STATUSANA_READY_Msk,   ///< Current value of the READY signal from the analog module.
    NRF_OSCRFR_STATUSANA_SETTLED_MASK = OSCRFR_STATUSANA_SETTLED_Msk, ///< Current value of the SETTLED signal from the analog module.
} nrf_oscrfr_statusana_mask_t;

/** @brief Oscillator modes. */
typedef enum
{
#if NRF_OSCRFR_HAS_MODE_AUTO
    NRF_OSCRFR_MODE_AUTO   = OSCRFR_MODE_MODE_Auto,   ///< Automatically handled by the peripheral.
#endif
    NRF_OSCRFR_MODE_NORMAL = OSCRFR_MODE_MODE_Normal, ///< Normal mode - use internal oscillator.
    NRF_OSCRFR_MODE_BYPASS = OSCRFR_MODE_MODE_Bypass, ///< Bypass mode - use OSC_RFR_DIG_AO_0V8 signal.
} nrf_oscrfr_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_OSCRFR_ANALOG_SIGNAL_PWRUP,   ///< Override PWRUP signal.
    NRF_OSCRFR_ANALOG_SIGNAL_RETAIN,  ///< Override RETAIN signal.
#if NRF_OSCRFR_HAS_OVERRIDE_MODE
    NRF_OSCRFR_ANALOG_SIGNAL_MODE,    ///< Override MODE signal.
#endif
    NRF_OSCRFR_ANALOG_SIGNAL_READY,   ///< Override READY signal.
    NRF_OSCRFR_ANALOG_SIGNAL_SETTLED, ///< Override SETTLED signal.
} nrf_oscrfr_analog_signal_t;

/** @brief Fields for static configuration structure. */
typedef struct
{
    bool double_bias; ///< Enable double bias.
    bool trig_delay;  ///< Increase TRIG signal delay.
} nrf_oscrfr_config_static_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_OSCRFR_DFT_ATB0_SELMUX_IBPSR_4UA = OSCRFR_DFT_ATB0CONFIG_SELMUX_IBPSR4U, ///< IBPSR_4U signal selected.
#if NRF_OSCRFR_HAS_DFT_ATB0_SELMUX_IBPP_50NA
    NRF_OSCRFR_DFT_ATB0_SELMUX_IBPP_50NA = OSCRFR_DFT_ATB0CONFIG_SELMUX_IBPP50N, ///< IBPP_50N signal selected.
#endif
#if NRF_OSCRFR_HAS_DFT_ATB0_SELMUX_SPARE
    NRF_OSCRFR_DFT_ATB0_SELMUX_SPARE     = OSCRFR_DFT_ATB0CONFIG_SELMUX_Spare,   ///< None selected, logic 0.
#endif
} nrf_oscrfr_dft_atb0_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_OSCRFR_DFT_DTB0_SELMUX_READY = OSCRFR_DFT_DTB0CONFIG_SELMUX_READY, ///< READY signal selected.
    NRF_OSCRFR_DFT_DTB0_SELMUX_OSC   = OSCRFR_DFT_DTB0CONFIG_SELMUX_OSC,   ///< OSC_RFR_ANA_AO_0V8 signal selected.
} nrf_oscrfr_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_OSCRFR_DFT_DTB1_SELMUX_SETTLED = OSCRFR_DFT_DTB1CONFIG_SELMUX_SETTLED, ///< SETTLED signal selected.
    NRF_OSCRFR_DFT_DTB1_SELMUX_OSC     = OSCRFR_DFT_DTB1CONFIG_SELMUX_OSC,     ///< OSC_RFR_ANA_AO_0V8 signal selected.
} nrf_oscrfr_dft_dtb1_selmux_t;

/** @brief Values for oscillation period trimming. */
typedef enum
{
    NRF_OSCRFR_TRIM_OSC_NORMAL = OSCRFR_TRIM_OSC_VAL_Normal,   ///< Normal trim value.
    NRF_OSCRFR_TRIM_OSC_34     = OSCRFR_TRIM_OSC_VAL_Val34,    ///< The trim value is 35%.
    NRF_OSCRFR_TRIM_OSC_154    = OSCRFR_TRIM_OSC_VAL_Val154,   ///< The trim value is 154%.
    NRF_OSCRFR_TRIM_OSC_670    = OSCRFR_TRIM_OSC_VAL_Val670,   ///< The trim value is 670%.
    NRF_OSCRFR_TRIM_OSC_NEG_54 = OSCRFR_TRIM_OSC_VAL_ValNeg54, ///< The trim value is -54%.
    NRF_OSCRFR_TRIM_OSC_NEG_49 = OSCRFR_TRIM_OSC_VAL_ValNeg49, ///< The trim value is -49%.
    NRF_OSCRFR_TRIM_OSC_NEG_37 = OSCRFR_TRIM_OSC_VAL_ValNeg37, ///< The trim value is -37%.
    NRF_OSCRFR_TRIM_OSC_NEG_26 = OSCRFR_TRIM_OSC_VAL_ValNeg26, ///< The trim value is -26%.
} nrf_oscrfr_trim_osc_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool bias_current; ///< Enable continuous mode for measuring bias current over ATB.
                       /**< The oscillation stops when BIAS CURRENT is enabled. */
} nrf_oscrfr_tcfg_t;

#if NRF_OSCRFR_HAS_STATUS
/**
 * @brief Function for getting OSCRFR status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_oscrfr_status_t nrf_oscrfr_status_get(NRF_OSCRFR_Type const * p_reg);
#endif

/**
 * @brief Function for getting OSCRFR status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return STATUSANA register value.
 *         Use @ref nrf_oscrfr_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_oscrfr_statusana_get(NRF_OSCRFR_Type const * p_reg);

/**
 * @brief Function for setting configuration of the static OSCRFR oscillator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Static configuration.
 */
NRF_STATIC_INLINE void nrf_oscrfr_config_static_set(NRF_OSCRFR_Type *          p_reg,
                                                    nrf_oscrfr_config_static_t cfg);

/**
 * @brief Function for getting configuration of the static OSCRFR oscillator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Static configuration.
 */
NRF_STATIC_INLINE
nrf_oscrfr_config_static_t nrf_oscrfr_config_static_get(NRF_OSCRFR_Type const * p_reg);

/**
 * @brief Function for setting oscillation period trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Oscillation period trimming value.
 */
NRF_STATIC_INLINE void nrf_oscrfr_trim_osc_set(NRF_OSCRFR_Type * p_reg, nrf_oscrfr_trim_osc_t val);

/**
 * @brief Function for getting oscillation period trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Oscillation period trimming value.
 */
NRF_STATIC_INLINE nrf_oscrfr_trim_osc_t nrf_oscrfr_trim_osc_get(NRF_OSCRFR_Type const * p_reg);

/**
 * @brief Function for setting IBPSR current and VREF voltage trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   IBPSR current and VREF voltage trimming value.
 *                  The value is 2's complement value from -31% to 65% (non-linear steps).
 */
NRF_STATIC_INLINE void nrf_oscrfr_trim_ibpsr_vref_set(NRF_OSCRFR_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting IBPSR current and VREF voltage trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return IBPSR current and VREF voltage trimming value.
 *         The value is 2's complement value from -31% to 65% (non-linear steps).
 */
NRF_STATIC_INLINE uint8_t nrf_oscrfr_trim_ibpsr_vref_get(NRF_OSCRFR_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  True if lock is enabled. False if lock is disabled, so mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_oscrfr_mirror_lock_set(NRF_OSCRFR_Type * p_reg, bool lock);

/**
 * @brief Function for setting mode of the OSCRFR oscillator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_oscrfr_mode_set(NRF_OSCRFR_Type * p_reg, nrf_oscrfr_mode_t mode);

/**
 * @brief Function for getting mode of the OSCRFR oscillator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_oscrfr_mode_t nrf_oscrfr_mode_get(NRF_OSCRFR_Type const * p_reg);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override, false to disable.
 * @param[in] val    Overriden value.
 */

NRF_STATIC_INLINE void nrf_oscrfr_override_set(NRF_OSCRFR_Type *          p_reg,
                                               nrf_oscrfr_analog_signal_t signal,
                                               bool                       enable,
                                               uint8_t                    val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus, false to disable.
 */
NRF_STATIC_INLINE void nrf_oscrfr_dft_atb0_config_set(NRF_OSCRFR_Type *            p_reg,
                                                      nrf_oscrfr_dft_atb0_selmux_t selmux,
                                                      bool                         enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus, false to disable.
 */
NRF_STATIC_INLINE void nrf_oscrfr_dft_dtb0_config_set(NRF_OSCRFR_Type *            p_reg,
                                                      nrf_oscrfr_dft_dtb0_selmux_t selmux,
                                                      bool                         enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus, false to disable.
 */
NRF_STATIC_INLINE void nrf_oscrfr_dft_dtb1_config_set(NRF_OSCRFR_Type *            p_reg,
                                                      nrf_oscrfr_dft_dtb1_selmux_t selmux,
                                                      bool                         enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit, false to disable.
 */
NRF_STATIC_INLINE void nrf_oscrfr_dft_dtb3_config_set(NRF_OSCRFR_Type * p_reg, bool enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_oscrfr_dft_tcfg_config_set(NRF_OSCRFR_Type * p_reg,
                                                      nrf_oscrfr_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

#if NRF_OSCRFR_HAS_STATUS
NRF_STATIC_INLINE nrf_oscrfr_status_t nrf_oscrfr_status_get(NRF_OSCRFR_Type const * p_reg)
{
    return (nrf_oscrfr_status_t)p_reg->STATUS;
}
#endif

NRF_STATIC_INLINE uint32_t nrf_oscrfr_statusana_get(NRF_OSCRFR_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_oscrfr_config_static_set(NRF_OSCRFR_Type *          p_reg,
                                                    nrf_oscrfr_config_static_t cfg)
{
    p_reg->CONFIG.CFGSTATIC = ((cfg.double_bias ?
                                OSCRFR_CONFIG_CFGSTATIC_DOUBLEBIAS_Enabled :
                                OSCRFR_CONFIG_CFGSTATIC_DOUBLEBIAS_Disabled) <<
                               OSCRFR_CONFIG_CFGSTATIC_DOUBLEBIAS_Pos) |
                              ((cfg.trig_delay ?
                                OSCRFR_CONFIG_CFGSTATIC_TRIGDELAY_Enabled :
                                OSCRFR_CONFIG_CFGSTATIC_TRIGDELAY_Disabled) <<
                               OSCRFR_CONFIG_CFGSTATIC_TRIGDELAY_Pos);
}

NRF_STATIC_INLINE
nrf_oscrfr_config_static_t nrf_oscrfr_config_static_get(NRF_OSCRFR_Type const * p_reg)
{
    nrf_oscrfr_config_static_t cfg;
    uint32_t reg = p_reg->CONFIG.CFGSTATIC;

    cfg.double_bias = ((reg & OSCRFR_CONFIG_CFGSTATIC_DOUBLEBIAS_Msk) >>
                       OSCRFR_CONFIG_CFGSTATIC_DOUBLEBIAS_Pos) ==
                      OSCRFR_CONFIG_CFGSTATIC_DOUBLEBIAS_Enabled;
    cfg.trig_delay = ((reg & OSCRFR_CONFIG_CFGSTATIC_TRIGDELAY_Msk) >>
                      OSCRFR_CONFIG_CFGSTATIC_TRIGDELAY_Pos) ==
                     OSCRFR_CONFIG_CFGSTATIC_TRIGDELAY_Enabled;

    return cfg;
}

NRF_STATIC_INLINE void nrf_oscrfr_trim_osc_set(NRF_OSCRFR_Type *     p_reg,
                                               nrf_oscrfr_trim_osc_t val)
{
    p_reg->TRIM.OSC = (uint32_t)val << OSCRFR_TRIM_OSC_VAL_Pos;
}

NRF_STATIC_INLINE nrf_oscrfr_trim_osc_t nrf_oscrfr_trim_osc_get(NRF_OSCRFR_Type const * p_reg)
{
    return (nrf_oscrfr_trim_osc_t)((p_reg->TRIM.OSC & OSCRFR_TRIM_OSC_VAL_Msk) >>
                                   OSCRFR_TRIM_OSC_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_oscrfr_trim_ibpsr_vref_set(NRF_OSCRFR_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.IBPSR = (uint32_t)val << OSCRFR_TRIM_IBPSR_VAL_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_oscrfr_trim_ibpsr_vref_get(NRF_OSCRFR_Type const * p_reg)
{
    return (uint8_t)((p_reg->TRIM.IBPSR & OSCRFR_TRIM_IBPSR_VAL_Msk) >>
                     OSCRFR_TRIM_IBPSR_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_oscrfr_mirror_lock_set(NRF_OSCRFR_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (uint32_t)(lock ? OSCRFR_MIRROR_LOCK_Enabled : OSCRFR_MIRROR_LOCK_Disabled) <<
                    OSCRFR_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_oscrfr_mode_set(NRF_OSCRFR_Type * p_reg, nrf_oscrfr_mode_t mode)
{
    p_reg->MODE = (uint32_t)mode << OSCRFR_MODE_MODE_Pos;
}

NRF_STATIC_INLINE nrf_oscrfr_mode_t nrf_oscrfr_mode_get(NRF_OSCRFR_Type const * p_reg)
{
    return (nrf_oscrfr_mode_t)((p_reg->MODE & OSCRFR_MODE_MODE_Msk) >> OSCRFR_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_oscrfr_override_set(NRF_OSCRFR_Type *          p_reg,
                                               nrf_oscrfr_analog_signal_t signal,
                                               bool                       enable,
                                               uint8_t                    val)
{
    switch (signal)
    {
        case NRF_OSCRFR_ANALOG_SIGNAL_PWRUP:
            p_reg->OVERRIDE.PWRUP = ((enable ?
                                      OSCRFR_OVERRIDE_PWRUP_EN_Enabled :
                                      OSCRFR_OVERRIDE_PWRUP_EN_Disabled) <<
                                     OSCRFR_OVERRIDE_PWRUP_EN_Pos) |
                                    ((uint32_t)val << OSCRFR_OVERRIDE_PWRUP_VAL_Pos);
            break;
        case NRF_OSCRFR_ANALOG_SIGNAL_RETAIN:
            p_reg->OVERRIDE.RETAIN = ((enable ?
                                       OSCRFR_OVERRIDE_RETAIN_EN_Enabled :
                                       OSCRFR_OVERRIDE_RETAIN_EN_Disabled) <<
                                      OSCRFR_OVERRIDE_RETAIN_EN_Pos) |
                                     ((uint32_t)val << OSCRFR_OVERRIDE_RETAIN_VAL_Pos);
            break;
#if NRF_OSCRFR_HAS_OVERRIDE_MODE
        case NRF_OSCRFR_ANALOG_SIGNAL_MODE:
            p_reg->OVERRIDE.MODE = ((enable ?
                                     OSCRFR_OVERRIDE_MODE_EN_Enabled :
                                     OSCRFR_OVERRIDE_MODE_EN_Disabled) <<
                                    OSCRFR_OVERRIDE_MODE_EN_Pos) |
                                   ((uint32_t)val << OSCRFR_OVERRIDE_MODE_VAL_Pos);
            break;
#endif
        case NRF_OSCRFR_ANALOG_SIGNAL_READY:
            p_reg->OVERRIDE.READY = ((enable ?
                                      OSCRFR_OVERRIDE_READY_EN_Enabled :
                                      OSCRFR_OVERRIDE_READY_EN_Disabled) <<
                                     OSCRFR_OVERRIDE_READY_EN_Pos) |
                                    ((uint32_t)val << OSCRFR_OVERRIDE_READY_VAL_Pos);
            break;
        case NRF_OSCRFR_ANALOG_SIGNAL_SETTLED:
            p_reg->OVERRIDE.SETTLED = ((enable ?
                                        OSCRFR_OVERRIDE_SETTLED_EN_Enabled :
                                        OSCRFR_OVERRIDE_SETTLED_EN_Disabled) <<
                                       OSCRFR_OVERRIDE_SETTLED_EN_Pos) |
                                      ((uint32_t)val << OSCRFR_OVERRIDE_SETTLED_VAL_Pos);
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_oscrfr_dft_atb0_config_set(NRF_OSCRFR_Type *            p_reg,
                                                      nrf_oscrfr_dft_atb0_selmux_t selmux,
                                                      bool                         enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              OSCRFR_DFT_ATB0CONFIG_EN_Enabled :
                              OSCRFR_DFT_ATB0CONFIG_EN_Disabled) <<
                             OSCRFR_DFT_ATB0CONFIG_EN_Pos) |
                            ((uint32_t)selmux << OSCRFR_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_oscrfr_dft_dtb0_config_set(NRF_OSCRFR_Type *            p_reg,
                                                      nrf_oscrfr_dft_dtb0_selmux_t selmux,
                                                      bool                         enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              OSCRFR_DFT_DTB0CONFIG_EN_Enabled :
                              OSCRFR_DFT_DTB0CONFIG_EN_Disabled) <<
                             OSCRFR_DFT_DTB0CONFIG_EN_Pos) |
                            ((uint32_t)selmux << OSCRFR_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_oscrfr_dft_dtb1_config_set(NRF_OSCRFR_Type *            p_reg,
                                                      nrf_oscrfr_dft_dtb1_selmux_t selmux,
                                                      bool                         enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              OSCRFR_DFT_DTB1CONFIG_EN_Enabled :
                              OSCRFR_DFT_DTB1CONFIG_EN_Disabled) <<
                             OSCRFR_DFT_DTB1CONFIG_EN_Pos) |
                            ((uint32_t)selmux << OSCRFR_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_oscrfr_dft_dtb3_config_set(NRF_OSCRFR_Type * p_reg, bool enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             OSCRFR_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             OSCRFR_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            OSCRFR_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_oscrfr_dft_tcfg_config_set(NRF_OSCRFR_Type * p_reg,
                                                      nrf_oscrfr_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.bias_current ?
                        OSCRFR_DFT_TCFG_BIASCURRENT_Enabled :
                        OSCRFR_DFT_TCFG_BIASCURRENT_Disabled) <<
                       OSCRFR_DFT_TCFG_BIASCURRENT_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_OSCRFR_H__
