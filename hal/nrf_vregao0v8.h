/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREGAO0V8_H__
#define NRF_VREGAO0V8_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vregao0v8_hal Always-on 0.8V Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Always-on 0.8V Voltage Regulator (VREGAO0V8).
 */

#if defined(VREGAO0V8_DFT_ATB0CONFIG_SELMUX_VddSw1v8) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the VDD_SW_1V8 voltage reference for Analog Test Bus 0 multiplexer is available. */
#define NRF_VREGAO0V8_HAS_DFT_ATB0_SELMUX_VDD_SW_1V8 1
#else
#define NRF_VREGAO0V8_HAS_DFT_ATB0_SELMUX_VDD_SW_1V8 0
#endif

#if defined(VREGAO0V8_DFT_ATB0CONFIG_SELMUX_Ibpsr8u) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the internal 8uA current reference for Analog Test Bus 0 multiplexer is available. */
#define NRF_VREGAO0V8_HAS_DFT_ATB0_SELMUX_IBPSR_8UA 1
#else
#define NRF_VREGAO0V8_HAS_DFT_ATB0_SELMUX_IBPSR_8UA 0
#endif

#if defined(VREGAO0V8_DFT_DTB0CONFIG_SELMUX_Spare0) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether selecting SPARE0 multiplexer input for Digital Test Bus 0 is available. */
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_SPARE0 1
#else
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_SPARE0 0
#endif

#if defined(VREGAO0V8_DFT_DTB0CONFIG_SELMUX_Spare1) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether selecting SPARE1 multiplexer input for Digital Test Bus 0 is available. */
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_SPARE1 1
#else
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_SPARE1 0
#endif

#if defined(VREGAO0V8_DFT_DTB0CONFIG_SELMUX_PwrupIbpsr) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the internal 4uA current reference powerup for Digital Test Bus 0 multiplexer is available. */
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_PWRUP_IBPSR 1
#else
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_PWRUP_IBPSR 0
#endif

#if defined(VREGAO0V8_DFT_DTB0CONFIG_SELMUX_PwrupCoreHp) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the high power core powerup signal for Digital Test Bus 0 multiplexer is available. */
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_PWRUP_CORE_HP 1
#else
#define NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_PWRUP_CORE_HP 0
#endif

/** @brief VREGAO0V8 events. */
typedef enum
{
    NRF_VREGAO0V8_EVENT_READY       = offsetof(NRF_VREGAO0V8_Type, EVENTS_READY),     /**< Power up done. */
    NRF_VREGAO0V8_EVENT_SETTLED     = offsetof(NRF_VREGAO0V8_Type, EVENTS_SETTLED),   /**< Settled flag for MODE handshake. */
    NRF_VREGAO0V8_EVENT_BPREADY     = offsetof(NRF_VREGAO0V8_Type, EVENTS_BPREADY),   /**< Bypass ready. */
    NRF_VREGAO0V8_EVENT_IOUT_CMP_HP = offsetof(NRF_VREGAO0V8_Type, EVENTS_IOUTCMPHP), /**< HP mode analog current comparator. */
    NRF_VREGAO0V8_EVENT_IOUT_CMP_LP = offsetof(NRF_VREGAO0V8_Type, EVENTS_IOUTCMPLP), /**< LP mode analog current comparator. */
    NRF_VREGAO0V8_EVENT_LP2HP       = offsetof(NRF_VREGAO0V8_Type, EVENTS_LP2HP),     /**< Current consumption above threshold. */
    NRF_VREGAO0V8_EVENT_HP2LP       = offsetof(NRF_VREGAO0V8_Type, EVENTS_HP2LP),     /**< Current consumption below threshold. */
} nrf_vregao0v8_event_t;

