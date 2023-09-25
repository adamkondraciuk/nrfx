/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREGVS0V8_H__
#define NRF_VREGVS0V8_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vregvs0v8_hal Voltage scaling 0.8V Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the voltage scaling 0.8V Voltage Regulator (VREGVS0V8).
 */

/** @brief VREGVS0V8 events. */
typedef enum
{
    NRF_VREGVS0V8_EVENT_READY    = offsetof(NRF_VREGVS0V8_Type, EVENTS_READY),   /**< Power up done. */
    NRF_VREGVS0V8_EVENT_SETTLED  = offsetof(NRF_VREGVS0V8_Type, EVENTS_SETTLED), /**< Settled flag for MODE handshake. */
    NRF_VREGVS0V8_EVENT_IOUT_CMP = offsetof(NRF_VREGVS0V8_Type, EVENTS_IOUTCMP), /**< Analog current comparator. */
    NRF_VREGVS0V8_EVENT_LP2HP    = offsetof(NRF_VREGVS0V8_Type, EVENTS_LP2HP),   /**< Current consumption above threshold. */
    NRF_VREGVS0V8_EVENT_HP2LP    = offsetof(NRF_VREGVS0V8_Type, EVENTS_HP2LP),   /**< Current consumption below threshold. */
} nrf_vregvs0v8_event_t;

/** @brief VREGVS0V8 interrupts. */
typedef enum
{
    NRF_VREGVS0V8_INT_READY_MASK    = VREGVS0V8_INTEN_READY_Msk,   /**< Interrupt on READY. */
    NRF_VREGVS0V8_INT_SETTLED_MASK  = VREGVS0V8_INTEN_SETTLED_Msk, /**< Interrupt on SETTLED. */
    NRF_VREGVS0V8_INT_IOUT_CMP_MASK = VREGVS0V8_INTEN_IOUTCMP_Msk, /**< Interrupt on IOUTCMP. */
    NRF_VREGVS0V8_INT_LP2HP_MASK    = VREGVS0V8_INTEN_LP2HP_Msk,   /**< Interrupt on LP2HP. */
    NRF_VREGVS0V8_INT_HP2LP_MASK    = VREGVS0V8_INTEN_HP2LP_Msk,   /**< Interrupt on HP2LP. */
} nrf_vregvs0v8_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VREGVS0V8_STATUS_HIGH_POWER  = VREGVS0V8_STATUS_MODE_HighPower,            /**< High power mode. */
    NRF_VREGVS0V8_STATUS_LOW_POWER   = VREGVS0V8_STATUS_MODE_LowPower,             /**< Low power mode. */
    NRF_VREGVS0V8_STATUS_ULP_REFRESH = VREGVS0V8_STATUS_MODE_UltraLowPowerRefresh, /**< ULP refresh mode. */
} nrf_vregvs0v8_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VREGVS0V8_STATUSANA_READY_MASK    = VREGVS0V8_STATUSANA_READY_Msk,   /**< Current value of READY signal. */
    NRF_VREGVS0V8_STATUSANA_SETTLED_MASK  = VREGVS0V8_STATUSANA_SETTLED_Msk, /**< Current value of SETTLED signal. */
    NRF_VREGVS0V8_STATUSANA_IOUT_CMP_MASK = VREGVS0V8_STATUSANA_IOUTCMP_Msk, /**< Current value of IOUTCMP signal. */
} nrf_vregvs0v8_statusana_mask_t;

/** @brief Fields for static configuration structure. */
typedef struct
{
    bool ulpr_refresh_cmd_dis; /**< Disable the ULPR refresh comparator. */
    bool vref_timer_div2;      /**< Divide the VREF timer by 2. */
    bool ulpr_refresh_div2;    /**< Divide the ULPR refresh timer by 2. */
    bool curr_cmp_dis;         /**< Disable the current comparator. */
    bool lp_double_bias;       /**< Enable LP core bias. */
} nrf_vregvs0v8_config_static_t;

