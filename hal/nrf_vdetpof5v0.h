/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_VDETPOF5V0_H__
#define NRF_VDETPOF5V0_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vdetpof5v0_hal VDETPOF5V0 HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the 5 V power-fail comparator (VDETPOF5V0).
 */

/** @brief VDETPOF5V0 tasks. */
typedef enum
{
    NRF_VDETPOF5V0_TASK_POWER_UP   = offsetof(NRF_VDETPOF5V0_Type, TASKS_PWRUP),   ///< Power up voltage detector.
    NRF_VDETPOF5V0_TASK_POWER_DOWN = offsetof(NRF_VDETPOF5V0_Type, TASKS_PWRDOWN), ///< Power down voltage detector.
} nrf_vdetpof5v0_task_t;


/** @brief VDETPOF5V0 events. */
typedef enum
{
    NRF_VDETPOF5V0_EVENT_READY   = offsetof(NRF_VDETPOF5V0_Type, EVENTS_READY),   ///< Power up done.
    NRF_VDETPOF5V0_EVENT_SETTLED = offsetof(NRF_VDETPOF5V0_Type, EVENTS_SETTLED), ///< Settled flag for MODE handshake.
    NRF_VDETPOF5V0_EVENT_POFWARN = offsetof(NRF_VDETPOF5V0_Type, EVENTS_POFWARN), ///< Power failure warning.
} nrf_vdetpof5v0_event_t;

/** @brief VDETPOF5V0 interrupt mask. */
typedef enum
{
    NRF_VDETPOF5V0_INT_READY_MASK   = VDETPOF5V0_INTENSET_READY_Msk,   ///< Interrupt on READY event.
    NRF_VDETPOF5V0_INT_SETTLED_MASK = VDETPOF5V0_INTENSET_SETTLED_Msk, ///< Interrupt on SETTLED event.
    NRF_VDETPOF5V0_INT_POFWARN_MASK = VDETPOF5V0_INTENSET_POFWARN_Msk, ///< Interrupt on POFWARN event.
} nrf_vdetpof5v0_int_mask_t;

/** @brief VDETPOF5V0 power-fail comparator hysteresis voltage. */
typedef enum
{
    NRF_VDETPOF5V0_HYST_0MV   = VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Val0V000, ///< Hysteresis voltage is 0 mV.
    NRF_VDETPOF5V0_HYST_25MV  = VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Val0V025, ///< Hysteresis voltage is 25 mV.
    NRF_VDETPOF5V0_HYST_50MV  = VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Val0V050, ///< Hysteresis voltage is 50 mV.
    NRF_VDETPOF5V0_HYST_100MV = VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Val0V100, ///< Hysteresis voltage is 100 mV.
} nrf_vdetpof5v0_hyst_t;

/** @brief VDETPOF5V0 status of analog module output signals. */
typedef enum
{
    NRF_VDETPOF5V0_STATUSANA_READY   = VDETPOF5V0_STATUSANA_READY_Msk,   ///< Current value of READY signal.
    NRF_VDETPOF5V0_STATUSANA_SETTLED = VDETPOF5V0_STATUSANA_SETTLED_Msk, ///< Current value of SETTLED signal.
    NRF_VDETPOF5V0_STATUSANA_POFWARN = VDETPOF5V0_STATUSANA_POFWARN_Msk, ///< Current value of POFWARN signal.
} nrf_vdetpof5v0_statusana_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VDETPOF5V0_ANALOG_SIGNAL_PWRUP,   ///< Override PWRUP signal.
    NRF_VDETPOF5V0_ANALOG_SIGNAL_RETAIN,  ///< Override RETAIN signal.
    NRF_VDETPOF5V0_ANALOG_SIGNAL_READY,   ///< Override READY signal.
    NRF_VDETPOF5V0_ANALOG_SIGNAL_SETTLED, ///< Override SETTLED signal.
    NRF_VDETPOF5V0_ANALOG_SIGNAL_POFWARN, ///< Override POFWARN signal.
} nrf_vdetpof5v0_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VDETPOF5V0_DFT_ATB0_SELMUX_ATB0_SENSE  = VDETPOF5V0_DFT_ATB0CONFIG_SELMUX_ATB0sense,  ///< ATB0 voltage for sensing instead of VDIV tap voltage.
    NRF_VDETPOF5V0_DFT_ATB0_SELMUX_CONNECT_VSS = VDETPOF5V0_DFT_ATB0CONFIG_SELMUX_ConnectVSS, ///< Connect VSS to ATB0.
} nrf_vdetpof5v0_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VDETPOF5V0_DFT_ATB1_SELMUX_CONNECT_VREF = VDETPOF5V0_DFT_ATB1CONFIG_SELMUX_ConnectVref, ///< Connect VREF to ATB1.
    NRF_VDETPOF5V0_DFT_ATB1_SELMUX_CONNECT_VDIV = VDETPOF5V0_DFT_ATB1CONFIG_SELMUX_ConnectVdiv, ///< Connect VDIV to ATB1.
} nrf_vdetpof5v0_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VDETPOF5V0_DFT_DTB0_SELMUX_READY   = VDETPOF5V0_DFT_DTB0CONFIG_SELMUX_Ready,   ///< READY_POFAO5V0_AO_0V8.
    NRF_VDETPOF5V0_DFT_DTB0_SELMUX_POFWARN = VDETPOF5V0_DFT_DTB0CONFIG_SELMUX_PofWarn, ///< POFAO5V0_WARN_AO_0V8.
} nrf_vdetpof5v0_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VDETPOF5V0_DFT_DTB1_SELMUX_READYCMP = VDETPOF5V0_DFT_DTB1CONFIG_SELMUX_ReadyCmp, ///< POFAO5V0_READY_CMP_2DTB_0V8.
    NRF_VDETPOF5V0_DFT_DTB1_SELMUX_SETTLED  = VDETPOF5V0_DFT_DTB1CONFIG_SELMUX_Settled,  ///< SETTLED_POFAO5V0_AO_0V8.
} nrf_vdetpof5v0_dft_dtb1_selmux_t;