/** @brief VREGAO0V8 interrupts. */
typedef enum
{
    NRF_VREGAO0V8_INT_READY_MASK       = VREGAO0V8_INTEN_READY_Msk,     /**< Interrupt on READY. */
    NRF_VREGAO0V8_INT_SETTLED_MASK     = VREGAO0V8_INTEN_SETTLED_Msk,   /**< Interrupt on SETTLED. */
    NRF_VREGAO0V8_INT_BPREADY_MASK     = VREGAO0V8_INTEN_BPREADY_Msk,   /**< Interrupt on BPREADY. */
    NRF_VREGAO0V8_INT_IOUT_CMP_HP_MASK = VREGAO0V8_INTEN_IOUTCMPHP_Msk, /**< Interrupt on IOUTCMPHP. */
    NRF_VREGAO0V8_INT_IOUT_CMP_LP_MASK = VREGAO0V8_INTEN_IOUTCMPLP_Msk, /**< Interrupt on IOUTCMPLP. */
    NRF_VREGAO0V8_INT_LP2HP_MASK       = VREGAO0V8_INTEN_LP2HP_Msk,     /**< Interrupt on LP2HP. */
    NRF_VREGAO0V8_INT_HP2LP_MASK       = VREGAO0V8_INTEN_HP2LP_Msk,     /**< Interrupt on HP2LP. */
} nrf_vregao0v8_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VREGAO0V8_STATUS_HIGH_POWER  = VREGAO0V8_STATUS_MODE_HighPower,            /**< High power mode. */
    NRF_VREGAO0V8_STATUS_LOW_POWER   = VREGAO0V8_STATUS_MODE_LowPower,             /**< Low power mode. */
    NRF_VREGAO0V8_STATUS_ULP_REFRESH = VREGAO0V8_STATUS_MODE_UltraLowPowerRefresh, /**< ULP refresh mode. */
    NRF_VREGAO0V8_STATUS_BYPASS      = VREGAO0V8_STATUS_MODE_Bypass,               /**< Bypass forced mode. */
} nrf_vregao0v8_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VREGAO0V8_STATUSANA_READY_MASK       = VREGAO0V8_STATUSANA_READY_Msk,     /**< Current value of READY signal. */
    NRF_VREGAO0V8_STATUSANA_SETTLED_MASK     = VREGAO0V8_STATUSANA_SETTLED_Msk,   /**< Current value of SETTLED signal. */
    NRF_VREGAO0V8_STATUSANA_BPREADY_MASK     = VREGAO0V8_STATUSANA_BPREADY_Msk,   /**< Current value of BPREADY signal. */
    NRF_VREGAO0V8_STATUSANA_IOUT_CMP_HP_MASK = VREGAO0V8_STATUSANA_IOUTCMPHP_Msk, /**< Current value of IOUTCMPHP signal. */
    NRF_VREGAO0V8_STATUSANA_IOUT_CMP_LP_MASK = VREGAO0V8_STATUSANA_IOUTCMPLP_Msk, /**< Current value of IOUTCMPLP signal. */
} nrf_vregao0v8_statusana_mask_t;

/** @brief Fields for static configuration structure. */
typedef struct
{
    bool double_bias;   /**< Enable double bias. */
    bool lpicmp;        /**< Enable LP ICMP. */
    bool long_refresh;  /**< Enable long refresh timer. */
    bool disable_bpdet; /**< Disable BPDET. */
    bool trim_ibpp0;    /**< LSB of IBPP trim. */
} nrf_vregao0v8_config_static_t;

/** @brief Dynamic configuration. Current limit configuration for the voltage regulator. */
typedef struct
{
    bool ilim_low; /**< Enable current limit low. */
} nrf_vregao0v8_config_dynamic_t;

/** @brief Values for ultra low power mode ripple trimming. */
typedef enum
{
    NRF_VREGAO0V8_TRIM_ULP_5MV  = VREGAO0V8_TRIM_ULTRALOWPOWER_VAL_5mV,  /**< 5mV. */
    NRF_VREGAO0V8_TRIM_ULP_15MV = VREGAO0V8_TRIM_ULTRALOWPOWER_VAL_15mV, /**< 15mV. */
    NRF_VREGAO0V8_TRIM_ULP_25MV = VREGAO0V8_TRIM_ULTRALOWPOWER_VAL_25mV, /**< 25mV. */
    NRF_VREGAO0V8_TRIM_ULP_35MV = VREGAO0V8_TRIM_ULTRALOWPOWER_VAL_35mV, /**< 35mV. */
} nrf_vregao0v8_trim_ulp_t;

/** @brief Voltage regulator mode. */
typedef enum
{
    NRF_VREGAO0V8_MODE_AUTO        = VREGAO0V8_MODE_MODE_Auto,                 /**< Automatically handled by the peripheral. */
    NRF_VREGAO0V8_MODE_HIGH_POWER  = VREGAO0V8_MODE_MODE_HighPower,            /**< High power mode. */
    NRF_VREGAO0V8_MODE_LOW_POWER   = VREGAO0V8_MODE_MODE_LowPower,             /**< Low power mode. */
    NRF_VREGAO0V8_MODE_ULP_REFRESH = VREGAO0V8_MODE_MODE_UltraLowPowerRefresh, /**< Ultra-low power refresh mode. */
    NRF_VREGAO0V8_MODE_BYPASS      = VREGAO0V8_MODE_MODE_Bypass                /**< Bypass mode. */
} nrf_vregao0v8_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VREGAO0V8_ANALOG_SIGNAL_PWRUP,       /**< Override PWRUP signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_RETAIN,      /**< Override RETAIN signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_MODE_LP,     /**< Override MODE LP signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_MODE_ULPR,   /**< Override MODE ULPR signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_REQ_BYPASS,  /**< Override REQ BYPASS signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_READY,       /**< Override READY signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_SETTLED,     /**< Override SETTLED signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_BPREADY,     /**< Override BPREADY signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_IOUT_CMP_HP, /**< Override IOUTCMPHP signal. */
    NRF_VREGAO0V8_ANALOG_SIGNAL_IOUT_CMP_LP, /**< Override IOUTCMPLP signal. */
} nrf_vregao0v8_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VREGAO0V8_DFT_ATB0_SELMUX_EXT_VREF   = VREGAO0V8_DFT_ATB0CONFIG_SELMUX_ExtVref,  /**< External Vref. */
#if NRF_VREGAO0V8_HAS_DFT_ATB0_SELMUX_VDD_SW_1V8
    NRF_VREGAO0V8_DFT_ATB0_SELMUX_VDD_SW_1V8 = VREGAO0V8_DFT_ATB0CONFIG_SELMUX_VddSw1v8, /**< VDD_SW_1V8. */
