/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_VDETAO1V8_H__
#define NRF_VDETAO1V8_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vdetao1v8_hal Always-on 1.8V Voltage Detector HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Always-on 1.8V Voltage Detector (VDETAO1V8).
 */

/** @brief VDETAO1V8 tasks. */
typedef enum
{
    NRF_VDETAO1V8_TASK_PWR_UP   = offsetof(NRF_VDETAO1V8_Type, TASKS_PWRUP),   /**< Power up voltage detector. */
    NRF_VDETAO1V8_TASK_PWR_DOWN = offsetof(NRF_VDETAO1V8_Type, TASKS_PWRDOWN), /**< Power down voltage detector. */
} nrf_vdetao1v8_task_t;

/** @brief VDETAO1V8 events. */
typedef enum
{
    NRF_VDETAO1V8_EVENT_READY         = offsetof(NRF_VDETAO1V8_Type, EVENTS_READY),        /**< Power up done. */
    NRF_VDETAO1V8_EVENT_SETTLED       = offsetof(NRF_VDETAO1V8_Type, EVENTS_SETTLED),      /**< Settled flag for MODE handshake. */
    NRF_VDETAO1V8_EVENT_BROWNOUT_HIGH = offsetof(NRF_VDETAO1V8_Type, EVENTS_BROWNOUTHIGH), /**< Brownout detector high level detected. */
} nrf_vdetao1v8_event_t;

/** @brief VDETAO1V8 interrupts. */
typedef enum
{
    NRF_VDETAO1V8_INT_READY_MASK         = VDETAO1V8_INTEN_READY_Msk,        /**< Interrupt on READY. */
    NRF_VDETAO1V8_INT_SETTLED_MASK       = VDETAO1V8_INTEN_SETTLED_Msk,      /**< Interrupt on SETTLED. */
    NRF_VDETAO1V8_INT_BROWNOUT_HIGH_MASK = VDETAO1V8_INTEN_BROWNOUTHIGH_Msk, /**< Interrupt on BPREADY. */
} nrf_vdetao1v8_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VDETAO1V8_STATUS_HIGH_POWER  = VDETAO1V8_STATUS_MODE_HighPower,            /**< High power mode. */
    NRF_VDETAO1V8_STATUS_LOW_POWER   = VDETAO1V8_STATUS_MODE_LowPower,             /**< Low power mode. */
    NRF_VDETAO1V8_STATUS_ULP_REFRESH = VDETAO1V8_STATUS_MODE_UltraLowPowerRefresh, /**< ULP refresh mode. */
} nrf_vdetao1v8_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VDETAO1V8_STATUSANA_READY_MASK   = VDETAO1V8_STATUSANA_READY_Msk,   /**< Current value of READY signal. */
    NRF_VDETAO1V8_STATUSANA_SETTLED_MASK = VDETAO1V8_STATUSANA_SETTLED_Msk, /**< Current value of SETTLED signal. */
    NRF_VDETAO1V8_STATUSANA_BODH_MASK    = VDETAO1V8_STATUSANA_BODH_Msk,    /**< Current value of BODH signal. */
} nrf_vdetao1v8_statusana_mask_t;

/** @brief Brown out detector high level hysteresis voltage value. */
typedef enum
{
    NRF_VDETAO1V8_BROWNOUT_HIGH_HYST_20_MV = VDETAO1V8_CONFIG_CFG_BROWNOUTHIGHHYST_Val0V020, /**< Hysteresis voltage is 20mV. */
    NRF_VDETAO1V8_BROWNOUT_HIGH_HYST_40_MV = VDETAO1V8_CONFIG_CFG_BROWNOUTHIGHHYST_Val0V040, /**< Hysteresis voltage is 40mV. */
    NRF_VDETAO1V8_BROWNOUT_HIGH_HYST_0_MV  = VDETAO1V8_CONFIG_CFG_BROWNOUTHIGHHYST_Val0V000, /**< Hysteresis voltage is 0mV. */
    NRF_VDETAO1V8_BROWNOUT_HIGH_HYST_10_MV = VDETAO1V8_CONFIG_CFG_BROWNOUTHIGHHYST_Val0V010, /**< Hysteresis voltage is 10mV. */
} nrf_vdetao1v8_brownout_high_hyst_t;

