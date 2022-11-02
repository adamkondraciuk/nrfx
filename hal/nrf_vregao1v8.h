/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREGAO1V8_H__
#define NRF_VREGAO1V8_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vregao1v8_hal Always-on 1.8V Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Always-on 1.8V Voltage Regulator (VREGAO1V8).
 */

/** @brief VREGAO1V8 events. */
typedef enum
{
    NRF_VREGAO1V8_EVENT_READY   = offsetof(NRF_VREGAO1V8_Type, EVENTS_READY),   /**< Power up done. */
    NRF_VREGAO1V8_EVENT_SETTLED = offsetof(NRF_VREGAO1V8_Type, EVENTS_SETTLED), /**< Settled flag for MODE handshake. */
    NRF_VREGAO1V8_EVENT_IOUTCMP = offsetof(NRF_VREGAO1V8_Type, EVENTS_IOUTCMP), /**< Analog current comparator. */
    NRF_VREGAO1V8_EVENT_LP2HP   = offsetof(NRF_VREGAO1V8_Type, EVENTS_LP2HP),   /**< Current consumption above threshold. */
    NRF_VREGAO1V8_EVENT_HP2LP   = offsetof(NRF_VREGAO1V8_Type, EVENTS_HP2LP),   /**< Current consumption below threshold. */
} nrf_vregao1v8_event_t;

/** @brief VREGAO1V8 interrupts. */
typedef enum
{
    NRF_VREGAO1V8_INT_READY_MASK   = VREGAO1V8_INTEN_READY_Msk,   /**< Interrupt on READY. */
    NRF_VREGAO1V8_INT_SETTLED_MASK = VREGAO1V8_INTEN_SETTLED_Msk, /**< Interrupt on SETTLED. */
    NRF_VREGAO1V8_INT_IOUTCMP_MASK = VREGAO1V8_INTEN_IOUTCMP_Msk, /**< Interrupt on IOUTCMP. */
    NRF_VREGAO1V8_INT_LP2HP_MASK   = VREGAO1V8_INTEN_LP2HP_Msk,   /**< Interrupt on LP2HP. */
    NRF_VREGAO1V8_INT_HP2LP_MASK   = VREGAO1V8_INTEN_HP2LP_Msk,   /**< Interrupt on HP2LP. */
} nrf_vregao1v8_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VREGAO1V8_STATUS_HIGH_POWER  = VREGAO1V8_STATUS_MODE_HighPower,            /**< High power mode. */
    NRF_VREGAO1V8_STATUS_LP_REFRESH  = VREGAO1V8_STATUS_MODE_LowPowerRefresh,      /**< Low power refresh mode. */
    NRF_VREGAO1V8_STATUS_ULP_REFRESH = VREGAO1V8_STATUS_MODE_UltraLowPowerRefresh, /**< ULP refresh mode. */
    NRF_VREGAO1V8_STATUS_LPR_DIFF    = VREGAO1V8_STATUS_MODE_LowPowerRefreshDiff,  /**< Low Power Refresh Differential 5v0 and 1v8. */
} nrf_vregao1v8_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VREGAO1V8_STATUSANA_READY_MASK   = VREGAO1V8_STATUSANA_READY_Msk,   /**< Current value of READY signal. */
    NRF_VREGAO1V8_STATUSANA_SETTLED_MASK = VREGAO1V8_STATUSANA_SETTLED_Msk, /**< Current value of SETTLED signal. */
    NRF_VREGAO1V8_STATUSANA_IOUTCMP_MASK = VREGAO1V8_STATUSANA_IOUTCMP_Msk, /**< Current value of IOUTCMP signal. */
} nrf_vregao1v8_statusana_mask_t;

/** @brief Fields for static configuration structure. */
typedef struct
{
    bool eoc_by_icmp;        /**< Enable EOC by ICMP. */
    bool lpeoc_by_voutcmp;   /**< Enable LP EOC by VOUTCMP. */
    bool scmp_lp_mode;       /**< Enable SCMP in LP mode. */
    bool refresh_overdrive;  /**< Enable 10mV refresh overdrive. */
    bool long_refresh_timer; /**< Enable long refresh timer. */
} nrf_vregao1v8_config_static_t;

/** @brief Double bias current configuration. */
typedef enum
{
    NRF_VREGAO1V8_CFGDYNAMIC_DOUBLE_BIAS_AUTO     = VREGAO1V8_CONFIG_CFGDYNAMIC_DOUBLEBIAS_Auto,     /**< Auto. */
    NRF_VREGAO1V8_CFGDYNAMIC_DOUBLE_BIAS_DISABLED = VREGAO1V8_CONFIG_CFGDYNAMIC_DOUBLEBIAS_Disabled, /**< Disabled. */
    NRF_VREGAO1V8_CFGDYNAMIC_DOUBLE_BIAS_ENABLED  = VREGAO1V8_CONFIG_CFGDYNAMIC_DOUBLEBIAS_Enabled,  /**< Enabled. */
} nrf_vregao1v8_double_bias_t;

/** @brief Current limit low configuration. */
typedef enum
{
    NRF_VREGAO1V8_CFGDYNAMIC_ILIM_LOW_DISABLED = VREGAO1V8_CONFIG_CFGDYNAMIC_ILIMLOW_Disabled, /**< Disabled. */
    NRF_VREGAO1V8_CFGDYNAMIC_ILIM_LOW_ENABLED  = VREGAO1V8_CONFIG_CFGDYNAMIC_ILIMLOW_Enabled,  /**< Enabled. */
} nrf_vregao1v8_ilim_low_t;

