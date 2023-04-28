/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_VDET1V0_H__
#define NRF_VDET1V0_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vdet1v0_hal VDET1V0 HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the 1.0V Voltage Detector (VDET1V0).
 */

/** @brief VDET1V0 events. */
typedef enum
{
    NRF_VDET1V0_EVENT_READY        = offsetof(NRF_VDET1V0_Type, EVENTS_READY),      ///< Power up done.
    NRF_VDET1V0_EVENT_SETTLED      = offsetof(NRF_VDET1V0_Type, EVENTS_SETTLED),    ///< Settled flag for MODE handshake.
    NRF_VDET1V0_EVENT_PWR_GOOD     = offsetof(NRF_VDET1V0_Type, EVENTS_PWRGOOD),    ///< Power good detector detected voltage above threshold level.
    NRF_VDET1V0_EVENT_PWR_NOT_GOOD = offsetof(NRF_VDET1V0_Type, EVENTS_PWRNOTGOOD), ///< Power good detector detected voltage below threshold level.
} nrf_vdet1v0_event_t;

/** @brief VDET1V0 tasks. */
typedef enum
{
    NRF_VDET1V0_TASK_PWR_UP   = offsetof(NRF_VDET1V0_Type, TASKS_PWRUP),   ///< Power up voltage detector.
    NRF_VDET1V0_TASK_PWR_DOWN = offsetof(NRF_VDET1V0_Type, TASKS_PWRDOWN), ///< Power down voltage detector.
} nrf_vdet1v0_task_t;

/** @brief VDET1V0 interrupts. */
typedef enum
{
    NRF_VDET1V0_INT_READY_MASK        = VDET1V0_INTEN_READY_Msk,      ///< Interrupt on READY event.
    NRF_VDET1V0_INT_SETTLED_MASK      = VDET1V0_INTEN_SETTLED_Msk,    ///< Interrupt on SETTLED event.
    NRF_VDET1V0_INT_PWR_GOOD_MASK     = VDET1V0_INTEN_PWRGOOD_Msk,    ///< Interrupt on PWR_GOOD event.
    NRF_VDET1V0_INT_PWR_NOT_GOOD_MASK = VDET1V0_INTEN_PWRNOTGOOD_Msk, ///< Interrupt on PWR_NOT_GOOD event.
} nrf_vdet1v0_int_mask_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VDET1V0_STATUSANA_READY_MASK   = VDET1V0_STATUSANA_READY_Msk,   ///< Current value of READY signal.
    NRF_VDET1V0_STATUSANA_SETTLED_MASK = VDET1V0_STATUSANA_SETTLED_Msk, ///< Current value of SETTLED signal.
    NRF_VDET1V0_STATUSANA_PGD_MASK     = VDET1V0_STATUSANA_PGD_Msk,     ///< Current value of PGD signal.
} nrf_vdet1v0_statusana_mask_t;

