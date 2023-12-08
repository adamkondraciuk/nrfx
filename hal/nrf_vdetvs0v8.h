/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_VDETVS0V8_H__
#define NRF_VDETVS0V8_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vdetvs0v8_hal Voltage scaling 0.8V Voltage Detector HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Voltage scaling 0.8V Voltage Detector (VDETVS0V8).
 */

/** @brief VDETVS0V8 tasks. */
typedef enum
{
    NRF_VDETVS0V8_TASK_PWR_UP          = offsetof(NRF_VDETVS0V8_Type, TASKS_PWRUP),         /**< Power up voltage detector. */
    NRF_VDETVS0V8_TASK_PWR_DOWN        = offsetof(NRF_VDETVS0V8_Type, TASKS_PWRDOWN),       /**< Power down voltage detector. */
    NRF_VDETVS0V8_TASK_START_PWR_GOOD  = offsetof(NRF_VDETVS0V8_Type, TASKS_STARTPWRGOOD),  /**< Start power good detection. */
    NRF_VDETVS0V8_TASK_CANCEL_PWR_GOOD = offsetof(NRF_VDETVS0V8_Type, TASKS_CANCELPWRGOOD), /**< Cancel power good detection. */
    NRF_VDETVS0V8_TASK_APPLY_BROWNOUT  = offsetof(NRF_VDETVS0V8_Type, TASKS_APPLYBROWNOUT), /**< Apply value in BROWNOUTLVL to the analog module. */
} nrf_vdetvs0v8_task_t;

/** @brief VDETVS0V8 events. */
typedef enum
{
    NRF_VDETVS0V8_EVENT_READY    = offsetof(NRF_VDETVS0V8_Type, EVENTS_READY),    /**< Power up done. */
    NRF_VDETVS0V8_EVENT_SETTLED  = offsetof(NRF_VDETVS0V8_Type, EVENTS_SETTLED),  /**< Settled flag for MODE handshake. */
    NRF_VDETVS0V8_EVENT_PWR_GOOD = offsetof(NRF_VDETVS0V8_Type, EVENTS_PWRGOOD),  /**< Power good detector detected voltage above threshold level. */
    NRF_VDETVS0V8_EVENT_BROWNOUT = offsetof(NRF_VDETVS0V8_Type, EVENTS_BROWNOUT), /**< VDD_VS supply below brownout threshold. */
} nrf_vdetvs0v8_event_t;

/** @brief VDETVS0V8 interrupts. */
typedef enum
{
    NRF_VDETVS0V8_INT_READY_MASK    = VDETVS0V8_INTEN_READY_Msk,    /**< Interrupt on READY. */
    NRF_VDETVS0V8_INT_SETTLED_MASK  = VDETVS0V8_INTEN_SETTLED_Msk,  /**< Interrupt on SETTLED. */
    NRF_VDETVS0V8_INT_PWR_GOOD_MASK = VDETVS0V8_INTEN_PWRGOOD_Msk,  /**< Interrupt on PWRGOOD. */
    NRF_VDETVS0V8_INT_BROWNOUT_MASK = VDETVS0V8_INTEN_BROWNOUT_Msk, /**< Interrupt on BROWNOUT. */
} nrf_vdetvs0v8_int_mask_t;