/** @brief VDETPOF5V0 configuration. */
typedef struct
{
    nrf_vdetpof5v0_hyst_t hyst;      ///< Hysteresis voltage.
    uint8_t               threshold; ///< Threshold voltage level.
} nrf_vdetpof5v0_cfg_t;

/**
 * @brief Function for retrieving the address of the specified VDETPOF5V0 task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_task_address_get(NRF_VDETPOF5V0_Type const * p_reg,
                                                           nrf_vdetpof5v0_task_t       task);

/**
 * @brief Function for triggering the specified VDETPOF5V0 task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_task_trigger(NRF_VDETPOF5V0_Type * p_reg,
                                                   nrf_vdetpof5v0_task_t task);

/**
 * @brief Function for retrieving the address of the specified VDETPOF5V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_event_address_get(NRF_VDETPOF5V0_Type const * p_reg,
                                                            nrf_vdetpof5v0_event_t      event);

/**
 * @brief Function for clearing the specified VDETPOF5V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_event_clear(NRF_VDETPOF5V0_Type *  p_reg,
                                                  nrf_vdetpof5v0_event_t event);

/**
 * @brief Function for retrieving the state of the VDETPOF5V0 event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vdetpof5v0_event_check(NRF_VDETPOF5V0_Type const * p_reg,
                                                  nrf_vdetpof5v0_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be set.
 *                  Use @ref nrf_vdetpof5v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_int_enable(NRF_VDETPOF5V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be set.
 *                  Use @ref nrf_vdetpof5v0_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_int_disable(NRF_VDETPOF5V0_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_vdetpof5v0_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_int_enable_check(NRF_VDETPOF5V0_Type const * p_reg,
                                                           uint32_t                    mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mask of pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_int_pending_get(NRF_VDETPOF5V0_Type const * p_reg);

/**
 * @brief Function for getting status of analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Status of analog module output signal.
 */
NRF_STATIC_INLINE
nrf_vdetpof5v0_statusana_t nrf_vdetpof5v0_statusana_get(NRF_VDETPOF5V0_Type const * p_reg);

/**
 * @brief Function for getting configuration of power-fail comparator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Hysteresis voltage of the power-fail comparator.
 */
NRF_STATIC_INLINE nrf_vdetpof5v0_cfg_t nrf_vdetpof5v0_cfg_get(NRF_VDETPOF5V0_Type const * p_reg);

/**
 * @brief Function for setting configuration of power-fail comparator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] p_cfg Pointer to the configuration of the power-fail comparator.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_cfg_set(NRF_VDETPOF5V0_Type *  p_reg,
                                              nrf_vdetpof5v0_cfg_t * p_cfg);

/**
 * @brief Function for setting voltage trimming value of power-fail comparator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Threshold voltage trimming value. The value is 2's complement value of +0.67% +/- 1.34% steps.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_trim_pofwarn_set(NRF_VDETPOF5V0_Type * p_reg, uint32_t val);

/**
 * @brief Function for getting voltage trimming value of power-fail comparator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Threshold voltage trimming value. The value is 2's complement value of +0.67% +/- 1.34% steps.
 */
NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_trim_pofwarn_get(NRF_VDETPOF5V0_Type const * p_reg);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override, false to disable.
 * @param[in] val    Overriden value.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_override_set(NRF_VDETPOF5V0_Type *          p_reg,
                                                   nrf_vdetpof5v0_analog_signal_t signal,
                                                   bool                           enable,
                                                   uint8_t                        val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_atb0_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_atb0_selmux_t selmux,
                                                          bool                             enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_atb1_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_atb1_selmux_t selmux,
                                                          bool                             enable);


/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_dtb0_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_dtb0_selmux_t selmux,
                                                          bool                             enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_dtb1_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_dtb1_selmux_t selmux,
                                                          bool                             enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_dtb3_config_set(NRF_VDETPOF5V0_Type * p_reg, bool enable);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_task_address_get(NRF_VDETPOF5V0_Type const * p_reg,
                                                           nrf_vdetpof5v0_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_task_trigger(NRF_VDETPOF5V0_Type * p_reg,
                                                   nrf_vdetpof5v0_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_event_address_get(NRF_VDETPOF5V0_Type const * p_reg,
                                                            nrf_vdetpof5v0_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_event_clear(NRF_VDETPOF5V0_Type *  p_reg,
                                                  nrf_vdetpof5v0_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vdetpof5v0_event_check(NRF_VDETPOF5V0_Type const * p_reg,
                                                  nrf_vdetpof5v0_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_int_enable(NRF_VDETPOF5V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_int_disable(NRF_VDETPOF5V0_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_int_enable_check(NRF_VDETPOF5V0_Type const * p_reg,
                                                           uint32_t                    mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_int_pending_get(NRF_VDETPOF5V0_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE
nrf_vdetpof5v0_statusana_t nrf_vdetpof5v0_statusana_get(NRF_VDETPOF5V0_Type const * p_reg)
{
    return (nrf_vdetpof5v0_statusana_t)p_reg->STATUSANA;
}

NRF_STATIC_INLINE nrf_vdetpof5v0_cfg_t nrf_vdetpof5v0_cfg_get(NRF_VDETPOF5V0_Type const * p_reg)
{
    nrf_vdetpof5v0_cfg_t cfg;

    cfg.hyst = (nrf_vdetpof5v0_hyst_t)((p_reg->CONFIG.CFG &
                                        VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Msk) >>
                                       VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Pos);
    cfg.threshold = (uint8_t)((p_reg->CONFIG.POFWARNLVL & VDETPOF5V0_CONFIG_POFWARNLVL_VAL_Msk) >>
                              VDETPOF5V0_CONFIG_POFWARNLVL_VAL_Pos);
    return cfg;
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_cfg_set(NRF_VDETPOF5V0_Type *  p_reg,
                                              nrf_vdetpof5v0_cfg_t * p_cfg)
{
    NRFX_ASSERT(p_cfg);
    p_reg->CONFIG.CFG = (p_cfg->hyst << VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Pos) &
                        VDETPOF5V0_CONFIG_CFG_POFWARNHYST_Msk;
    p_reg->CONFIG.POFWARNLVL = (p_cfg->threshold << VDETPOF5V0_CONFIG_POFWARNLVL_VAL_Pos) &
                               VDETPOF5V0_CONFIG_POFWARNLVL_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_trim_pofwarn_set(NRF_VDETPOF5V0_Type * p_reg, uint32_t val)
{
    p_reg->TRIM.POFWARN = (val << VDETPOF5V0_TRIM_POFWARN_VAL_Pos) &
                          VDETPOF5V0_TRIM_POFWARN_VAL_Msk;
}

NRF_STATIC_INLINE uint32_t nrf_vdetpof5v0_trim_pofwarn_get(NRF_VDETPOF5V0_Type const * p_reg)
{
    return ((p_reg->TRIM.POFWARN & VDETPOF5V0_TRIM_POFWARN_VAL_Msk) >>
            VDETPOF5V0_TRIM_POFWARN_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_override_set(NRF_VDETPOF5V0_Type *          p_reg,
                                                   nrf_vdetpof5v0_analog_signal_t signal,
                                                   bool                           enable,
                                                   uint8_t                        val)
{
    switch (signal)
    {
        case NRF_VDETPOF5V0_ANALOG_SIGNAL_PWRUP:
            p_reg->OVERRIDE.PWRUP = ((enable ?
                                      VDETPOF5V0_OVERRIDE_PWRUP_EN_Enabled :
                                      VDETPOF5V0_OVERRIDE_PWRUP_EN_Disabled) <<
                                     VDETPOF5V0_OVERRIDE_PWRUP_EN_Pos) |
                                    val << VDETPOF5V0_OVERRIDE_PWRUP_VAL_Pos;
            break;
        case NRF_VDETPOF5V0_ANALOG_SIGNAL_RETAIN:
            p_reg->OVERRIDE.RETAIN = ((enable ?
                                       VDETPOF5V0_OVERRIDE_RETAIN_EN_Enabled :
                                       VDETPOF5V0_OVERRIDE_RETAIN_EN_Disabled) <<
                                      VDETPOF5V0_OVERRIDE_RETAIN_EN_Pos) |
                                     val << VDETPOF5V0_OVERRIDE_RETAIN_VAL_Pos;
            break;
        case NRF_VDETPOF5V0_ANALOG_SIGNAL_READY:
            p_reg->OVERRIDE.READY = ((enable ?
                                      VDETPOF5V0_OVERRIDE_READY_EN_Enabled :
                                      VDETPOF5V0_OVERRIDE_READY_EN_Disabled) <<
                                     VDETPOF5V0_OVERRIDE_READY_EN_Pos) |
                                    val << VDETPOF5V0_OVERRIDE_READY_VAL_Pos;
            break;
        case NRF_VDETPOF5V0_ANALOG_SIGNAL_SETTLED:
            p_reg->OVERRIDE.SETTLED = ((enable ?
                                        VDETPOF5V0_OVERRIDE_SETTLED_EN_Enabled :
                                        VDETPOF5V0_OVERRIDE_SETTLED_EN_Disabled) <<
                                       VDETPOF5V0_OVERRIDE_SETTLED_EN_Pos) |
                                      val << VDETPOF5V0_OVERRIDE_SETTLED_VAL_Pos;
            break;
        case NRF_VDETPOF5V0_ANALOG_SIGNAL_POFWARN:
            p_reg->OVERRIDE.POFWARN = ((enable ?
                                        VDETPOF5V0_OVERRIDE_POFWARN_EN_Enabled :
                                        VDETPOF5V0_OVERRIDE_POFWARN_EN_Disabled) <<
                                       VDETPOF5V0_OVERRIDE_POFWARN_EN_Pos) |
                                      val << VDETPOF5V0_OVERRIDE_POFWARN_VAL_Pos;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_atb0_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_atb0_selmux_t selmux,
                                                          bool                             enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VDETPOF5V0_DFT_ATB0CONFIG_EN_Enabled :
                              VDETPOF5V0_DFT_ATB0CONFIG_EN_Disabled) <<
                             VDETPOF5V0_DFT_ATB0CONFIG_EN_Pos) |
                            ((selmux << VDETPOF5V0_DFT_ATB0CONFIG_SELMUX_Pos) &
                             VDETPOF5V0_DFT_ATB0CONFIG_SELMUX_Msk);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_atb1_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_atb1_selmux_t selmux,
                                                          bool                             enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VDETPOF5V0_DFT_ATB1CONFIG_EN_Enabled :
                              VDETPOF5V0_DFT_ATB1CONFIG_EN_Disabled) <<
                             VDETPOF5V0_DFT_ATB1CONFIG_EN_Pos) |
                            ((selmux << VDETPOF5V0_DFT_ATB1CONFIG_SELMUX_Pos) &
                             VDETPOF5V0_DFT_ATB1CONFIG_SELMUX_Msk);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_dtb0_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_dtb0_selmux_t selmux,
                                                          bool                             enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VDETPOF5V0_DFT_DTB0CONFIG_EN_Enabled :
                              VDETPOF5V0_DFT_DTB0CONFIG_EN_Disabled) <<
                             VDETPOF5V0_DFT_DTB0CONFIG_EN_Pos) |
                            ((selmux << VDETPOF5V0_DFT_DTB0CONFIG_SELMUX_Pos) &
                             VDETPOF5V0_DFT_DTB0CONFIG_SELMUX_Msk);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_dtb1_config_set(NRF_VDETPOF5V0_Type *            p_reg,
                                                          nrf_vdetpof5v0_dft_dtb1_selmux_t selmux,
                                                          bool                             enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VDETPOF5V0_DFT_DTB1CONFIG_EN_Enabled :
                              VDETPOF5V0_DFT_DTB1CONFIG_EN_Disabled) <<
                             VDETPOF5V0_DFT_DTB1CONFIG_EN_Pos) |
                            ((selmux << VDETPOF5V0_DFT_DTB1CONFIG_SELMUX_Pos) &
                             VDETPOF5V0_DFT_DTB1CONFIG_SELMUX_Msk);
}

NRF_STATIC_INLINE void nrf_vdetpof5v0_dft_dtb3_config_set(NRF_VDETPOF5V0_Type * p_reg, bool enable)
{
    p_reg->DFT.DTB3CONFIG = ((enable ?
                              VDETPOF5V0_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                              VDETPOF5V0_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                             VDETPOF5V0_DFT_DTB3CONFIG_PWRUPDELTEST_Pos);
}
#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VDETPOF5V0_H__
