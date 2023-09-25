/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_VDETAO5V0_H__
#define NRF_VDETAO5V0_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vdetao5v0_hal Always-on 5.0V Voltage Detector HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Always-on 5.0V Voltage Detector (VDETAO5V0).
 */

/** @brief VDETAO5V0 tasks. */
typedef enum
{
    NRF_VDETAO5V0_TASK_PWR_UP   = offsetof(NRF_VDETAO5V0_Type, TASKS_PWRUP),   /**< Power up voltage detector. */
    NRF_VDETAO5V0_TASK_PWR_DOWN = offsetof(NRF_VDETAO5V0_Type, TASKS_PWRDOWN), /**< Power down voltage detector. */
} nrf_vdetao5v0_task_t;

/** @brief VDETAO5V0 events. */
typedef enum
{
    NRF_VDETAO5V0_EVENT_READY   = offsetof(NRF_VDETAO5V0_Type, EVENTS_READY),   /**< Power up done. */
    NRF_VDETAO5V0_EVENT_SETTLED = offsetof(NRF_VDETAO5V0_Type, EVENTS_SETTLED), /**< Settled flag for MODE handshake. */
} nrf_vdetao5v0_event_t;

/** @brief VDETAO5V0 interrupts. */
typedef enum
{
    NRF_VDETAO5V0_INT_READY_MASK   = VDETAO5V0_INTEN_READY_Msk,   /**< Interrupt on READY. */
    NRF_VDETAO5V0_INT_SETTLED_MASK = VDETAO5V0_INTEN_SETTLED_Msk, /**< Interrupt on SETTLED. */
} nrf_vdetao5v0_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VDETAO5V0_STATUS_HIGH_POWER  = VDETAO5V0_STATUS_MODE_HighPower,            /**< High power mode. */
    NRF_VDETAO5V0_STATUS_LOW_POWER   = VDETAO5V0_STATUS_MODE_LowPower,             /**< Low power mode. */
    NRF_VDETAO5V0_STATUS_ULP_REFRESH = VDETAO5V0_STATUS_MODE_UltraLowPowerRefresh, /**< ULP refresh mode. */
} nrf_vdetao5v0_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VDETAO5V0_STATUSANA_READY_MASK   = VDETAO5V0_STATUSANA_READY_Msk,   /**< Current value of READY signal. */
    NRF_VDETAO5V0_STATUSANA_SETTLED_MASK = VDETAO5V0_STATUSANA_SETTLED_Msk, /**< Current value of SETTLED signal. */
    NRF_VDETAO5V0_STATUSANA_PGD_MASK     = VDETAO5V0_STATUSANA_PGD_Msk,     /**< Current value of PGD signal. */
} nrf_vdetao5v0_statusana_mask_t;

/** @brief Power good detector hysteresis voltage value. */
typedef enum
{
    NRF_VDETAO5V0_PWR_GOOD_HYST_50_MV  = VDETAO5V0_CONFIG_CFG_PWRGOODHYST_Val0V050, /**< Hysteresis voltage is 50mV. */
    NRF_VDETAO5V0_PWR_GOOD_HYST_25_MV  = VDETAO5V0_CONFIG_CFG_PWRGOODHYST_Val0V025, /**< Hysteresis voltage is 25mV. */
    NRF_VDETAO5V0_PWR_GOOD_HYST_150_MV = VDETAO5V0_CONFIG_CFG_PWRGOODHYST_Val0V150, /**< Hysteresis voltage is 150mV. */
    NRF_VDETAO5V0_PWR_GOOD_HYST_100_MV = VDETAO5V0_CONFIG_CFG_PWRGOODHYST_Val0V100, /**< Hysteresis voltage is 100mV. */
} nrf_vdetao5v0_pwr_good_hyst_t;

/** @brief Threshold configuration type. */
typedef enum
{
    NRF_VDETAO5V0_CONFIG_THR_PWR_GOOD_LVL,
    NRF_VDETAO5V0_CONFIG_THR_BROWNOUT_HP,
    NRF_VDETAO5V0_CONFIG_THR_BROWNOUT_LP,
    NRF_VDETAO5V0_CONFIG_THR_BROWNOUT_ULV,
} nrf_vdetao5v0_config_thr_t;

