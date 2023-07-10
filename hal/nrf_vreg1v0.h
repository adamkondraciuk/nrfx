/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREG1V0_H__
#define NRF_VREG1V0_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vreg1v0_hal 1.0V Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the 1.0V Voltage Regulator.
 */

#if defined(VREG1V0_DFT_ATB0CONFIG_SELMUX_Ibpsr4u) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the internal 4uA current reference for Analog Test Bus 0 multiplexer is available. */
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_4UA 1
#else
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_4UA 0
#endif

#if defined(VREG1V0_DFT_ATB0CONFIG_SELMUX_Ibpp50nIbpsr4u) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the sum of both internal current reference (50nA and 4uA) for Analog Test Bus 0 multiplexer is available. */
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_SUM 1
#else
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_SUM 0
#endif

#if defined(VREG1V0_DFT_ATB0CONFIG_SELMUX_ibpsr8u) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the internal 8uA current reference for Analog Test Bus 0 multiplexer is available. */
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_8UA 1
#else
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_8UA 0
#endif

#if defined(VREG1V0_DFT_ATB0CONFIG_SELMUX_VSS) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the VSS voltage reference for Analog Test Bus 0 multiplexer is available. */
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_VSS 1
#else
#define NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_VSS 0
#endif

#if defined(VREG1V0_DFT_ATB1CONFIG_SELMUX_VSS) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether setting the VSS voltage reference for Analog Test Bus 1 multiplexer is available. */
#define NRF_VREG1V0_HAS_DFT_ATB1_SELMUX_VSS 1
#else
#define NRF_VREG1V0_HAS_DFT_ATB1_SELMUX_VSS 0
#endif

#if defined(VREG1V0_DFT_ATB1CONFIG_SELMUX_None) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether none selecting multiplexer for Analog Test Bus 1 is available. */
#define NRF_VREG1V0_HAS_DFT_ATB1_SELMUX_NONE 1
#else
#define NRF_VREG1V0_HAS_DFT_ATB1_SELMUX_NONE 0
#endif

/** @brief VREG1V0 events. */
typedef enum
{
    NRF_VREG1V0_EVENT_READY   = offsetof(NRF_VREG1V0_Type, EVENTS_READY),   /**< Power up done. */
    NRF_VREG1V0_EVENT_SETTLED = offsetof(NRF_VREG1V0_Type, EVENTS_SETTLED), /**< Settled flag for MODE handshake. */
    NRF_VREG1V0_EVENT_IOUTCMP = offsetof(NRF_VREG1V0_Type, EVENTS_IOUTCMP), /**< Analog current comparator. */
    NRF_VREG1V0_EVENT_LP2HP   = offsetof(NRF_VREG1V0_Type, EVENTS_LP2HP),   /**< Current consumption above threshold. */
    NRF_VREG1V0_EVENT_HP2LP   = offsetof(NRF_VREG1V0_Type, EVENTS_HP2LP),   /**< Current consumption below threshold. */
} nrf_vreg1v0_event_t;

/** @brief VREG1V0 interrupts. */
typedef enum
{
    NRF_VREG1V0_INT_READY_MASK   = VREG1V0_INTEN_READY_Msk,   /**< Interrupt on READY. */
    NRF_VREG1V0_INT_SETTLED_MASK = VREG1V0_INTEN_SETTLED_Msk, /**< Interrupt on SETTLED. */
    NRF_VREG1V0_INT_IOUTCMP_MASK = VREG1V0_INTEN_IOUTCMP_Msk, /**< Interrupt on IOUTCMP. */
    NRF_VREG1V0_INT_LP2HP_MASK   = VREG1V0_INTEN_LP2HP_Msk,   /**< Interrupt on LP2HP. */
    NRF_VREG1V0_INT_HP2LP_MASK   = VREG1V0_INTEN_HP2LP_Msk,   /**< Interrupt on HP2LP. */
} nrf_vreg1v0_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VREG1V0_STATUS_HIGH_POWER  = VREG1V0_STATUS_MODE_HighPower,            /**< High power mode. */
    NRF_VREG1V0_STATUS_LOW_POWER   = VREG1V0_STATUS_MODE_LowPower,             /**< Low power mode. */
    NRF_VREG1V0_STATUS_ULP_REFRESH = VREG1V0_STATUS_MODE_UltraLowPowerRefresh, /**< ULP refresh mode. */
} nrf_vreg1v0_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VREG1V0_STATUSANA_READY_MASK   = VREG1V0_STATUSANA_READY_Msk,   /**< Current value of READY signal. */
    NRF_VREG1V0_STATUSANA_SETTLED_MASK = VREG1V0_STATUSANA_SETTLED_Msk, /**< Current value of SETTLED signal. */
    NRF_VREG1V0_STATUSANA_IOUTCMP_MASK = VREG1V0_STATUSANA_IOUTCMP_Msk, /**< Current value of IOUTCMP signal.. */
} nrf_vreg1v0_statusana_mask_t;