/** @brief Power good detector hysteresis settings. */
typedef enum
{
    NRF_VDET1V0_PWR_GOOD_HYST_LOW  = VDET1V0_CONFIG_CFG_PWRGOODHYST_HystLow,  ///< Hysteresis is 1.16% of the configured PGD level.
    NRF_VDET1V0_PWR_GOOD_HYST_HIGH = VDET1V0_CONFIG_CFG_PWRGOODHYST_HystHigh, ///< Hysteresis is 2.33% of the configured PGD level.
} nrf_vdet1v0_pwr_good_hyst_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VDET1V0_ANALOG_SIGNAL_PWRUP,   ///< Override PWRUP signal.
    NRF_VDET1V0_ANALOG_SIGNAL_RETAIN,  ///< Override RETAIN signal.
    NRF_VDET1V0_ANALOG_SIGNAL_READY,   ///< Override READY signal.
    NRF_VDET1V0_ANALOG_SIGNAL_SETTLED, ///< Override SETTLED signal.
    NRF_VDET1V0_ANALOG_SIGNAL_PGD,     ///< Override PGD signal.
} nrf_vdet1v0_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VDET1V0_DFT_ATB0_SELMUX_CONNECT_VSS           = VDET1V0_DFT_ATB0CONFIG_SELMUX_ConnectVSS,          ///< Connect VSS to ATB0.
    NRF_VDET1V0_DFT_ATB0_SELMUX_CONNECT_SENSE_VOLTAGE = VDET1V0_DFT_ATB0CONFIG_SELMUX_ConnectSenseVoltage, ///< Use ARB0 as sense voltage instead of VDD_SENSE_1V0.
} nrf_vdet1v0_dft_atb0_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VDET1V0_DFT_DTB0_SELMUX_READY_PGD_SW = VDET1V0_DFT_DTB0CONFIG_SELMUX_ReadyPgdSw, ///< READY_PGD_SW_0V8.
    NRF_VDET1V0_DFT_DTB0_SELMUX_SETTLED      = VDET1V0_DFT_DTB0CONFIG_SELMUX_Settled,    ///< SETTLED_VDET1V0_AO_0V8.
    NRF_VDET1V0_DFT_DTB0_SELMUX_PGD_COMP     = VDET1V0_DFT_DTB0CONFIG_SELMUX_PgdCmp,     ///< PGD comparator output.
    NRF_VDET1V0_DFT_DTB0_SELMUX_PGD_UNBUF    = VDET1V0_DFT_DTB0CONFIG_SELMUX_PgdUnbuf,   ///< Unbuffered PGD, after deglitch filter.
} nrf_vdet1v0_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VDET1V0_DFT_DTB1_SELMUX_SPARE0 = VDET1V0_DFT_DTB1CONFIG_SELMUX_Spare0, ///< No mulitplexer is selected, logic 0.
    NRF_VDET1V0_DFT_DTB1_SELMUX_READY  = VDET1V0_DFT_DTB1CONFIG_SELMUX_Ready,  ///< READY_VDET1V0_AO_0V8.
} nrf_vdet1v0_dft_dtb1_selmux_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool pgd_low_force; ///< Force VDET1V0_PGD_AO_0V8 low.
    bool comp_pwr_down; ///< Power down PGD comparator.
    bool hyst_disable;  ///< Disable comparator hysteresis.
} nrf_vdet1v0_tcfg_t;

/**
 * @brief Function for activating the specified VDET1V0 task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_task_trigger(NRF_VDET1V0_Type * p_reg,
                                                nrf_vdet1v0_task_t task);

/**
 * @brief Function for getting the address of the specified VDET1V0 task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdet1v0_task_address_get(NRF_VDET1V0_Type const * p_reg,
                                                        nrf_vdet1v0_task_t       task);

/**
 * @brief Function for clearing the specified VDET1V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_event_clear(NRF_VDET1V0_Type *  p_reg,
                                               nrf_vdet1v0_event_t event);

/**
 * @brief Function for retrieving the state of the VDET1V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vdet1v0_event_check(NRF_VDET1V0_Type const * p_reg,
                                               nrf_vdet1v0_event_t      event);

/**
 * @brief Function for getting the address of the specified VDET1V0 event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdet1v0_event_address_get(NRF_VDET1V0_Type const * p_reg,
                                                         nrf_vdet1v0_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_vdet1v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_int_enable(NRF_VDET1V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_vdet1v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_int_disable(NRF_VDET1V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_vdet1v0_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vdet1v0_int_enable_check(NRF_VDET1V0_Type const * p_reg,
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
 *         Use @ref nrf_vdet1v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdet1v0_int_pending_get(NRF_VDET1V0_Type const * p_reg);

/**
 * @brief Function for getting VDET1V0 status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return STATUSANA register value.
 *         Use @ref nrf_vdet1v0_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vdet1v0_statusana_get(NRF_VDET1V0_Type const * p_reg);

/**
 * @brief Function for setting configuration of voltage detector.
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] pwr_good_hyst Power good detector hysteresis setting.
 */
