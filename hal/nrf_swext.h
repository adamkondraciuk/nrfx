/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_SWEXT_H__
#define NRF_SWEXT_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_swext_hal SWEXT HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Switch for 1.8V to External (SWEXT).
 */

#if defined(SWEXT_CONTROL_ENABLE_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether CONTROL register is present. */
#define NRF_SWEXT_HAS_CONTROL 1
#else
#define NRF_SWEXT_HAS_CONTROL 0
#endif

#if !NRF_SWEXT_HAS_CONTROL
/** @brief SWEXT tasks. */
typedef enum
{
    NRF_SWEXT_TASK_PWR_UP   = offsetof(NRF_SWEXT_Type, TASKS_PWRUP),   ///< Power up switch.
    NRF_SWEXT_TASK_PWR_DOWN = offsetof(NRF_SWEXT_Type, TASKS_PWRDOWN), ///< Power down switch.
} nrf_swext_task_t;

/** @brief SWEXT events. */
typedef enum
{
    NRF_SWEXT_EVENT_READY   = offsetof(NRF_SWEXT_Type, EVENTS_READY),   ///< Power up done.
    NRF_SWEXT_EVENT_SETTLED = offsetof(NRF_SWEXT_Type, EVENTS_SETTLED), ///< Settled flag.
} nrf_swext_event_t;

/** @brief SWEXT interrupts. */
typedef enum
{
    NRF_SWEXT_INT_READY_MASK   = SWEXT_INTEN_READY_Msk,   ///< Interrupt on READY event.
    NRF_SWEXT_INT_SETTLED_MASK = SWEXT_INTEN_SETTLED_Msk, ///< Interrupt on SETTLED event.
} nrf_swext_int_mask_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_SWEXT_STATUSANA_READY_MASK   = SWEXT_STATUSANA_READY_Msk,   ///< Current value of READY signal.
    NRF_SWEXT_STATUSANA_SETTLED_MASK = SWEXT_STATUSANA_SETTLED_Msk, ///< Current value of SETTLED signal.
} nrf_swext_statusana_mask_t;

/** @brief Switch soft start current limitations. */
typedef enum
{
    NRF_SWEXT_CURR_LIMIT_DEFAULT = SWEXT_CONFIG_SWITCH_ILIMSOFTSTART_IlimDefault, ///< Default current limitation.
    NRF_SWEXT_CURR_LIMIT_0X5     = SWEXT_CONFIG_SWITCH_ILIMSOFTSTART_Ilim0x5,     ///< 0.5x current limitation.
    NRF_SWEXT_CURR_LIMIT_1X5     = SWEXT_CONFIG_SWITCH_ILIMSOFTSTART_Ilim1x5,     ///< 1.5x current limitation.
    NRF_SWEXT_CURR_LIMIT_2X0     = SWEXT_CONFIG_SWITCH_ILIMSOFTSTART_Ilim2x0,     ///< 2.0x current limitation.
} nrf_swext_curr_limit_t;

/** @brief SWEXT switch configuration structure. */
typedef struct
{
    bool                   soft_start_enable; ///< True if the soft start is to be enabled, false otherwise.
    nrf_swext_curr_limit_t curr_limit;        ///< Switch soft start current limiter.
} nrf_swext_switch_config_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_SWEXT_ANALOG_SIGNAL_PWRUP,   ///< Override PWRUP signal.
    NRF_SWEXT_ANALOG_SIGNAL_RETAIN,  ///< Override RETAIN signal.
    NRF_SWEXT_ANALOG_SIGNAL_READY,   ///< Override READY signal.
    NRF_SWEXT_ANALOG_SIGNAL_SETTLED, ///< Override SETTLED signal.
} nrf_swext_analog_signal_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_SWEXT_DFT_DTB0_SELMUX_SPARE0   = SWEXT_DFT_DTB0CONFIG_SELMUX_Spare0,  ///< None selected, logic 0.
    NRF_SWEXT_DFT_DTB0_SELMUX_PWRUP_SW = SWEXT_DFT_DTB0CONFIG_SELMUX_PwrupSw, ///< PWRUP_SW.
} nrf_swext_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_SWEXT_DFT_DTB1_SELMUX_READY   = SWEXT_DFT_DTB1CONFIG_SELMUX_Ready,   ///< READY_P_SW.
    NRF_SWEXT_DFT_DTB1_SELMUX_SETTLED = SWEXT_DFT_DTB1CONFIG_SELMUX_Settled, ///< SETTLED_P_SW.
} nrf_swext_dft_dtb1_selmux_t;