/** @brief Voltage detector mode. */
typedef enum
{
    NRF_VDETAO1V8_MODE_AUTO        = VDETAO1V8_MODE_MODE_Auto,                 /**< Automatically handled by the peripheral. */
    NRF_VDETAO1V8_MODE_HIGH_POWER  = VDETAO1V8_MODE_MODE_HighPower,            /**< High power mode. */
    NRF_VDETAO1V8_MODE_LOW_POWER   = VDETAO1V8_MODE_MODE_LowPower,             /**< Low power mode. */
    NRF_VDETAO1V8_MODE_ULP_REFRESH = VDETAO1V8_MODE_MODE_UltraLowPowerRefresh, /**< Ultra-low power refresh mode. */
} nrf_vdetao1v8_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VDETAO1V8_ANALOG_SIGNAL_PWRUP,     /**< Override PWRUP signal. */
    NRF_VDETAO1V8_ANALOG_SIGNAL_RETAIN,    /**< Override RETAIN signal. */
    NRF_VDETAO1V8_ANALOG_SIGNAL_MODE_LP,   /**< Override MODE LP signal. */
    NRF_VDETAO1V8_ANALOG_SIGNAL_MODE_ULPR, /**< Override MODE ULPR signal. */
    NRF_VDETAO1V8_ANALOG_SIGNAL_BODL_EN,   /**< Override BODL_EN signal. */
    NRF_VDETAO1V8_ANALOG_SIGNAL_READY,     /**< Override READY signal. */
    NRF_VDETAO1V8_ANALOG_SIGNAL_SETTLED,   /**< Override SETTLED signal. */
    NRF_VDETAO1V8_ANALOG_SIGNAL_BODH,      /**< Override BODH signal. */
} nrf_vdetao1v8_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VDETAO1V8_DFT_ATB0_SELMUX_IDBF_1UA              = VDETAO1V8_DFT_ATB0CONFIG_SELMUX_IDBG1u,              /**< BOD CMP IDBG 1u current. */
    NRF_VDETAO1V8_DFT_ATB0_SELMUX_VSS                   = VDETAO1V8_DFT_ATB0CONFIG_SELMUX_VSS,                 /**< Connect Vss. */
    NRF_VDETAO1V8_DFT_ATB0_SELMUX_SPARE                 = VDETAO1V8_DFT_ATB0CONFIG_SELMUX_Spare,               /**< Spare. */
    NRF_VDETAO1V8_DFT_ATB0_SELMUX_CONNECT_SENSE_VOLTAGE = VDETAO1V8_DFT_ATB0CONFIG_SELMUX_ConnectSenseVoltage, /**< Connect internal sense voltage for BOD comparators. */
} nrf_vdetao1v8_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VDETAO1V8_DFT_ATB1_SELMUX_HIZ                   = VDETAO1V8_DFT_ATB1CONFIG_SELMUX_HiZ,                 /**< HiZ. */
    NRF_VDETAO1V8_DFT_ATB1_SELMUX_MONITOR_SENSE_VOLTAGE = VDETAO1V8_DFT_ATB1CONFIG_SELMUX_MonitorSenseVoltage, /**< Monitor internal sense voltage for BOD comparators. */
    NRF_VDETAO1V8_DFT_ATB1_SELMUX_VREFH                 = VDETAO1V8_DFT_ATB1CONFIG_SELMUX_VREFH,               /**< Connect VREFH. */
    NRF_VDETAO1V8_DFT_ATB1_SELMUX_VREFL                 = VDETAO1V8_DFT_ATB1CONFIG_SELMUX_VREFL,               /**< Connect VREFL. */
} nrf_vdetao1v8_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VDETAO1V8_DFT_DTB0_SELMUX_MODE_LP          = VDETAO1V8_DFT_DTB0CONFIG_SELMUX_ModeLP,         /**< MODE LP is selected. */
    NRF_VDETAO1V8_DFT_DTB0_SELMUX_MODE_ULPR        = VDETAO1V8_DFT_DTB0CONFIG_SELMUX_ModeULPR,       /**< MODE ULPR is selected. */
    NRF_VDETAO1V8_DFT_DTB0_SELMUX_BODL_COMP_OUTPUT = VDETAO1V8_DFT_DTB0CONFIG_SELMUX_BODLCompOutput, /**< BODL comparator output is selected. */
    NRF_VDETAO1V8_DFT_DTB0_SELMUX_READY            = VDETAO1V8_DFT_DTB0CONFIG_SELMUX_Ready,          /**< READY is selected. */
} nrf_vdetao1v8_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VDETAO1V8_DFT_DTB1_SELMUX_SPARE0           = VDETAO1V8_DFT_DTB1CONFIG_SELMUX_Spare0,         /**< Spare. */
    NRF_VDETAO1V8_DFT_DTB1_SELMUX_SPARE1           = VDETAO1V8_DFT_DTB1CONFIG_SELMUX_Spare1,         /**< Spare. */
    NRF_VDETAO1V8_DFT_DTB1_SELMUX_BODH_COMP_OUTPUT = VDETAO1V8_DFT_DTB1CONFIG_SELMUX_BODHCompOutput, /**< BODH comparator output is selected. */
    NRF_VDETAO1V8_DFT_DTB1_SELMUX_SETTLED          = VDETAO1V8_DFT_DTB1CONFIG_SELMUX_Settled,        /**< SETTLED is selected. */
} nrf_vdetao1v8_dft_dtb1_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool pwrup_bodh_comp;      /**< Power-up signal for BODH comparator. */
    bool pwrup_bodh_comp_bias; /**< Power-up signal for BODH comparator bias. */
    bool bodh_lock;            /**< BODH lock request signal. */
    bool pwrup_bodl_comp;      /**< Power-up signal for BODL comparator. */
    bool pwrup_bodl_comp_bias; /**< Power-up signal for BODL comparator bias. */
    bool en_override;          /**< Enable override of the internal controls. */
    bool force_bod_to_0;       /**< Force BOD outputs to 0. */
} nrf_vdetao1v8_tcfg_t;