/** @brief Configuration for differential comparator and LPD mode. */
typedef enum
{
    NRF_VREGAO1V8_CFGDYNAMIC_DCMP_AUTO     = VREGAO1V8_CONFIG_CFGDYNAMIC_DCMP_Auto,     /**< Auto. */
    NRF_VREGAO1V8_CFGDYNAMIC_DCMP_DISABLED = VREGAO1V8_CONFIG_CFGDYNAMIC_DCMP_Disabled, /**< Disabled. */
    NRF_VREGAO1V8_CFGDYNAMIC_DCMP_ENABLED  = VREGAO1V8_CONFIG_CFGDYNAMIC_DCMP_Enabled,  /**< Enabled. */
} nrf_vregao1v8_dcmp_t;

/** @brief Dynamic configuration. Current limit configuration for the voltage regulator. */
typedef struct
{
    nrf_vregao1v8_double_bias_t double_bias; /**< Double bias configuration. */
    nrf_vregao1v8_ilim_low_t    ilim_low;    /**< Current limit low configuration. */
    nrf_vregao1v8_dcmp_t        dcmp;        /**< DCMP and LPD mode configuration. */
} nrf_vregao1v8_config_dynamic_t;

/** @brief Low power differential mode output comparator trimming values. */
typedef enum
{
    NRF_VREGAO1V8_TRIM_LPDIFF_21MV = VREGAO1V8_TRIM_LOWPOWERDIFF_VAL_21mV, /**< 21mV. */
    NRF_VREGAO1V8_TRIM_LPDIFF_27MV = VREGAO1V8_TRIM_LOWPOWERDIFF_VAL_27mV, /**< 27mV. */
    NRF_VREGAO1V8_TRIM_LPDIFF_33MV = VREGAO1V8_TRIM_LOWPOWERDIFF_VAL_33mV, /**< 33mV. */
    NRF_VREGAO1V8_TRIM_LPDIFF_39MV = VREGAO1V8_TRIM_LOWPOWERDIFF_VAL_39mV, /**< 39mV. */
} nrf_vregao1v8_trim_lpdiff_t;

/** @brief Voltage output. */
typedef enum
{
    NRF_VREGAO1V8_VOUT_NOMINAL,   /* Nominal. */
    NRF_VREGAO1V8_VOUT_HP_HELPER, /* High power helper. */
    NRF_VREGAO1V8_VOUT_LP,        /* Low power. */
} nrf_vregao1v8_vout_t;

