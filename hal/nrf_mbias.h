/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_MBIAS_H__
#define NRF_MBIAS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_mbias_hal MBIAS HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Master Bias Generator (MBIAS).
 */

/** @brief MBIAS tasks. */
typedef enum
{
    NRF_MBIAS_TASK_PWR_UP_IBPP    = offsetof(NRF_MBIAS_Type, TASKS_PWRUPIBPP),    ///< Power up IBPP currents.
    NRF_MBIAS_TASK_PWR_UP_IBPSR   = offsetof(NRF_MBIAS_Type, TASKS_PWRUPIBPSR),   ///< Power up IBPSR currents.
    NRF_MBIAS_TASK_PWR_DOWN_IBPP  = offsetof(NRF_MBIAS_Type, TASKS_PWRDOWNIBPP),  ///< Power down IBPP currents.
    NRF_MBIAS_TASK_PWR_DOWN_IBPSR = offsetof(NRF_MBIAS_Type, TASKS_PWRDOWNIBPSR), ///< Power down IBPSR currents.
} nrf_mbias_task_t;

/** @brief MBIAS events. */
typedef enum
{
    NRF_MBIAS_EVENT_READY_IBPP  = offsetof(NRF_MBIAS_Type, EVENTS_READYIBPP),  ///< Power up for IBPP currents is done.
    NRF_MBIAS_EVENT_READY_IBPSR = offsetof(NRF_MBIAS_Type, EVENTS_READYIBPSR), ///< Power up for IBPSR currents is done.
} nrf_mbias_event_t;

/** @brief MBIAS interrupts. */
typedef enum
{
    NRF_MBIAS_INT_READY_IBPP_MASK  = MBIAS_INTEN_READYIBPP_Msk,  ///< Interrupt on READY_IBPP event.
    NRF_MBIAS_INT_READY_IBPSR_MASK = MBIAS_INTEN_READYIBPSR_Msk, ///< Interrupt on READY_IBPSR event.
} nrf_mbias_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_MBIAS_STATUS_NORMAL  = MBIAS_STATUS_MODE_Normal,  ///< Normal mode.
    NRF_MBIAS_STATUS_REFRESH = MBIAS_STATUS_MODE_Refresh, ///< Refresh mode.
} nrf_mbias_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_MBIAS_STATUSANA_READY_IBPP_MASK    = MBIAS_STATUSANA_READYIBPP_Msk,    ///< Current value of the READY_IBPP signal from the analog module.
    NRF_MBIAS_STATUSANA_READY_IBPSR_MASK   = MBIAS_STATUSANA_READYIBPSR_Msk,   ///< Current value of the READY_IBPSR signal from the analog module.
    NRF_MBIAS_STATUSANA_SETTLED_IBPSR_MASK = MBIAS_STATUSANA_SETTLEDIBPSR_Msk, ///< Current value of the SETTLED_IBPSR signal from the analog module.
} nrf_mbias_statusana_mask_t;