/** @brief Fields for static configuration structure. */
typedef struct
{
    bool ulpr_refresh_comp_dis; /**< Disable the ULPR refresh comparator. */
    bool vref_timer_div2;       /**< Divide the VREF timer by 2. */
    bool ulpr_refresh_div2;     /**< Divide the ULPR refresh timer by 2. */
    bool curr_cmp_dis;          /**< Disable the current comparator. */
    bool lp_double_bias;        /**< Double the LP core bias current. */
} nrf_vreg1v0_config_cfgstatic_t;

/** @brief Dynamic configuration. Current limit configuration for the voltage regulator. */
typedef enum
{
    NRF_VREG1V0_CFGDYNAMIC_SOFTSTART_AUTO      = VREG1V0_CONFIG_CFGDYNAMIC_SOFTSTART_Auto,     /**< Automatic. */
    NRF_VREG1V0_CFGDYNAMIC_SOFTSTART_NORMAL    = VREG1V0_CONFIG_CFGDYNAMIC_SOFTSTART_Normal,   /**< Normal. Max 100mA.*/
    NRF_VREG1V0_CFGDYNAMIC_SOFTSTART_ILIM_HIGH = VREG1V0_CONFIG_CFGDYNAMIC_SOFTSTART_IlimHigh, /**< Max 60mA. */
    NRF_VREG1V0_CFGDYNAMIC_SOFTSTART_ILIM_MID  = VREG1V0_CONFIG_CFGDYNAMIC_SOFTSTART_IlimMid,  /**< Max 30mA. */
    NRF_VREG1V0_CFGDYNAMIC_SOFTSTART_ILIM_LOW  = VREG1V0_CONFIG_CFGDYNAMIC_SOFTSTART_IlimLow,  /**< Max 10mA. */
} nrf_vreg1v0_config_softstart_t;

/** @brief Dynamic configuration structure. */
typedef struct
{
    nrf_vreg1v0_config_softstart_t softstart; /**< Current limit configuration. */
} nrf_vreg1v0_config_cfgdynamic_t;

/** @brief Enum for selecting voltage output programming. */
typedef enum
{
    NRF_VREG1V0_VOUT_HP_NOMINAL, /**< Nominal high power mode. */
    NRF_VREG1V0_VOUT_HP_RADIO,   /**< Radio high power mode. */
    NRF_VREG1V0_VOUT_HP_HELPER,  /**< High power helper mode. */
    NRF_VREG1V0_VOUT_LP_NOMINAL, /**< Nominal low power mode. */
    NRF_VREG1V0_VOUT_LP_RADIO,   /**< Radio low power mode. */
    NRF_VREG1V0_VOUT_ULV         /**< ULV output. */
} nrf_vreg1v0_vout_t;

/** @brief Voltage regulator mode. */
typedef enum
{
    NRF_VREG1V0_MODE_AUTO        = VREG1V0_MODE_MODE_Auto,                /**< Automatically handled by the peripheral. */
    NRF_VREG1V0_MODE_HIGH_POWER  = VREG1V0_MODE_MODE_HighPower,           /**< High power mode. */
    NRF_VREG1V0_MODE_LOW_POWER   = VREG1V0_MODE_MODE_LowPower,            /**< Low power mode. */
    NRF_VREG1V0_MODE_ULP_REFRESH = VREG1V0_MODE_MODE_UltraLowPowerRefresh /**< Ultra-low power refresh mode. */
} nrf_vreg1v0_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VREG1V0_ANALOG_SIGNAL_PWRUP,     /**< Override PWRUP signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_RETAIN,    /**< Override RETAIN signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_MODE_LP,   /**< Override MODE LP signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_MODE_ULPR, /**< Override MODE ULPR signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_CFG,       /**< Override CFG signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_VOLT_HP,   /**< Override VOLT HP signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_VOLT_LP,   /**< Override VOLT LP signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_READY,     /**< Override READY signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_SETTLED,   /**< Override SETTLED signal. */
    NRF_VREG1V0_ANALOG_SIGNAL_IOUT_CMP   /**< Override IOUTCMP signal. */
} nrf_vreg1v0_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VREG1V0_DFT_ATB0_SELMUX_EXT_VREF  = VREG1V0_DFT_ATB0CONFIG_SELMUX_ExtVref,        /**< Negative input of calibration comparator. */
    NRF_VREG1V0_DFT_ATB0_SELMUX_IBPP_50NA = VREG1V0_DFT_ATB0CONFIG_SELMUX_Ibpp50n,        /**< Internal 50nA current reference. */
#if NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_4UA
    NRF_VREG1V0_DFT_ATB0_SELMUX_IBPSR_4UA = VREG1V0_DFT_ATB0CONFIG_SELMUX_Ibpsr4u,        /**< Internal 4uA current reference. */
#endif
#if NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_SUM
    NRF_VREG1V0_DFT_ATB0_SELMUX_SUM       = VREG1V0_DFT_ATB0CONFIG_SELMUX_Ibpp50nIbpsr4u, /**< Sum both internal current reference. */
#endif
#if NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_IBPSR_8UA
    NRF_VREG1V0_DFT_ATB0_SELMUX_IBPSR_8UA = VREG1V0_DFT_ATB0CONFIG_SELMUX_ibpsr8u,        /**< Internal 8uA current reference. */