/** @brief Voltage detector mode. */
typedef enum
{
    NRF_VDETAO5V0_MODE_AUTO        = VDETAO5V0_MODE_MODE_Auto,                 /**< Automatically handled by the peripheral. */
    NRF_VDETAO5V0_MODE_HIGH_POWER  = VDETAO5V0_MODE_MODE_HighPower,            /**< High power mode. */
    NRF_VDETAO5V0_MODE_LOW_POWER   = VDETAO5V0_MODE_MODE_LowPower,             /**< Low power mode. */
    NRF_VDETAO5V0_MODE_ULP_REFRESH = VDETAO5V0_MODE_MODE_UltraLowPowerRefresh, /**< Ultra-low power refresh mode. */
} nrf_vdetao5v0_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VDETAO5V0_ANALOG_SIGNAL_PWRUP,     /**< Override PWRUP signal. */
    NRF_VDETAO5V0_ANALOG_SIGNAL_RETAIN,    /**< Override RETAIN signal. */
    NRF_VDETAO5V0_ANALOG_SIGNAL_MODE_ULPR, /**< Override MODE ULPR signal. */
    NRF_VDETAO5V0_ANALOG_SIGNAL_MODE_LP,   /**< Override MODE LP signal. */
    NRF_VDETAO5V0_ANALOG_SIGNAL_READY,     /**< Override READY signal. */
    NRF_VDETAO5V0_ANALOG_SIGNAL_SETTLED,   /**< Override SETTLED signal. */
    NRF_VDETAO5V0_ANALOG_SIGNAL_PGD,       /**< Override PGD signal. */
} nrf_vdetao5v0_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VDETAO5V0_DFT_ATB0_SELMUX_NONE                 = VDETAO5V0_DFT_ATB0CONFIG_SELMUX_None,                /**< None selected. */
    NRF_VDETAO5V0_DFT_ATB0_SELMUX_CONNECT_IDBG_1U      = VDETAO5V0_DFT_ATB0CONFIG_SELMUX_ConnectIDBG1U,       /**< Connect IDBG_1U. */
    NRF_VDETAO5V0_DFT_ATB0_SELMUX_CONNECT_VREF_VFB_DIV = VDETAO5V0_DFT_ATB0CONFIG_SELMUX_ConnectVrefVfbUnbuf, /**< Connect input of VREF/VFB_DIV buffer. */
    NRF_VDETAO5V0_DFT_ATB0_SELMUX_CONNECT_VSS          = VDETAO5V0_DFT_ATB0CONFIG_SELMUX_ConnectVSS,          /**< Connect VSS. */
} nrf_vdetao5v0_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VDETAO5V0_DFT_ATB1_SELMUX_CONNECT_VREF_BUF = VDETAO5V0_DFT_ATB1CONFIG_SELMUX_ConnectVrefBuf, /**< Connect buffered VREF. */
    NRF_VDETAO5V0_DFT_ATB1_SELMUX_CONNECT_VFB_BUF  = VDETAO5V0_DFT_ATB1CONFIG_SELMUX_ConnectVfbBuf,  /**< Connect buffered VFB_DIV. */
} nrf_vdetao5v0_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VDETAO5V0_DFT_DTB0_SELMUX_PGD_COMP_READY = VDETAO5V0_DFT_DTB0CONFIG_SELMUX_PgdCompReady, /**< VDETAO5V0_PGD_COMP_READY. */
    NRF_VDETAO5V0_DFT_DTB0_SELMUX_PGD_UNLATCHED  = VDETAO5V0_DFT_DTB0CONFIG_SELMUX_PgdUnlatched, /**< Unlatched PGD signal. */
    NRF_VDETAO5V0_DFT_DTB0_SELMUX_MODE_LP        = VDETAO5V0_DFT_DTB0CONFIG_SELMUX_ModeLP,       /**< MODE_LP_PGD. */
    NRF_VDETAO5V0_DFT_DTB0_SELMUX_MODE_ULPR      = VDETAO5V0_DFT_DTB0CONFIG_SELMUX_ModeULPR,     /**< MODE_ULPR_PGD. */
} nrf_vdetao5v0_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VDETAO5V0_DFT_DTB1_SELMUX_PDG     = VDETAO5V0_DFT_DTB1CONFIG_SELMUX_Pgd,     /**< VDETAO5V0_PGD. */
    NRF_VDETAO5V0_DFT_DTB1_SELMUX_PWR_UP  = VDETAO5V0_DFT_DTB1CONFIG_SELMUX_Pwrup,   /**< PWRUP_PGD. */
    NRF_VDETAO5V0_DFT_DTB1_SELMUX_SETTLED = VDETAO5V0_DFT_DTB1CONFIG_SELMUX_Settled, /**< SETTLED_VDETAO5V0. */
    NRF_VDETAO5V0_DFT_DTB1_SELMUX_READY   = VDETAO5V0_DFT_DTB1CONFIG_SELMUX_Ready,   /**< READY_VDETAO5V0. */
} nrf_vdetao5v0_dft_dtb1_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool force_pgd_high;        /**< Force VDETAO5V0_PGD_AO_5V0 high. */
    bool comp_pwr;              /**< Controls PGD comparator. */
    bool comp_bias;             /**< Controls PGD comparator 1uA bias. */
    bool deglitch_lock;         /**< Controls lock of PGD deglitch logic. */
    bool force_pgd_hyst_off;    /**< Force PGD hysteresis off. */
    bool force_band_samp_sw_on; /**< Force fb div on and sampling switch on. */
    bool force_fb_div_sw_off;   /**< Force fb div sample switch off for voltage force. */
    bool force_vref_sw_off;     /**< Force vder sample switch off for voltage force. */
} nrf_vdetao5v0_tcfg_t;