/** @brief MBIAS modes. */
typedef enum
{
    NRF_MBIAS_MODE_AUTO    = MBIAS_MODE_MODE_Auto,    ///< Automatically handled by the peripheral.
    NRF_MBIAS_MODE_NORMAL  = MBIAS_MODE_MODE_Normal,  ///< Normal mode - IBPSR currents are continuously ON.
    NRF_MBIAS_MODE_REFRESH = MBIAS_MODE_MODE_Refresh, ///< Refresh mode - IBPSR currents are duty-cycled.
} nrf_mbias_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_MBIAS_ANALOG_SIGNAL_PWRUP_IBPP,    ///< Override PWRUP_IBPP signal.
    NRF_MBIAS_ANALOG_SIGNAL_PWRUP_IBPSR,   ///< Override PWRUP_IBPSR signal.
    NRF_MBIAS_ANALOG_SIGNAL_RETAIN,        ///< Override RETAIN signal.
    NRF_MBIAS_ANALOG_SIGNAL_MODE,          ///< Override MODE signal.
    NRF_MBIAS_ANALOG_SIGNAL_READY_IBPP,    ///< Override READY_IBPP signal.
    NRF_MBIAS_ANALOG_SIGNAL_READY_IBPSR,   ///< Override READY_IBPSR signal.
    NRF_MBIAS_ANALOG_SIGNAL_SETTLED_IBPSR, ///< Override SETTLED_IBPSR signal.
} nrf_mbias_analog_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_MBIAS_DFT_ATB0_SELMUX_NONE      = MBIAS_DFT_ATB0CONFIG_SELMUX_None,                   ///< No mulitplexer is selected.
    NRF_MBIAS_DFT_ATB0_SELMUX_AVSS      = MBIAS_DFT_ATB0CONFIG_SELMUX_ConnectAVSS,            ///< Connect AVSS.
    NRF_MBIAS_DFT_ATB0_SELMUX_IBPSR_8UA = MBIAS_DFT_ATB0CONFIG_SELMUX_Connect8uAIBPSRcurrent, ///< Connect 8uA IBPSR current.
    NRF_MBIAS_DFT_ATB0_SELMUX_IBPP_50NA = MBIAS_DFT_ATB0CONFIG_SELMUX_Connect50nAIBPPcurrent, ///< Connect 50nA IBPP current.
} nrf_mbias_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_MBIAS_DFT_ATB1_SELMUX_VREF_0V9_RFR = MBIAS_DFT_ATB1CONFIG_SELMUX_ConnectbufVREF0V9RFR, ///< Connect buffered VREF_0V9_RFR.
    NRF_MBIAS_DFT_ATB1_SELMUX_VREF_0V9     = MBIAS_DFT_ATB1CONFIG_SELMUX_ConnectbufVREF0V9,    ///< Connect buffered VREF_0V9.
} nrf_mbias_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_MBIAS_DFT_DTB0_SELMUX_READY_IBPP            = MBIAS_DFT_DTB0CONFIG_SELMUX_READYIBPP,       ///< READY_IBPP is selected.
    NRF_MBIAS_DFT_DTB0_SELMUX_READY_IBPSR           = MBIAS_DFT_DTB0CONFIG_SELMUX_READYIBPSR,      ///< READY_IBPSR is selected.
    NRF_MBIAS_DFT_DTB0_SELMUX_SETTLED_IBPSR_DIGITAL = MBIAS_DFT_DTB0CONFIG_SELMUX_SETTLEDIBPSRDIG, ///< SETTLED_IBPSR_DIGITAL is selected.
    NRF_MBIAS_DFT_DTB0_SELMUX_SETTLED_IBPSR_ANALOG  = MBIAS_DFT_DTB0CONFIG_SELMUX_SETTLEDIBPSRANA, ///< SETTLED_IBPSR_ANALOG is selected.
} nrf_mbias_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_MBIAS_DFT_DTB1_SELMUX_OSC_RFR_ANALOG = MBIAS_DFT_DTB1CONFIG_SELMUX_OSCRFRANA,    ///< OSC_RFR_ANALOG is selected.
    NRF_MBIAS_DFT_DTB1_SELMUX_SETTLED_IBPSR  = MBIAS_DFT_DTB1CONFIG_SELMUX_SETTLEDIBPSR, ///< SETTLED_IBPSR is selected.
} nrf_mbias_dft_dtb1_selmux_t;

/** @brief Select multiplexer for DTB3. */
typedef enum
{
    NRF_MBIAS_DFT_DTB3_SELMUX_PWRUP_IBPP  = MBIAS_DFT_DTB3CONFIG_SELMUX_PWRUPIBPP,  ///< PWRUP_IBPP is selected.
    NRF_MBIAS_DFT_DTB3_SELMUX_PWRUP_IBPSR = MBIAS_DFT_DTB3CONFIG_SELMUX_PWRUPIBPSR, ///< PWRUP_IBPSR is selected.
} nrf_mbias_dft_dtb3_selmux_t;