/** @brief Current limit configuration. */
typedef enum
{
    NRF_VREGVS0V8_CFGDYNAMIC_ILIMVAL_NORMAL = VREGVS0V8_CONFIG_CFGDYNAMIC_ILIMVAL_Normal,   /**< Normal operation, maximum 100mA. */
    NRF_VREGVS0V8_CFGDYNAMIC_ILIMVAL_HIGH   = VREGVS0V8_CONFIG_CFGDYNAMIC_ILIMVAL_IlimHigh, /**< High soft start limit, maximum 60mA. */
    NRF_VREGVS0V8_CFGDYNAMIC_ILIMVAL_MID    = VREGVS0V8_CONFIG_CFGDYNAMIC_ILIMVAL_IlimMid,  /**< WU soft start, maximum 30mA. */
    NRF_VREGVS0V8_CFGDYNAMIC_ILIMVAL_LOW    = VREGVS0V8_CONFIG_CFGDYNAMIC_ILIMVAL_IlimLow,  /**< Reset current limit, maximum 10mA. */
} nrf_vregvs0v8_ilimval_t;

/** @brief Dynamic configuration structure. */
typedef struct
{
    bool                    auto_ilim; /**< Auto mode control. */
    nrf_vregvs0v8_ilimval_t ilim_val;  /**< Current limit configuration. */
} nrf_vregvs0v8_config_dynamic_t;

/** @brief Voltage regulator mode. */
typedef enum
{
    NRF_VREGVS0V8_MODE_AUTO        = VREGVS0V8_MODE_MODE_Auto,                 /**< Automatically handled by the peripheral. */
    NRF_VREGVS0V8_MODE_HIGH_POWER  = VREGVS0V8_MODE_MODE_HighPower,            /**< High power mode. */
    NRF_VREGVS0V8_MODE_LOW_POWER   = VREGVS0V8_MODE_MODE_LowPower,             /**< Low power mode. */
    NRF_VREGVS0V8_MODE_ULP_REFRESH = VREGVS0V8_MODE_MODE_UltraLowPowerRefresh, /**< Ultra-low power refresh mode. */
} nrf_vregvs0v8_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VREGVS0V8_ANALOG_SIGNAL_PWRUP,     /**< Override PWRUP signal. */
    NRF_VREGVS0V8_ANALOG_SIGNAL_RETAIN,    /**< Override RETAIN signal. */
    NRF_VREGVS0V8_ANALOG_SIGNAL_MODE_LP,   /**< Override MODE LP signal. */
    NRF_VREGVS0V8_ANALOG_SIGNAL_MODE_ULPR, /**< Override MODE ULPR signal. */
    NRF_VREGVS0V8_ANALOG_SIGNAL_CFG,       /**< Override CFG signal. */
    NRF_VREGVS0V8_ANALOG_SIGNAL_READY,     /**< Override READY signal. */
    NRF_VREGVS0V8_ANALOG_SIGNAL_SETTLED,   /**< Override SETTLED signal. */
    NRF_VREGVS0V8_ANALOG_SIGNAL_IOUT_CMP,  /**< Override IOUTCMP signal. */
} nrf_vregvs0v8_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VREGVS0V8_DFT_ATB0_SELMUX_EXT_VREF  = VREGVS0V8_DFT_ATB0CONFIG_SELMUX_ExtVref,        /**< External Vref. */
    NRF_VREGVS0V8_DFT_ATB0_SELMUX_IBPP_50NA = VREGVS0V8_DFT_ATB0CONFIG_SELMUX_Ibpp50n,        /**< Internal 50uA current reference. */
    NRF_VREGVS0V8_DFT_ATB0_SELMUX_IBPSR_4UA = VREGVS0V8_DFT_ATB0CONFIG_SELMUX_Ibpsr4u,        /**< Internal 4uA current reference. */
    NRF_VREGVS0V8_DFT_ATB0_SELMUX_SUM       = VREGVS0V8_DFT_ATB0CONFIG_SELMUX_Ibpp50nIbpsr4u, /**< Sum both internal current references. */
} nrf_vregvs0v8_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VREGVS0V8_DFT_ATB1_SELMUX_VSS              = VREGVS0V8_DFT_ATB1CONFIG_SELMUX_VSS,            /**< VSS. */
    NRF_VREGVS0V8_DFT_ATB1_SELMUX_BUFFERED_HP_VREF = VREGVS0V8_DFT_ATB1CONFIG_SELMUX_BufferedHPvref, /**< Buffered HP Vref. */
    NRF_VREGVS0V8_DFT_ATB1_SELMUX_VDD_VS_0V8       = VREGVS0V8_DFT_ATB1CONFIG_SELMUX_VDDVS0V8,       /**< VDD_VS_0V8. */
    NRF_VREGVS0V8_DFT_ATB1_SELMUX_IBPSR_4UA        = VREGVS0V8_DFT_ATB1CONFIG_SELMUX_Ibpsr4u,        /**< Internal 4uA current reference. */
} nrf_vregvs0v8_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_SPARE0        = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_Spare0,       /**< None selected, logic 0. */
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_REFRESH_ULPR  = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_RefreshULPR,  /**< Refresh ULPR. */
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_SETTLED_IBPSR = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_SettledIBPSR, /**< Settled IBPSR. */
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_SPARE1        = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_Spare1,       /**< None selected, logic 0. */
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_CURR_CMP      = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_CurrCmp,      /**< Current comparator output. */
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_REQ_MODE_LP   = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_ReqModeLP,    /**< LP mode request. */
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_REQ_MODE_ULPR = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_RefreshULPR,  /**< ULPR mode request. */
    NRF_VREGVS0V8_DFT_DTB0_SELMUX_CAL_CMP       = VREGVS0V8_DFT_DTB0CONFIG_SELMUX_CalCmp,       /**< Calibration comparator output. */
} nrf_vregvs0v8_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_VREF_TIMER_ACK    = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_VrefTimerAck,    /**< Vref timer acknowledge. */
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_REFRESH_TIMER_ACK = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_RefreshTimerAck, /**< ULPR refresh timer acknowledge. */
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_READY_IBPSR       = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_ReadyIBPSR,      /**< IBPSR ready signal. */
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_READY_HP          = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_ReadyHP,         /**< High power core ready signal. */
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_READY_LP          = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_ReadyLP,         /**< Low power core ready signal. */
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_CANCEL_LP_ACK     = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_CancelLPAck,     /**< Low power core cancel acknowledge signal. */
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_READY_IBPP_5NA    = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_ReadyIBPP5n,     /**< BIAS_IBPP_5N ready signal. */
    NRF_VREGVS0V8_DFT_DTB1_SELMUX_SETTLED           = VREGVS0V8_DFT_DTB1CONFIG_SELMUX_Settled,         /**< Settled signal. */
} nrf_vregvs0v8_dft_dtb1_selmux_t;