/** @brief STATUS mode states. */
typedef enum
{
    NRF_VDETVS0V8_STATUS_MODE_HIGH_POWER  = VDETVS0V8_STATUS_MODE_HighPower,            /**< High power mode. */
    NRF_VDETVS0V8_STATUS_MODE_LOW_POWER   = VDETVS0V8_STATUS_MODE_LowPower,             /**< Low power mode. */
    NRF_VDETVS0V8_STATUS_MODE_ULP_REFRESH = VDETVS0V8_STATUS_MODE_UltraLowPowerRefresh, /**< ULP refresh mode. */
} nrf_vdetvs0v8_status_mode_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VDETVS0V8_STATUSANA_READY_MASK   = VDETVS0V8_STATUSANA_READY_Msk,   /**< Current value of READY signal. */
    NRF_VDETVS0V8_STATUSANA_SETTLED_MASK = VDETVS0V8_STATUSANA_SETTLED_Msk, /**< Current value of SETTLED signal. */
    NRF_VDETVS0V8_STATUSANA_BOD_MASK     = VDETVS0V8_STATUSANA_BOD_Msk,     /**< Current value of BOD signal. */
    NRF_VDETVS0V8_STATUSANA_PGD_MASK     = VDETVS0V8_STATUSANA_PGD_Msk,     /**< Current value of PGD signal. */
} nrf_vdetvs0v8_statusana_mask_t;

/** @brief Brown out detector hysteresis voltage value. */
typedef enum
{
    NRF_VDETVS0V8_BROWNOUT_HYST_25_MV   = VDETVS0V8_CONFIG_CFG_BROWNOUTHYST_Val0V0250, /**< Hysteresis voltage is 25mV. */
    NRF_VDETVS0V8_BROWNOUT_HYST_50_MV   = VDETVS0V8_CONFIG_CFG_BROWNOUTHYST_Val0V0500, /**< Hysteresis voltage is 50mV. */
    NRF_VDETVS0V8_BROWNOUT_HYST_12_5_MV = VDETVS0V8_CONFIG_CFG_BROWNOUTHYST_Val0V0125, /**< Hysteresis voltage is 12.5mV. */
    NRF_VDETVS0V8_BROWNOUT_HYST_16_7_MV = VDETVS0V8_CONFIG_CFG_BROWNOUTHYST_Val0V0167, /**< Hysteresis voltage is 16.7mV. */
} nrf_vdetvs0v8_brownout_hyst_t;

/** @brief Threshold configuration type. */
typedef enum
{
    NRF_VDETVS0V8_CONFIG_THR_PWR_GOOD_LVL,
    NRF_VDETVS0V8_CONFIG_THR_BROWNOUT_LVL,
} nrf_vdetvs0v8_config_thr_t;