/**
 * @brief Function for activating the specified SWEXT task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_swext_task_trigger(NRF_SWEXT_Type * p_reg,
                                              nrf_swext_task_t task);

/**
 * @brief Function for getting the address of the specified SWEXT task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_swext_task_address_get(NRF_SWEXT_Type const * p_reg,
                                                      nrf_swext_task_t       task);

/**
 * @brief Function for clearing the specified SWEXT event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_swext_event_clear(NRF_SWEXT_Type *  p_reg,
                                             nrf_swext_event_t event);

/**
 * @brief Function for retrieving the state of the SWEXT event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_swext_event_check(NRF_SWEXT_Type const * p_reg,
                                             nrf_swext_event_t      event);

/**
 * @brief Function for getting the address of the specified SWEXT event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_swext_event_address_get(NRF_SWEXT_Type const * p_reg,
                                                       nrf_swext_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_swext_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_swext_int_enable(NRF_SWEXT_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_swext_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_swext_int_disable(NRF_SWEXT_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_swext_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_swext_int_enable_check(NRF_SWEXT_Type const * p_reg,
                                                      uint32_t               mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_swext_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_swext_int_pending_get(NRF_SWEXT_Type const * p_reg);

/**
 * @brief Function for getting SWEXT status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return STATUSANA register value.
 *         Use @ref nrf_swext_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_swext_statusana_get(NRF_SWEXT_Type const * p_reg);

/**
 * @brief Function for setting configuration of the switch.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cfg   Switch configuration.
 */
NRF_STATIC_INLINE void nrf_swext_config_switch_set(NRF_SWEXT_Type *          p_reg,
                                                   nrf_swext_switch_config_t cfg);

/**
 * @brief Function for getting configuration of the switch.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Switch configuration.
 */
NRF_STATIC_INLINE
nrf_swext_switch_config_t nrf_swext_config_switch_get(NRF_SWEXT_Type const * p_reg);

/**
 * @brief Function for setting configuration of the powerdown ground clamp.
 *
 * @note When the powerdown ground clamp is enabled, and the switch is powered down,
 *       the output is connected to the ground.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the powerdown ground clamp is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_swext_config_pwr_down_clamp_set(NRF_SWEXT_Type * p_reg, bool enable);

/**
 * @brief Function for getting configuration of the powerdown ground clamp.
 *
 * @note When the powerdown ground clamp is enabled, and the switch is powered down,
 *       the output is connected to the ground.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The powerdown ground clamp is enabled.
 * @retval false The powerdown ground clamp is disabled.
 */