/** @brief Select multiplexer for DTB2. */
typedef enum
{
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_VREF_TIMER_REQ    = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_VrefTimerReq,    /**< Vref timer request. */
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_REFRESH_TIMER_REQ = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_RefreshTimerReq, /**< ULPR refresh timer request. */
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_PWRUP_IBPSR       = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_PwrupIBPSR,      /**< IBPSR power up signal. */
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_PWRUP_HP          = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_PwrupHP,         /**< High power core power up signal. */
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_PWRUP_LP          = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_PwrupLP,         /**< Low power core power up signal. */
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_CANCEL_LP         = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_CancelLP,        /**< Low power core cancel signal. */
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_PWRUP_IBPP_5NA    = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_PwrupIBPP5n,     /**< BIAS_IBPP_5N power up signal. */
    NRF_VREGVS0V8_DFT_DTB2_SELMUX_SPARE0            = VREGVS0V8_DFT_DTB2CONFIG_SELMUX_Spare0,          /**< None selected, logic 0. */
} nrf_vregvs0v8_dft_dtb2_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool vref_timer_req;   /**< Controls VREF_TIMER_REQ_SW_1V8 */
    bool rfr_end_criteria; /**< Controls RFR_END_CRITERIA_REQ_SW_1V8 */
    bool lp_cancel_req;    /**< Controls LDP_LP_CANCEL_REQ_AO_1V8 */
    bool mode_lp_req;      /**< Controls MODE_LP_REQ_SW_1V8 */
    bool mode_ulpr_req;    /**< Controls MODE_ULPR_REQ_SW_1V8 */
    bool pwrup_ibpp;       /**< Controls PWRUP_IBPP_BIAS_SW_1V8 */
    bool pwrup_lp;         /**< Controls PWRUP_LDO_LP_AO_1V8 */
    bool pwrup_hp;         /**< Controls PWRUP_LDO_HP_AO_1V8 */
    bool pwrup_ibpsr;      /**< Controls PWRUP_IBPSR_BIAS_SW_1V8 */
    bool tcfg_enable;      /**< Enable TCFG control */
    bool refresh_cmpclk;   /**< Controls clock input of refresh comparator */
} nrf_vregvs0v8_tcfg_t;