#endif
#if NRF_VREGAO0V8_HAS_DFT_ATB0_SELMUX_IBPSR_8UA
    NRF_VREGAO0V8_DFT_ATB0_SELMUX_IBPSR_8UA  = VREGAO0V8_DFT_ATB0CONFIG_SELMUX_Ibpsr8u,  /**< Internal 8uA current reference. */
#endif
    NRF_VREGAO0V8_DFT_ATB0_SELMUX_IBPP_50NA  = VREGAO0V8_DFT_ATB0CONFIG_SELMUX_Ibpp50n,  /**< IBPP_50N. */
    NRF_VREGAO0V8_DFT_ATB0_SELMUX_VSS        = VREGAO0V8_DFT_ATB0CONFIG_SELMUX_VSS,      /**< Vss. */
} nrf_vregao0v8_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VREGAO0V8_DFT_ATB1_SELMUX_VREF_HP      = VREGAO0V8_DFT_ATB1CONFIG_SELMUX_VrefHP,     /**< HP Vref. */
    NRF_VREGAO0V8_DFT_ATB1_SELMUX_VREF_0V9_DVT = VREGAO0V8_DFT_ATB1CONFIG_SELMUX_Vref0V9Dvt, /**< VREF_0V9_DVT. */
    NRF_VREGAO0V8_DFT_ATB1_SELMUX_VREF_LP      = VREGAO0V8_DFT_ATB1CONFIG_SELMUX_VrefLp,     /**< Buffered VREF_LP. */
    NRF_VREGAO0V8_DFT_ATB1_SELMUX_VFP          = VREGAO0V8_DFT_ATB1CONFIG_SELMUX_Vfb,        /**< VFB. */
} nrf_vregao0v8_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_ICMP_HP             = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_IcmpHp,            /**< ICMP_HP. */
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_MBIAS_IBPSR_SETTLED = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_MbiasIbpsrSettled, /**< MBIAS_IBPSR_SETTLED. */
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_MODE_LP             = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_ModeLp,            /**< MODE_LP. */
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_READY_LDO           = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_ReadyLdo,          /**< READY_LDO. */
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_BP_READY            = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_BpReady,           /**< BP_READY. */
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_IBPP_READY          = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_IbppReady,         /**< IBPP_READY. */
#if NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_SPARE0
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_SPARE0              = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_Spare0,            /**< None selected, logic 0. */
#endif
#if NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_SPARE1
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_SPARE1              = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_Spare1,            /**< None selected, logic 0. */
#endif
#if NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_PWRUP_IBPSR
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_PWRUP_IBPSR         = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_PwrupIbpsr,            /**< Internal 4uA current reference powerup. */
#endif
#if NRF_VREGAO0V8_HAS_DFT_DTB0_SELMUX_PWRUP_CORE_HP
    NRF_VREGAO0V8_DFT_DTB0_SELMUX_PWRUP_CORE_HP       = VREGAO0V8_DFT_DTB0CONFIG_SELMUX_PwrupCoreHp,            /**< High Power core powerup. */
#endif
} nrf_vregao0v8_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VREGAO0V8_DFT_DTB1_SELMUX_BPDET         = VREGAO0V8_DFT_DTB1CONFIG_SELMUX_Bpdet,        /**< BPDET. */
    NRF_VREGAO0V8_DFT_DTB1_SELMUX_IBPSR_SETTLED = VREGAO0V8_DFT_DTB1CONFIG_SELMUX_IbpsrSettled, /**< IBPSR_SETTLED. */
    NRF_VREGAO0V8_DFT_DTB1_SELMUX_MODE_ULP      = VREGAO0V8_DFT_DTB1CONFIG_SELMUX_ModeUlp,      /**< MODE_ULP ready signal. */
    NRF_VREGAO0V8_DFT_DTB1_SELMUX_SETTLED_LDO   = VREGAO0V8_DFT_DTB1CONFIG_SELMUX_SettledLdo,   /**< SETTLED_LDO power core ready signal. */
} nrf_vregao0v8_dft_dtb1_selmux_t;