/**
 * @brief Function for activating the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_task_trigger(NRF_VDETAO5V0_Type * p_reg,
                                                  nrf_vdetao5v0_task_t task);

/**
 * @brief Function for getting the address of the specified task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_task_address_get(NRF_VDETAO5V0_Type const * p_reg,
                                                          nrf_vdetao5v0_task_t       task);

/**
 * @brief Function for clearing the specified VDETAO5V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_event_clear(NRF_VDETAO5V0_Type *  p_reg,
                                                 nrf_vdetao5v0_event_t event);

/**
 * @brief Function for retrieving the state of the VDETAO5V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vdetao5v0_event_check(NRF_VDETAO5V0_Type const * p_reg,
                                                 nrf_vdetao5v0_event_t      event);

/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_event_address_get(NRF_VDETAO5V0_Type const * p_reg,
                                                           nrf_vdetao5v0_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled. Use @ref nrf_vdetao5v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_int_enable(NRF_VDETAO5V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled. Use @ref nrf_vdetao5v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_int_disable(NRF_VDETAO5V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked. Use @ref nrf_vdetao5v0_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_int_enable_check(NRF_VDETAO5V0_Type const * p_reg,
                                                          uint32_t                   mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts. Use @ref nrf_vdetao5v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_int_pending_get(NRF_VDETAO5V0_Type const * p_reg);

/**
 * @brief Function for getting VDETAO5V0 status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_vdetao5v0_status_t nrf_vdetao5v0_status_get(NRF_VDETAO5V0_Type const * p_reg);

/**
 * @brief Function for getting VDETAO5V0 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vdetao5v0_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_statusana_get(NRF_VDETAO5V0_Type const * p_reg);

/**
 * @brief Function for setting voltage detector configuration.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] hyst        Power good detector hysteresis voltage value.
 * @param[in] sample_time Sample time 200ns extension enable.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_config_cfg_set(NRF_VDETAO5V0_Type *          p_reg,
                                                    nrf_vdetao5v0_pwr_good_hyst_t hyst,
                                                    bool                          sample_time);

/**
 * @brief Function for getting voltage detector configuration.
 *
 * @param[in]  p_reg         Pointer to the structure of registers of the peripheral.
 * @param[out] p_hyst        Pointer to the location where power good detector hysteresis voltage value is stored.
 * @param[out] p_sample_time Pointer to the location where sample time extension state is stored.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_config_cfg_get(NRF_VDETAO5V0_Type const      * p_reg,
                                                    nrf_vdetao5v0_pwr_good_hyst_t * p_hyst,
                                                    bool                          * p_sample_time);

/**
 * @brief Function for setting power good detector threshold voltage level.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] thr   Threshold value. The value is 1.85V + 0.10V steps.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_config_pwr_good_level_set(NRF_VDETAO5V0_Type * p_reg,
                                                               uint8_t              thr);

/**
 * @brief Function for getting power good detector threshold voltage level.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Threshold value. The value is 1.85V + 0.10V steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vdetao5v0_config_pwr_good_level_get(NRF_VDETAO5V0_Type const * p_reg);

/**
 * @brief Function for setting power good detector trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV +/- 14.5mV steps.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_trim_pwr_good_set(NRF_VDETAO5V0_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting power good detector trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vdetao5v0_trim_pwr_good_get(NRF_VDETAO5V0_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_mirror_lock_set(NRF_VDETAO5V0_Type * p_reg, bool lock);

/**
 * @brief Function for setting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_mode_set(NRF_VDETAO5V0_Type * p_reg,
                                              nrf_vdetao5v0_mode_t mode);

/**
 * @brief Function for getting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vdetao5v0_mode_t nrf_vdetao5v0_mode_get(NRF_VDETAO5V0_Type const * p_reg);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */

NRF_STATIC_INLINE void nrf_vdetao5v0_override_set(NRF_VDETAO5V0_Type *          p_reg,
                                                  nrf_vdetao5v0_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_dft_atb0_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_atb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_dft_atb1_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_atb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_dft_dtb0_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_dtb0_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_dft_dtb1_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_dtb1_selmux_t selmux,
                                                         bool                            enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_dft_dtb3_config_set(NRF_VDETAO5V0_Type * p_reg,
                                                         bool                 enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vdetao5v0_dft_tcfg_config_set(NRF_VDETAO5V0_Type * p_reg,
                                                         nrf_vdetao5v0_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vdetao5v0_task_trigger(NRF_VDETAO5V0_Type * p_reg,
                                                  nrf_vdetao5v0_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_task_address_get(NRF_VDETAO5V0_Type const * p_reg,
                                                          nrf_vdetao5v0_task_t       task)
{
    return nrf_task_event_address_get(p_reg, task);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_event_clear(NRF_VDETAO5V0_Type *  p_reg,
                                                 nrf_vdetao5v0_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vdetao5v0_event_check(NRF_VDETAO5V0_Type const * p_reg,
                                                 nrf_vdetao5v0_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_event_address_get(NRF_VDETAO5V0_Type const * p_reg,
                                                           nrf_vdetao5v0_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_int_enable(NRF_VDETAO5V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vdetao5v0_int_disable(NRF_VDETAO5V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_int_enable_check(NRF_VDETAO5V0_Type const * p_reg,
                                                          uint32_t                   mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_int_pending_get(NRF_VDETAO5V0_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_vdetao5v0_status_t nrf_vdetao5v0_status_get(NRF_VDETAO5V0_Type const * p_reg)
{
    return (nrf_vdetao5v0_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_vdetao5v0_statusana_get(NRF_VDETAO5V0_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_vdetao5v0_config_cfg_set(NRF_VDETAO5V0_Type *          p_reg,
                                                    nrf_vdetao5v0_pwr_good_hyst_t hyst,
                                                    bool                          sample_time)
{
    p_reg->CONFIG.CFG = ((uint32_t)hyst << VDETAO5V0_CONFIG_CFG_PWRGOODHYST_Pos) |
                        ((sample_time ?
                          VDETAO5V0_CONFIG_CFG_SAMPLETIMEEXT_Enabled :
                          VDETAO5V0_CONFIG_CFG_SAMPLETIMEEXT_Disabled) <<
                         VDETAO5V0_CONFIG_CFG_SAMPLETIMEEXT_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_config_cfg_get(NRF_VDETAO5V0_Type const      * p_reg,
                                                    nrf_vdetao5v0_pwr_good_hyst_t * p_hyst,
                                                    bool                          * p_sample_time)
{
    NRFX_ASSERT(p_hyst);
    NRFX_ASSERT(p_sample_time);
    uint32_t cfg = p_reg->CONFIG.CFG;

    *p_hyst = (nrf_vdetao5v0_pwr_good_hyst_t)((cfg &
                                               VDETAO5V0_CONFIG_CFG_PWRGOODHYST_Msk) >>
                                              VDETAO5V0_CONFIG_CFG_PWRGOODHYST_Pos);
    *p_sample_time = ((cfg & VDETAO5V0_CONFIG_CFG_SAMPLETIMEEXT_Msk) >>
                      VDETAO5V0_CONFIG_CFG_SAMPLETIMEEXT_Pos) ==
                     VDETAO5V0_CONFIG_CFG_SAMPLETIMEEXT_Enabled;
}

NRF_STATIC_INLINE void nrf_vdetao5v0_config_pwr_good_level_set(NRF_VDETAO5V0_Type * p_reg,
                                                               uint8_t              thr)
{
    p_reg->CONFIG.PWRGOODLVL = (uint32_t)thr;
}

NRF_STATIC_INLINE uint8_t nrf_vdetao5v0_config_pwr_good_level_get(NRF_VDETAO5V0_Type const * p_reg)
{
    return (uint8_t)p_reg->CONFIG.PWRGOODLVL;
}


NRF_STATIC_INLINE void nrf_vdetao5v0_trim_pwr_good_set(NRF_VDETAO5V0_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.PWRGOOD = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vdetao5v0_trim_pwr_good_get(NRF_VDETAO5V0_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.PWRGOOD;
}

NRF_STATIC_INLINE void nrf_vdetao5v0_mirror_lock_set(NRF_VDETAO5V0_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VDETAO5V0_MIRROR_LOCK_Enabled : VDETAO5V0_MIRROR_LOCK_Disabled) <<
                    VDETAO5V0_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vdetao5v0_mode_set(NRF_VDETAO5V0_Type * p_reg,
                                              nrf_vdetao5v0_mode_t mode)
{
    p_reg->MODE = (uint32_t)mode << VDETAO5V0_MODE_MODE_Pos;
}

NRF_STATIC_INLINE nrf_vdetao5v0_mode_t nrf_vdetao5v0_mode_get(NRF_VDETAO5V0_Type const * p_reg)
{
    return (nrf_vdetao5v0_mode_t)((p_reg->MODE & VDETAO5V0_MODE_MODE_Msk) >>
                                  VDETAO5V0_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_override_set(NRF_VDETAO5V0_Type *          p_reg,
                                                  nrf_vdetao5v0_analog_signal_t signal,
                                                  bool                          enable,
                                                  uint8_t                       val)
{
    switch (signal)
    {
        case NRF_VDETAO5V0_ANALOG_SIGNAL_PWRUP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                        VDETAO5V0_OVERRIDE_PWRUP_EN_Enabled :
                                        VDETAO5V0_OVERRIDE_PWRUP_EN_Disabled) <<
                                       VDETAO5V0_OVERRIDE_PWRUP_EN_Pos) |
                                      val << VDETAO5V0_OVERRIDE_PWRUP_VAL_Pos;
              break;
        case NRF_VDETAO5V0_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                         VDETAO5V0_OVERRIDE_RETAIN_EN_Enabled :
                                         VDETAO5V0_OVERRIDE_RETAIN_EN_Disabled) <<
                                         VDETAO5V0_OVERRIDE_RETAIN_EN_Pos) |
                                         val << VDETAO5V0_OVERRIDE_RETAIN_VAL_Pos;
              break;
        case NRF_VDETAO5V0_ANALOG_SIGNAL_MODE_ULPR:
              p_reg->OVERRIDE.MODEULPR = ((enable ?
                                           VDETAO5V0_OVERRIDE_MODEULPR_EN_Enabled :
                                           VDETAO5V0_OVERRIDE_MODEULPR_EN_Disabled) <<
                                          VDETAO5V0_OVERRIDE_MODEULPR_EN_Pos) |
                                         val << VDETAO5V0_OVERRIDE_MODEULPR_VAL_Pos;
              break;
        case NRF_VDETAO5V0_ANALOG_SIGNAL_MODE_LP:
              p_reg->OVERRIDE.MODELP = ((enable ?
                                         VDETAO5V0_OVERRIDE_MODELP_EN_Enabled :
                                         VDETAO5V0_OVERRIDE_MODELP_EN_Disabled) <<
                                        VDETAO5V0_OVERRIDE_MODELP_EN_Pos) |
                                       val << VDETAO5V0_OVERRIDE_MODELP_VAL_Pos;
              break;
        case NRF_VDETAO5V0_ANALOG_SIGNAL_READY:
              p_reg->OVERRIDE.READY = ((enable ?
                                        VDETAO5V0_OVERRIDE_READY_EN_Enabled :
                                        VDETAO5V0_OVERRIDE_READY_EN_Disabled) <<
                                       VDETAO5V0_OVERRIDE_READY_EN_Pos) |
                                      val << VDETAO5V0_OVERRIDE_READY_VAL_Pos;
              break;
        case NRF_VDETAO5V0_ANALOG_SIGNAL_SETTLED:
              p_reg->OVERRIDE.SETTLED = ((enable ?
                                          VDETAO5V0_OVERRIDE_SETTLED_EN_Enabled :
                                          VDETAO5V0_OVERRIDE_SETTLED_EN_Disabled) <<
                                         VDETAO5V0_OVERRIDE_SETTLED_EN_Pos) |
                                        val << VDETAO5V0_OVERRIDE_SETTLED_VAL_Pos;
              break;
        case NRF_VDETAO5V0_ANALOG_SIGNAL_PGD:
              p_reg->OVERRIDE.PGD = ((enable ?
                                      VDETAO5V0_OVERRIDE_PGD_EN_Enabled :
                                      VDETAO5V0_OVERRIDE_PGD_EN_Disabled) <<
                                     VDETAO5V0_OVERRIDE_PGD_EN_Pos) |
                                    val << VDETAO5V0_OVERRIDE_PGD_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vdetao5v0_dft_atb0_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_atb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VDETAO5V0_DFT_ATB0CONFIG_EN_Enabled :
                              VDETAO5V0_DFT_ATB0CONFIG_EN_Disabled) <<
                             VDETAO5V0_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VDETAO5V0_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_dft_atb1_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_atb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VDETAO5V0_DFT_ATB1CONFIG_EN_Enabled :
                              VDETAO5V0_DFT_ATB1CONFIG_EN_Disabled) <<
                             VDETAO5V0_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VDETAO5V0_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_dft_dtb0_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_dtb0_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VDETAO5V0_DFT_DTB0CONFIG_EN_Enabled :
                              VDETAO5V0_DFT_DTB0CONFIG_EN_Disabled) <<
                             VDETAO5V0_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VDETAO5V0_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_dft_dtb1_config_set(NRF_VDETAO5V0_Type *            p_reg,
                                                         nrf_vdetao5v0_dft_dtb1_selmux_t selmux,
                                                         bool                            enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VDETAO5V0_DFT_DTB1CONFIG_EN_Enabled :
                              VDETAO5V0_DFT_DTB1CONFIG_EN_Disabled) <<
                             VDETAO5V0_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VDETAO5V0_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdetao5v0_dft_dtb3_config_set(NRF_VDETAO5V0_Type * p_reg,
                                                         bool                 enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             VDETAO5V0_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             VDETAO5V0_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            VDETAO5V0_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_vdetao5v0_dft_tcfg_config_set(NRF_VDETAO5V0_Type * p_reg,
                                                         nrf_vdetao5v0_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.force_pgd_high ?
                        VDETAO5V0_DFT_TCFG_FORCEPGDHIGH_Enabled :
                        VDETAO5V0_DFT_TCFG_FORCEPGDHIGH_Disabled) <<
                       VDETAO5V0_DFT_TCFG_FORCEPGDHIGH_Pos)       |
                      ((tcfg.comp_pwr ?
                        VDETAO5V0_DFT_TCFG_COMPPWR_On :
                        VDETAO5V0_DFT_TCFG_COMPPWR_Off) <<
                       VDETAO5V0_DFT_TCFG_COMPPWR_Pos)            |
                      ((tcfg.comp_bias ?
                        VDETAO5V0_DFT_TCFG_COMPBIAS_On :
                        VDETAO5V0_DFT_TCFG_COMPBIAS_Off) <<
                       VDETAO5V0_DFT_TCFG_COMPBIAS_Pos)           |
                      ((tcfg.deglitch_lock ?
                        VDETAO5V0_DFT_TCFG_DEGLITCHLOCK_Locked :
                        VDETAO5V0_DFT_TCFG_DEGLITCHLOCK_Unlocked) <<
                       VDETAO5V0_DFT_TCFG_DEGLITCHLOCK_Pos)       |
                      ((tcfg.force_pgd_hyst_off ?
                        VDETAO5V0_DFT_TCFG_FORCEPGDHYSTOFF_Enabled :
                        VDETAO5V0_DFT_TCFG_FORCEPGDHYSTOFF_Disabled) <<
                       VDETAO5V0_DFT_TCFG_FORCEPGDHYSTOFF_Pos)    |
                      ((tcfg.force_band_samp_sw_on ?
                        VDETAO5V0_DFT_TCFG_FORCEFBANDSAMPSWON_Enabled :
                        VDETAO5V0_DFT_TCFG_FORCEFBANDSAMPSWON_Disabled) <<
                       VDETAO5V0_DFT_TCFG_FORCEFBANDSAMPSWON_Pos) |
                      ((tcfg.force_fb_div_sw_off ?
                        VDETAO5V0_DFT_TCFG_FORCEFBDIVSWOFF_Enabled :
                        VDETAO5V0_DFT_TCFG_FORCEFBDIVSWOFF_Disabled) <<
                       VDETAO5V0_DFT_TCFG_FORCEFBDIVSWOFF_Pos)    |
                      ((tcfg.force_vref_sw_off ?
                        VDETAO5V0_DFT_TCFG_FORCEVREFSWOFF_Enabled :
                        VDETAO5V0_DFT_TCFG_FORCEVREFSWOFF_Disabled) <<
                       VDETAO5V0_DFT_TCFG_FORCEVREFSWOFF_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VDETAO5V0_H__