/**
 * @brief Function for clearing the specified VREGVS0V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_event_clear(NRF_VREGVS0V8_Type *  p_reg,
                                                 nrf_vregvs0v8_event_t event);

/**
 * @brief Function for retrieving the state of the VREGVS0V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vregvs0v8_event_check(NRF_VREGVS0V8_Type const * p_reg,
                                                 nrf_vregvs0v8_event_t      event);

/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_event_address_get(NRF_VREGVS0V8_Type const * p_reg,
                                                           nrf_vregvs0v8_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled. Use @ref nrf_vregvs0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_int_enable(NRF_VREGVS0V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled. Use @ref nrf_vregvs0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_int_disable(NRF_VREGVS0V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked. Use @ref nrf_vregvs0v8_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_int_enable_check(NRF_VREGVS0V8_Type const * p_reg,
                                                          uint32_t                   mask);
/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts. Use @ref nrf_vregvs0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_int_pending_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for getting VREGVS0V8 status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_vregvs0v8_status_t nrf_vregvs0v8_status_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for getting VREGVS0V8 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vregvs0v8_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_statusana_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Static configuration.
 */
NRF_STATIC_INLINE
void nrf_vregvs0v8_config_static_set(NRF_VREGVS0V8_Type *          p_reg,
                                     nrf_vregvs0v8_config_static_t cfg);

/**
 * @brief Function for getting static and dynamic voltage regulator configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Static configuration.
 */
NRF_STATIC_INLINE nrf_vregvs0v8_config_static_t
nrf_vregvs0v8_config_static_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Dynamic configuration.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_config_dynamic_set(NRF_VREGVS0V8_Type *           p_reg,
                                                        nrf_vregvs0v8_config_dynamic_t cfg);

/**
 * @brief Function for getting voltage regulator dynamic configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Dynamic configuration.
 */
NRF_STATIC_INLINE nrf_vregvs0v8_config_dynamic_t
nrf_vregvs0v8_config_dynamic_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Current reference trimming value. The value is 2's complement from -48% to 61%.
 *                  Default 7.2%, steps are nonlinear.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_trim_iref_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current reference trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_iref_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting high power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of 0mV +/- 5,9mV steps.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_trim_highpower_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting high power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_highpower_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of 0mV +/- 5.9mV steps.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_trim_lowpower_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting low power mode output voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_lowpower_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting ultra low power refresh comparator offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 2's complement value of 0mV +/- 11.8mV steps.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_trim_ulpr_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting ultra low power refresh comparator offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_ulpr_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_mirror_lock_set(NRF_VREGVS0V8_Type * p_reg, bool lock);

/**
 * @brief Function for setting high power mode output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Output voltage value. The value is 0.32V + 0.01V steps.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_vout_hp_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting high power mode output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Output voltage value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_vout_hp_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting low power mode output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Output voltage value. The value is 0.32V + 0.01V steps.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_vout_lp_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting low power mode output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Output voltage value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_vout_lp_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_mode_set(NRF_VREGVS0V8_Type * p_reg,
                                              nrf_vregvs0v8_mode_t mode);

/**
 * @brief Function for getting voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vregvs0v8_mode_t nrf_vregvs0v8_mode_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for setting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] thr   Compare value to match (PCRM format).
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_ithreshold_set(NRF_VREGVS0V8_Type * p_reg,
                                                    uint8_t              thr);

/**
 * @brief Function for getting current threshold for mode transition.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current threshold value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_ithreshold_get(NRF_VREGVS0V8_Type const * p_reg);

/**
 * @brief Function for override signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_override_set(NRF_VREGVS0V8_Type *          p_reg,
                                                  nrf_vregvs0v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_atb0_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_atb1_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb0_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb1_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 2 (DTB2).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb2_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_dtb2_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb3_config_set(NRF_VREGVS0V8_Type * p_reg,
                                                         bool                 enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_tcfg_config_set(NRF_VREGVS0V8_Type * p_reg,
                                                         nrf_vregvs0v8_tcfg_t tcfg);

/**
 * @brief Function for enabling or disabling calibration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the calibration is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vregvs0v8_dft_cal_set(NRF_VREGVS0V8_Type * p_reg,
                                                 bool                 enable);

/**
 * @brief Function for checking calibration compare.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Calibration compare.
 */