NRF_STATIC_INLINE
void nrf_vdet1v0_config_cfg_set(NRF_VDET1V0_Type *          p_reg,
                                nrf_vdet1v0_pwr_good_hyst_t pwr_good_hyst);

/**
 * @brief Function for getting configuration of voltage detector.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Power good detector hysteresis setting.
 */
NRF_STATIC_INLINE
nrf_vdet1v0_pwr_good_hyst_t nrf_vdet1v0_config_cfg_get(NRF_VDET1V0_Type const * p_reg);

/**
 * @brief Function for setting threshold voltage level of power good detector.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] thr   Threshold voltage value. The value is 0.77V + 0.01V steps.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_config_pwr_good_thr_set(NRF_VDET1V0_Type * p_reg,
                                                           uint8_t            thr);

/**
 * @brief Function for getting threshold voltage level of voltage detector.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Threshold voltage value. The value is 0.77V + 0.01V steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vdet1v0_config_pwr_good_thr_get(NRF_VDET1V0_Type const * p_reg);

/**
 * @brief Function for setting voltage trimming value of power good detector.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Threshold voltage trimming value. The value is 2's complement value of 0mV +/- 5mV steps.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_trim_pwr_good_set(NRF_VDET1V0_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting voltage trimming value of power good detector.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Threshold voltage trimming value. The value is 2's complement value of 0mV +/- 5mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vdet1v0_trim_pwr_good_get(NRF_VDET1V0_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  True if lock is enabled. False if lock is disabled, and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_mirror_lock_set(NRF_VDET1V0_Type * p_reg, bool lock);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override, false to disable.
 * @param[in] val    Overriden value.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_override_set(NRF_VDET1V0_Type *          p_reg,
                                                nrf_vdet1v0_analog_signal_t signal,
                                                bool                        enable,
                                                uint8_t                     val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_dft_atb0_config_set(NRF_VDET1V0_Type *            p_reg,
                                                       nrf_vdet1v0_dft_atb0_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @note If ATB1 is enabled, VREF_PGD is connected to the analog test bus.
 *       The ATB signals are multiplexed with analog GPIOs, so the corresponding GPIO.PINCONF must be enabled.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_dft_atb1_config_set(NRF_VDET1V0_Type * p_reg,
                                                       bool               enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_dft_dtb0_config_set(NRF_VDET1V0_Type *            p_reg,
                                                       nrf_vdet1v0_dft_dtb0_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_dft_dtb1_config_set(NRF_VDET1V0_Type *            p_reg,
                                                       nrf_vdet1v0_dft_dtb1_selmux_t selmux,
                                                       bool                          enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_dft_dtb3_config_set(NRF_VDET1V0_Type * p_reg,
                                                       bool               enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vdet1v0_dft_tcfg_config_set(NRF_VDET1V0_Type * p_reg,
                                                       nrf_vdet1v0_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vdet1v0_task_trigger(NRF_VDET1V0_Type * p_reg,
                                                nrf_vdet1v0_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_vdet1v0_task_address_get(NRF_VDET1V0_Type const * p_reg,
                                                        nrf_vdet1v0_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_vdet1v0_event_clear(NRF_VDET1V0_Type *  p_reg,
                                               nrf_vdet1v0_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vdet1v0_event_check(NRF_VDET1V0_Type const * p_reg,
                                               nrf_vdet1v0_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_vdet1v0_event_address_get(NRF_VDET1V0_Type const * p_reg,
                                                         nrf_vdet1v0_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vdet1v0_int_enable(NRF_VDET1V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vdet1v0_int_disable(NRF_VDET1V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdet1v0_int_enable_check(NRF_VDET1V0_Type const * p_reg,
                                                        uint32_t                 mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdet1v0_int_pending_get(NRF_VDET1V0_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE uint32_t nrf_vdet1v0_statusana_get(NRF_VDET1V0_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE
void nrf_vdet1v0_config_cfg_set(NRF_VDET1V0_Type *          p_reg,
                                nrf_vdet1v0_pwr_good_hyst_t pwr_good_hyst)
{
    p_reg->CONFIG.CFG = (uint32_t)(pwr_good_hyst << VDET1V0_CONFIG_CFG_PWRGOODHYST_Pos);
}

NRF_STATIC_INLINE
nrf_vdet1v0_pwr_good_hyst_t nrf_vdet1v0_config_cfg_get(NRF_VDET1V0_Type const * p_reg)
{
    return (nrf_vdet1v0_pwr_good_hyst_t)((p_reg->CONFIG.CFG &
                                          VDET1V0_CONFIG_CFG_PWRGOODHYST_Msk) >>
                                         VDET1V0_CONFIG_CFG_PWRGOODHYST_Pos);
}

NRF_STATIC_INLINE
void nrf_vdet1v0_config_pwr_good_thr_set(NRF_VDET1V0_Type * p_reg,
                                         uint8_t            thr)
{
    p_reg->CONFIG.PWRGOODLVL = (uint32_t)(thr << VDET1V0_CONFIG_PWRGOODLVL_VAL_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_vdet1v0_config_pwr_good_thr_get(NRF_VDET1V0_Type const * p_reg)
{
    return (uint8_t)((p_reg->CONFIG.PWRGOODLVL & VDET1V0_CONFIG_PWRGOODLVL_VAL_Msk) >>
                     VDET1V0_CONFIG_PWRGOODLVL_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_vdet1v0_trim_pwr_good_set(NRF_VDET1V0_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.PWRGOOD = (uint32_t)(val << VDET1V0_TRIM_PWRGOOD_VAL_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_vdet1v0_trim_pwr_good_get(NRF_VDET1V0_Type const * p_reg)
{
    return (uint8_t)((p_reg->TRIM.PWRGOOD & VDET1V0_TRIM_PWRGOOD_VAL_Msk) >>
                     VDET1V0_TRIM_PWRGOOD_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_vdet1v0_mirror_lock_set(NRF_VDET1V0_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VDET1V0_MIRROR_LOCK_Enabled : VDET1V0_MIRROR_LOCK_Disabled) <<
                    VDET1V0_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vdet1v0_override_set(NRF_VDET1V0_Type *          p_reg,
                                                nrf_vdet1v0_analog_signal_t signal,
                                                bool                        enable,
                                                uint8_t                     val)
{
    switch (signal)
    {
        case NRF_VDET1V0_ANALOG_SIGNAL_PWRUP:
            p_reg->OVERRIDE.PWRUP = ((enable ?
                                      VDET1V0_OVERRIDE_PWRUP_EN_Enabled :
                                      VDET1V0_OVERRIDE_PWRUP_EN_Disabled) <<
                                     VDET1V0_OVERRIDE_PWRUP_EN_Pos) |
                                    val << VDET1V0_OVERRIDE_PWRUP_VAL_Pos;
            break;
        case NRF_VDET1V0_ANALOG_SIGNAL_RETAIN:
            p_reg->OVERRIDE.RETAIN = ((enable ?
                                       VDET1V0_OVERRIDE_RETAIN_EN_Enabled :
                                       VDET1V0_OVERRIDE_RETAIN_EN_Disabled) <<
                                      VDET1V0_OVERRIDE_RETAIN_EN_Pos) |
                                     val << VDET1V0_OVERRIDE_RETAIN_VAL_Pos;
            break;
        case NRF_VDET1V0_ANALOG_SIGNAL_READY:
            p_reg->OVERRIDE.READY = ((enable ?
                                      VDET1V0_OVERRIDE_READY_EN_Enabled :
                                      VDET1V0_OVERRIDE_READY_EN_Disabled) <<
                                     VDET1V0_OVERRIDE_READY_EN_Pos) |
                                    val << VDET1V0_OVERRIDE_READY_VAL_Pos;
            break;
        case NRF_VDET1V0_ANALOG_SIGNAL_SETTLED:
            p_reg->OVERRIDE.SETTLED = ((enable ?
                                        VDET1V0_OVERRIDE_SETTLED_EN_Enabled :
                                        VDET1V0_OVERRIDE_SETTLED_EN_Disabled) <<
                                       VDET1V0_OVERRIDE_SETTLED_EN_Pos) |
                                      val << VDET1V0_OVERRIDE_SETTLED_VAL_Pos;
            break;
        case NRF_VDET1V0_ANALOG_SIGNAL_PGD:
            p_reg->OVERRIDE.PGD = ((enable ?
                                    VDET1V0_OVERRIDE_PGD_EN_Enabled :
                                    VDET1V0_OVERRIDE_PGD_EN_Disabled) <<
                                   VDET1V0_OVERRIDE_PGD_EN_Pos) |
                                  val << VDET1V0_OVERRIDE_PGD_VAL_Pos;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_vdet1v0_dft_atb0_config_set(NRF_VDET1V0_Type *            p_reg,
                                                       nrf_vdet1v0_dft_atb0_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VDET1V0_DFT_ATB0CONFIG_EN_Enabled :
                              VDET1V0_DFT_ATB0CONFIG_EN_Disabled) <<
                             VDET1V0_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VDET1V0_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdet1v0_dft_atb1_config_set(NRF_VDET1V0_Type * p_reg,
                                                       bool               enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VDET1V0_DFT_ATB1CONFIG_EN_Enabled :
                              VDET1V0_DFT_ATB1CONFIG_EN_Disabled) <<
                             VDET1V0_DFT_ATB1CONFIG_EN_Pos);
}

NRF_STATIC_INLINE void nrf_vdet1v0_dft_dtb0_config_set(NRF_VDET1V0_Type *            p_reg,
                                                       nrf_vdet1v0_dft_dtb0_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VDET1V0_DFT_DTB0CONFIG_EN_Enabled :
                              VDET1V0_DFT_DTB0CONFIG_EN_Disabled) <<
                             VDET1V0_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VDET1V0_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdet1v0_dft_dtb1_config_set(NRF_VDET1V0_Type *            p_reg,
                                                       nrf_vdet1v0_dft_dtb1_selmux_t selmux,
                                                       bool                          enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VDET1V0_DFT_DTB1CONFIG_EN_Enabled :
                              VDET1V0_DFT_DTB1CONFIG_EN_Disabled) <<
                             VDET1V0_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VDET1V0_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vdet1v0_dft_dtb3_config_set(NRF_VDET1V0_Type * p_reg,
                                                       bool               enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             VDET1V0_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             VDET1V0_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            VDET1V0_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

NRF_STATIC_INLINE void nrf_vdet1v0_dft_tcfg_config_set(NRF_VDET1V0_Type * p_reg,
                                                       nrf_vdet1v0_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.pgd_low_force ?
                        VDET1V0_DFT_TCFG_FORCEPGDLOW_Enabled :
                        VDET1V0_DFT_TCFG_FORCEPGDLOW_Disabled) <<
                       VDET1V0_DFT_TCFG_FORCEPGDLOW_Pos) |
                      ((tcfg.comp_pwr_down ?
                        VDET1V0_DFT_TCFG_COMPPWRDWN_Enabled :
                        VDET1V0_DFT_TCFG_COMPPWRDWN_Disabled) <<
                       VDET1V0_DFT_TCFG_COMPPWRDWN_Pos) |
                      ((tcfg.hyst_disable ?
                        VDET1V0_DFT_TCFG_DISABLEHYST_Enabled :
                        VDET1V0_DFT_TCFG_DISABLEHYST_Disabled) <<
                       VDET1V0_DFT_TCFG_DISABLEHYST_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VDET1V0_H__