/** @brief Select multiplexer for DTB2. */
typedef enum
{
    NRF_VREGAO0V8_DFT_DTB2_SELMUX_ICMP_LP  = VREGAO0V8_DFT_DTB2CONFIG_SELMUX_IcmpLp,  /**< ICMP_LP. */
    NRF_VREGAO0V8_DFT_DTB2_SELMUX_VOUT_CMP = VREGAO0V8_DFT_DTB2CONFIG_SELMUX_VoutCmp, /**< VOUTCMP. */
    NRF_VREGAO0V8_DFT_DTB2_SELMUX_REQ_BP   = VREGAO0V8_DFT_DTB2CONFIG_SELMUX_ReqBp,   /**< REQ_BP. */
    NRF_VREGAO0V8_DFT_DTB2_SELMUX_CAL_CMP  = VREGAO0V8_DFT_DTB2CONFIG_SELMUX_CalCmp,  /**< CAL_CMP. */
} nrf_vregao0v8_dft_dtb2_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool pwrup_ibpsr;    /**< Controls PWRUPIBPSR. */
    bool pwrup_hp_core;  /**< Controls PWRUPHPCORE. */
    bool pwrup_ibpp ;    /**< Controls PWRUPIBPP. */
    bool pwrup_lp_core;  /**< Controls PWRUPLPCORE. */
    bool en_bypass;      /**< Controls ENBYPASS. */
    bool pwrup_bpdet;    /**< Controls PWRUPBPDET. */
    bool pwrup_vout_cmp; /**< Controls PWRUPVOUTCMP. */
    bool reset_dig;      /**< Controls RESETDIG. */
} nrf_vregao0v8_tcfg_t;

/**
 * @brief Function for clearing the specified VREGAO0V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_event_clear(NRF_VREGAO0V8_Type *  p_reg,
                                                 nrf_vregao0v8_event_t event);

/**
 * @brief Function for retrieving the state of the VREGAO0V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vregao0v8_event_check(NRF_VREGAO0V8_Type const * p_reg,
                                                 nrf_vregao0v8_event_t      event);

/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao0v8_event_address_get(NRF_VREGAO0V8_Type const * p_reg,
                                                           nrf_vregao0v8_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled. Use @ref nrf_vregao0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_int_enable(NRF_VREGAO0V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled. Use @ref nrf_vregao0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_int_disable(NRF_VREGAO0V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked. Use @ref nrf_vregao0v8_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao0v8_int_enable_check(NRF_VREGAO0V8_Type const * p_reg,
                                                          uint32_t                   mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts. Use @ref nrf_vregao0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao0v8_int_pending_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for getting VREGAO0V8 status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_vregao0v8_status_t nrf_vregao0v8_status_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for getting VREGAO0V8 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vregao0v8_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregao0v8_statusana_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Static configuration.
 */
NRF_STATIC_INLINE
void nrf_vregao0v8_config_static_set(NRF_VREGAO0V8_Type *          p_reg,
                                     nrf_vregao0v8_config_static_t cfg);

/**
 * @brief Function for getting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Static configuration.
 */
NRF_STATIC_INLINE nrf_vregao0v8_config_static_t
nrf_vregao0v8_config_static_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Dynamic configuration.
 */
NRF_STATIC_INLINE
void nrf_vregao0v8_config_dynamic_set(NRF_VREGAO0V8_Type *           p_reg,
                                      nrf_vregao0v8_config_dynamic_t cfg);

/**
 * @brief Function for getting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Dynamic configuration.
 */
NRF_STATIC_INLINE nrf_vregao0v8_config_dynamic_t
nrf_vregao0v8_config_dynamic_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Current reference trimming value. The value is 2's complement from -48% to 61%.
 *                  Default 7.2%, steps are nonlinear.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_trim_iref_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current reference trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_iref_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting high power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of 2.5mV +/- 5mV steps.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_trim_highpower_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting high power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_highpower_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of 2.5mV +/- 5mV steps.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_trim_lowpower_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_lowpower_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting ultra low power ripple trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_trim_ultralowpower_set(NRF_VREGAO0V8_Type *     p_reg,
                                                            nrf_vregao0v8_trim_ulp_t val);

/**
 * @brief Function for getting ultra low power ripple trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Ripple trimming value.
 */
NRF_STATIC_INLINE
nrf_vregao0v8_trim_ulp_t nrf_vregao0v8_trim_ultralowpower_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting BP detector offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Offset trimming value. The value is 2's complement value of 2.5mV +/- 5mV steps.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_trim_bpdet_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting BP detector offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_bpdef_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_mirror_lock_set(NRF_VREGAO0V8_Type * p_reg, bool lock);