/** @brief Voltage regulator mode. */
typedef enum
{
    NRF_VREGAO1V8_MODE_AUTO            = VREGAO1V8_MODE_MODE_Auto,                 /**< Automatically handled by the peripheral. */
    NRF_VREGAO1V8_MODE_HIGH_POWER      = VREGAO1V8_MODE_MODE_HighPower,            /**< High power mode. */
    NRF_VREGAO1V8_MODE_LP_REFRESH      = VREGAO1V8_MODE_MODE_LowPowerRefresh,      /**< Low power refresh. */
    NRF_VREGAO1V8_MODE_ULP_REFRESH     = VREGAO1V8_MODE_MODE_UltraLowPowerRefresh, /**< Ultra-low power refresh mode. */
    NRF_VREGAO1V8_MODE_LP_REFRESH_DIFF = VREGAO1V8_MODE_MODE_LowPowerRefreshDiff   /**< Low power refresh differential 5v0 and 1v8. */
} nrf_vregao1v8_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VREGAO1V8_ANALOG_SIGNAL_PWRUP,    /**< Override PWRUP signal. */
    NRF_VREGAO1V8_ANALOG_SIGNAL_RETAIN,   /**< Override RETAIN signal. */
    NRF_VREGAO1V8_ANALOG_SIGNAL_MODE_LP,  /**< Override MODE LP signal. */
    NRF_VREGAO1V8_ANALOG_SIGNAL_MODE_ULP, /**< Override MODE ULP signal. */
    NRF_VREGAO1V8_ANALOG_SIGNAL_VOLT_HP,  /**< Override VOLTHP signal. */
    NRF_VREGAO1V8_ANALOG_SIGNAL_READY,    /**< Override READY signal. */
    NRF_VREGAO1V8_ANALOG_SIGNAL_SETTLED,  /**< Override SETTLED signal. */
    NRF_VREGAO1V8_ANALOG_SIGNAL_IOUT_CMP, /**< Override IOUTCMP signal. */
} nrf_vregao1v8_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VREGAO1V8_DFT_ATB0_SELMUX_SPARE0     = VREGAO1V8_DFT_ATB0CONFIG_SELMUX_Spare0,   /**< HiZ. */
    NRF_VREGAO1V8_DFT_ATB0_SELMUX_VDD_SW_1V8 = VREGAO1V8_DFT_ATB0CONFIG_SELMUX_VddSw1v8, /**< VDD_SW_1V8. */
    NRF_VREGAO1V8_DFT_ATB0_SELMUX_IBPP_50NA  = VREGAO1V8_DFT_ATB0CONFIG_SELMUX_Ibpp50n,  /**< IBPP_50N. */
    NRF_VREGAO1V8_DFT_ATB0_SELMUX_VSS        = VREGAO1V8_DFT_ATB0CONFIG_SELMUX_VSS,      /**< Vss. */
} nrf_vregao1v8_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VREGAO1V8_DFT_ATB1_SELMUX_SPARE0            = VREGAO1V8_DFT_ATB1CONFIG_SELMUX_Spare0,          /**< HiZ. */
    NRF_VREGAO1V8_DFT_ATB1_SELMUX_VREF_0V9_DVT      = VREGAO1V8_DFT_ATB1CONFIG_SELMUX_Vref0v9Dvt,      /**< VREF_0V9_DVT. */
    NRF_VREGAO1V8_DFT_ATB1_SELMUX_BUFFERED_VREF_0V9 = VREGAO1V8_DFT_ATB1CONFIG_SELMUX_BufferedVref0V9, /**< Buffered VREF_0V9. */
    NRF_VREGAO1V8_DFT_ATB1_SELMUX_BUFFERED_VFB_0V9  = VREGAO1V8_DFT_ATB1CONFIG_SELMUX_BufferedVfb0V9,  /**< Buffered VFB_0V9. */
} nrf_vregao1v8_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VREGAO1V8_DFT_DTB0_SELMUX_PWRUP_IBPP  = VREGAO1V8_DFT_DTB0CONFIG_SELMUX_PwrupIbpp,  /**< PWRUP_IBPP. */
    NRF_VREGAO1V8_DFT_DTB0_SELMUX_PWRUP_IBPSR = VREGAO1V8_DFT_DTB0CONFIG_SELMUX_PwrupIbpsr, /**< PWRUP_IBPSR. */
    NRF_VREGAO1V8_DFT_DTB0_SELMUX_MODE_LP     = VREGAO1V8_DFT_DTB0CONFIG_SELMUX_ModeLp,     /**< MODE_LP. */
    NRF_VREGAO1V8_DFT_DTB0_SELMUX_VOUT_CMP    = VREGAO1V8_DFT_DTB0CONFIG_SELMUX_VoutCmp,    /**< VOUTCMP. */
} nrf_vregao1v8_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VREGAO1V8_DFT_DTB1_SELMUX_SETTLED_IBPP = VREGAO1V8_DFT_DTB1CONFIG_SELMUX_SettledIbpp, /**< Settled IBPP. */
    NRF_VREGAO1V8_DFT_DTB1_SELMUX_READY_IBPSR  = VREGAO1V8_DFT_DTB1CONFIG_SELMUX_ReadyIbpsr,  /**< READY_IBPSR. */
    NRF_VREGAO1V8_DFT_DTB1_SELMUX_MODE_ULP     = VREGAO1V8_DFT_DTB1CONFIG_SELMUX_ModeUlp,     /**< MODE_ULP. */
    NRF_VREGAO1V8_DFT_DTB1_SELMUX_VOUT_CMPD    = VREGAO1V8_DFT_DTB1CONFIG_SELMUX_VoutCmpd,    /**< VOUTCMPD. */
} nrf_vregao1v8_dft_dtb1_selmux_t;

/** @brief Select multiplexer for DTB2. */
typedef enum
{
    NRF_VREGAO1V8_DFT_DTB2_SELMUX_PWRUP_VREG_LDO = VREGAO1V8_DFT_DTB2CONFIG_SELMUX_PwrupVregLdo, /**< PWRUP_VREG_LDO. */
    NRF_VREGAO1V8_DFT_DTB2_SELMUX_SETTLED_IBPSR  = VREGAO1V8_DFT_DTB2CONFIG_SELMUX_SettledIbpsr, /**< SETTLED_IBPSR. */
    NRF_VREGAO1V8_DFT_DTB2_SELMUX_SETTLED_LDO    = VREGAO1V8_DFT_DTB2CONFIG_SELMUX_SettledLdo,   /**< SETTLED_LDO. */
    NRF_VREGAO1V8_DFT_DTB2_SELMUX_VOUT_CMPS      = VREGAO1V8_DFT_DTB2CONFIG_SELMUX_VoutCmps,     /**< VOUTCMPS. */
} nrf_vregao1v8_dft_dtb2_selmux_t;

/** @brief Select multiplexer for DTB3. */
typedef enum
{
    NRF_VREGAO1V8_DFT_DTB3_SELMUX_SET_TIMER     = VREGAO1V8_DFT_DTB3CONFIG_SELMUX_SetTimer,     /**< SET_TIMER. */
    NRF_VREGAO1V8_DFT_DTB3_SELMUX_SETTLED_MBIAS = VREGAO1V8_DFT_DTB3CONFIG_SELMUX_SettledMbias, /**< SETTLED_MBIAS. */
    NRF_VREGAO1V8_DFT_DTB3_SELMUX_READY_LDO     = VREGAO1V8_DFT_DTB3CONFIG_SELMUX_ReadyLdo,     /**< READY_LDO. */
    NRF_VREGAO1V8_DFT_DTB3_SELMUX_ICMP_5MA      = VREGAO1V8_DFT_DTB3CONFIG_SELMUX_Icmp5ma,      /**< ICMP_5MA. */
} nrf_vregao1v8_dft_dtb3_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool pwrup_ibpp;      /**< Controls PWRUPIBPP. */
    bool pwrup_ibpsr_dvt; /**< Controls PWRUPIBPSRDVT. */
    bool pwrup_vreg_ldo;  /**< Controls PWRUPVREGLDO. */
    bool pwrup_icmp;      /**< Controls PWRUPICMP. */
    bool pwrup_vout_cmp;  /**< Controls PWRUPVOUTCMP. */
    bool pwrup_vout_cmpd; /**< Controls PWRUPVOUTCMPD. */
    bool pwrup_vout_cmps; /**< Controls PWRUPVOUTCMPS. */
    bool reset_dig;       /**< Controls RESETDIG. */
} nrf_vregao1v8_tcfg_t;