#endif
#if NRF_VREG1V0_HAS_DFT_ATB0_SELMUX_VSS
    NRF_VREG1V0_DFT_ATB0_SELMUX_VSS       = VREG1V0_DFT_ATB0CONFIG_SELMUX_VSS,            /**< VSS. */
#endif
} nrf_vreg1v0_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
#if NRF_VREG1V0_HAS_DFT_ATB1_SELMUX_VSS
    NRF_VREG1V0_DFT_ATB1_SELMUX_VSS         = VREG1V0_DFT_ATB1CONFIG_SELMUX_VSS,            /**< VSS. */
#endif
#if NRF_VREG1V0_HAS_DFT_ATB1_SELMUX_NONE
    NRF_VREG1V0_DFT_ATB1_SELMUX_NONE        = VREG1V0_DFT_ATB1CONFIG_SELMUX_None,           /**< No multiplexer is selected. */
#endif
    NRF_VREG1V0_DFT_ATB1_SELMUX_BUF_HP_VREF = VREG1V0_DFT_ATB1CONFIG_SELMUX_BufferedHPvref, /**< Buffered HP vref. */
    NRF_VREG1V0_DFT_ATB1_SELMUX_VDD_1V0     = VREG1V0_DFT_ATB1CONFIG_SELMUX_VDD1V0,         /**< VDD_1V0. */
    NRF_VREG1V0_DFT_ATB1_SELMUX_IBPSR_4UA   = VREG1V0_DFT_ATB1CONFIG_SELMUX_Ibpsr4u,        /**< Internal 4uA current reference, through 225kOhm resistor. */
} nrf_vreg1v0_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VREG1V0_DFT_DTB0_SELMUX_NONE           = VREG1V0_DFT_DTB0CONFIG_SELMUX_None,         /**< None selected, logic 0. */
    NRF_VREG1V0_DFT_DTB0_SELMUX_REFRESH_ULPR   = VREG1V0_DFT_DTB0CONFIG_SELMUX_RefreshULPR,  /**< ULPR refresh pulse. */
    NRF_VREG1V0_DFT_DTB0_SELMUX_SETTLED_IBPSR  = VREG1V0_DFT_DTB0CONFIG_SELMUX_SettledIBPSR, /**< BIAS_IBPSR_4U_DVT settled signal. */
    NRF_VREG1V0_DFT_DTB0_SELMUX_SPARE0         = VREG1V0_DFT_DTB0CONFIG_SELMUX_Spare0,       /**< None selected, logic 0. */
    NRF_VREG1V0_DFT_DTB0_SELMUX_CURR_CMP       = VREG1V0_DFT_DTB0CONFIG_SELMUX_CurrCmp,      /**< Current comparator out. */
    NRF_VREG1V0_DFT_DTB0_SELMUX_REQ_MODE_LP    = VREG1V0_DFT_DTB0CONFIG_SELMUX_ReqModeLP,    /**< LP mode request. */
    NRF_VREG1V0_DFT_DTB0_SELMUX_REQ_MODE_ULPR  = VREG1V0_DFT_DTB0CONFIG_SELMUX_RegModeULPR,  /**< ULPR mode request. */
    NRF_VREG1V0_DFT_DTB0_SELMUX_CAL_CMP        = VREG1V0_DFT_DTB0CONFIG_SELMUX_CalCmp,       /**< Calibration comparator out. */
} nrf_vreg1v0_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VREG1V0_DFT_DTB1_SELMUX_VREF_TIMER_ACK    = VREG1V0_DFT_DTB1CONFIG_SELMUX_VrefTimerAck,    /**< Vref timer acknowledge. */
    NRF_VREG1V0_DFT_DTB1_SELMUX_REFRESH_TIMER_ACK = VREG1V0_DFT_DTB1CONFIG_SELMUX_RefreshTimerAck, /**< ULPR refresh timer acknowledge. */
    NRF_VREG1V0_DFT_DTB1_SELMUX_READY_IBPSR       = VREG1V0_DFT_DTB1CONFIG_SELMUX_ReadyIBPSR,      /**< IBPSR ready signal. */
    NRF_VREG1V0_DFT_DTB1_SELMUX_READY_HP          = VREG1V0_DFT_DTB1CONFIG_SELMUX_ReadyHP,         /**< High power core ready signal. */
    NRF_VREG1V0_DFT_DTB1_SELMUX_READY_LP          = VREG1V0_DFT_DTB1CONFIG_SELMUX_ReadyLP,         /**< Low power core ready signal. */
    NRF_VREG1V0_DFT_DTB1_SELMUX_CANCEL_LPACK      = VREG1V0_DFT_DTB1CONFIG_SELMUX_CancelLPAck,     /**< Low power core cancel acknowledge signal. */
    NRF_VREG1V0_DFT_DTB1_SELMUX_READY_IBPP5NA     = VREG1V0_DFT_DTB1CONFIG_SELMUX_ReadyIBPP5n,     /**< BIAS_IBPP_5N ready signal. */
    NRF_VREG1V0_DFT_DTB1_SELMUX_SETTLED           = VREG1V0_DFT_DTB1CONFIG_SELMUX_Settled,         /**< Settled signal. */
} nrf_vreg1v0_dft_dtb1_selmux_t;