NRF_STATIC_INLINE bool nrf_vregvs0v8_dft_cal_cmp_check(NRF_VREGVS0V8_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vregvs0v8_event_clear(NRF_VREGVS0V8_Type *  p_reg,
                                                 nrf_vregvs0v8_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vregvs0v8_event_check(NRF_VREGVS0V8_Type const * p_reg,
                                                 nrf_vregvs0v8_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_event_address_get(NRF_VREGVS0V8_Type const * p_reg,
                                                           nrf_vregvs0v8_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_int_enable(NRF_VREGVS0V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_int_disable(NRF_VREGVS0V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_int_enable_check(NRF_VREGVS0V8_Type const * p_reg,
                                                          uint32_t                   mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_int_pending_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_vregvs0v8_status_t nrf_vregvs0v8_status_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (nrf_vregvs0v8_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_vregvs0v8_statusana_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_config_static_set(NRF_VREGVS0V8_Type *          p_reg,
                                                       nrf_vregvs0v8_config_static_t cfg)
{
    p_reg->CONFIG.CFGSTATIC = ((cfg.ulpr_refresh_cmd_dis ?
                                VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Enabled :
                                VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Disabled) <<
                               VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Pos) |
                              ((cfg.vref_timer_div2 ?
                                VREGVS0V8_CONFIG_CFGSTATIC_VREFTIMERDIV2_Enabled :
                                VREGVS0V8_CONFIG_CFGSTATIC_VREFTIMERDIV2_Disabled) <<
                               VREGVS0V8_CONFIG_CFGSTATIC_VREFTIMERDIV2_Pos)     |
                              ((cfg.ulpr_refresh_div2 ?
                                VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Enabled :
                                VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Disabled) <<
                               VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Pos)   |
                              ((cfg.curr_cmp_dis ?
                                VREGVS0V8_CONFIG_CFGSTATIC_CURRCMPDIS_Enabled :
                                VREGVS0V8_CONFIG_CFGSTATIC_CURRCMPDIS_Disabled) <<
                               VREGVS0V8_CONFIG_CFGSTATIC_CURRCMPDIS_Pos)        |
                              ((cfg.lp_double_bias ?
                                VREGVS0V8_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Enabled :
                                VREGVS0V8_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Disabled) <<
                               VREGVS0V8_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Pos);
}

NRF_STATIC_INLINE nrf_vregvs0v8_config_static_t
nrf_vregvs0v8_config_static_get(NRF_VREGVS0V8_Type const * p_reg)
{
    nrf_vregvs0v8_config_static_t cfg;
    uint32_t reg = p_reg->CONFIG.CFGSTATIC;

    cfg.ulpr_refresh_cmd_dis = ((reg & VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Msk) >>
                                VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Pos) ==
                               VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHCMPDIS_Enabled;
    cfg.vref_timer_div2      = ((reg & VREGVS0V8_CONFIG_CFGSTATIC_VREFTIMERDIV2_Msk) >>
                                VREGVS0V8_CONFIG_CFGSTATIC_VREFTIMERDIV2_Pos) ==
                               VREGVS0V8_CONFIG_CFGSTATIC_VREFTIMERDIV2_Enabled;
    cfg.ulpr_refresh_div2    = ((reg & VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Msk) >>
                                VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Pos) ==
                               VREGVS0V8_CONFIG_CFGSTATIC_ULPRREFRESHDIV2_Enabled;
    cfg.curr_cmp_dis         = ((reg & VREGVS0V8_CONFIG_CFGSTATIC_CURRCMPDIS_Msk) >>
                                VREGVS0V8_CONFIG_CFGSTATIC_CURRCMPDIS_Pos) ==
                               VREGVS0V8_CONFIG_CFGSTATIC_CURRCMPDIS_Enabled;
    cfg.lp_double_bias       = ((reg & VREGVS0V8_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Msk) >>
                                VREGVS0V8_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Pos) ==
                               VREGVS0V8_CONFIG_CFGSTATIC_LPDOUBLEBIAS_Enabled;

    return cfg;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_config_dynamic_set(NRF_VREGVS0V8_Type *           p_reg,
                                                        nrf_vregvs0v8_config_dynamic_t cfg)
{
    p_reg->CONFIG.CFGDYNAMIC = ((cfg.auto_ilim ?
                                 VREGVS0V8_CONFIG_CFGDYNAMIC_AUTOILIM_Enabled :
                                 VREGVS0V8_CONFIG_CFGDYNAMIC_AUTOILIM_Disabled) <<
                                VREGVS0V8_CONFIG_CFGDYNAMIC_AUTOILIM_Pos) |
                               (cfg.ilim_val << VREGVS0V8_CONFIG_CFGDYNAMIC_ILIMVAL_Pos);
}

NRF_STATIC_INLINE nrf_vregvs0v8_config_dynamic_t
nrf_vregvs0v8_config_dynamic_get(NRF_VREGVS0V8_Type const * p_reg)
{
    nrf_vregvs0v8_config_dynamic_t cfg;
    uint32_t reg = p_reg->CONFIG.CFGDYNAMIC;

    cfg.auto_ilim = ((reg & VREGVS0V8_CONFIG_CFGDYNAMIC_AUTOILIM_Msk) >>
                     VREGVS0V8_CONFIG_CFGDYNAMIC_AUTOILIM_Msk) ==
                    VREGVS0V8_CONFIG_CFGDYNAMIC_AUTOILIM_Enabled;
    cfg.ilim_val  = (reg & VREGVS0V8_CONFIG_CFGDYNAMIC_ILIMVAL_Msk) >>
                    VREGVS0V8_CONFIG_CFGDYNAMIC_ILIMVAL_Pos;

    return cfg;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_trim_iref_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.IREF = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_iref_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.IREF;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_trim_highpower_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.HIGHPOWER = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_highpower_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.HIGHPOWER;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_trim_lowpower_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.LOWPOWER = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_lowpower_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.LOWPOWER;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_trim_ulpr_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.ULPR = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_trim_ulpr_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.ULPR;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_mirror_lock_set(NRF_VREGVS0V8_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VREGVS0V8_MIRROR_LOCK_Enabled : VREGVS0V8_MIRROR_LOCK_Disabled) <<
                    VREGVS0V8_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_vout_hp_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->VOUTHP = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_vout_hp_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->VOUTHP;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_vout_lp_set(NRF_VREGVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->VOUTLP = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_vout_lp_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->VOUTLP;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_mode_set(NRF_VREGVS0V8_Type * p_reg,
                                              nrf_vregvs0v8_mode_t mode)
{
    p_reg->MODE = (uint32_t)(mode << VREGVS0V8_MODE_MODE_Pos);
}

NRF_STATIC_INLINE nrf_vregvs0v8_mode_t nrf_vregvs0v8_mode_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (nrf_vregvs0v8_mode_t)(p_reg->MODE >> VREGVS0V8_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_ithreshold_set(NRF_VREGVS0V8_Type * p_reg,
                                                    uint8_t              thr)
{
    p_reg->ITHRESHOLD = (uint32_t)(thr << VREGVS0V8_ITHRESHOLD_VAL_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_vregvs0v8_ithreshold_get(NRF_VREGVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->ITHRESHOLD;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_override_set(NRF_VREGVS0V8_Type *          p_reg,
                                                  nrf_vregvs0v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val)
{
    switch (signal)
    {
        case NRF_VREGVS0V8_ANALOG_SIGNAL_PWRUP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                        VREGVS0V8_OVERRIDE_PWRUP_EN_Enabled :
                                        VREGVS0V8_OVERRIDE_PWRUP_EN_Disabled) <<
                                       VREGVS0V8_OVERRIDE_PWRUP_EN_Pos) |
                                      val << VREGVS0V8_OVERRIDE_PWRUP_VAL_Pos;
              break;
        case NRF_VREGVS0V8_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                         VREGVS0V8_OVERRIDE_RETAIN_EN_Enabled :
                                         VREGVS0V8_OVERRIDE_RETAIN_EN_Disabled) <<
                                        VREGVS0V8_OVERRIDE_RETAIN_EN_Pos) |
                                       val << VREGVS0V8_OVERRIDE_RETAIN_VAL_Pos;
              break;
        case NRF_VREGVS0V8_ANALOG_SIGNAL_MODE_LP:
              p_reg->OVERRIDE.MODELP = ((enable ?
                                         VREGVS0V8_OVERRIDE_MODELP_EN_Enabled :
                                         VREGVS0V8_OVERRIDE_MODELP_EN_Disabled) <<
                                        VREGVS0V8_OVERRIDE_MODELP_EN_Pos) |
                                       val << VREGVS0V8_OVERRIDE_MODELP_VAL_Pos;
              break;
        case NRF_VREGVS0V8_ANALOG_SIGNAL_MODE_ULPR:
              p_reg->OVERRIDE.MODEULPR = ((enable ?
                                           VREGVS0V8_OVERRIDE_MODEULPR_EN_Enabled :
                                           VREGVS0V8_OVERRIDE_MODEULPR_EN_Disabled) <<
                                          VREGVS0V8_OVERRIDE_MODEULPR_EN_Pos) |
                                         val << VREGVS0V8_OVERRIDE_MODEULPR_VAL_Pos;
              break;
        case NRF_VREGVS0V8_ANALOG_SIGNAL_CFG:
              p_reg->OVERRIDE.CFG = ((enable ?
                                      VREGVS0V8_OVERRIDE_CFG_EN_Enabled :
                                      VREGVS0V8_OVERRIDE_CFG_EN_Disabled) <<
                                     VREGVS0V8_OVERRIDE_CFG_EN_Pos) |
                                    val << VREGVS0V8_OVERRIDE_CFG_VAL_Pos;
              break;
        case NRF_VREGVS0V8_ANALOG_SIGNAL_READY:
              p_reg->OVERRIDE.READY = ((enable ?
                                        VREGVS0V8_OVERRIDE_READY_EN_Enabled :
                                        VREGVS0V8_OVERRIDE_READY_EN_Disabled) <<
                                       VREGVS0V8_OVERRIDE_READY_EN_Pos) |
                                      val << VREGVS0V8_OVERRIDE_READY_VAL_Pos;
              break;
        case NRF_VREGVS0V8_ANALOG_SIGNAL_SETTLED:
              p_reg->OVERRIDE.SETTLED = ((enable ?
                                          VREGVS0V8_OVERRIDE_SETTLED_EN_Enabled :
                                          VREGVS0V8_OVERRIDE_SETTLED_EN_Disabled) <<
                                         VREGVS0V8_OVERRIDE_SETTLED_EN_Pos) |
                                        val << VREGVS0V8_OVERRIDE_SETTLED_VAL_Pos;
              break;
        case NRF_VREGVS0V8_ANALOG_SIGNAL_IOUT_CMP:
              p_reg->OVERRIDE.IOUTCMP = ((enable ?
                                          VREGVS0V8_OVERRIDE_IOUTCMP_EN_Enabled :
                                          VREGVS0V8_OVERRIDE_IOUTCMP_EN_Disabled) <<
                                         VREGVS0V8_OVERRIDE_IOUTCMP_EN_Pos) |
                                        val << VREGVS0V8_OVERRIDE_IOUTCMP_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_atb0_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VREGVS0V8_DFT_ATB0CONFIG_EN_Enabled :
                              VREGVS0V8_DFT_ATB0CONFIG_EN_Disabled) <<
                             VREGVS0V8_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VREGVS0V8_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_atb1_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VREGVS0V8_DFT_ATB1CONFIG_EN_Enabled :
                              VREGVS0V8_DFT_ATB1CONFIG_EN_Disabled) <<
                             VREGVS0V8_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VREGVS0V8_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb0_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VREGVS0V8_DFT_DTB0CONFIG_EN_Enabled :
                              VREGVS0V8_DFT_DTB0CONFIG_EN_Disabled) <<
                             VREGVS0V8_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VREGVS0V8_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb1_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VREGVS0V8_DFT_DTB1CONFIG_EN_Enabled :
                              VREGVS0V8_DFT_DTB1CONFIG_EN_Disabled) <<
                             VREGVS0V8_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VREGVS0V8_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb2_config_set(NRF_VREGVS0V8_Type *            p_reg,
                                                         nrf_vregvs0v8_dft_dtb2_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB2CONFIG = ((enable ?
                              VREGVS0V8_DFT_DTB2CONFIG_EN_Enabled :
                              VREGVS0V8_DFT_DTB2CONFIG_EN_Disabled) <<
                             VREGVS0V8_DFT_DTB2CONFIG_EN_Pos) |
                            (selmux << VREGVS0V8_DFT_DTB2CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_dtb3_config_set(NRF_VREGVS0V8_Type * p_reg,
                                                         bool                 enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             VREGVS0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             VREGVS0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            VREGVS0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_tcfg_config_set(NRF_VREGVS0V8_Type * p_reg,
                                                         nrf_vregvs0v8_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.vref_timer_req ?
                        VREGVS0V8_DFT_TCFG_VREFTIMERREQ_Enabled :
                        VREGVS0V8_DFT_TCFG_VREFTIMERREQ_Disabled) <<
                       VREGVS0V8_DFT_TCFG_VREFTIMERREQ_Pos) |
                      ((tcfg.rfr_end_criteria ?
                        VREGVS0V8_DFT_TCFG_RFRENDCRITERIA_Enabled :
                        VREGVS0V8_DFT_TCFG_RFRENDCRITERIA_Disabled) <<
                       VREGVS0V8_DFT_TCFG_RFRENDCRITERIA_Pos) |
                      ((tcfg.lp_cancel_req ?
                        VREGVS0V8_DFT_TCFG_LPCANCELREQ_Enabled :
                        VREGVS0V8_DFT_TCFG_LPCANCELREQ_Disabled) <<
                       VREGVS0V8_DFT_TCFG_LPCANCELREQ_Pos) |
                      ((tcfg.mode_lp_req ?
                        VREGVS0V8_DFT_TCFG_MODELPREQ_Enabled :
                        VREGVS0V8_DFT_TCFG_MODELPREQ_Disabled) <<
                       VREGVS0V8_DFT_TCFG_MODELPREQ_Pos) |
                      ((tcfg.mode_ulpr_req ?
                        VREGVS0V8_DFT_TCFG_MODEULPRREQ_Enabled :
                        VREGVS0V8_DFT_TCFG_MODEULPRREQ_Disabled) <<
                       VREGVS0V8_DFT_TCFG_MODEULPRREQ_Pos) |
                      ((tcfg.pwrup_ibpp ?
                        VREGVS0V8_DFT_TCFG_PWRUPIBPP_Enabled :
                        VREGVS0V8_DFT_TCFG_PWRUPIBPP_Disabled) <<
                       VREGVS0V8_DFT_TCFG_PWRUPIBPP_Pos) |
                      ((tcfg.pwrup_lp ?
                        VREGVS0V8_DFT_TCFG_PWRUPLP_Enabled :
                        VREGVS0V8_DFT_TCFG_PWRUPLP_Disabled) <<
                       VREGVS0V8_DFT_TCFG_PWRUPLP_Pos) |
                      ((tcfg.pwrup_hp ?
                        VREGVS0V8_DFT_TCFG_PWRUPHP_Enabled :
                        VREGVS0V8_DFT_TCFG_PWRUPHP_Disabled) <<
                       VREGVS0V8_DFT_TCFG_PWRUPHP_Pos) |
                      ((tcfg.pwrup_ibpsr ?
                        VREGVS0V8_DFT_TCFG_PWRUPIBPSR_Enabled :
                        VREGVS0V8_DFT_TCFG_PWRUPIBPSR_Disabled) <<
                       VREGVS0V8_DFT_TCFG_PWRUPIBPSR_Pos);
}

NRF_STATIC_INLINE void nrf_vregvs0v8_dft_cal_set(NRF_VREGVS0V8_Type * p_reg,
                                                 bool                 enable)
{
    p_reg->DFT.CALEN = (enable ?
                        VREGVS0V8_DFT_CALEN_CALEN_ATCMPOn : VREGVS0V8_DFT_CALEN_CALEN_ATCMPOff) <<
                       VREGVS0V8_DFT_CALEN_CALEN_Pos;
}

NRF_STATIC_INLINE bool nrf_vregvs0v8_dft_cal_cmp_check(NRF_VREGVS0V8_Type const * p_reg)
{
    return ((p_reg->DFT.CALCMP & VREGVS0V8_DFT_CALCMP_CALCMP_Msk) >>
            VREGVS0V8_DFT_CALCMP_CALCMP_Pos) ? true : false;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREGVS0V8_H__