/** @brief Voltage detector mode. */
typedef enum
{
    NRF_VDETVS0V8_MODE_AUTO        = VDETVS0V8_MODE_MODE_Auto,                 /**< Automatically handled by the peripheral. */
    NRF_VDETVS0V8_MODE_HIGH_POWER  = VDETVS0V8_MODE_MODE_HighPower,            /**< High power mode. */
    NRF_VDETVS0V8_MODE_LOW_POWER   = VDETVS0V8_MODE_MODE_LowPower,             /**< Low power mode. */
    NRF_VDETVS0V8_MODE_ULP_REFRESH = VDETVS0V8_MODE_MODE_UltraLowPowerRefresh, /**< Ultra-low power refresh mode. */
} nrf_vdetvs0v8_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VDETVS0V8_ANALOG_SIGNAL_PWRUP,        /**< Override PWRUP signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_RETAIN,       /**< Override RETAIN signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_MODE_ULPR,    /**< Override MODE ULPR signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_MODE_LP,      /**< Override MODE LP signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_PGD_REQUEST,  /**< Override PDGREQUEST signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_PGD_CANCEL,   /**< Override PDGCANCEL signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_READY,        /**< Override READY signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_SETTLED,      /**< Override SETTLED signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_BOD,          /**< Override BOD signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_PGD,          /**< Override PGD signal. */
    NRF_VDETVS0V8_ANALOG_SIGNAL_BOD_VOLT_SEL, /**< Override BODVOLTSEL signal. */
} nrf_vdetvs0v8_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VDETVS0V8_DFT_ATB0_SELMUX_NONE                  = VDETVS0V8_DFT_ATB0CONFIG_SELMUX_None,                /**< None selected. */
    NRF_VDETVS0V8_DFT_ATB0_SELMUX_CONNECT_IDBG_1U       = VDETVS0V8_DFT_ATB0CONFIG_SELMUX_ConnectIDBG1U,       /**< Connect IDBG_1U to ATB0. */
    NRF_VDETVS0V8_DFT_ATB0_SELMUX_CONNECT_VSS           = VDETVS0V8_DFT_ATB0CONFIG_SELMUX_ConnectVSS,          /**< Connect VSS to ATB0. */
    NRF_VDETVS0V8_DFT_ATB0_SELMUX_CONNECT_SENSE_VOLTAGE = VDETVS0V8_DFT_ATB0CONFIG_SELMUX_ConnectSenseVoltage, /**< Use ARB0 as sense voltage instead of VDD_SENSE_0V8. */
} nrf_vdetvs0v8_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VDETVS0V8_DFT_ATB1_SELMUX_NONE             = VDETVS0V8_DFT_ATB1CONFIG_SELMUX_None,           /**< None selected. */
    NRF_VDETVS0V8_DFT_ATB1_SELMUX_CONNECT_VREF_BOD = VDETVS0V8_DFT_ATB1CONFIG_SELMUX_ConnectVREFBOD, /**< Connect VREF_BOD to ATB1. */
} nrf_vdetvs0v8_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_SPARE0                  = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_Spare0,                /**< None selected, logic 0. */
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_SETTLED_VDETA0V8_AO_0V8 = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_SettledVDETAO0V8AO0V8, /**< SETTLED_VDETAO0V8_AO_0V8. */
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_PGD_COMP_OUTPUT         = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_PGDCompOutput,         /**< PGD comparator output. */
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_PGD_COMP_OUTPUT_POST    = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_PGDCompOutputPost,     /**< PGD comparator output after handshake logic. */
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_PWRUP_PGD_SW_1V8        = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_PWRUPPGDSW1V8,         /**< PWRUP_PGD_SW_1V8. */
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_SPARE1                  = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_Spare1,                /**< None selected, logic 0. */
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_BOD_LOCK_ACK_SW_1V8     = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_BODLockAckSW1V8,       /**< BOD_LOCK_ACK_SW_1V8. */
    NRF_VDETVS0V8_DFT_DTB0_SELMUX_SPARE2                  = VDETVS0V8_DFT_DTB0CONFIG_SELMUX_Spare2,                /**< None selected, logic 0. */
} nrf_vdetvs0v8_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_SPARE0                = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_Spare0,              /**< None selected, logic 0. */
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_READY_VDETA0V8_AO_0V8 = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_ReadyVDETAO0V8AO0V8, /**< READY_VDETAO0V8_AO_0V8. */
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_BOD_COMP_OUTPUT       = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_BODCompOutput,       /**< BOD comparator output. */
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_BOD_COMP_OUTPUT_POST  = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_BODCompOutputPost,   /**< BOD comparator output after deglitch logic. */
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_PWRUP_BOD_SW_1V8      = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_PWRUPBODSW1V8,       /**< PWRUP_BOD_SW_1V8. */
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_PWRUP_BOD_BIAS_SW_1V8 = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_PWRUPBODBIASSW1V8,   /**< PWRUP_BOD_BIAS_SW_1V8. */
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_BOD_LOCK_REQ_SW_1V8   = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_BODLockReqSW1V8,     /**< BOD_LOCK_REQ_SW_1V8. */
    NRF_VDETVS0V8_DFT_DTB1_SELMUX_READY_BOD_SW_1V8      = VDETVS0V8_DFT_DTB1CONFIG_SELMUX_ReadyBODSW1V8,       /**< READY_BOD_SW_1V8. */
} nrf_vdetvs0v8_dft_dtb1_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool vdetao0v8_pgd_ao_0v8; /**< Controls VDETAO0V8_PGD_AO_0V8. */
    bool vdetao0v8_bod_ao_0v8; /**< Controls VDETAO0V8_BOD_AO_0V8. */
    bool pgd_comparator;       /**< Controls the PGD comparator if overriden option is set. */
    bool bod_comparator;       /**< Controls the BOD comparator if overriden option is set. */
    bool bod_comparator_1ua;   /**< Controls BOD comparator 500nA bias if overriden option is set. */
    bool unlock_bod;           /**< Unlock the BOD deglitch logic if overriden option is set. */
    bool overriden ;           /**< Override of the internal logic. */
    bool disconnect_sense;     /**< Disconnect the sense line of the comparator and short-circuit both inputs of the comparator to Vref. */
} nrf_vdetvs0v8_tcfg_t;