/**
 * @brief Function for clearing the specified VREGAO1V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_event_clear(NRF_VREGAO1V8_Type *  p_reg,
                                                 nrf_vregao1v8_event_t event);

/**
 * @brief Function for retrieving the state of the VREGAO1V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vregao1v8_event_check(NRF_VREGAO1V8_Type const * p_reg,
                                                 nrf_vregao1v8_event_t      event);

/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao1v8_event_address_get(NRF_VREGAO1V8_Type const * p_reg,
                                                           nrf_vregao1v8_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled. Use @ref nrf_vregao1v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_int_enable(NRF_VREGAO1V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled. Use @ref nrf_vregao1v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_int_disable(NRF_VREGAO1V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked. Use @ref nrf_vregao1v8_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao1v8_int_enable_check(NRF_VREGAO1V8_Type const * p_reg,
                                                          uint32_t                   mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts. Use @ref nrf_vregao1v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao1v8_int_pending_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for getting VREGAO1V8 status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_vregao1v8_status_t nrf_vregao1v8_status_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for getting VREGAO1V8 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vregao1v8_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao1v8_statusana_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for setting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Static configuration.
 */
NRF_STATIC_INLINE
void nrf_vregao1v8_config_static_set(NRF_VREGAO1V8_Type *             p_reg,
                                        nrf_vregao1v8_config_static_t cfg);

/**
 * @brief Function for getting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Static configuration.
 */
NRF_STATIC_INLINE nrf_vregao1v8_config_static_t
nrf_vregao1v8_config_static_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for setting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Dynamic configuration.
 */
NRF_STATIC_INLINE
void nrf_vregao1v8_config_dynamic_set(NRF_VREGAO1V8_Type *           p_reg,
                                      nrf_vregao1v8_config_dynamic_t cfg);

/**
 * @brief Function for getting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Dynamic configuration.
 */