/** @brief Values for IBPP current trimming. */
typedef enum
{
    NRF_MBIAS_TRIM_IBPP_NORMAL = MBIAS_TRIM_MBIASIBPP_VAL_Normal,    ///< Normal trim value.
    NRF_MBIAS_TRIM_IBPP_23     = MBIAS_TRIM_MBIASIBPP_VAL_Val23,     ///< The trim value is 23%.
    NRF_MBIAS_TRIM_IBPP_54     = MBIAS_TRIM_MBIASIBPP_VAL_Val54,     ///< The trim value is 54%.
    NRF_MBIAS_TRIM_IBPP_98     = MBIAS_TRIM_MBIASIBPP_VAL_Val98,     ///< The trim value is 98%.
    NRF_MBIAS_TRIM_IBPP_NEG_51 = MBIAS_TRIM_MBIASIBPP_VAL_ValNeg51,  ///< The trim value is -51%.
    NRF_MBIAS_TRIM_IBPP_NEG_42 = MBIAS_TRIM_MBIASIBPP_VAL_ValNeg42,  ///< The trim value is -42%.
    NRF_MBIAS_TRIM_IBPP_NEG_31 = MBIAS_TRIM_MBIASIBPP_VAL_ValNeg31,  ///< The trim value is -31%.
    NRF_MBIAS_TRIM_IBPP_NEG_18 = MBIAS_TRIM_MBIASIBPP_VAL_ValNeg18,  ///< The trim value is -18%.
} nrf_mbias_trim_ibpp_vref_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool external_current;       ///< Use 8uA external current on ATB0_1V8 as reference for IBPSR.
    bool vref_0v9_output;        ///< Enable VREF_0V9 output.
    bool ibpsr_mirror_extension; ///< Disable IBPSR mirror extension.
} nrf_mbias_tcfg_t;

/**
 * @brief Function for activating the specified MBIAS task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_mbias_task_trigger(NRF_MBIAS_Type * p_reg, nrf_mbias_task_t task);

/**
 * @brief Function for getting the address of the specified MBIAS task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_mbias_task_address_get(NRF_MBIAS_Type const * p_reg,
                                                      nrf_mbias_task_t       task);

/**
 * @brief Function for clearing the specified MBIAS event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_mbias_event_clear(NRF_MBIAS_Type *  p_reg, nrf_mbias_event_t event);

/**
 * @brief Function for retrieving the state of the MBIAS event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_mbias_event_check(NRF_MBIAS_Type const * p_reg, nrf_mbias_event_t event);

/**
 * @brief Function for getting the address of the specified MBIAS event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_mbias_event_address_get(NRF_MBIAS_Type const * p_reg,
                                                       nrf_mbias_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_mbias_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_mbias_int_enable(NRF_MBIAS_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_mbias_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_mbias_int_disable(NRF_MBIAS_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_mbias_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_mbias_int_enable_check(NRF_MBIAS_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_mbias_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_mbias_int_pending_get(NRF_MBIAS_Type const * p_reg);

/**
 * @brief Function for getting MBIAS status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_mbias_status_t nrf_mbias_status_get(NRF_MBIAS_Type const * p_reg);

/**
 * @brief Function for getting MBIAS status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return STATUSANA register value.
 *         Use @ref nrf_mbias_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_mbias_statusana_get(NRF_MBIAS_Type const * p_reg);

/**
 * @brief Function for enabling doubling the acquisition time in refresh mode.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the doubling of the acquisition time is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_mbias_acq_time_config_set(NRF_MBIAS_Type * p_reg, bool enable);

/**
 * @brief Function for getting the configuration of the acquisition time in refresh mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The doubling of the acquisition time is enabled.
 * @retval false The doubling of the acquisition time is disabled.
 */
NRF_STATIC_INLINE bool nrf_mbias_acq_time_config_get(NRF_MBIAS_Type const * p_reg);

/**
 * @brief Function for setting IBPP current trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   IBPP current trimming value.
 */
NRF_STATIC_INLINE void nrf_mbias_trim_ibpp_set(NRF_MBIAS_Type *           p_reg,
                                               nrf_mbias_trim_ibpp_vref_t val);

/**
 * @brief Function for getting IBPP current trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return IBPP current trimming value.
 */
NRF_STATIC_INLINE nrf_mbias_trim_ibpp_vref_t nrf_mbias_trim_ibpp_get(NRF_MBIAS_Type const * p_reg);

/**
 * @brief Function for setting IBPSR current and VREF voltage trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   IBPSR current and VREF voltage trimming value.
 *                  The value is 2's complement value from -7.4% to 8.0% in steps of 0.5%.
 */