/** @brief Select multiplexer for DTB2. */
typedef enum
{
    NRF_VREG1V0_DFT_DTB2_SELMUX_VREF_TIMER_REQ    = VREG1V0_DFT_DTB2CONFIG_SELMUX_VrefTimerReq,    /**< Vref timer request */
    NRF_VREG1V0_DFT_DTB2_SELMUX_REFRESH_TIMER_REQ = VREG1V0_DFT_DTB2CONFIG_SELMUX_RefreshTimerReq, /**< ULPR refresh timer request. */
    NRF_VREG1V0_DFT_DTB2_SELMUX_PWRUP_IBPSR       = VREG1V0_DFT_DTB2CONFIG_SELMUX_PwrupIBPSR,      /**< IBPSR power up signal. */
    NRF_VREG1V0_DFT_DTB2_SELMUX_PWRUP_HP          = VREG1V0_DFT_DTB2CONFIG_SELMUX_PwrupHP,         /**< High power core power up signal. */
    NRF_VREG1V0_DFT_DTB2_SELMUX_PWRUP_LP          = VREG1V0_DFT_DTB2CONFIG_SELMUX_PwrupLP,         /**< Low power core power up signal. */
    NRF_VREG1V0_DFT_DTB2_SELMUX_CANCEL_LP         = VREG1V0_DFT_DTB2CONFIG_SELMUX_CancelLP,        /**< Low power core cancel signal. */
    NRF_VREG1V0_DFT_DTB2_SELMUX_PWRUP_IBPP5NA     = VREG1V0_DFT_DTB2CONFIG_SELMUX_PwrupIBPP5n,     /**< BIAS_IBPP_5N power up signal. */
    NRF_VREG1V0_DFT_DTB2_SELMUX_NONE              = VREG1V0_DFT_DTB2CONFIG_SELMUX_None,            /**< None selected, logic 0. */
} nrf_vreg1v0_dft_dtb2_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool vref_timer_req;   /**< Controls VREF_TIMER_REQ_SW_1V8. */
    bool rfr_end_criteria; /**< Controls RFR_END_CRITERIA_REQ_SW_1V8. */
    bool lp_cancel_req;    /**< Controls LDP_LP_CANCEL_REQ_AO_1V8. */
    bool mode_lp_req;      /**< Controls MODE_LP_REQ_SW_1V8. */
    bool mode_ulpr_req;    /**< Controls MODE_ULPR_REQ_SW_1V8. */
    bool pwrup_ibpp ;      /**< Controls PWRUP_IBPP_BIAS_SW_1V8. */
    bool pwrup_lp;         /**< Controls PWRUP_LDO_LP_AO_1V8. */
    bool pwrup_hp;         /**< Controls PWRUP_LDO_HP_AO_1V8. */
    bool pwrup_ibpsr;      /**< Controls PWRUP_IBPSR_BIAS_SW_1V8. */
    bool tcfg_enable;      /**< Enable TCFG control. */
    bool refresh_cmp_clk;  /**< Controls clock input of refresh comparator. */
} nrf_vreg1v0_tcfg_t;

/**
 * @brief Function for clearing the specified VREG1V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_event_clear(NRF_VREG1V0_Type *  p_reg,
                                               nrf_vreg1v0_event_t event);

/**
 * @brief Function for retrieving the state of the VREG1V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vreg1v0_event_check(NRF_VREG1V0_Type const * p_reg,
                                               nrf_vreg1v0_event_t      event);
/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vreg1v0_event_address_get(NRF_VREG1V0_Type const * p_reg,
                                                         nrf_vreg1v0_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled. Use @ref nrf_vreg1v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_int_enable(NRF_VREG1V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled. Use @ref nrf_vreg1v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_int_disable(NRF_VREG1V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked. Use @ref nrf_vreg1v0_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vreg1v0_int_enable_check(NRF_VREG1V0_Type const * p_reg,
                                                        uint32_t                 mask);
/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_vreg1v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vreg1v0_int_pending_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for getting VREG1V0 status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_vreg1v0_status_t nrf_vreg1v0_status_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for getting VREG1V0 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vreg1v0_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vreg1v0_statusana_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for setting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] cfgstatic Static configuration.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_config_cfgstatic_set(NRF_VREG1V0_Type *             p_reg,
                                                        nrf_vreg1v0_config_cfgstatic_t cfgstatic);

/**
 * @brief Function for getting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Static configuration.
 */
NRF_STATIC_INLINE
nrf_vreg1v0_config_cfgstatic_t nrf_vreg1v0_config_cfgstatic_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for setting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cfgdynamic Dynamic configuration.
 */
NRF_STATIC_INLINE
void nrf_vreg1v0_config_cfgdynamic_set(NRF_VREG1V0_Type *              p_reg,
                                       nrf_vreg1v0_config_cfgdynamic_t cfgdynamic);

/**
 * @brief Function for getting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Dynamic configuration.
 */