/**
 * @brief Function for setting output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Output voltage value. The value is 0.77V + 0.01V steps.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_vout_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Output voltage value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao0v8_vout_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_mode_set(NRF_VREGAO0V8_Type * p_reg,
                                              nrf_vregao0v8_mode_t mode);

/**
 * @brief Function for getting voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vregao0v8_mode_t nrf_vregao0v8_mode_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for setting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] thr   Compare value to match (PCRM format).
 */
NRF_STATIC_INLINE void nrf_vregao0v8_ithreshold_set(NRF_VREGAO0V8_Type * p_reg,
                                                    uint8_t              thr);

/**
 * @brief Function for getting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current compare value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregao0v8_ithreshold_get(NRF_VREGAO0V8_Type const * p_reg);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */

NRF_STATIC_INLINE void nrf_vregao0v8_override_set(NRF_VREGAO0V8_Type *          p_reg,
                                                  nrf_vregao0v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_atb0_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_atb1_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb0_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb1_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 2 (DTB2).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb2_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_dtb2_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb3_config_set(NRF_VREGAO0V8_Type * p_reg,
                                                         bool                 enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_tcfg_config_set(NRF_VREGAO0V8_Type * p_reg,
                                                         nrf_vregao0v8_tcfg_t tcfg);

/**
 * @brief Function for enabling or disabling calibration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the calibration is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vregao0v8_dft_cal_set(NRF_VREGAO0V8_Type * p_reg,
                                                 bool                 enable);

/**
 * @brief Function for checking calibration compare.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Calibration compare.
 */
NRF_STATIC_INLINE bool nrf_vregao0v8_dft_calcmp_check(NRF_VREGAO0V8_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vregao0v8_event_clear(NRF_VREGAO0V8_Type *  p_reg,
                                                 nrf_vregao0v8_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vregao0v8_event_check(NRF_VREGAO0V8_Type const * p_reg,
                                                 nrf_vregao0v8_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_vregao0v8_event_address_get(NRF_VREGAO0V8_Type const * p_reg,
                                                           nrf_vregao0v8_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vregao0v8_int_enable(NRF_VREGAO0V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vregao0v8_int_disable(NRF_VREGAO0V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregao0v8_int_enable_check(NRF_VREGAO0V8_Type const * p_reg,
                                                          uint32_t                   mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregao0v8_int_pending_get(NRF_VREGAO0V8_Type const * p_reg)
{
        return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_vregao0v8_status_t nrf_vregao0v8_status_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return (nrf_vregao0v8_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_vregao0v8_statusana_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE
void nrf_vregao0v8_config_static_set(NRF_VREGAO0V8_Type *          p_reg,
                                     nrf_vregao0v8_config_static_t cfg)
{
    p_reg->CONFIG.CFGSTATIC = ((cfg.double_bias ?
                               VREGAO0V8_CONFIG_CFGSTATIC_DOUBLEBIAS_Enabled :
                               VREGAO0V8_CONFIG_CFGSTATIC_DOUBLEBIAS_Disabled) <<
                              VREGAO0V8_CONFIG_CFGSTATIC_DOUBLEBIAS_Pos) |
                              ((cfg.lpicmp ?
                               VREGAO0V8_CONFIG_CFGSTATIC_LPICMP_Enabled :
                               VREGAO0V8_CONFIG_CFGSTATIC_LPICMP_Disabled) <<
                              VREGAO0V8_CONFIG_CFGSTATIC_LPICMP_Pos)     |
                              ((cfg.long_refresh ?
                               VREGAO0V8_CONFIG_CFGSTATIC_LONGREFRESH_Enabled :
                               VREGAO0V8_CONFIG_CFGSTATIC_LONGREFRESH_Disabled) <<
                              VREGAO0V8_CONFIG_CFGSTATIC_LONGREFRESH_Pos)   |
                              ((cfg.disable_bpdet ?
                               VREGAO0V8_CONFIG_CFGSTATIC_DISABLEBPDET_Enabled :
                               VREGAO0V8_CONFIG_CFGSTATIC_DISABLEBPDET_Disabled) <<
                              VREGAO0V8_CONFIG_CFGSTATIC_DISABLEBPDET_Pos)        |
                              ((cfg.trim_ibpp0 ? 1 : 0) <<
                              VREGAO0V8_CONFIG_CFGSTATIC_TRIMIBPP0_Pos);
}

NRF_STATIC_INLINE nrf_vregao0v8_config_static_t
nrf_vregao0v8_config_static_get(NRF_VREGAO0V8_Type const * p_reg)
{
    nrf_vregao0v8_config_static_t cfg;
    uint32_t reg = p_reg->CONFIG.CFGSTATIC;

    cfg.double_bias   = (reg & VREGAO0V8_CONFIG_CFGSTATIC_DOUBLEBIAS_Msk) != 0;
    cfg.lpicmp        = (reg & VREGAO0V8_CONFIG_CFGSTATIC_LPICMP_Msk) != 0;
    cfg.long_refresh  = (reg & VREGAO0V8_CONFIG_CFGSTATIC_LONGREFRESH_Msk) != 0;
    cfg.disable_bpdet = (reg & VREGAO0V8_CONFIG_CFGSTATIC_DISABLEBPDET_Msk) != 0;
    cfg.trim_ibpp0    = (reg & VREGAO0V8_CONFIG_CFGSTATIC_TRIMIBPP0_Msk) != 0;

    return cfg;
}

NRF_STATIC_INLINE
void nrf_vregao0v8_config_dynamic_set(NRF_VREGAO0V8_Type *           p_reg,
                                      nrf_vregao0v8_config_dynamic_t cfg)
{
    p_reg->CONFIG.CFGDYNAMIC = (cfg.ilim_low ?
                                VREGAO0V8_CONFIG_CFGDYNAMIC_ILIMLOW_Enabled :
                                VREGAO0V8_CONFIG_CFGDYNAMIC_ILIMLOW_Disabled) <<
                                VREGAO0V8_CONFIG_CFGDYNAMIC_ILIMLOW_Pos;
}

NRF_STATIC_INLINE nrf_vregao0v8_config_dynamic_t
nrf_vregao0v8_config_dynamic_get(NRF_VREGAO0V8_Type const * p_reg)
{
    nrf_vregao0v8_config_dynamic_t cfg;

    cfg.ilim_low = (p_reg->CONFIG.CFGDYNAMIC & VREGAO0V8_CONFIG_CFGDYNAMIC_ILIMLOW_Msk) != 0;

    return cfg;
}

NRF_STATIC_INLINE void nrf_vregao0v8_trim_iref_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.IREF = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_iref_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.IREF;
}

NRF_STATIC_INLINE void nrf_vregao0v8_trim_highpower_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.HIGHPOWER = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_highpower_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.HIGHPOWER;
}

NRF_STATIC_INLINE void nrf_vregao0v8_trim_lowpower_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.LOWPOWER = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_lowpower_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.LOWPOWER;
}

NRF_STATIC_INLINE void nrf_vregao0v8_trim_ultralowpower_set(NRF_VREGAO0V8_Type *     p_reg,
                                                            nrf_vregao0v8_trim_ulp_t val)
{
    p_reg->TRIM.ULTRALOWPOWER = (uint32_t)val;
}

NRF_STATIC_INLINE
nrf_vregao0v8_trim_ulp_t nrf_vregao0v8_trim_ultralowpower_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return  (nrf_vregao0v8_trim_ulp_t)p_reg->TRIM.ULTRALOWPOWER;
}

NRF_STATIC_INLINE void nrf_vregao0v8_trim_bpdet_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.BPDET = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao0v8_trim_bpdef_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return p_reg->TRIM.BPDET;
}

NRF_STATIC_INLINE void nrf_vregao0v8_mirror_lock_set(NRF_VREGAO0V8_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VREGAO0V8_MIRROR_LOCK_Enabled : VREGAO0V8_MIRROR_LOCK_Disabled) <<
                    VREGAO0V8_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vregao0v8_vout_set(NRF_VREGAO0V8_Type * p_reg, uint8_t val)
{
    p_reg->VOUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregao0v8_vout_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return p_reg->VOUT;
}

NRF_STATIC_INLINE void nrf_vregao0v8_mode_set(NRF_VREGAO0V8_Type * p_reg,
                                              nrf_vregao0v8_mode_t mode)
{
    p_reg->MODE = mode << VREGAO0V8_MODE_MODE_Pos;
}

NRF_STATIC_INLINE nrf_vregao0v8_mode_t nrf_vregao0v8_mode_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return (nrf_vregao0v8_mode_t)((p_reg->MODE & VREGAO0V8_MODE_MODE_Msk) >>
                                  VREGAO0V8_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_vregao0v8_ithreshold_set(NRF_VREGAO0V8_Type * p_reg,
                                                    uint8_t              thr)
{
    p_reg->ITHRESHOLD = thr << VREGAO0V8_ITHRESHOLD_VAL_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_vregao0v8_ithreshold_get(NRF_VREGAO0V8_Type const * p_reg)
{
    return p_reg->ITHRESHOLD;
}

NRF_STATIC_INLINE void nrf_vregao0v8_override_set(NRF_VREGAO0V8_Type *          p_reg,
                                                  nrf_vregao0v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val)
{
    switch (signal)
    {
        case NRF_VREGAO0V8_ANALOG_SIGNAL_PWRUP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                        VREGAO0V8_OVERRIDE_PWRUP_EN_Enabled :
                                        VREGAO0V8_OVERRIDE_PWRUP_EN_Disabled) <<
                                       VREGAO0V8_OVERRIDE_PWRUP_EN_Pos) |
                                      val << VREGAO0V8_OVERRIDE_PWRUP_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                         VREGAO0V8_OVERRIDE_RETAIN_EN_Enabled :
                                         VREGAO0V8_OVERRIDE_RETAIN_EN_Disabled) <<
                                         VREGAO0V8_OVERRIDE_RETAIN_EN_Pos) |
                                         val << VREGAO0V8_OVERRIDE_RETAIN_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_MODE_LP:
              p_reg->OVERRIDE.MODELP = ((enable ?
                                         VREGAO0V8_OVERRIDE_MODELP_EN_Enabled :
                                         VREGAO0V8_OVERRIDE_MODELP_EN_Disabled) <<
                                        VREGAO0V8_OVERRIDE_MODELP_EN_Pos) |
                                       val << VREGAO0V8_OVERRIDE_MODELP_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_MODE_ULPR:
              p_reg->OVERRIDE.MODEULPR = ((enable ?
                                           VREGAO0V8_OVERRIDE_MODEULPR_EN_Enabled :
                                           VREGAO0V8_OVERRIDE_MODEULPR_EN_Disabled) <<
                                          VREGAO0V8_OVERRIDE_MODEULPR_EN_Pos) |
                                         val << VREGAO0V8_OVERRIDE_MODEULPR_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_REQ_BYPASS:
              p_reg->OVERRIDE.REQBYPASS = ((enable ?
                                            VREGAO0V8_OVERRIDE_REQBYPASS_EN_Enabled :
                                            VREGAO0V8_OVERRIDE_REQBYPASS_EN_Disabled) <<
                                           VREGAO0V8_OVERRIDE_REQBYPASS_EN_Pos) |
                                          val << VREGAO0V8_OVERRIDE_REQBYPASS_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_READY:
              p_reg->OVERRIDE.READY = ((enable ?
                                        VREGAO0V8_OVERRIDE_READY_EN_Enabled :
                                        VREGAO0V8_OVERRIDE_READY_EN_Disabled) <<
                                       VREGAO0V8_OVERRIDE_READY_EN_Pos) |
                                      val << VREGAO0V8_OVERRIDE_READY_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_SETTLED:
              p_reg->OVERRIDE.SETTLED = ((enable ?
                                          VREGAO0V8_OVERRIDE_SETTLED_EN_Enabled :
                                          VREGAO0V8_OVERRIDE_SETTLED_EN_Disabled) <<
                                         VREGAO0V8_OVERRIDE_SETTLED_EN_Pos) |
                                        val << VREGAO0V8_OVERRIDE_SETTLED_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_BPREADY:
              p_reg->OVERRIDE.BPREADY = ((enable ?
                                          VREGAO0V8_OVERRIDE_BPREADY_EN_Enabled :
                                          VREGAO0V8_OVERRIDE_BPREADY_EN_Disabled) <<
                                         VREGAO0V8_OVERRIDE_BPREADY_EN_Pos) |
                                        val << VREGAO0V8_OVERRIDE_BPREADY_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_IOUT_CMP_HP:
              p_reg->OVERRIDE.IOUTCMPHP = ((enable ?
                                            VREGAO0V8_OVERRIDE_IOUTCMPHP_EN_Enabled :
                                            VREGAO0V8_OVERRIDE_IOUTCMPHP_EN_Disabled) <<
                                           VREGAO0V8_OVERRIDE_IOUTCMPHP_EN_Pos) |
                                          val << VREGAO0V8_OVERRIDE_IOUTCMPHP_VAL_Pos;
              break;
        case NRF_VREGAO0V8_ANALOG_SIGNAL_IOUT_CMP_LP:
              p_reg->OVERRIDE.IOUTCMPLP = ((enable ?
                                            VREGAO0V8_OVERRIDE_IOUTCMPLP_EN_Enabled :
                                            VREGAO0V8_OVERRIDE_IOUTCMPLP_EN_Disabled) <<
                                           VREGAO0V8_OVERRIDE_IOUTCMPLP_EN_Pos) |
                                          val << VREGAO0V8_OVERRIDE_IOUTCMPLP_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_atb0_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VREGAO0V8_DFT_ATB0CONFIG_EN_Enabled :
                              VREGAO0V8_DFT_ATB0CONFIG_EN_Disabled) <<
                             VREGAO0V8_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VREGAO0V8_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_atb1_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VREGAO0V8_DFT_ATB1CONFIG_EN_Enabled :
                              VREGAO0V8_DFT_ATB1CONFIG_EN_Disabled) <<
                             VREGAO0V8_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VREGAO0V8_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb0_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VREGAO0V8_DFT_DTB0CONFIG_EN_Enabled :
                              VREGAO0V8_DFT_DTB0CONFIG_EN_Disabled) <<
                             VREGAO0V8_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VREGAO0V8_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb1_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VREGAO0V8_DFT_DTB1CONFIG_EN_Enabled :
                              VREGAO0V8_DFT_DTB1CONFIG_EN_Disabled) <<
                             VREGAO0V8_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VREGAO0V8_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb2_config_set(NRF_VREGAO0V8_Type *            p_reg,
                                                         nrf_vregao0v8_dft_dtb2_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB2CONFIG = ((enable ?
                              VREGAO0V8_DFT_DTB2CONFIG_EN_Enabled :
                              VREGAO0V8_DFT_DTB2CONFIG_EN_Disabled) <<
                             VREGAO0V8_DFT_DTB2CONFIG_EN_Pos) |
                            (selmux << VREGAO0V8_DFT_DTB2CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_dtb3_config_set(NRF_VREGAO0V8_Type * p_reg,
                                                         bool                 enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             VREGAO0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             VREGAO0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            VREGAO0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_tcfg_config_set(NRF_VREGAO0V8_Type * p_reg,
                                                         nrf_vregao0v8_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.pwrup_ibpsr ?
                        VREGAO0V8_DFT_TCFG_PWRUPIBPSR_Enabled :
                        VREGAO0V8_DFT_TCFG_PWRUPIBPSR_Disabled) <<
                       VREGAO0V8_DFT_TCFG_PWRUPIBPSR_Pos)   |
                      ((tcfg.pwrup_hp_core ?
                        VREGAO0V8_DFT_TCFG_PWRUPHPCORE_Enabled :
                        VREGAO0V8_DFT_TCFG_PWRUPHPCORE_Disabled) <<
                       VREGAO0V8_DFT_TCFG_PWRUPHPCORE_Pos)  |
                      ((tcfg.pwrup_ibpp ?
                        VREGAO0V8_DFT_TCFG_PWRUPIBPP_Enabled :
                        VREGAO0V8_DFT_TCFG_PWRUPIBPP_Disabled) <<
                       VREGAO0V8_DFT_TCFG_PWRUPIBPP_Pos)    |
                      ((tcfg.pwrup_lp_core ?
                        VREGAO0V8_DFT_TCFG_PWRUPLPCORE_Enabled :
                        VREGAO0V8_DFT_TCFG_PWRUPLPCORE_Disabled) <<
                       VREGAO0V8_DFT_TCFG_PWRUPLPCORE_Pos)  |
                      ((tcfg.en_bypass ?
                        VREGAO0V8_DFT_TCFG_ENBYPASS_Enabled :
                        VREGAO0V8_DFT_TCFG_ENBYPASS_Disabled) <<
                       VREGAO0V8_DFT_TCFG_ENBYPASS_Pos)     |
                      ((tcfg.pwrup_bpdet ?
                        VREGAO0V8_DFT_TCFG_PWRUPBPDET_Enabled :
                        VREGAO0V8_DFT_TCFG_PWRUPBPDET_Disabled) <<
                       VREGAO0V8_DFT_TCFG_PWRUPBPDET_Pos)   |
                      ((tcfg.pwrup_vout_cmp ?
                        VREGAO0V8_DFT_TCFG_PWRUPVOUTCMP_Enabled :
                        VREGAO0V8_DFT_TCFG_PWRUPVOUTCMP_Disabled) <<
                       VREGAO0V8_DFT_TCFG_PWRUPVOUTCMP_Pos) |
                      ((tcfg.reset_dig ?
                        VREGAO0V8_DFT_TCFG_RESETDIG_Enabled :
                        VREGAO0V8_DFT_TCFG_RESETDIG_Disabled) <<
                       VREGAO0V8_DFT_TCFG_RESETDIG_Pos);
}

NRF_STATIC_INLINE void nrf_vregao0v8_dft_cal_set(NRF_VREGAO0V8_Type * p_reg,
                                                 bool                 enable)
{
    p_reg->DFT.CALEN = (enable ?
                        VREGAO0V8_DFT_CALEN_CALEN_ATCMPOn : VREGAO0V8_DFT_CALEN_CALEN_ATCMPOff) <<
                       VREGAO0V8_DFT_CALEN_CALEN_Pos;
}

NRF_STATIC_INLINE bool nrf_vregao0v8_dft_calcmp_check(NRF_VREGAO0V8_Type const * p_reg)
{
    return ((p_reg->DFT.CALCMP & VREGAO0V8_DFT_CALCMP_CALCMP_Msk) >>
            VREGAO0V8_DFT_CALCMP_CALCMP_Pos) ? true : false;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREGAO0V8_H__