NRF_STATIC_INLINE nrf_vregao1v8_config_dynamic_t
nrf_vregao1v8_config_dynamic_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for setting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Current reference trimming value. The value is 2's complement from -48% to 61%.
 *                  Default 7.2%, steps are nonlinear.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_trim_iref_set(NRF_VREGAO1V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current reference trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao1v8_trim_iref_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for setting reference voltage trim.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage trimming value. The value is 2's complement value of -8% to +7%.
 *                  Default 0%.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_trim_vref_set(NRF_VREGAO1V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting reference voltage trim.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao1v8_trim_vref_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for setting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of
 *                  -20mV +/- 8mV steps.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_trim_lowpower_set(NRF_VREGAO1V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao1v8_trim_lowpower_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for setting low power differential mode output comparator trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of
 *                  0mV +/- 11.8mV steps.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_trim_lpdiff_set(NRF_VREGAO1V8_Type *        p_reg,
                                                     nrf_vregao1v8_trim_lpdiff_t val);

/**
 * @brief Function for getting low power differential mode output comparator trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE
nrf_vregao1v8_trim_lpdiff_t nrf_vregao1v8_trim_lpdiff_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_mirror_lock_set(NRF_VREGAO1V8_Type * p_reg, bool lock);

/**
 * @brief Function for setting output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Vout target.
 * @param[in] val   Output voltage value. The value is 1.72V + 0.02V steps.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_vout_set(NRF_VREGAO1V8_Type * p_reg,
                                              nrf_vregao1v8_vout_t vout,
                                              uint8_t              val);

/**
 * @brief Function for getting output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Vout target.
 *
 * @return Output voltage value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao1v8_vout_get(NRF_VREGAO1V8_Type const * p_reg,
                                                 nrf_vregao1v8_vout_t       vout);

/**
 * @brief Function for setting voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_mode_set(NRF_VREGAO1V8_Type * p_reg,
                                              nrf_vregao1v8_mode_t mode);

/**
 * @brief Function for getting voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vregao1v8_mode_t nrf_vregao1v8_mode_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for setting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] thr   Compare value to match (PCRM format).
 */
NRF_STATIC_INLINE void nrf_vregao1v8_ithreshold_set(NRF_VREGAO1V8_Type * p_reg,
                                                    uint8_t              thr);

/**
 * @brief Function for getting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current compare value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao1v8_ithreshold_get(NRF_VREGAO1V8_Type const * p_reg);

/**
 * @brief Function for override signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_override_set(NRF_VREGAO1V8_Type *          p_reg,
                                                  nrf_vregao1v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val);

/**
 * @brief Function for override the dynamic config signals to the analog module.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] enable      True to enable override and false to disable.
 * @param[in] double_bias Override value for double bias.
 * @param[in] dcmp        Override value for DCMP.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_override_config_set(NRF_VREGAO1V8_Type * p_reg,
                                                         bool                 enable,
                                                         uint8_t              double_bias,
                                                         uint8_t              dcmp);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_dft_atb0_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_dft_atb1_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_dft_dtb0_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_dft_dtb1_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 2 (DTB2).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_dft_dtb2_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_dtb2_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] selmux        Multiplexer configuration.
 * @param[in] pwrup_deltest Enable PWRUP delay test circuit.
 * @param[in] enable        True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE
void nrf_vregao1v8_dft_dtb3_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                       nrf_vregao1v8_dft_dtb3_selmux_t selmux,
                                       bool                            pwrup_deltest,
                                       bool                            enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vregao1v8_dft_tcfg_config_set(NRF_VREGAO1V8_Type * p_reg,
                                                         nrf_vregao1v8_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vregao1v8_event_clear(NRF_VREGAO1V8_Type *  p_reg,
                                                 nrf_vregao1v8_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vregao1v8_event_check(NRF_VREGAO1V8_Type const * p_reg,
                                                 nrf_vregao1v8_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_vregao1v8_event_address_get(NRF_VREGAO1V8_Type const * p_reg,
                                                           nrf_vregao1v8_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vregao1v8_int_enable(NRF_VREGAO1V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vregao1v8_int_disable(NRF_VREGAO1V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregao1v8_int_enable_check(NRF_VREGAO1V8_Type const * p_reg,
                                                          uint32_t                   mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregao1v8_int_pending_get(NRF_VREGAO1V8_Type const * p_reg)
{
        return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_vregao1v8_status_t nrf_vregao1v8_status_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return (nrf_vregao1v8_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_vregao1v8_statusana_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE
void nrf_vregao1v8_config_static_set(NRF_VREGAO1V8_Type *          p_reg,
                                     nrf_vregao1v8_config_static_t cfg)
{
    p_reg->CONFIG.CFGSTATIC = ((cfg.eoc_by_icmp ?
                                VREGAO1V8_CONFIG_CFGSTATIC_EOCBYICMP_Enabled :
                                VREGAO1V8_CONFIG_CFGSTATIC_EOCBYICMP_Disabled) <<
                               VREGAO1V8_CONFIG_CFGSTATIC_EOCBYICMP_Pos) |
                              ((cfg.lpeoc_by_voutcmp ?
                                VREGAO1V8_CONFIG_CFGSTATIC_LPEOCBYVOUTCMP_Enabled :
                                VREGAO1V8_CONFIG_CFGSTATIC_LPEOCBYVOUTCMP_Disabled) <<
                               VREGAO1V8_CONFIG_CFGSTATIC_LPEOCBYVOUTCMP_Pos)     |
                              ((cfg.scmp_lp_mode ?
                                VREGAO1V8_CONFIG_CFGSTATIC_SCMPLPMODE_Enabled :
                                VREGAO1V8_CONFIG_CFGSTATIC_SCMPLPMODE_Disabled) <<
                               VREGAO1V8_CONFIG_CFGSTATIC_SCMPLPMODE_Pos)   |
                              ((cfg.refresh_overdrive ?
                                VREGAO1V8_CONFIG_CFGSTATIC_REFRESHOVERDRIVE_Enabled :
                                VREGAO1V8_CONFIG_CFGSTATIC_REFRESHOVERDRIVE_Disabled) <<
                               VREGAO1V8_CONFIG_CFGSTATIC_REFRESHOVERDRIVE_Pos)        |
                              ((cfg.long_refresh_timer ?
                                VREGAO1V8_CONFIG_CFGSTATIC_LONGREFRESHTIMER_Enabled :
                                VREGAO1V8_CONFIG_CFGSTATIC_LONGREFRESHTIMER_Disabled) <<
                               VREGAO1V8_CONFIG_CFGSTATIC_LONGREFRESHTIMER_Pos);
}

NRF_STATIC_INLINE nrf_vregao1v8_config_static_t
nrf_vregao1v8_config_static_get(NRF_VREGAO1V8_Type const * p_reg)
{
    nrf_vregao1v8_config_static_t cfg;
    uint32_t reg = p_reg->CONFIG.CFGSTATIC;

    cfg.eoc_by_icmp        = ((reg & VREGAO1V8_CONFIG_CFGSTATIC_EOCBYICMP_Msk) >>
                              VREGAO1V8_CONFIG_CFGSTATIC_EOCBYICMP_Pos) ==
                             VREGAO1V8_CONFIG_CFGSTATIC_EOCBYICMP_Enabled;
    cfg.lpeoc_by_voutcmp   = ((reg & VREGAO1V8_CONFIG_CFGSTATIC_LPEOCBYVOUTCMP_Msk) >>
                              VREGAO1V8_CONFIG_CFGSTATIC_LPEOCBYVOUTCMP_Pos) ==
                             VREGAO1V8_CONFIG_CFGSTATIC_LPEOCBYVOUTCMP_Enabled;
    cfg.scmp_lp_mode       = ((reg & VREGAO1V8_CONFIG_CFGSTATIC_SCMPLPMODE_Msk) >>
                              VREGAO1V8_CONFIG_CFGSTATIC_SCMPLPMODE_Pos) ==
                             VREGAO1V8_CONFIG_CFGSTATIC_SCMPLPMODE_Enabled;
    cfg.refresh_overdrive  = ((reg & VREGAO1V8_CONFIG_CFGSTATIC_REFRESHOVERDRIVE_Msk) >>
                              VREGAO1V8_CONFIG_CFGSTATIC_REFRESHOVERDRIVE_Pos) ==
                             VREGAO1V8_CONFIG_CFGSTATIC_REFRESHOVERDRIVE_Enabled;
    cfg.long_refresh_timer = ((reg & VREGAO1V8_CONFIG_CFGSTATIC_LONGREFRESHTIMER_Msk) >>
                              VREGAO1V8_CONFIG_CFGSTATIC_LONGREFRESHTIMER_Pos) ==
                             VREGAO1V8_CONFIG_CFGSTATIC_LONGREFRESHTIMER_Enabled;

    return cfg;
}

NRF_STATIC_INLINE
void nrf_vregao1v8_config_dynamic_set(NRF_VREGAO1V8_Type *           p_reg,
                                      nrf_vregao1v8_config_dynamic_t cfg)
{
    p_reg->CONFIG.CFGDYNAMIC =
            (cfg.double_bias << VREGAO1V8_CONFIG_CFGDYNAMIC_DOUBLEBIAS_Pos) |
            (cfg.ilim_low << VREGAO1V8_CONFIG_CFGDYNAMIC_ILIMLOW_Pos)       |
            (cfg.dcmp << VREGAO1V8_CONFIG_CFGDYNAMIC_DCMP_Pos);
}

NRF_STATIC_INLINE nrf_vregao1v8_config_dynamic_t
nrf_vregao1v8_config_dynamic_get(NRF_VREGAO1V8_Type const * p_reg)
{
    nrf_vregao1v8_config_dynamic_t cfg;
    uint32_t reg = p_reg->CONFIG.CFGDYNAMIC;

    cfg.double_bias = (reg & VREGAO1V8_CONFIG_CFGDYNAMIC_DOUBLEBIAS_Msk) >>
                      VREGAO1V8_CONFIG_CFGDYNAMIC_DOUBLEBIAS_Pos;
    cfg.ilim_low    = (reg & VREGAO1V8_CONFIG_CFGDYNAMIC_ILIMLOW_Msk) >>
                      VREGAO1V8_CONFIG_CFGDYNAMIC_ILIMLOW_Pos;
    cfg.dcmp        = (reg & VREGAO1V8_CONFIG_CFGDYNAMIC_DCMP_Msk) >>
                      VREGAO1V8_CONFIG_CFGDYNAMIC_DCMP_Pos;

    return cfg;
}

NRF_STATIC_INLINE void nrf_vregao1v8_trim_iref_set(NRF_VREGAO1V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.IREF = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao1v8_trim_iref_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.IREF;
}

NRF_STATIC_INLINE void nrf_vregao1v8_trim_vref_set(NRF_VREGAO1V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.VREF = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao1v8_trim_vref_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.VREF;
}

NRF_STATIC_INLINE void nrf_vregao1v8_trim_lowpower_set(NRF_VREGAO1V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.LOWPOWER = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao1v8_trim_lowpower_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.LOWPOWER;
}

NRF_STATIC_INLINE void nrf_vregao1v8_trim_lpdiff_set(NRF_VREGAO1V8_Type *        p_reg,
                                                     nrf_vregao1v8_trim_lpdiff_t val)
{
    p_reg->TRIM.LOWPOWERDIFF = (uint32_t)(val << VREGAO1V8_TRIM_LOWPOWERDIFF_VAL_Pos);
}

NRF_STATIC_INLINE
nrf_vregao1v8_trim_lpdiff_t nrf_vregao1v8_trim_lpdiff_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return (nrf_vregao1v8_trim_lpdiff_t)
            (p_reg->TRIM.LOWPOWERDIFF & VREGAO1V8_TRIM_LOWPOWERDIFF_VAL_Msk) >>
            VREGAO1V8_TRIM_LOWPOWERDIFF_VAL_Pos;
}

NRF_STATIC_INLINE void nrf_vregao1v8_mirror_lock_set(NRF_VREGAO1V8_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VREGAO1V8_MIRROR_LOCK_Enabled : VREGAO1V8_MIRROR_LOCK_Disabled) <<
                    VREGAO1V8_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vregao1v8_vout_set(NRF_VREGAO1V8_Type * p_reg,
                                              nrf_vregao1v8_vout_t vout,
                                              uint8_t              val)
{
    switch (vout)
    {
        case NRF_VREGAO1V8_VOUT_NOMINAL:
            p_reg->VOUTHPNOMINAL = (uint32_t)val;
            break;
        case NRF_VREGAO1V8_VOUT_HP_HELPER:
            p_reg->VOUTHPHELPER = (uint32_t)val;
            break;
        case NRF_VREGAO1V8_VOUT_LP:
            p_reg->VOUTLP = (uint32_t)val;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE uint8_t nrf_vregao1v8_vout_get(NRF_VREGAO1V8_Type const * p_reg,
                                                 nrf_vregao1v8_vout_t       vout)
{
    switch (vout)
    {
        case NRF_VREGAO1V8_VOUT_NOMINAL:
            return (uint8_t)p_reg->VOUTHPNOMINAL;
        case NRF_VREGAO1V8_VOUT_HP_HELPER:
            return (uint8_t)p_reg->VOUTHPHELPER;
        case NRF_VREGAO1V8_VOUT_LP:
            return (uint8_t)p_reg->VOUTLP;
        default:
            NRFX_ASSERT(0);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_vregao1v8_mode_set(NRF_VREGAO1V8_Type * p_reg,
                                              nrf_vregao1v8_mode_t mode)
{
    p_reg->MODE = (uint32_t)(mode << VREGAO1V8_MODE_MODE_Pos);
}

NRF_STATIC_INLINE nrf_vregao1v8_mode_t nrf_vregao1v8_mode_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return (nrf_vregao1v8_mode_t)((p_reg->MODE & VREGAO1V8_MODE_MODE_Msk) >>
            VREGAO1V8_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_vregao1v8_ithreshold_set(NRF_VREGAO1V8_Type * p_reg,
                                                    uint8_t              thr)
{
    p_reg->ITHRESHOLD = (uint32_t)(thr << VREGAO1V8_ITHRESHOLD_VAL_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_vregao1v8_ithreshold_get(NRF_VREGAO1V8_Type const * p_reg)
{
    return (uint8_t)p_reg->ITHRESHOLD;
}

NRF_STATIC_INLINE void nrf_vregao1v8_override_set(NRF_VREGAO1V8_Type *          p_reg,
                                                  nrf_vregao1v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val)
{
    switch (signal)
    {
        case NRF_VREGAO1V8_ANALOG_SIGNAL_PWRUP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                        VREGAO1V8_OVERRIDE_PWRUP_EN_Enabled :
                                        VREGAO1V8_OVERRIDE_PWRUP_EN_Disabled) <<
                                       VREGAO1V8_OVERRIDE_PWRUP_EN_Pos) |
                                      (val << VREGAO1V8_OVERRIDE_PWRUP_VAL_Pos);
              break;
        case NRF_VREGAO1V8_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                         VREGAO1V8_OVERRIDE_RETAIN_EN_Enabled :
                                         VREGAO1V8_OVERRIDE_RETAIN_EN_Disabled) <<
                                        VREGAO1V8_OVERRIDE_RETAIN_EN_Pos) |
                                       (val << VREGAO1V8_OVERRIDE_RETAIN_VAL_Pos);
              break;
        case NRF_VREGAO1V8_ANALOG_SIGNAL_MODE_LP:
              p_reg->OVERRIDE.MODELP = ((enable ?
                                         VREGAO1V8_OVERRIDE_MODELP_EN_Enabled :
                                         VREGAO1V8_OVERRIDE_MODELP_EN_Disabled) <<
                                        VREGAO1V8_OVERRIDE_MODELP_EN_Pos) |
                                       (val << VREGAO1V8_OVERRIDE_MODELP_VAL_Pos);
              break;
        case NRF_VREGAO1V8_ANALOG_SIGNAL_MODE_ULP:
              p_reg->OVERRIDE.MODEULP = ((enable ?
                                          VREGAO1V8_OVERRIDE_MODEULP_EN_Enabled :
                                          VREGAO1V8_OVERRIDE_MODEULP_EN_Disabled) <<
                                         VREGAO1V8_OVERRIDE_MODEULP_EN_Pos) |
                                        (val << VREGAO1V8_OVERRIDE_MODEULP_VAL_Pos);
              break;
        case NRF_VREGAO1V8_ANALOG_SIGNAL_VOLT_HP:
              p_reg->OVERRIDE.VOLTHP = ((enable ?
                                         VREGAO1V8_OVERRIDE_VOLTHP_EN_Enabled :
                                         VREGAO1V8_OVERRIDE_VOLTHP_EN_Disabled) <<
                                        VREGAO1V8_OVERRIDE_VOLTHP_EN_Pos) |
                                       (val << VREGAO1V8_OVERRIDE_VOLTHP_VAL_Pos);
              break;
        case NRF_VREGAO1V8_ANALOG_SIGNAL_READY:
              p_reg->OVERRIDE.READY = ((enable ?
                                        VREGAO1V8_OVERRIDE_READY_EN_Enabled :
                                        VREGAO1V8_OVERRIDE_READY_EN_Disabled) <<
                                       VREGAO1V8_OVERRIDE_READY_EN_Pos) |
                                      (val << VREGAO1V8_OVERRIDE_READY_VAL_Pos);
              break;
        case NRF_VREGAO1V8_ANALOG_SIGNAL_SETTLED:
              p_reg->OVERRIDE.SETTLED = ((enable ?
                                          VREGAO1V8_OVERRIDE_SETTLED_EN_Enabled :
                                          VREGAO1V8_OVERRIDE_SETTLED_EN_Disabled) <<
                                         VREGAO1V8_OVERRIDE_SETTLED_EN_Pos) |
                                        (val << VREGAO1V8_OVERRIDE_SETTLED_VAL_Pos);
              break;
        case NRF_VREGAO1V8_ANALOG_SIGNAL_IOUT_CMP:
              p_reg->OVERRIDE.IOUTCMP = ((enable ?
                                          VREGAO1V8_OVERRIDE_IOUTCMP_EN_Enabled :
                                          VREGAO1V8_OVERRIDE_IOUTCMP_EN_Disabled) <<
                                         VREGAO1V8_OVERRIDE_IOUTCMP_EN_Pos) |
                                        (val << VREGAO1V8_OVERRIDE_IOUTCMP_VAL_Pos);
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vregao1v8_override_config_set(NRF_VREGAO1V8_Type * p_reg,
                                                         bool                 enable,
                                                         uint8_t              double_bias,
                                                         uint8_t              dcmp)
{
    p_reg->OVERRIDE.CFG = ((enable ?
                            VREGAO1V8_OVERRIDE_CFG_EN_Enabled :
                            VREGAO1V8_OVERRIDE_CFG_EN_Disabled) <<
                           VREGAO1V8_OVERRIDE_CFG_EN_Pos)                        |
                          (double_bias << VREGAO1V8_OVERRIDE_CFG_DOUBLEBIAS_Pos) |
                          (dcmp << VREGAO1V8_OVERRIDE_CFG_DCMP_Pos);
}

NRF_STATIC_INLINE void nrf_vregao1v8_dft_atb0_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VREGAO1V8_DFT_ATB0CONFIG_EN_Enabled :
                              VREGAO1V8_DFT_ATB0CONFIG_EN_Disabled) <<
                             VREGAO1V8_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VREGAO1V8_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao1v8_dft_atb1_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VREGAO1V8_DFT_ATB1CONFIG_EN_Enabled :
                              VREGAO1V8_DFT_ATB1CONFIG_EN_Disabled) <<
                             VREGAO1V8_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VREGAO1V8_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao1v8_dft_dtb0_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VREGAO1V8_DFT_DTB0CONFIG_EN_Enabled :
                              VREGAO1V8_DFT_DTB0CONFIG_EN_Disabled) <<
                             VREGAO1V8_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VREGAO1V8_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao1v8_dft_dtb1_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VREGAO1V8_DFT_DTB1CONFIG_EN_Enabled :
                              VREGAO1V8_DFT_DTB1CONFIG_EN_Disabled) <<
                             VREGAO1V8_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VREGAO1V8_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao1v8_dft_dtb2_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                                         nrf_vregao1v8_dft_dtb2_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB2CONFIG = ((enable ?
                              VREGAO1V8_DFT_DTB2CONFIG_EN_Enabled :
                              VREGAO1V8_DFT_DTB2CONFIG_EN_Disabled) <<
                             VREGAO1V8_DFT_DTB2CONFIG_EN_Pos) |
                            (selmux << VREGAO1V8_DFT_DTB2CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE
void nrf_vregao1v8_dft_dtb3_config_set(NRF_VREGAO1V8_Type *            p_reg,
                                       nrf_vregao1v8_dft_dtb3_selmux_t selmux,
                                       bool                            pwrup_deltest,
                                       bool                            enable)
{
    p_reg->DFT.DTB3CONFIG = ((pwrup_deltest ?
                              VREGAO1V8_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                              VREGAO1V8_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                             VREGAO1V8_DFT_DTB3CONFIG_PWRUPDELTEST_Pos) |
                            ((enable ?
                              VREGAO1V8_DFT_DTB3CONFIG_EN_Enabled :
                              VREGAO1V8_DFT_DTB3CONFIG_EN_Disabled) <<
                             VREGAO1V8_DFT_DTB3CONFIG_EN_Pos)           |
                            (selmux << VREGAO1V8_DFT_DTB3CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao1v8_dft_tcfg_config_set(NRF_VREGAO1V8_Type * p_reg,
                                                         nrf_vregao1v8_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.pwrup_ibpp ?
                        VREGAO1V8_DFT_TCFG_PWRUPIBPP_Enabled :
                        VREGAO1V8_DFT_TCFG_PWRUPIBPP_Disabled) <<
                       VREGAO1V8_DFT_TCFG_PWRUPIBPP_Pos)     |
                      ((tcfg.pwrup_ibpsr_dvt ?
                        VREGAO1V8_DFT_TCFG_PWRUPIBPSRDVT_Enabled :
                        VREGAO1V8_DFT_TCFG_PWRUPIBPSRDVT_Disabled) <<
                       VREGAO1V8_DFT_TCFG_PWRUPIBPSRDVT_Pos) |
                      ((tcfg.pwrup_vreg_ldo ?
                        VREGAO1V8_DFT_TCFG_PWRUPVREGLDO_Enabled :
                        VREGAO1V8_DFT_TCFG_PWRUPVREGLDO_Disabled) <<
                       VREGAO1V8_DFT_TCFG_PWRUPVREGLDO_Pos)  |
                      ((tcfg.pwrup_icmp ?
                        VREGAO1V8_DFT_TCFG_PWRUPICMP_Enabled :
                        VREGAO1V8_DFT_TCFG_PWRUPICMP_Disabled) <<
                       VREGAO1V8_DFT_TCFG_PWRUPICMP_Pos)     |
                      ((tcfg.pwrup_vout_cmp ?
                        VREGAO1V8_DFT_TCFG_PWRUPVOUTCMP_Enabled :
                        VREGAO1V8_DFT_TCFG_PWRUPVOUTCMP_Disabled) <<
                       VREGAO1V8_DFT_TCFG_PWRUPVOUTCMP_Pos)  |
                      ((tcfg.pwrup_vout_cmpd ?
                        VREGAO1V8_DFT_TCFG_PWRUPVOUTCMPD_Enabled :
                        VREGAO1V8_DFT_TCFG_PWRUPVOUTCMPD_Disabled) <<
                       VREGAO1V8_DFT_TCFG_PWRUPVOUTCMPD_Pos) |
                      ((tcfg.pwrup_vout_cmps ?
                        VREGAO1V8_DFT_TCFG_PWRUPVOUTCMPS_Enabled :
                        VREGAO1V8_DFT_TCFG_PWRUPVOUTCMPS_Disabled) <<
                       VREGAO1V8_DFT_TCFG_PWRUPVOUTCMPS_Pos) |
                      ((tcfg.reset_dig ?
                        VREGAO1V8_DFT_TCFG_RESETDIG_Enabled :
                        VREGAO1V8_DFT_TCFG_RESETDIG_Disabled) <<
                       VREGAO1V8_DFT_TCFG_RESETDIG_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREGAO1V8_H__