NRF_STATIC_INLINE void nrf_mbias_trim_ibpsr_vref_set(NRF_MBIAS_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting IBPSR current and VREF voltage trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return IBPSR current and VREF voltage trimming value.
 *         The value is 2's complement value from -7.4% to 8.0% in steps of 0.5%.
 */
NRF_STATIC_INLINE uint8_t nrf_mbias_trim_ibpsr_vref_get(NRF_MBIAS_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  True if lock is enabled. False if lock is disabled, so mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_mbias_mirror_lock_set(NRF_MBIAS_Type * p_reg, bool lock);

/**
 * @brief Function for setting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_mbias_mode_set(NRF_MBIAS_Type * p_reg, nrf_mbias_mode_t mode);

/**
 * @brief Function for getting voltage detector mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_mbias_mode_t nrf_mbias_mode_get(NRF_MBIAS_Type const * p_reg);

/**
 * @brief Function for overriding signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override, false to disable.
 * @param[in] val    Overriden value.
 */
NRF_STATIC_INLINE void nrf_mbias_override_set(NRF_MBIAS_Type *          p_reg,
                                              nrf_mbias_analog_signal_t signal,
                                              bool                      enable,
                                              uint8_t                   val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_mbias_dft_atb0_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_atb0_selmux_t selmux,
                                                     bool                        enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_mbias_dft_atb1_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_atb1_selmux_t selmux,
                                                     bool                        enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_mbias_dft_dtb0_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_dtb0_selmux_t selmux,
                                                     bool                        enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_mbias_dft_dtb1_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_dtb1_selmux_t selmux,
                                                     bool                        enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable PWRUP delay test circuit.
 */
NRF_STATIC_INLINE void nrf_mbias_dft_dtb3_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_dtb3_selmux_t selmux,
                                                     bool                        enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_mbias_dft_tcfg_config_set(NRF_MBIAS_Type * p_reg, nrf_mbias_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_mbias_task_trigger(NRF_MBIAS_Type * p_reg, nrf_mbias_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_mbias_task_address_get(NRF_MBIAS_Type const * p_reg,
                                                      nrf_mbias_task_t       task)
{
    return nrf_task_event_address_get(p_reg, task);
}

NRF_STATIC_INLINE void nrf_mbias_event_clear(NRF_MBIAS_Type *  p_reg, nrf_mbias_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_mbias_event_check(NRF_MBIAS_Type const * p_reg, nrf_mbias_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_mbias_event_address_get(NRF_MBIAS_Type const * p_reg,
                                                       nrf_mbias_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_mbias_int_enable(NRF_MBIAS_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_mbias_int_disable(NRF_MBIAS_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_mbias_int_enable_check(NRF_MBIAS_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_mbias_int_pending_get(NRF_MBIAS_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_mbias_status_t nrf_mbias_status_get(NRF_MBIAS_Type const * p_reg)
{
    return (nrf_mbias_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_mbias_statusana_get(NRF_MBIAS_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_mbias_acq_time_config_set(NRF_MBIAS_Type * p_reg, bool enable)
{
    p_reg->CONFIG.CFG = (enable ?
                         MBIAS_CONFIG_CFG_DOUBLEACQ_Enabled :
                         MBIAS_CONFIG_CFG_DOUBLEACQ_Disabled) <<
                        MBIAS_CONFIG_CFG_DOUBLEACQ_Pos;
}

NRF_STATIC_INLINE bool nrf_mbias_acq_time_config_get(NRF_MBIAS_Type const * p_reg)
{
    return ((p_reg->CONFIG.CFG & MBIAS_CONFIG_CFG_DOUBLEACQ_Msk) >>
            MBIAS_CONFIG_CFG_DOUBLEACQ_Pos) == MBIAS_CONFIG_CFG_DOUBLEACQ_Enabled;
}

NRF_STATIC_INLINE void nrf_mbias_trim_ibpp_set(NRF_MBIAS_Type *           p_reg,
                                               nrf_mbias_trim_ibpp_vref_t val)
{
    p_reg->TRIM.MBIASIBPP = (uint32_t)val << MBIAS_TRIM_MBIASIBPP_VAL_Pos;
}

NRF_STATIC_INLINE nrf_mbias_trim_ibpp_vref_t nrf_mbias_trim_ibpp_get(NRF_MBIAS_Type const * p_reg)
{
    return (nrf_mbias_trim_ibpp_vref_t)((p_reg->TRIM.MBIASIBPP & MBIAS_TRIM_MBIASIBPP_VAL_Msk) >>
                                        MBIAS_TRIM_MBIASIBPP_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_trim_ibpsr_vref_set(NRF_MBIAS_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.MBIASIBPSR = (uint32_t)val << MBIAS_TRIM_MBIASIBPSR_VAL_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_mbias_trim_ibpsr_vref_get(NRF_MBIAS_Type const * p_reg)
{
    return (uint8_t)((p_reg->TRIM.MBIASIBPSR & MBIAS_TRIM_MBIASIBPSR_VAL_Msk) >>
                     MBIAS_TRIM_MBIASIBPSR_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_mirror_lock_set(NRF_MBIAS_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? MBIAS_MIRROR_LOCK_Enabled : MBIAS_MIRROR_LOCK_Disabled) <<
                    MBIAS_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_mbias_mode_set(NRF_MBIAS_Type * p_reg, nrf_mbias_mode_t mode)
{
    p_reg->MODE = (uint32_t)mode << MBIAS_MODE_MODE_Pos;
}

NRF_STATIC_INLINE nrf_mbias_mode_t nrf_mbias_mode_get(NRF_MBIAS_Type const * p_reg)
{
    return (nrf_mbias_mode_t)((p_reg->MODE & MBIAS_MODE_MODE_Msk) >> MBIAS_MODE_MODE_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_override_set(NRF_MBIAS_Type *          p_reg,
                                              nrf_mbias_analog_signal_t signal,
                                              bool                      enable,
                                              uint8_t                   val)
{
    switch (signal)
    {
        case NRF_MBIAS_ANALOG_SIGNAL_PWRUP_IBPP:
            p_reg->OVERRIDE.PWRUPIBPP = ((enable ?
                                          MBIAS_OVERRIDE_PWRUPIBPP_EN_Enabled :
                                          MBIAS_OVERRIDE_PWRUPIBPP_EN_Disabled) <<
                                         MBIAS_OVERRIDE_PWRUPIBPP_EN_Pos) |
                                        ((uint32_t)val << MBIAS_OVERRIDE_PWRUPIBPP_VAL_Pos);
            break;
        case NRF_MBIAS_ANALOG_SIGNAL_PWRUP_IBPSR:
            p_reg->OVERRIDE.PWRUPIBPSR = ((enable ?
                                           MBIAS_OVERRIDE_PWRUPIBPSR_EN_Enabled :
                                           MBIAS_OVERRIDE_PWRUPIBPSR_EN_Disabled) <<
                                          MBIAS_OVERRIDE_PWRUPIBPSR_EN_Pos) |
                                         ((uint32_t)val << MBIAS_OVERRIDE_PWRUPIBPSR_VAL_Pos);
            break;
        case NRF_MBIAS_ANALOG_SIGNAL_RETAIN:
            p_reg->OVERRIDE.RETAIN = ((enable ?
                                       MBIAS_OVERRIDE_RETAIN_EN_Enabled :
                                       MBIAS_OVERRIDE_RETAIN_EN_Disabled) <<
                                      MBIAS_OVERRIDE_RETAIN_EN_Pos) |
                                     ((uint32_t)val << MBIAS_OVERRIDE_RETAIN_VAL_Pos);
            break;
        case NRF_MBIAS_ANALOG_SIGNAL_MODE:
            p_reg->OVERRIDE.MODE = ((enable ?
                                     MBIAS_OVERRIDE_MODE_EN_Enabled :
                                     MBIAS_OVERRIDE_MODE_EN_Disabled) <<
                                    MBIAS_OVERRIDE_MODE_EN_Pos) |
                                   ((uint32_t)val << MBIAS_OVERRIDE_MODE_VAL_Pos);
            break;
        case NRF_MBIAS_ANALOG_SIGNAL_READY_IBPP:
            p_reg->OVERRIDE.READYIBPP = ((enable ?
                                          MBIAS_OVERRIDE_READYIBPP_EN_Enabled :
                                          MBIAS_OVERRIDE_READYIBPP_EN_Disabled) <<
                                         MBIAS_OVERRIDE_READYIBPP_EN_Pos) |
                                        ((uint32_t)val << MBIAS_OVERRIDE_READYIBPP_VAL_Pos);
            break;
        case NRF_MBIAS_ANALOG_SIGNAL_READY_IBPSR:
            p_reg->OVERRIDE.READYIBPSR = ((enable ?
                                           MBIAS_OVERRIDE_READYIBPSR_EN_Enabled :
                                           MBIAS_OVERRIDE_READYIBPSR_EN_Disabled) <<
                                          MBIAS_OVERRIDE_READYIBPSR_EN_Pos) |
                                         ((uint32_t)val << MBIAS_OVERRIDE_READYIBPSR_VAL_Pos);
            break;
        case NRF_MBIAS_ANALOG_SIGNAL_SETTLED_IBPSR:
            p_reg->OVERRIDE.SETTLEDIBPSR = ((enable ?
                                             MBIAS_OVERRIDE_SETTLEDIBPSR_EN_Enabled :
                                             MBIAS_OVERRIDE_SETTLEDIBPSR_EN_Disabled) <<
                                            MBIAS_OVERRIDE_SETTLEDIBPSR_EN_Pos) |
                                           ((uint32_t)val << MBIAS_OVERRIDE_SETTLEDIBPSR_VAL_Pos);
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_mbias_dft_atb0_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_atb0_selmux_t selmux,
                                                     bool                        enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              MBIAS_DFT_ATB0CONFIG_EN_Enabled :
                              MBIAS_DFT_ATB0CONFIG_EN_Disabled) <<
                             MBIAS_DFT_ATB0CONFIG_EN_Pos) |
                            ((uint32_t)selmux << MBIAS_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_dft_atb1_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_atb1_selmux_t selmux,
                                                     bool                        enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              MBIAS_DFT_ATB1CONFIG_EN_Enabled :
                              MBIAS_DFT_ATB1CONFIG_EN_Disabled) <<
                             MBIAS_DFT_ATB1CONFIG_EN_Pos) |
                            ((uint32_t)selmux << MBIAS_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_dft_dtb0_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_dtb0_selmux_t selmux,
                                                     bool                        enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              MBIAS_DFT_DTB0CONFIG_EN_Enabled :
                              MBIAS_DFT_DTB0CONFIG_EN_Disabled) <<
                             MBIAS_DFT_DTB0CONFIG_EN_Pos) |
                            ((uint32_t)selmux << MBIAS_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_dft_dtb1_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_dtb1_selmux_t selmux,
                                                     bool                        enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              MBIAS_DFT_DTB1CONFIG_EN_Enabled :
                              MBIAS_DFT_DTB1CONFIG_EN_Disabled) <<
                             MBIAS_DFT_DTB1CONFIG_EN_Pos) |
                            ((uint32_t)selmux << MBIAS_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_dft_dtb3_config_set(NRF_MBIAS_Type *            p_reg,
                                                     nrf_mbias_dft_dtb3_selmux_t selmux,
                                                     bool                        enable)
{
    p_reg->DFT.DTB3CONFIG = ((enable ?
                              MBIAS_DFT_DTB3CONFIG_PWRUPDELTEST_Enabled :
                              MBIAS_DFT_DTB3CONFIG_PWRUPDELTEST_Disabled) <<
                             MBIAS_DFT_DTB3CONFIG_PWRUPDELTEST_Pos) |
                            ((uint32_t)selmux << MBIAS_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_mbias_dft_tcfg_config_set(NRF_MBIAS_Type * p_reg, nrf_mbias_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.external_current ?
                        MBIAS_DFT_TCFG_EXTERNALCURRENT_Enabled :
                        MBIAS_DFT_TCFG_EXTERNALCURRENT_Disabled) <<
                       MBIAS_DFT_TCFG_EXTERNALCURRENT_Pos) |
                      ((tcfg.vref_0v9_output ?
                        MBIAS_DFT_TCFG_VREF0V9OUTPUT_Enabled :
                        MBIAS_DFT_TCFG_VREF0V9OUTPUT_Disabled) <<
                       MBIAS_DFT_TCFG_VREF0V9OUTPUT_Pos) |
                      ((tcfg.ibpsr_mirror_extension ?
                        MBIAS_DFT_TCFG_IBPSRMIRROREXTN_Enabled :
                        MBIAS_DFT_TCFG_IBPSRMIRROREXTN_Disabled) <<
                       MBIAS_DFT_TCFG_IBPSRMIRROREXTN_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_MBIAS_H__