/**
 * @brief Function for activating the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_task_trigger(NRF_VDETVS0V8_Type * p_reg,
                                                  nrf_vdetvs0v8_task_t task);

/**
 * @brief Function for getting the address of the specified task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_task_address_get(NRF_VDETVS0V8_Type const * p_reg,
                                                          nrf_vdetvs0v8_task_t       task);

/**
 * @brief Function for clearing the specified VDETVS0V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_event_clear(NRF_VDETVS0V8_Type *  p_reg,
                                                 nrf_vdetvs0v8_event_t event);

/**
 * @brief Function for retrieving the state of the VDETVS0V8 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vdetvs0v8_event_check(NRF_VDETVS0V8_Type const * p_reg,
                                                 nrf_vdetvs0v8_event_t      event);

/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_event_address_get(NRF_VDETVS0V8_Type const * p_reg,
                                                           nrf_vdetvs0v8_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_vdetvs0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_int_enable(NRF_VDETVS0V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_vdetvs0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_int_disable(NRF_VDETVS0V8_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_vdetvs0v8_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_int_enable_check(NRF_VDETVS0V8_Type const * p_reg,
                                                          uint32_t                   mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_vdetvs0v8_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_int_pending_get(NRF_VDETVS0V8_Type const * p_reg);

/**
 * @brief Function for getting VDETVS0V8 status register.
 *
 * @param[in]  p_reg          Pointer to the structure of registers of the peripheral.
 * @param[out] p_mode         Pointer to the location where mode value is stored.
 * @param[out] p_curr_bod_lvl Pointer to the location where the current brownout level applied to the analog module is stored.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_status_get(NRF_VDETVS0V8_Type const *    p_reg,
                                                nrf_vdetvs0v8_status_mode_t * p_mode,
                                                uint8_t *                     p_curr_bod_lvl);

/**
 * @brief Function for getting VDETVS0V8 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vdetvs0v8_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_statusana_get(NRF_VDETVS0V8_Type const * p_reg);

/**
 * @brief Function for setting voltage detector configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] hyst  Brown out detector hysteresis voltage value.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_config_cfg_set(NRF_VDETVS0V8_Type *          p_reg,
                                                    nrf_vdetvs0v8_brownout_hyst_t hyst);

/**
 * @brief Function for getting voltage detector configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Brown out detector hysteresis voltage value.
 */
NRF_STATIC_INLINE
nrf_vdetvs0v8_brownout_hyst_t nrf_vdetvs0v8_config_cfg_get(NRF_VDETVS0V8_Type const * p_reg);