NRF_STATIC_INLINE
nrf_vreg1v0_config_cfgdynamic_t nrf_vreg1v0_config_cfgdynamic_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for setting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Current reference trimming value. The value is 2's complement from -48% to 61%.
 *                  Default 7.2%, steps are nonlinear.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_trim_iref_set(NRF_VREG1V0_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current reference trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_iref_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for setting high power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of
 *                  0mV +/- 5.9mV steps.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_trim_highpower_set(NRF_VREG1V0_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting high power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_highpower_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for setting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of
 *                  0mV +/- 5.9mV steps.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_trim_lowpower_set(NRF_VREG1V0_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_lowpower_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for setting ULPR mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of
 *                  0mV +/- 11.8mV steps.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_trim_ulpr_set(NRF_VREG1V0_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting ULPR mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_ulpr_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_mirror_lock_set(NRF_VREG1V0_Type * p_reg, bool lock);

/**
 * @brief Function for setting nominal high power mode output voltage
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Output voltage target.
 * @param[in] val   Output voltage value. The value is 0.57V + 0.01V steps. Voltages
 *                  below 0.6V (0x03) not to be used.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_vout_set(NRF_VREG1V0_Type * p_reg,
                                            nrf_vreg1v0_vout_t vout,
                                            uint8_t            val);

/**
 * @brief Function for getting nominal high power mode output voltage
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Output voltage target.
 *
 * @return Output voltage value.
 */
NRF_STATIC_INLINE uint8_t nrf_vreg1v0_vout_get(NRF_VREG1V0_Type const * p_reg,
                                               nrf_vreg1v0_vout_t       vout);

/**
 * @brief Function for setting voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_mode_set(NRF_VREG1V0_Type * p_reg,
                                            nrf_vreg1v0_mode_t mode);

/**
 * @brief Function for getting voltage regulator mode.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vreg1v0_mode_t nrf_vreg1v0_mode_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for setting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] thr   Compare value to match (PCRM format).
 */
NRF_STATIC_INLINE void nrf_vreg1v0_ithreshold_set(NRF_VREG1V0_Type * p_reg,
                                                  uint8_t            thr);

/**
 * @brief Function for getting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current threshold value.
 */
NRF_STATIC_INLINE uint8_t nrf_vreg1v0_ithreshold_get(NRF_VREG1V0_Type const * p_reg);

/**
 * @brief Function for override signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_override_set(NRF_VREG1V0_Type *          p_reg,
                                                nrf_vreg1v0_analog_signal_t signal,
                                                bool                        enable,
                                                uint8_t                     val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_atb0_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_atb0_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_atb1_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_atb1_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb0_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_dtb0_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb1_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_dtb1_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Digital Test Bus 2 (DTB2).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb2_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_dtb2_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb3_config_set(NRF_VREG1V0_Type * p_reg,
                                                       bool               enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_tcfg_config_set(NRF_VREG1V0_Type * p_reg,
                                                       nrf_vreg1v0_tcfg_t tcfg);

/**
 * @brief Function for enabling or disabling calibration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the calibration is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vreg1v0_dft_cal_set(NRF_VREG1V0_Type * p_reg,
                                               bool               enable);

/**
 * @brief Function for checking calibration compare.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Calibration compare.
 */
NRF_STATIC_INLINE uint32_t nrf_vreg1v0_dft_calcmp_check(NRF_VREG1V0_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vreg1v0_event_clear(NRF_VREG1V0_Type *  p_reg,
                                               nrf_vreg1v0_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vreg1v0_event_check(NRF_VREG1V0_Type const * p_reg,
                                               nrf_vreg1v0_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_vreg1v0_event_address_get(NRF_VREG1V0_Type const * p_reg,
                                                         nrf_vreg1v0_event_t      event)
{
        return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vreg1v0_int_enable(NRF_VREG1V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vreg1v0_int_disable(NRF_VREG1V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vreg1v0_int_enable_check(NRF_VREG1V0_Type const * p_reg,
                                                        uint32_t                 mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vreg1v0_int_pending_get(NRF_VREG1V0_Type const * p_reg)
{
        return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_vreg1v0_status_t nrf_vreg1v0_status_get(NRF_VREG1V0_Type const * p_reg)
{
    return (nrf_vreg1v0_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_vreg1v0_statusana_get(NRF_VREG1V0_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_vreg1v0_config_cfgstatic_set(NRF_VREG1V0_Type *             p_reg,
                                                        nrf_vreg1v0_config_cfgstatic_t cfgstatic)
{
    p_reg->CONFIG.CFGSTATIC = ((cfgstatic.ulpr_refresh_comp_dis ?
                               VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Enabled :
                               VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Disabled) <<
                              VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Pos) |
                              ((cfgstatic.vref_timer_div2 ?
                               VREG1V0_CONFIG_CFGSTATIC_VREFTIMERDIV2_Enabled :
                               VREG1V0_CONFIG_CFGSTATIC_VREFTIMERDIV2_Disabled) <<
                              VREG1V0_CONFIG_CFGSTATIC_VREFTIMERDIV2_Pos)     |
                              ((cfgstatic.ulpr_refresh_div2 ?
                               VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Enabled :
                               VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Disabled) <<
                              VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Pos)   |
                              ((cfgstatic.curr_cmp_dis ?
                               VREG1V0_CONFIG_CFGSTATIC_CURRCMPDIS_Enabled :
                               VREG1V0_CONFIG_CFGSTATIC_CURRCMPDIS_Disabled) <<
                              VREG1V0_CONFIG_CFGSTATIC_CURRCMPDIS_Pos)        |
                              ((cfgstatic.lp_double_bias ?
                               VREG1V0_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Enabled :
                               VREG1V0_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Disabled) <<
                              VREG1V0_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Pos);
}

NRF_STATIC_INLINE
nrf_vreg1v0_config_cfgstatic_t nrf_vreg1v0_config_cfgstatic_get(NRF_VREG1V0_Type const * p_reg)
{
    nrf_vreg1v0_config_cfgstatic_t cfg;
    uint32_t reg = p_reg->CONFIG.CFGSTATIC;

    cfg.ulpr_refresh_comp_dis = (reg & VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Msk) != 0;
    cfg.vref_timer_div2       = (reg & VREG1V0_CONFIG_CFGSTATIC_VREFTIMERDIV2_Msk) != 0;
    cfg.ulpr_refresh_div2     = (reg & VREG1V0_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Msk) != 0;
    cfg.curr_cmp_dis          = (reg & VREG1V0_CONFIG_CFGSTATIC_CURRCMPDIS_Msk) != 0;
    cfg.lp_double_bias        = (reg & VREG1V0_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Msk) != 0;

    return cfg;
}

NRF_STATIC_INLINE void nrf_vreg1v0_config_cfgdynamic_set(NRF_VREG1V0_Type *              p_reg,
                                                         nrf_vreg1v0_config_cfgdynamic_t cfgdynamic)
{
    p_reg->CONFIG.CFGDYNAMIC =
        (uint32_t)(cfgdynamic.softstart << VREG1V0_CONFIG_CFGDYNAMIC_SOFTSTART_Pos);
}

NRF_STATIC_INLINE
nrf_vreg1v0_config_cfgdynamic_t nrf_vreg1v0_config_cfgdynamic_get(NRF_VREG1V0_Type const * p_reg)
{
    nrf_vreg1v0_config_cfgdynamic_t cfg;

    cfg.softstart = p_reg->CONFIG.CFGDYNAMIC >> VREG1V0_CONFIG_CFGDYNAMIC_SOFTSTART_Pos;

    return cfg;
}

NRF_STATIC_INLINE void nrf_vreg1v0_trim_iref_set(NRF_VREG1V0_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.IREF = val;
}

NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_iref_get(NRF_VREG1V0_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.IREF;
}

NRF_STATIC_INLINE void nrf_vreg1v0_trim_highpower_set(NRF_VREG1V0_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.HIGHPOWER = val;
}

NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_highpower_get(NRF_VREG1V0_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.HIGHPOWER;
}

NRF_STATIC_INLINE void nrf_vreg1v0_trim_lowpower_set(NRF_VREG1V0_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.LOWPOWER = val;
}

NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_lowpower_get(NRF_VREG1V0_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.LOWPOWER;
}

NRF_STATIC_INLINE void nrf_vreg1v0_trim_ulpr_set(NRF_VREG1V0_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.ULPR = val;
}

NRF_STATIC_INLINE uint8_t nrf_vreg1v0_trim_ulpr_get(NRF_VREG1V0_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.ULPR;
}

NRF_STATIC_INLINE void nrf_vreg1v0_mirror_lock_set(NRF_VREG1V0_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VREG1V0_MIRROR_LOCK_Enabled : VREG1V0_MIRROR_LOCK_Disabled) <<
                    VREG1V0_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vreg1v0_vout_set(NRF_VREG1V0_Type * p_reg,
                                            nrf_vreg1v0_vout_t vout,
                                            uint8_t            val)
{
    switch (vout)
    {
        case NRF_VREG1V0_VOUT_HP_NOMINAL:
            p_reg->VOUTHPNOMINAL = val;
            break;
        case NRF_VREG1V0_VOUT_HP_RADIO:
            p_reg->VOUTHPRADIO = val;
            break;
        case NRF_VREG1V0_VOUT_HP_HELPER:
            p_reg->VOUTHPHELPER = val;
            break;
        case NRF_VREG1V0_VOUT_LP_NOMINAL:
            p_reg->VOUTLPNOMINAL = val;
            break;
        case NRF_VREG1V0_VOUT_LP_RADIO:
            p_reg->VOUTLPRADIO = val;
            break;
        case NRF_VREG1V0_VOUT_ULV:
            p_reg->VOUTULV = val;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE uint8_t nrf_vreg1v0_vout_get(NRF_VREG1V0_Type const * p_reg,
                                               nrf_vreg1v0_vout_t       vout)
{
    switch (vout)
    {
        case NRF_VREG1V0_VOUT_HP_NOMINAL:
            return (uint8_t)p_reg->VOUTHPNOMINAL;
        case NRF_VREG1V0_VOUT_HP_RADIO:
            return (uint8_t)p_reg->VOUTHPRADIO;
        case NRF_VREG1V0_VOUT_HP_HELPER:
            return (uint8_t)p_reg->VOUTHPHELPER;
        case NRF_VREG1V0_VOUT_LP_NOMINAL:
            return (uint8_t)p_reg->VOUTLPNOMINAL;
        case NRF_VREG1V0_VOUT_LP_RADIO:
            return (uint8_t)p_reg->VOUTLPRADIO;
        case NRF_VREG1V0_VOUT_ULV:
            return (uint8_t)p_reg->VOUTULV;
        default:
            NRFX_ASSERT(0);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_vreg1v0_mode_set(NRF_VREG1V0_Type * p_reg,
                                            nrf_vreg1v0_mode_t mode)
{
    p_reg->MODE = mode << VREG1V0_MODE_MODE_Pos;
}

NRF_STATIC_INLINE nrf_vreg1v0_mode_t nrf_vreg1v0_mode_get(NRF_VREG1V0_Type const * p_reg)
{
    return (nrf_vreg1v0_mode_t)((p_reg->MODE & VREG1V0_MODE_MODE_Msk) >> VREG1V0_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_vreg1v0_ithreshold_set(NRF_VREG1V0_Type * p_reg,
                                                  uint8_t            thr)
{
    p_reg->ITHRESHOLD = thr << VREG1V0_ITHRESHOLD_VAL_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_vreg1v0_ithreshold_get(NRF_VREG1V0_Type const * p_reg)
{
    return (uint8_t)p_reg->ITHRESHOLD;
}

NRF_STATIC_INLINE void nrf_vreg1v0_override_set(NRF_VREG1V0_Type *          p_reg,
                                                nrf_vreg1v0_analog_signal_t signal,
                                                bool                        enable,
                                                uint8_t                     val)
{
    switch (signal)
    {
        case NRF_VREG1V0_ANALOG_SIGNAL_PWRUP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                      VREG1V0_OVERRIDE_PWRUP_EN_Enabled :
                                      VREG1V0_OVERRIDE_PWRUP_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_PWRUP_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_PWRUP_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                      VREG1V0_OVERRIDE_RETAIN_EN_Enabled :
                                      VREG1V0_OVERRIDE_RETAIN_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_RETAIN_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_RETAIN_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_MODE_LP:
              p_reg->OVERRIDE.MODELP = ((enable ?
                                      VREG1V0_OVERRIDE_MODELP_EN_Enabled :
                                      VREG1V0_OVERRIDE_MODELP_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_MODELP_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_MODELP_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_MODE_ULPR:
              p_reg->OVERRIDE.MODEULPR = ((enable ?
                                      VREG1V0_OVERRIDE_MODEULPR_EN_Enabled :
                                      VREG1V0_OVERRIDE_MODEULPR_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_MODEULPR_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_MODEULPR_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_CFG:
              p_reg->OVERRIDE.CFG = ((enable ?
                                      VREG1V0_OVERRIDE_CFG_EN_Enabled :
                                      VREG1V0_OVERRIDE_CFG_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_CFG_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_CFG_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_VOLT_HP:
              p_reg->OVERRIDE.VOLTHP = ((enable ?
                                      VREG1V0_OVERRIDE_VOLTHP_EN_Enabled :
                                      VREG1V0_OVERRIDE_VOLTHP_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_VOLTHP_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_VOLTHP_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_VOLT_LP:
              p_reg->OVERRIDE.VOLTLP = ((enable ?
                                      VREG1V0_OVERRIDE_VOLTLP_EN_Enabled :
                                      VREG1V0_OVERRIDE_VOLTLP_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_VOLTLP_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_VOLTLP_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_READY:
              p_reg->OVERRIDE.READY = ((enable ?
                                      VREG1V0_OVERRIDE_READY_EN_Enabled :
                                      VREG1V0_OVERRIDE_READY_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_READY_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_READY_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_SETTLED:
              p_reg->OVERRIDE.SETTLED = ((enable ?
                                      VREG1V0_OVERRIDE_SETTLED_EN_Enabled :
                                      VREG1V0_OVERRIDE_SETTLED_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_SETTLED_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_SETTLED_VAL_Pos;
              break;
        case NRF_VREG1V0_ANALOG_SIGNAL_IOUT_CMP:
              p_reg->OVERRIDE.IOUTCMP = ((enable ?
                                      VREG1V0_OVERRIDE_IOUTCMP_EN_Enabled :
                                      VREG1V0_OVERRIDE_IOUTCMP_EN_Disabled) <<
                                      VREG1V0_OVERRIDE_IOUTCMP_EN_Pos) |
                                      val << VREG1V0_OVERRIDE_IOUTCMP_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_atb0_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_atb0_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                            VREG1V0_DFT_ATB0CONFIG_EN_Enabled :
                            VREG1V0_DFT_ATB0CONFIG_EN_Disabled) <<
                            VREG1V0_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VREG1V0_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_atb1_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_atb1_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                            VREG1V0_DFT_ATB1CONFIG_EN_Enabled :
                            VREG1V0_DFT_ATB1CONFIG_EN_Disabled) <<
                            VREG1V0_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VREG1V0_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb0_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_dtb0_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                            VREG1V0_DFT_DTB0CONFIG_EN_Enabled :
                            VREG1V0_DFT_DTB0CONFIG_EN_Disabled) <<
                            VREG1V0_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VREG1V0_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb1_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_dtb1_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                            VREG1V0_DFT_DTB1CONFIG_EN_Enabled :
                            VREG1V0_DFT_DTB1CONFIG_EN_Disabled) <<
                            VREG1V0_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VREG1V0_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb2_config_set(NRF_VREG1V0_Type *            p_reg,
                                                       nrf_vreg1v0_dft_dtb2_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.DTB2CONFIG = ((enable ?
                            VREG1V0_DFT_DTB2CONFIG_EN_Enabled :
                            VREG1V0_DFT_DTB2CONFIG_EN_Disabled) <<
                            VREG1V0_DFT_DTB2CONFIG_EN_Pos) |
                            (selmux << VREG1V0_DFT_DTB2CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_dtb3_config_set(NRF_VREG1V0_Type * p_reg,
                                                       bool               enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                            VREG1V0_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                            VREG1V0_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            VREG1V0_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_tcfg_config_set(NRF_VREG1V0_Type * p_reg,
                                                       nrf_vreg1v0_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.vref_timer_req ?
                        VREG1V0_DFT_TCFG_VREFTIMERREQ_Enabled :
                        VREG1V0_DFT_TCFG_VREFTIMERREQ_Enabled) <<
                        VREG1V0_DFT_TCFG_VREFTIMERREQ_Pos)  |
                      ((tcfg.rfr_end_criteria ?
                        VREG1V0_DFT_TCFG_RFRENDCRITERIA_Enabled :
                        VREG1V0_DFT_TCFG_RFRENDCRITERIA_Disabled) <<
                       VREG1V0_DFT_TCFG_RFRENDCRITERIA_Pos) |
                      ((tcfg.lp_cancel_req ?
                        VREG1V0_DFT_TCFG_LPCANCELREQ_Enabled :
                        VREG1V0_DFT_TCFG_LPCANCELREQ_Disabled) <<
                        VREG1V0_DFT_TCFG_LPCANCELREQ_Pos)   |
                      ((tcfg.mode_lp_req ?
                        VREG1V0_DFT_TCFG_MODELPREQ_Enabled :
                        VREG1V0_DFT_TCFG_MODELPREQ_Disabled) <<
                        VREG1V0_DFT_TCFG_MODELPREQ_Pos)     |
                      ((tcfg.mode_ulpr_req ?
                        VREG1V0_DFT_TCFG_MODEULPRREQ_Enabled :
                        VREG1V0_DFT_TCFG_MODEULPRREQ_Disabled) <<
                        VREG1V0_DFT_TCFG_MODEULPRREQ_Pos)   |
                      ((tcfg.pwrup_ibpp ?
                        VREG1V0_DFT_TCFG_PWRUPIBPP_Enabled :
                        VREG1V0_DFT_TCFG_PWRUPIBPP_Disabled) <<
                        VREG1V0_DFT_TCFG_PWRUPIBPP_Pos)     |
                      ((tcfg.pwrup_lp ?
                        VREG1V0_DFT_TCFG_PWRUPLP_Enabled :
                        VREG1V0_DFT_TCFG_PWRUPLP_Disabled) <<
                        VREG1V0_DFT_TCFG_PWRUPLP_Pos)       |
                      ((tcfg.pwrup_hp ?
                        VREG1V0_DFT_TCFG_PWRUPHP_Enabled :
                        VREG1V0_DFT_TCFG_PWRUPHP_Disabled) <<
                        VREG1V0_DFT_TCFG_PWRUPHP_Pos)       |
                      ((tcfg.pwrup_ibpsr ?
                        VREG1V0_DFT_TCFG_PWRUPIBPSR_Enabled :
                        VREG1V0_DFT_TCFG_PWRUPIBPSR_Disabled) <<
                        VREG1V0_DFT_TCFG_PWRUPIBPSR_Pos)    |
                      ((tcfg.tcfg_enable ?
                        VREG1V0_DFT_TCFG_TCFGENABLE_Enabled :
                        VREG1V0_DFT_TCFG_TCFGENABLE_Disabled) <<
                        VREG1V0_DFT_TCFG_TCFGENABLE_Pos)    |
                      ((tcfg.refresh_cmp_clk ?
                        VREG1V0_DFT_TCFG_REFRESHCMPCLK_Enabled :
                        VREG1V0_DFT_TCFG_REFRESHCMPCLK_Disabled) <<
                        VREG1V0_DFT_TCFG_REFRESHCMPCLK_Pos);
}

NRF_STATIC_INLINE void nrf_vreg1v0_dft_cal_set(NRF_VREG1V0_Type * p_reg,
                                               bool               enable)
{
    p_reg->DFT.CALEN = (enable ? VREG1V0_DFT_CALEN_CALEN_ATCMPOn : VREG1V0_DFT_CALEN_CALEN_ATCMPOff)
                        << VREG1V0_DFT_CALEN_CALEN_Pos;
}

NRF_STATIC_INLINE uint32_t nrf_vreg1v0_dft_calcmp_check(NRF_VREG1V0_Type const * p_reg)
{
    return p_reg->DFT.CALCMP;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREG1V0_H__