/**
 * @brief Function for activating the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_task_trigger(NRF_VDETAO1V8_Type * p_reg,
                                                  nrf_vdetao1v8_task_t task);

/**
 * @brief Function for getting the address of the specified task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_task_address_get(NRF_VDETAO1V8_Type const * p_reg,
                                                          nrf_vdetao1v8_task_t       task);

/**
 * @brief Function for clearing the specified VDETAO1V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_event_clear(NRF_VDETAO1V8_Type *  p_reg,
                                                 nrf_vdetao1v8_event_t event);

/**
 * @brief Function for retrieving the state of the VDETAO1V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vdetao1v8_event_check(NRF_VDETAO1V8_Type const * p_reg,
                                                 nrf_vdetao1v8_event_t      event);

/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_event_address_get(NRF_VDETAO1V8_Type const * p_reg,
                                                           nrf_vdetao1v8_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled. Use @ref nrf_vdetao1v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_int_enable(NRF_VDETAO1V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled. Use @ref nrf_vdetao1v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_int_disable(NRF_VDETAO1V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked. Use @ref nrf_vdetao1v8_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_int_enable_check(NRF_VDETAO1V8_Type const * p_reg,
                                                          uint32_t                   mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts. Use @ref nrf_vdetao1v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_int_pending_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for getting VDETAO1V8 status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_vdetao1v8_status_t nrf_vdetao1v8_status_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for getting VDETAO1V8 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vdetao1v8_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_statusana_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for setting voltage detector configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] hyst  Brown out detector hysteresis voltage value.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_config_cfg_set(NRF_VDETAO1V8_Type *               p_reg,
                                                    nrf_vdetao1v8_brownout_high_hyst_t hyst);

/**
 * @brief Function for getting voltage detector configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Brown out detector hysteresis voltage value.
 */