/**
 * @brief Function for setting voltage detector threshold configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Threshold type.
 * @param[in] thr   Threshold value. The value is 0.25V + 0.01V steps.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_config_thr_set(NRF_VDETVS0V8_Type *       p_reg,
                                                    nrf_vdetvs0v8_config_thr_t cfg,
                                                    uint8_t                    thr);

/**
 * @brief Function for getting voltage detector threshold configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Threshold type.
 *
 * @return Threshold value. The value is 0.25V + 0.01V steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vdetvs0v8_config_thr_get(NRF_VDETVS0V8_Type const * p_reg,
                                                       nrf_vdetvs0v8_config_thr_t cfg);

/**
 * @brief Function for setting brown out detector trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV +/- 4mV steps.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_trim_brownout_set(NRF_VDETVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting brown out detector trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vdetvs0v8_trim_brownout_get(NRF_VDETVS0V8_Type const * p_reg);

/**
 * @brief Function for setting power good detector trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV +/- 4mV steps.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_trim_pwr_good_set(NRF_VDETVS0V8_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting power good detector trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vdetvs0v8_trim_pwr_good_get(NRF_VDETVS0V8_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_mirror_lock_set(NRF_VDETVS0V8_Type * p_reg, bool lock);

/**
 * @brief Function for setting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_mode_set(NRF_VDETVS0V8_Type * p_reg,
                                              nrf_vdetvs0v8_mode_t mode);

/**
 * @brief Function for getting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vdetvs0v8_mode_t nrf_vdetvs0v8_mode_get(NRF_VDETVS0V8_Type const * p_reg);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */

NRF_STATIC_INLINE void nrf_vdetvs0v8_override_set(NRF_VDETVS0V8_Type *          p_reg,
                                                  nrf_vdetvs0v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_atb0_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_atb1_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_dtb0_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_dtb1_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_dtb3_config_set(NRF_VDETVS0V8_Type * p_reg,
                                                         bool                 enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_tcfg_config_set(NRF_VDETVS0V8_Type * p_reg,
                                                         nrf_vdetvs0v8_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vdetvs0v8_task_trigger(NRF_VDETVS0V8_Type * p_reg,
                                                  nrf_vdetvs0v8_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_task_address_get(NRF_VDETVS0V8_Type const * p_reg,
                                                          nrf_vdetvs0v8_task_t       task)
{
    return nrf_task_event_address_get(p_reg, task);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_event_clear(NRF_VDETVS0V8_Type *  p_reg,
                                                 nrf_vdetvs0v8_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vdetvs0v8_event_check(NRF_VDETVS0V8_Type const * p_reg,
                                                 nrf_vdetvs0v8_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_event_address_get(NRF_VDETVS0V8_Type const * p_reg,
                                                           nrf_vdetvs0v8_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_int_enable(NRF_VDETVS0V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_int_disable(NRF_VDETVS0V8_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_int_enable_check(NRF_VDETVS0V8_Type const * p_reg,
                                                          uint32_t                   mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_int_pending_get(NRF_VDETVS0V8_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_status_get(NRF_VDETVS0V8_Type const *    p_reg,
                                                nrf_vdetvs0v8_status_mode_t * p_mode,
                                                uint8_t *                     p_curr_bod_lvl)
{
    NRFX_ASSERT(p_mode);
    NRFX_ASSERT(p_curr_bod_lvl);
    uint32_t reg = p_reg->STATUS;

    *p_mode         = (reg & VDETVS0V8_STATUS_MODE_Msk) >> VDETVS0V8_STATUS_MODE_Pos;
    *p_curr_bod_lvl = (reg & VDETVS0V8_STATUS_CURRENTBODLEVEL_Msk) >>
                      VDETVS0V8_STATUS_CURRENTBODLEVEL_Pos;
}

NRF_STATIC_INLINE uint32_t nrf_vdetvs0v8_statusana_get(NRF_VDETVS0V8_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_config_cfg_set(NRF_VDETVS0V8_Type *          p_reg,
                                                    nrf_vdetvs0v8_brownout_hyst_t hyst)
{
    p_reg->CONFIG.CFG = (uint32_t)hyst << VDETVS0V8_CONFIG_CFG_BROWNOUTHYST_Pos;
}

NRF_STATIC_INLINE
nrf_vdetvs0v8_brownout_hyst_t nrf_vdetvs0v8_config_cfg_get(NRF_VDETVS0V8_Type const * p_reg)
{
    return (nrf_vdetvs0v8_brownout_hyst_t)((p_reg->CONFIG.CFG &
                                            VDETVS0V8_CONFIG_CFG_BROWNOUTHYST_Msk) >>
                                           VDETVS0V8_CONFIG_CFG_BROWNOUTHYST_Pos);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_config_thr_set(NRF_VDETVS0V8_Type *       p_reg,
                                                    nrf_vdetvs0v8_config_thr_t cfg,
                                                    uint8_t                    thr)
{
    switch (cfg)
    {
        case NRF_VDETVS0V8_CONFIG_THR_PWR_GOOD_LVL:
            p_reg->CONFIG.PWRGOODLVL = (uint32_t)thr;
            break;
        case NRF_VDETVS0V8_CONFIG_THR_BROWNOUT_LVL:
            p_reg->CONFIG.BROWNOUTLVL = (uint32_t)thr;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE uint8_t nrf_vdetvs0v8_config_thr_get(NRF_VDETVS0V8_Type const * p_reg,
                                                       nrf_vdetvs0v8_config_thr_t cfg)
{
    switch (cfg)
    {
        case NRF_VDETVS0V8_CONFIG_THR_PWR_GOOD_LVL:
            return (uint8_t)p_reg->CONFIG.PWRGOODLVL;
        case NRF_VDETVS0V8_CONFIG_THR_BROWNOUT_LVL:
            return (uint8_t)p_reg->CONFIG.BROWNOUTLVL;
        default:
            NRFX_ASSERT(0);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_trim_brownout_set(NRF_VDETVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.BROWNOUT = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vdetvs0v8_trim_brownout_get(NRF_VDETVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.BROWNOUT;
}


NRF_STATIC_INLINE void nrf_vdetvs0v8_trim_pwr_good_set(NRF_VDETVS0V8_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.PWRGOOD = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vdetvs0v8_trim_pwr_good_get(NRF_VDETVS0V8_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.PWRGOOD;
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_mirror_lock_set(NRF_VDETVS0V8_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VDETVS0V8_MIRROR_LOCK_Enabled : VDETVS0V8_MIRROR_LOCK_Disabled) <<
                    VDETVS0V8_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_mode_set(NRF_VDETVS0V8_Type * p_reg,
                                              nrf_vdetvs0v8_mode_t mode)
{
    p_reg->MODE = (uint32_t)mode << VDETVS0V8_MODE_MODE_Pos;
}

NRF_STATIC_INLINE nrf_vdetvs0v8_mode_t nrf_vdetvs0v8_mode_get(NRF_VDETVS0V8_Type const * p_reg)
{
    return (nrf_vdetvs0v8_mode_t)((p_reg->MODE & VDETVS0V8_MODE_MODE_Msk) >>
                                  VDETVS0V8_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_override_set(NRF_VDETVS0V8_Type *          p_reg,
                                                  nrf_vdetvs0v8_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val)
{
    switch (signal)
    {
        case NRF_VDETVS0V8_ANALOG_SIGNAL_PWRUP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                        VDETVS0V8_OVERRIDE_PWRUP_EN_Enabled :
                                        VDETVS0V8_OVERRIDE_PWRUP_EN_Disabled) <<
                                       VDETVS0V8_OVERRIDE_PWRUP_EN_Pos) |
                                      val << VDETVS0V8_OVERRIDE_PWRUP_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                         VDETVS0V8_OVERRIDE_RETAIN_EN_Enabled :
                                         VDETVS0V8_OVERRIDE_RETAIN_EN_Disabled) <<
                                         VDETVS0V8_OVERRIDE_RETAIN_EN_Pos) |
                                         val << VDETVS0V8_OVERRIDE_RETAIN_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_MODE_ULPR:
              p_reg->OVERRIDE.MODEULPR = ((enable ?
                                           VDETVS0V8_OVERRIDE_MODEULPR_EN_Enabled :
                                           VDETVS0V8_OVERRIDE_MODEULPR_EN_Disabled) <<
                                          VDETVS0V8_OVERRIDE_MODEULPR_EN_Pos) |
                                         val << VDETVS0V8_OVERRIDE_MODEULPR_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_MODE_LP:
              p_reg->OVERRIDE.MODELP = ((enable ?
                                         VDETVS0V8_OVERRIDE_MODELP_EN_Enabled :
                                         VDETVS0V8_OVERRIDE_MODELP_EN_Disabled) <<
                                        VDETVS0V8_OVERRIDE_MODELP_EN_Pos) |
                                       val << VDETVS0V8_OVERRIDE_MODELP_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_PGD_REQUEST:
              p_reg->OVERRIDE.PGDREQUEST = ((enable ?
                                             VDETVS0V8_OVERRIDE_PGDREQUEST_EN_Enabled :
                                             VDETVS0V8_OVERRIDE_PGDREQUEST_EN_Disabled) <<
                                            VDETVS0V8_OVERRIDE_PGDREQUEST_EN_Pos) |
                                           val << VDETVS0V8_OVERRIDE_PGDREQUEST_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_PGD_CANCEL:
              p_reg->OVERRIDE.PGDCANCEL = ((enable ?
                                            VDETVS0V8_OVERRIDE_PGDCANCEL_EN_Enabled :
                                            VDETVS0V8_OVERRIDE_PGDCANCEL_EN_Disabled) <<
                                           VDETVS0V8_OVERRIDE_PGDCANCEL_EN_Pos) |
                                          val << VDETVS0V8_OVERRIDE_PGDCANCEL_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_READY:
              p_reg->OVERRIDE.READY = ((enable ?
                                        VDETVS0V8_OVERRIDE_READY_EN_Enabled :
                                        VDETVS0V8_OVERRIDE_READY_EN_Disabled) <<
                                       VDETVS0V8_OVERRIDE_READY_EN_Pos) |
                                      val << VDETVS0V8_OVERRIDE_READY_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_SETTLED:
              p_reg->OVERRIDE.SETTLED = ((enable ?
                                          VDETVS0V8_OVERRIDE_SETTLED_EN_Enabled :
                                          VDETVS0V8_OVERRIDE_SETTLED_EN_Disabled) <<
                                         VDETVS0V8_OVERRIDE_SETTLED_EN_Pos) |
                                        val << VDETVS0V8_OVERRIDE_SETTLED_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_BOD:
              p_reg->OVERRIDE.BOD = ((enable ?
                                      VDETVS0V8_OVERRIDE_BOD_EN_Enabled :
                                      VDETVS0V8_OVERRIDE_BOD_EN_Disabled) <<
                                     VDETVS0V8_OVERRIDE_BOD_EN_Pos) |
                                    val << VDETVS0V8_OVERRIDE_BOD_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_PGD:
              p_reg->OVERRIDE.PGD = ((enable ?
                                      VDETVS0V8_OVERRIDE_PGD_EN_Enabled :
                                      VDETVS0V8_OVERRIDE_PGD_EN_Disabled) <<
                                     VDETVS0V8_OVERRIDE_PGD_EN_Pos) |
                                    val << VDETVS0V8_OVERRIDE_PGD_VAL_Pos;
              break;
        case NRF_VDETVS0V8_ANALOG_SIGNAL_BOD_VOLT_SEL:
              p_reg->OVERRIDE.BODVOLTSEL = ((enable ?
                                             VDETVS0V8_OVERRIDE_BODVOLTSEL_EN_Enabled :
                                             VDETVS0V8_OVERRIDE_BODVOLTSEL_EN_Disabled) <<
                                            VDETVS0V8_OVERRIDE_BODVOLTSEL_EN_Pos) |
                                           val << VDETVS0V8_OVERRIDE_BODVOLTSEL_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_atb0_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_atb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VDETVS0V8_DFT_ATB0CONFIG_EN_Enabled :
                              VDETVS0V8_DFT_ATB0CONFIG_EN_Disabled) <<
                             VDETVS0V8_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VDETVS0V8_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_atb1_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_atb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VDETVS0V8_DFT_ATB1CONFIG_EN_Enabled :
                              VDETVS0V8_DFT_ATB1CONFIG_EN_Disabled) <<
                             VDETVS0V8_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VDETVS0V8_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_dtb0_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_dtb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VDETVS0V8_DFT_DTB0CONFIG_EN_Enabled :
                              VDETVS0V8_DFT_DTB0CONFIG_EN_Disabled) <<
                             VDETVS0V8_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VDETVS0V8_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_dtb1_config_set(NRF_VDETVS0V8_Type *            p_reg,
                                                         nrf_vdetvs0v8_dft_dtb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VDETVS0V8_DFT_DTB1CONFIG_EN_Enabled :
                              VDETVS0V8_DFT_DTB1CONFIG_EN_Disabled) <<
                             VDETVS0V8_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VDETVS0V8_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_dtb3_config_set(NRF_VDETVS0V8_Type * p_reg,
                                                         bool                 enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             VDETVS0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             VDETVS0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            VDETVS0V8_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_vdetvs0v8_dft_tcfg_config_set(NRF_VDETVS0V8_Type * p_reg,
                                                         nrf_vdetvs0v8_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.vdetao0v8_pgd_ao_0v8 ?
                        VDETVS0V8_DFT_TCFG_VDETAO0V8PGDAO0V8_Enabled :
                        VDETVS0V8_DFT_TCFG_VDETAO0V8PGDAO0V8_Disabled) <<
                       VDETVS0V8_DFT_TCFG_VDETAO0V8PGDAO0V8_Pos)   |
                      ((tcfg.vdetao0v8_bod_ao_0v8 ?
                        VDETVS0V8_DFT_TCFG_VDETAO0V8BODAO0V81V8_Enabled :
                        VDETVS0V8_DFT_TCFG_VDETAO0V8BODAO0V81V8_Enabled) <<
                       VDETVS0V8_DFT_TCFG_VDETAO0V8BODAO0V81V8_Pos)  |
                      ((tcfg.pgd_comparator ?
                        VDETVS0V8_DFT_TCFG_PGDCOMPARATOR_Enabled :
                        VDETVS0V8_DFT_TCFG_PGDCOMPARATOR_Disabled) <<
                       VDETVS0V8_DFT_TCFG_PGDCOMPARATOR_Pos)    |
                      ((tcfg.bod_comparator ?
                        VDETVS0V8_DFT_TCFG_BODCOMPARATOR_Enabled :
                        VDETVS0V8_DFT_TCFG_BODCOMPARATOR_Disabled) <<
                       VDETVS0V8_DFT_TCFG_BODCOMPARATOR_Pos)  |
                      ((tcfg.bod_comparator_1ua ?
                        VDETVS0V8_DFT_TCFG_BODCOMPARATOR1UA_Enabled :
                        VDETVS0V8_DFT_TCFG_BODCOMPARATOR1UA_Disabled) <<
                       VDETVS0V8_DFT_TCFG_BODCOMPARATOR1UA_Pos)     |
                      ((tcfg.unlock_bod ?
                        VDETVS0V8_DFT_TCFG_UNLOCKBOD_Enabled :
                        VDETVS0V8_DFT_TCFG_UNLOCKBOD_Disabled) <<
                       VDETVS0V8_DFT_TCFG_UNLOCKBOD_Pos)   |
                      ((tcfg.overriden ?
                        VDETVS0V8_DFT_TCFG_OVERRIDEN_Enabled :
                        VDETVS0V8_DFT_TCFG_OVERRIDEN_Disabled) <<
                       VDETVS0V8_DFT_TCFG_OVERRIDEN_Pos) |
                      ((tcfg.disconnect_sense ?
                        VDETVS0V8_DFT_TCFG_DISCONNECTSENSE_Enabled :
                        VDETVS0V8_DFT_TCFG_DISCONNECTSENSE_Disabled) <<
                       VDETVS0V8_DFT_TCFG_DISCONNECTSENSE_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VDETVS0V8_H__