NRF_STATIC_INLINE bool nrf_swext_config_pwr_down_clamp_get(NRF_SWEXT_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  True if lock is enabled. False if lock is disabled, so mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_swext_mirror_lock_set(NRF_SWEXT_Type * p_reg, bool lock);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override, false to disable it.
 * @param[in] val    Overridden value.
 */
NRF_STATIC_INLINE void nrf_swext_override_set(NRF_SWEXT_Type *          p_reg,
                                              nrf_swext_analog_signal_t signal,
                                              bool                      enable,
                                              uint8_t                   val);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus, false to disable.
 */
NRF_STATIC_INLINE void nrf_swext_dft_dtb0_config_set(NRF_SWEXT_Type *            p_reg,
                                                     nrf_swext_dft_dtb0_selmux_t selmux,
                                                     bool                        enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus, false to disable.
 */
NRF_STATIC_INLINE void nrf_swext_dft_dtb1_config_set(NRF_SWEXT_Type *            p_reg,
                                                     nrf_swext_dft_dtb1_selmux_t selmux,
                                                     bool                        enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable PWRUP delay test circuit, false to disable.
 */
NRF_STATIC_INLINE void nrf_swext_dft_dtb3_config_set(NRF_SWEXT_Type * p_reg,
                                                     bool             enable);

#else
/**
 * @brief Function for enabling the switch for 1.8V supply to the external circuit.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the switch is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_swext_control_set(NRF_SWEXT_Type * p_reg, bool enable);

/**
 * @brief Function for getting configuration of the switch control for the 1.8V supply to the external circuit.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The switch is enabled.
 * @retval false The switch is disabled.
 */
NRF_STATIC_INLINE bool nrf_swext_control_get(NRF_SWEXT_Type const * p_reg);
#endif // !NRF_SWEXT_HAS_CONTROL

#ifndef NRF_DECLARE_ONLY

#if !NRF_SWEXT_HAS_CONTROL
NRF_STATIC_INLINE void nrf_swext_task_trigger(NRF_SWEXT_Type * p_reg,
                                              nrf_swext_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_swext_task_address_get(NRF_SWEXT_Type const * p_reg,
                                                      nrf_swext_task_t       task)
{
    return nrf_task_event_address_get(p_reg, task);
}

NRF_STATIC_INLINE void nrf_swext_event_clear(NRF_SWEXT_Type *  p_reg,
                                             nrf_swext_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_swext_event_check(NRF_SWEXT_Type const * p_reg,
                                             nrf_swext_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_swext_event_address_get(NRF_SWEXT_Type const * p_reg,
                                                       nrf_swext_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_swext_int_enable(NRF_SWEXT_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_swext_int_disable(NRF_SWEXT_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_swext_int_enable_check(NRF_SWEXT_Type const * p_reg,
                                                      uint32_t               mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_swext_int_pending_get(NRF_SWEXT_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE uint32_t nrf_swext_statusana_get(NRF_SWEXT_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_swext_config_switch_set(NRF_SWEXT_Type *          p_reg,
                                                   nrf_swext_switch_config_t cfg)
{
    p_reg->CONFIG.SWITCH = ((cfg.soft_start_enable ?
                             SWEXT_CONFIG_SWITCH_SOFTSTART_Enabled :
                             SWEXT_CONFIG_SWITCH_SOFTSTART_Disabled) <<
                            SWEXT_CONFIG_SWITCH_SOFTSTART_Pos) |
                           (cfg.curr_limit << SWEXT_CONFIG_SWITCH_ILIMSOFTSTART_Pos);
}

NRF_STATIC_INLINE
nrf_swext_switch_config_t nrf_swext_config_switch_get(NRF_SWEXT_Type const * p_reg)
{
    nrf_swext_switch_config_t cfg;
    uint32_t reg = p_reg->CONFIG.SWITCH;

    cfg.soft_start_enable = ((reg & SWEXT_CONFIG_SWITCH_SOFTSTART_Msk) >>
                             SWEXT_CONFIG_SWITCH_SOFTSTART_Pos) ==
                            SWEXT_CONFIG_SWITCH_SOFTSTART_Enabled;
    cfg.curr_limit = (nrf_swext_curr_limit_t)((reg & SWEXT_CONFIG_SWITCH_ILIMSOFTSTART_Msk) >>
                                              SWEXT_CONFIG_SWITCH_ILIMSOFTSTART_Pos);

    return cfg;
}

NRF_STATIC_INLINE void nrf_swext_config_pwr_down_clamp_set(NRF_SWEXT_Type * p_reg, bool enable)
{
    p_reg->CONFIG.PDCLAMP = (enable ?
                             SWEXT_CONFIG_PDCLAMP_CLAMPENABLE_Enabled :
                             SWEXT_CONFIG_PDCLAMP_CLAMPENABLE_Disabled) <<
                            SWEXT_CONFIG_PDCLAMP_CLAMPENABLE_Pos;
}

NRF_STATIC_INLINE bool nrf_swext_config_pwr_down_clamp_get(NRF_SWEXT_Type const * p_reg)
{
    return ((p_reg->CONFIG.PDCLAMP & SWEXT_CONFIG_PDCLAMP_CLAMPENABLE_Msk) >>
            SWEXT_CONFIG_PDCLAMP_CLAMPENABLE_Pos) == SWEXT_CONFIG_PDCLAMP_CLAMPENABLE_Enabled;
}

NRF_STATIC_INLINE void nrf_swext_mirror_lock_set(NRF_SWEXT_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? SWEXT_MIRROR_LOCK_Enabled : SWEXT_MIRROR_LOCK_Disabled) <<
                    SWEXT_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_swext_override_set(NRF_SWEXT_Type *          p_reg,
                                              nrf_swext_analog_signal_t signal,
                                              bool                      enable,
                                              uint8_t                   val)
{
    switch (signal)
    {
        case NRF_SWEXT_ANALOG_SIGNAL_PWRUP:
            p_reg->OVERRIDE.PWRUP = ((enable ?
                                      SWEXT_OVERRIDE_PWRUP_EN_Enabled :
                                      SWEXT_OVERRIDE_PWRUP_EN_Disabled) <<
                                     SWEXT_OVERRIDE_PWRUP_EN_Pos) |
                                    ((uint32_t)val << SWEXT_OVERRIDE_PWRUP_VAL_Pos);
            break;
        case NRF_SWEXT_ANALOG_SIGNAL_RETAIN:
            p_reg->OVERRIDE.RETAIN = ((enable ?
                                       SWEXT_OVERRIDE_RETAIN_EN_Enabled :
                                       SWEXT_OVERRIDE_RETAIN_EN_Disabled) <<
                                      SWEXT_OVERRIDE_RETAIN_EN_Pos) |
                                     ((uint32_t)val << SWEXT_OVERRIDE_RETAIN_VAL_Pos);
            break;
        case NRF_SWEXT_ANALOG_SIGNAL_READY:
            p_reg->OVERRIDE.READY = ((enable ?
                                      SWEXT_OVERRIDE_READY_EN_Enabled :
                                      SWEXT_OVERRIDE_READY_EN_Disabled) <<
                                     SWEXT_OVERRIDE_READY_EN_Pos) |
                                    ((uint32_t)val << SWEXT_OVERRIDE_READY_VAL_Pos);
            break;
        case NRF_SWEXT_ANALOG_SIGNAL_SETTLED:
            p_reg->OVERRIDE.SETTLED = ((enable ?
                                        SWEXT_OVERRIDE_SETTLED_EN_Enabled :
                                        SWEXT_OVERRIDE_SETTLED_EN_Disabled) <<
                                       SWEXT_OVERRIDE_SETTLED_EN_Pos) |
                                      ((uint32_t)val << SWEXT_OVERRIDE_SETTLED_VAL_Pos);
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_swext_dft_dtb0_config_set(NRF_SWEXT_Type *            p_reg,
                                                     nrf_swext_dft_dtb0_selmux_t selmux,
                                                     bool                        enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              SWEXT_DFT_DTB0CONFIG_EN_Enabled :
                              SWEXT_DFT_DTB0CONFIG_EN_Disabled) <<
                             SWEXT_DFT_DTB0CONFIG_EN_Pos) |
                            ((uint32_t)selmux << SWEXT_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_swext_dft_dtb1_config_set(NRF_SWEXT_Type *            p_reg,
                                                     nrf_swext_dft_dtb1_selmux_t selmux,
                                                     bool                        enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              SWEXT_DFT_DTB1CONFIG_EN_Enabled :
                              SWEXT_DFT_DTB1CONFIG_EN_Disabled) <<
                             SWEXT_DFT_DTB1CONFIG_EN_Pos) |
                            ((uint32_t)selmux << SWEXT_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_swext_dft_dtb3_config_set(NRF_SWEXT_Type * p_reg,
                                                     bool             enable)
{
    p_reg->DFT.DTB3CONFIG = (enable ?
                             SWEXT_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                             SWEXT_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                            SWEXT_DFT_DTB3CONFIG_PWRUPDELTEST_Pos;
}

#else
NRF_STATIC_INLINE void nrf_swext_control_set(NRF_SWEXT_Type * p_reg, bool enable)
{
    p_reg->CONTROL = (enable ? SWEXT_CONTROL_ENABLE_Enable : SWEXT_CONTROL_ENABLE_Disable) <<
                     SWEXT_CONTROL_ENABLE_Pos;
}

NRF_STATIC_INLINE bool nrf_swext_control_get(NRF_SWEXT_Type const * p_reg)
{
    return ((p_reg->CONTROL & SWEXT_CONTROL_ENABLE_Msk) >>
            SWEXT_CONTROL_ENABLE_Pos) == SWEXT_CONTROL_ENABLE_Enable;
}
#endif // !NRF_SWEXT_HAS_CONTROL

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_SWEXT_H__