NRF_STATIC_INLINE
nrf_vdetao1v8_brownout_high_hyst_t nrf_vdetao1v8_config_cfg_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for enabling Brownout detector low level.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable Set to true to enable the detector and false to disable.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_config_brownout_set(NRF_VDETAO1V8_Type * p_reg, bool enable);

/**
 * @brief Function for getting Brownout detector low level state.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 *
 * @return True if the detector is enabled and false otherwise.
 */
NRF_STATIC_INLINE bool nrf_vdetao1v8_config_brownout_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for setting Brownout detector high threshold voltage level.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Threshold value. The value is 2's complement value of 0mV +/- 8mV steps.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_trim_brownout_level_high_set(NRF_VDETAO1V8_Type * p_reg,
                                                                  uint8_t              val);

/**
 * @brief Function for getting Brownout detector high threshold voltage level.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Threshold value.
 */
NRF_STATIC_INLINE
uint8_t nrf_vdetao1v8_trim_brownout_level_high_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for setting Brownout detector low threshold voltage level.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Threshold value. The value is 2's complement value of 0mV +/- 8mV steps.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_trim_brownout_level_low_set(NRF_VDETAO1V8_Type * p_reg,
                                                                 uint8_t              val);

/**
 * @brief Function for getting Brownout detector low threshold voltage level.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Threshold value.
 */
NRF_STATIC_INLINE
uint8_t nrf_vdetao1v8_trim_brownout_level_low_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_mirror_lock_set(NRF_VDETAO1V8_Type * p_reg, bool lock);

/**
 * @brief Function for setting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_mode_set(NRF_VDETAO1V8_Type * p_reg,
                                              nrf_vdetao1v8_mode_t mode);

/**
 * @brief Function for getting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vdetao1v8_mode_t nrf_vdetao1v8_mode_get(NRF_VDETAO1V8_Type const * p_reg);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */

NRF_STATIC_INLINE void nrf_vdetao1v8_override_set(NRF_VDETAO1V8_Type *          p_reg,
                                                  nrf_vdetao1v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_dft_atb0_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_dft_atb1_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_dft_dtb0_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_dft_dtb1_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_dft_dtb3_config_set(NRF_VDETAO1V8_Type * p_reg,
                                                         bool                 enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vdetao1v8_dft_tcfg_config_set(NRF_VDETAO1V8_Type * p_reg,
                                                         nrf_vdetao1v8_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vdetao1v8_task_trigger(NRF_VDETAO1V8_Type * p_reg,
                                                  nrf_vdetao1v8_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_task_address_get(NRF_VDETAO1V8_Type const * p_reg,
                                                          nrf_vdetao1v8_task_t       task)
{
    return nrf_task_event_address_get(p_reg, task);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_event_clear(NRF_VDETAO1V8_Type *  p_reg,
                                                 nrf_vdetao1v8_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vdetao1v8_event_check(NRF_VDETAO1V8_Type const * p_reg,
                                                 nrf_vdetao1v8_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_event_address_get(NRF_VDETAO1V8_Type const * p_reg,
                                                           nrf_vdetao1v8_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_int_enable(NRF_VDETAO1V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vdetao1v8_int_disable(NRF_VDETAO1V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_int_enable_check(NRF_VDETAO1V8_Type const * p_reg,
                                                          uint32_t                   mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_int_pending_get(NRF_VDETAO1V8_Type const * p_reg)
{
        return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_vdetao1v8_status_t nrf_vdetao1v8_status_get(NRF_VDETAO1V8_Type const * p_reg)
{
    return (nrf_vdetao1v8_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao1v8_statusana_get(NRF_VDETAO1V8_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_vdetao1v8_config_cfg_set(NRF_VDETAO1V8_Type *               p_reg,
                                                    nrf_vdetao1v8_brownout_high_hyst_t hyst)
{
    p_reg->CONFIG.CFG = hyst << VDETAO1V8_CONFIG_CFG_BROWNOUTHIGHHYST_Pos;
}

NRF_STATIC_INLINE
nrf_vdetao1v8_brownout_high_hyst_t nrf_vdetao1v8_config_cfg_get(NRF_VDETAO1V8_Type const * p_reg)
{
    return (nrf_vdetao1v8_brownout_high_hyst_t)((p_reg->CONFIG.CFG &
                                                 VDETAO1V8_CONFIG_CFG_BROWNOUTHIGHHYST_Msk) >>
                                                VDETAO1V8_CONFIG_CFG_BROWNOUTHIGHHYST_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_config_brownout_set(NRF_VDETAO1V8_Type * p_reg, bool enable)
{
    p_reg->CONFIG.BROWNOUTCONFIG = (enable ?
                                    VDETAO1V8_CONFIG_BROWNOUTCONFIG_ENBROWNOUTLVLLOW_Enabled :
                                    VDETAO1V8_CONFIG_BROWNOUTCONFIG_ENBROWNOUTLVLLOW_Disabled) <<
                                   VDETAO1V8_CONFIG_BROWNOUTCONFIG_ENBROWNOUTLVLLOW_Pos;
}

NRF_STATIC_INLINE bool nrf_vdetao1v8_config_brownout_get(NRF_VDETAO1V8_Type const * p_reg)
{
    return (p_reg->CONFIG.BROWNOUTCONFIG >> VDETAO1V8_CONFIG_BROWNOUTCONFIG_ENBROWNOUTLVLLOW_Pos) ==
           VDETAO1V8_CONFIG_BROWNOUTCONFIG_ENBROWNOUTLVLLOW_Enabled;
}

NRF_STATIC_INLINE void nrf_vdetao1v8_trim_brownout_level_high_set(NRF_VDETAO1V8_Type * p_reg,
                                                                  uint8_t              val)
{
    p_reg->TRIM.BROWNOUTLVLHIGH = (uint32_t)(val << VDETAO1V8_TRIM_BROWNOUTLVLHIGH_VAL_Pos);
}

NRF_STATIC_INLINE
uint8_t nrf_vdetao1v8_trim_brownout_level_high_get(NRF_VDETAO1V8_Type const * p_reg)
{
    return (uint8_t)((p_reg->TRIM.BROWNOUTLVLHIGH & VDETAO1V8_TRIM_BROWNOUTLVLHIGH_VAL_Msk) >>
                     VDETAO1V8_TRIM_BROWNOUTLVLHIGH_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_trim_brownout_level_low_set(NRF_VDETAO1V8_Type * p_reg,
                                                                 uint8_t              val)
{
    p_reg->TRIM.BROWNOUTLVLLOW = (uint32_t)(val << VDETAO1V8_TRIM_BROWNOUTLVLLOW_VAL_Pos);
}

NRF_STATIC_INLINE
uint8_t nrf_vdetao1v8_trim_brownout_level_low_get(NRF_VDETAO1V8_Type const * p_reg)
{
    return (uint8_t)((p_reg->TRIM.BROWNOUTLVLLOW & VDETAO1V8_TRIM_BROWNOUTLVLLOW_VAL_Msk) >>
                     VDETAO1V8_TRIM_BROWNOUTLVLLOW_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_mirror_lock_set(NRF_VDETAO1V8_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VDETAO1V8_MIRROR_LOCK_Enabled : VDETAO1V8_MIRROR_LOCK_Disabled) <<
                    VDETAO1V8_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vdetao1v8_mode_set(NRF_VDETAO1V8_Type * p_reg,
                                              nrf_vdetao1v8_mode_t mode)
{
    p_reg->MODE = (uint32_t)mode << VDETAO1V8_MODE_MODE_Pos;
}

NRF_STATIC_INLINE nrf_vdetao1v8_mode_t nrf_vdetao1v8_mode_get(NRF_VDETAO1V8_Type const * p_reg)
{
    return (nrf_vdetao1v8_mode_t)((p_reg->MODE & VDETAO1V8_MODE_MODE_Msk) >>
                                  VDETAO1V8_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_override_set(NRF_VDETAO1V8_Type *          p_reg,
                                                  nrf_vdetao1v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val)
{
    switch (signal)
    {
        case NRF_VDETAO1V8_ANALOG_SIGNAL_PWRUP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                        VDETAO1V8_OVERRIDE_PWRUP_EN_Enabled :
                                        VDETAO1V8_OVERRIDE_PWRUP_EN_Disabled) <<
                                       VDETAO1V8_OVERRIDE_PWRUP_EN_Pos) |
                                      val << VDETAO1V8_OVERRIDE_PWRUP_VAL_Pos;
              break;
        case NRF_VDETAO1V8_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                         VDETAO1V8_OVERRIDE_RETAIN_EN_Enabled :
                                         VDETAO1V8_OVERRIDE_RETAIN_EN_Disabled) <<
                                        VDETAO1V8_OVERRIDE_RETAIN_EN_Pos) |
                                       val << VDETAO1V8_OVERRIDE_RETAIN_VAL_Pos;
              break;
        case NRF_VDETAO1V8_ANALOG_SIGNAL_MODE_LP:
              p_reg->OVERRIDE.MODELP = ((enable ?
                                         VDETAO1V8_OVERRIDE_MODELP_EN_Enabled :
                                         VDETAO1V8_OVERRIDE_MODELP_EN_Disabled) <<
                                        VDETAO1V8_OVERRIDE_MODELP_EN_Pos) |
                                       val << VDETAO1V8_OVERRIDE_MODELP_VAL_Pos;
              break;
        case NRF_VDETAO1V8_ANALOG_SIGNAL_MODE_ULPR:
              p_reg->OVERRIDE.MODEULPR = ((enable ?
                                           VDETAO1V8_OVERRIDE_MODEULPR_EN_Enabled :
                                           VDETAO1V8_OVERRIDE_MODEULPR_EN_Disabled) <<
                                          VDETAO1V8_OVERRIDE_MODEULPR_EN_Pos) |
                                         val << VDETAO1V8_OVERRIDE_MODEULPR_VAL_Pos;
              break;
        case NRF_VDETAO1V8_ANALOG_SIGNAL_BODL_EN:
              p_reg->OVERRIDE.BODLEN = ((enable ?
                                         VDETAO1V8_OVERRIDE_BODLEN_EN_Enabled :
                                         VDETAO1V8_OVERRIDE_BODLEN_EN_Disabled) <<
                                        VDETAO1V8_OVERRIDE_BODLEN_EN_Pos) |
                                       val << VDETAO1V8_OVERRIDE_BODLEN_VAL_Pos;
              break;
        case NRF_VDETAO1V8_ANALOG_SIGNAL_READY:
              p_reg->OVERRIDE.READY = ((enable ?
                                        VDETAO1V8_OVERRIDE_READY_EN_Enabled :
                                        VDETAO1V8_OVERRIDE_READY_EN_Disabled) <<
                                       VDETAO1V8_OVERRIDE_READY_EN_Pos) |
                                      val << VDETAO1V8_OVERRIDE_READY_VAL_Pos;
              break;
        case NRF_VDETAO1V8_ANALOG_SIGNAL_SETTLED:
              p_reg->OVERRIDE.SETTLED = ((enable ?
                                          VDETAO1V8_OVERRIDE_SETTLED_EN_Enabled :
                                          VDETAO1V8_OVERRIDE_SETTLED_EN_Disabled) <<
                                         VDETAO1V8_OVERRIDE_SETTLED_EN_Pos) |
                                        val << VDETAO1V8_OVERRIDE_SETTLED_VAL_Pos;
              break;
        case NRF_VDETAO1V8_ANALOG_SIGNAL_BODH:
              p_reg->OVERRIDE.BODH = ((enable ?
                                       VDETAO1V8_OVERRIDE_BODH_EN_Enabled :
                                       VDETAO1V8_OVERRIDE_BODH_EN_Disabled) <<
                                      VDETAO1V8_OVERRIDE_BODH_EN_Pos) |
                                     val << VDETAO1V8_OVERRIDE_BODH_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vdetao1v8_dft_atb0_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VDETAO1V8_DFT_ATB0CONFIG_EN_Enabled :
                              VDETAO1V8_DFT_ATB0CONFIG_EN_Disabled) <<
                             VDETAO1V8_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VDETAO1V8_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_dft_atb1_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VDETAO1V8_DFT_ATB1CONFIG_EN_Enabled :
                              VDETAO1V8_DFT_ATB1CONFIG_EN_Disabled) <<
                             VDETAO1V8_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VDETAO1V8_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_dft_dtb0_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VDETAO1V8_DFT_DTB0CONFIG_EN_Enabled :
                              VDETAO1V8_DFT_DTB0CONFIG_EN_Disabled) <<
                             VDETAO1V8_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VDETAO1V8_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_dft_dtb1_config_set(NRF_VDETAO1V8_Type *            p_reg,
                                                         nrf_vdetao1v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VDETAO1V8_DFT_DTB1CONFIG_EN_Enabled :
                              VDETAO1V8_DFT_DTB1CONFIG_EN_Disabled) <<
                             VDETAO1V8_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VDETAO1V8_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao1v8_dft_dtb3_config_set(NRF_VDETAO1V8_Type * p_reg,
                                                         bool                 enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             VDETAO1V8_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             VDETAO1V8_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            VDETAO1V8_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_vdetao1v8_dft_tcfg_config_set(NRF_VDETAO1V8_Type * p_reg,
                                                         nrf_vdetao1v8_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.pwrup_bodh_comp ?
                        VDETAO1V8_DFT_TCFG_PWRUPBODHCOMP_Enabled :
                        VDETAO1V8_DFT_TCFG_PWRUPBODHCOMP_Disabled) <<
                       VDETAO1V8_DFT_TCFG_PWRUPBODHCOMP_Pos)  |
                      ((tcfg.pwrup_bodh_comp_bias ?
                        VDETAO1V8_DFT_TCFG_PWRUPBODHCOMPB_Enabled :
                        VDETAO1V8_DFT_TCFG_PWRUPBODHCOMPB_Disabled) <<
                       VDETAO1V8_DFT_TCFG_PWRUPBODHCOMPB_Pos) |
                      ((tcfg.bodh_lock ?
                        VDETAO1V8_DFT_TCFG_BODHLOCK_Enabled :
                        VDETAO1V8_DFT_TCFG_BODHLOCK_Disabled) <<
                       VDETAO1V8_DFT_TCFG_BODHLOCK_Pos)       |
                      ((tcfg.pwrup_bodl_comp ?
                        VDETAO1V8_DFT_TCFG_PWRUPBODLCOMP_Enabled :
                        VDETAO1V8_DFT_TCFG_PWRUPBODLCOMP_Disabled) <<
                       VDETAO1V8_DFT_TCFG_PWRUPBODLCOMP_Pos)  |
                      ((tcfg.pwrup_bodl_comp_bias ?
                        VDETAO1V8_DFT_TCFG_PWRUPBODLCOMPB_Enabled :
                        VDETAO1V8_DFT_TCFG_PWRUPBODLCOMPB_Disabled) <<
                       VDETAO1V8_DFT_TCFG_PWRUPBODLCOMPB_Pos) |
                      ((tcfg.en_override ?
                        VDETAO1V8_DFT_TCFG_ENABLEOVERRIDE_Enabled :
                        VDETAO1V8_DFT_TCFG_ENABLEOVERRIDE_Disabled) <<
                       VDETAO1V8_DFT_TCFG_ENABLEOVERRIDE_Pos) |
                      ((tcfg.force_bod_to_0 ?
                        VDETAO1V8_DFT_TCFG_FORCEBODTO0_Enabled :
                        VDETAO1V8_DFT_TCFG_FORCEBODTO0_Disabled) <<
                       VDETAO1V8_DFT_TCFG_FORCEBODTO0_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VDETAO1V8_H__
