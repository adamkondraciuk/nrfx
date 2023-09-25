/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_HFXO_H__
#define NRF_HFXO_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_hfxo_hal HFXO HAL
 * @{
 * @ingroup nrf_clock
 * @brief   Hardware access layer for managing the High Frequency Crystal Oscillator (HFXO).
 */

#if defined(HFXO_IDAC_SETTLETIME_VAL_val40us) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether IDAC maximum settling time is equal to 40us. */
#define NRF_HFXO_IDAC_HAS_MAX_SETTLETIME_40US 1
#else
#define NRF_HFXO_IDAC_HAS_MAX_SETTLETIME_40US 0
#endif

/** @brief HFXO events. */
typedef enum
{
    NRF_HFXO_EVENT_MODECHANGED  = offsetof(NRF_HFXO_Type, EVENTS_MODECHANGED),  /**< HFXO mode changed. */
    NRF_HFXO_EVENT_ERRORPIERCE  = offsetof(NRF_HFXO_Type, EVENTS_ERRORPIERCE),  /**< Error while starting the HFXO in PIERCE mode. */
    NRF_HFXO_EVENT_ERRORRUNNING = offsetof(NRF_HFXO_Type, EVENTS_ERRORRUNNING), /**< Error detected while HFXO was running. */
} nrf_hfxo_event_t;

/** @brief HFXO interrupts. */
typedef enum
{
    NRF_HFXO_INT_MODECHANGED_MASK  = HFXO_INTENSET_MODECHANGED_Msk,  /**< Interrupt on MODECHANGED event. */
    NRF_HFXO_INT_ERRORPIERCE_MASK  = HFXO_INTENSET_ERRORPIERCE_Msk,  /**< Interrupt on ERRORPIERCE event. */
    NRF_HFXO_INT_ERRORRUNNING_MASK = HFXO_INTENSET_ERRORRUNNING_Msk, /**< Interrupt on ERRORRUNNING event. */
} nrf_hfxo_int_mask_t;

/** @brief HFXO status modes. */
typedef enum
{
    NRF_HFXO_STATUS_MODE_PIERCE     = HFXO_STATUS_MODE_Pierce,        /**< Pierce mode. */
    NRF_HFXO_STATUS_MODE_PIXO       = HFXO_STATUS_MODE_Pixo,          /**< PIXO mode. */
    NRF_HFXO_STATUS_MODE_EXT_SINE   = HFXO_STATUS_MODE_ExternalSine,  /**< External sine wave clock. */
    NRF_HFXO_STATUS_MODE_EXT_SQUARE = HFXO_STATUS_MODE_ExternalSquare /**< External square wave clock. */
} nrf_hfxo_status_mode_t;

/** @brief HFXO status. */
typedef struct
{
    nrf_hfxo_status_mode_t oscmode; /**< Oscillator mode. */
    bool                   running; /**< HFXO running status. */
} nrf_hfxo_status_t;

/** @brief HFXO modes. */
typedef enum
{
    NRF_HFXO_MODE_AUTO       = HFXO_MODE_MODE_Auto,          /**< Mode automatically handled by the peripheral. */
    NRF_HFXO_MODE_PIERCE     = HFXO_MODE_MODE_Pierce,        /**< Pierce mode. */
    NRF_HFXO_MODE_PIXO       = HFXO_MODE_MODE_Pixo,          /**< PIXO mode. */
    NRF_HFXO_MODE_EXT_SINE   = HFXO_MODE_MODE_ExternalSine,  /**< External sine wave clock. */
    NRF_HFXO_MODE_EXT_SQUARE = HFXO_MODE_MODE_ExternalSquare /**< External square wave clock. */
} nrf_hfxo_mode_t;

/** @brief Power up control modes. */
typedef enum
{
    NRF_HFXO_POWER_CONTROL_AUTO       = HFXO_PWRUPCTRL_CTRL_Auto,     /**< Automatically handled by the peripheral. */
    NRF_HFXO_POWER_CONTROL_POWER_UP   = HFXO_PWRUPCTRL_CTRL_PowerUp,  /**< Power up. */
    NRF_HFXO_POWER_CONTROL_POWER_DOWN = HFXO_PWRUPCTRL_CTRL_PowerDown /**< Power down. */
} nrf_hfxo_power_control_t;

/** @brief Period value for the IDAC check. */
typedef enum
{
    NRF_HFXO_IDAC_PERIOD_31US   = HFXO_IDAC_CHECKPERIOD_VAL_val31us,   /**< IDAC period is 31us. */
    NRF_HFXO_IDAC_PERIOD_61US   = HFXO_IDAC_CHECKPERIOD_VAL_val61us,   /**< IDAC period is 61us. */
    NRF_HFXO_IDAC_PERIOD_122US  = HFXO_IDAC_CHECKPERIOD_VAL_val122us,  /**< IDAC period is 122us. */
    NRF_HFXO_IDAC_PERIOD_244US  = HFXO_IDAC_CHECKPERIOD_VAL_val244us,  /**< IDAC period is 244us. */
    NRF_HFXO_IDAC_PERIOD_488US  = HFXO_IDAC_CHECKPERIOD_VAL_val488us,  /**< IDAC period is 488us. */
    NRF_HFXO_IDAC_PERIOD_977US  = HFXO_IDAC_CHECKPERIOD_VAL_val977us,  /**< IDAC period is 977us. */
    NRF_HFXO_IDAC_PERIOD_1953US = HFXO_IDAC_CHECKPERIOD_VAL_val1953us, /**< IDAC period is 1953us. */
    NRF_HFXO_IDAC_PERIOD_3906US = HFXO_IDAC_CHECKPERIOD_VAL_val3906us, /**< IDAC period is 3906us. */
} nrf_hfxo_idac_period_t;

/** @brief Period value for the IDAC check. */
typedef enum
{
    NRF_HFXO_IDAC_SETTLE_TIME_5US   = HFXO_IDAC_SETTLETIME_VAL_val5us,   /**< Settling time is 5us. */
    NRF_HFXO_IDAC_SETTLE_TIME_10US  = HFXO_IDAC_SETTLETIME_VAL_val10us,  /**< Settling time is 10us. */
#if NRF_HFXO_IDAC_HAS_MAX_SETTLETIME_40US
    NRF_HFXO_IDAC_SETTLE_TIME_15US  = HFXO_IDAC_SETTLETIME_VAL_val15us,  /**< Settling time is 15us. */
    NRF_HFXO_IDAC_SETTLE_TIME_20US  = HFXO_IDAC_SETTLETIME_VAL_val20us,  /**< Settling time is 20us. */
    NRF_HFXO_IDAC_SETTLE_TIME_25US  = HFXO_IDAC_SETTLETIME_VAL_val25us,  /**< Settling time is 25us. */
    NRF_HFXO_IDAC_SETTLE_TIME_30US  = HFXO_IDAC_SETTLETIME_VAL_val30us,  /**< Settling time is 30us. */
    NRF_HFXO_IDAC_SETTLE_TIME_35US  = HFXO_IDAC_SETTLETIME_VAL_val35us,  /**< Settling time is 35us. */
    NRF_HFXO_IDAC_SETTLE_TIME_40US  = HFXO_IDAC_SETTLETIME_VAL_val40us,  /**< Settling time is 40us. */
#else
    NRF_HFXO_IDAC_SETTLE_TIME_25US  = HFXO_IDAC_SETTLETIME_VAL_val25us,  /**< Settling time is 25us. */
    NRF_HFXO_IDAC_SETTLE_TIME_50US  = HFXO_IDAC_SETTLETIME_VAL_val50us,  /**< Settling time is 50us. */
    NRF_HFXO_IDAC_SETTLE_TIME_100US = HFXO_IDAC_SETTLETIME_VAL_val100us, /**< Settling time is 100us. */
    NRF_HFXO_IDAC_SETTLE_TIME_200US = HFXO_IDAC_SETTLETIME_VAL_val200us, /**< Settling time is 200us. */
    NRF_HFXO_IDAC_SETTLE_TIME_400US = HFXO_IDAC_SETTLETIME_VAL_val400us, /**< Settling time is 400us. */
    NRF_HFXO_IDAC_SETTLE_TIME_800US = HFXO_IDAC_SETTLETIME_VAL_val800us, /**< Settling time is 800us. */
#endif
} nrf_hfxo_idac_settle_time_t;

/**
 * @brief Function for retrieving the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event HFXO Event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_hfxo_event_address_get(NRF_HFXO_Type const * p_reg,
                                                      nrf_hfxo_event_t      event);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_hfxo_event_clear(NRF_HFXO_Type * p_reg, nrf_hfxo_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_hfxo_event_check(NRF_HFXO_Type const * p_reg, nrf_hfxo_event_t event);

/**
 * @brief Function for enabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_hfxo_int_enable(NRF_HFXO_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_hfxo_int_disable(NRF_HFXO_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_hfxo_int_enable_check(NRF_HFXO_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_hfxo_int_pending_get(NRF_HFXO_Type const * p_reg);

/**
 * @brief Function for getting HFXO status.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_status Pointer to the structure to be filled with HFXO status.
 */
NRF_STATIC_INLINE void nrf_hfxo_status_get(NRF_HFXO_Type const * p_reg, nrf_hfxo_status_t * p_status);

/**
 * @brief Function for getting internal capacitive load value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Total capacitance in pF.
 */
NRF_STATIC_INLINE uint8_t nrf_hfxo_cload_get(NRF_HFXO_Type const * p_reg);

/**
 * @brief Function for setting internal capacitive load value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] cap   Total capacitance in pF.
 */
NRF_STATIC_INLINE void nrf_hfxo_cload_set(NRF_HFXO_Type * p_reg, uint8_t cap);

/**
 * @brief Function for getting amplitude control configuration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage amplitude setting for Pierce AREG mode (range 0 to 7, where 0 is 244 mV,
 *         up to 7 which is 470 mV).
 */
NRF_STATIC_INLINE uint8_t nrf_hfxo_amplitude_control_get(NRF_HFXO_Type const * p_reg);

/**
 * @brief Function for setting amplitude control configuration.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] amplitude Voltage amplitude setting for Pierce AREG mode (range 0 to 7, where 0 is
 *                      244 mV, up to 7 which is 470 mV).
 */
NRF_STATIC_INLINE void nrf_hfxo_amplitude_control_set(NRF_HFXO_Type * p_reg, uint8_t amplitude);

/**
 * @brief Function for setting the power control configuration.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] pwrctrl    Power up control mode.
 * @param[in] bypass_0V8 Enable bypass 0.8 V voltage regulator.
 * @param[in] bypass_1V5 Enable bypass 1.5 V voltage regulator.
 */
NRF_STATIC_INLINE void nrf_hfxo_power_control_set(NRF_HFXO_Type *          p_reg,
                                                  nrf_hfxo_power_control_t pwrctrl,
                                                  bool                     bypass_0V8,
                                                  bool                     bypass_1V5);

/**
 * @brief Function for setting HFXO mode.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] oscmode Oscillator mode.
 */
NRF_STATIC_INLINE void nrf_hfxo_mode_set(NRF_HFXO_Type * p_reg,
                                         nrf_hfxo_mode_t oscmode);

/**
 * @brief Function for getting the peak detector threshold value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Peak detector threshold value.
 */
NRF_STATIC_INLINE uint8_t nrf_hfxo_peak_det_thr_get(NRF_HFXO_Type const * p_reg);

/**
 * @brief Function for setting the peak detector threshold value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] thr   Peak detector threshold value.
 */
NRF_STATIC_INLINE void nrf_hfxo_peak_det_thr_set(NRF_HFXO_Type * p_reg, uint8_t thr);

/**
 * @brief Function for getting the number of injected pulses during HFXO startup.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of injected 16 MHz pulses.
 */
NRF_STATIC_INLINE uint16_t nrf_hfxo_startup_pulses_get(NRF_HFXO_Type const * p_reg);

/**
 * @brief Function for setting the number of injected pulses during HFXO startup.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] pulses Number of 16MHz clock pulses injected in Pierce mode during HFXO startup.
 */
NRF_STATIC_INLINE void nrf_hfxo_startup_pulses_set(NRF_HFXO_Type * p_reg, uint16_t pulses);

/**
 * @brief Function for setting the initial IDAC code for the Pierce oscillator.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] init_val Initial IDAC code for the Pierce oscillator.
 */
NRF_STATIC_INLINE void nrf_hfxo_idac_init_value_set(NRF_HFXO_Type * p_reg, uint8_t init_val);

/**
 * @brief Function for setting the ratio between IDAC and AREG in the Pierce AREG mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] ratio Ratio between IDAC and AREG.
 */
NRF_STATIC_INLINE void nrf_hfxo_idac_ratio_set(NRF_HFXO_Type * p_reg, uint8_t ratio);

/**
 * @brief Function for setting the period for the IDAC check in Pierce mode.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] period Period value for the IDAC check.
 * @param[in] enable Enable IDAC check.
 */
NRF_STATIC_INLINE void nrf_hfxo_idac_check_set(NRF_HFXO_Type *        p_reg,
                                               nrf_hfxo_idac_period_t period,
                                               bool                   enable);

/**
 * @brief Function for setting the settling time for IDAC current changes.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] time  Settle time.
 */
NRF_STATIC_INLINE void nrf_hfxo_idac_settling_time_set(NRF_HFXO_Type *             p_reg,
                                                       nrf_hfxo_idac_settle_time_t time);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_hfxo_event_address_get(NRF_HFXO_Type const * p_reg,
                                                      nrf_hfxo_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_hfxo_event_clear(NRF_HFXO_Type * p_reg, nrf_hfxo_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_hfxo_event_check(NRF_HFXO_Type const * p_reg, nrf_hfxo_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE void nrf_hfxo_int_enable(NRF_HFXO_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_hfxo_int_disable(NRF_HFXO_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_hfxo_int_enable_check(NRF_HFXO_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_hfxo_int_pending_get(NRF_HFXO_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE void nrf_hfxo_status_get(NRF_HFXO_Type const * p_reg, nrf_hfxo_status_t * p_status)
{
    NRFX_ASSERT(p_status);
    p_status->oscmode = (p_reg->STATUS & HFXO_STATUS_MODE_Msk)    >> HFXO_STATUS_MODE_Pos;
    p_status->running = (p_reg->STATUS & HFXO_STATUS_RUNNING_Msk) >> HFXO_STATUS_RUNNING_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_hfxo_cload_get(NRF_HFXO_Type const * p_reg)
{
    uint8_t cload_reg = (uint8_t)p_reg->CLOAD;
    uint8_t cap = (cload_reg & HFXO_CLOAD_VAL0_Msk) >> HFXO_CLOAD_VAL0_Pos;

    if (cload_reg & HFXO_CLOAD_VAL1_Msk)
    {
        cap += 10;
    }
    return cap;
}

NRF_STATIC_INLINE void nrf_hfxo_cload_set(NRF_HFXO_Type * p_reg, uint8_t cap)
{
    NRFX_ASSERT(cap <= 25);
    uint32_t cload_reg = 0;

    if (cap > 15)
    {
        cload_reg = HFXO_CLOAD_VAL1_Msk;
        cap -= 10;
    }

    cload_reg |= (cap << HFXO_CLOAD_VAL0_Pos) & HFXO_CLOAD_VAL0_Msk;
    p_reg->CLOAD = cload_reg;
}

NRF_STATIC_INLINE uint8_t nrf_hfxo_amplitude_control_get(NRF_HFXO_Type const * p_reg)
{
    return (p_reg->AMPLITUDECTRL & HFXO_AMPLITUDECTRL_VOLT_Msk) >> HFXO_AMPLITUDECTRL_VOLT_Pos;
}

NRF_STATIC_INLINE void nrf_hfxo_amplitude_control_set(NRF_HFXO_Type * p_reg, uint8_t amplitude)
{
    NRFX_ASSERT(amplitude <= 7);
    p_reg->AMPLITUDECTRL = (amplitude << HFXO_AMPLITUDECTRL_VOLT_Pos) & HFXO_AMPLITUDECTRL_VOLT_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo_power_control_set(NRF_HFXO_Type *          p_reg,
                                                  nrf_hfxo_power_control_t pwrctrl,
                                                  bool                     bypass_0v8,
                                                  bool                     bypass_1v5)
{
    p_reg->PWRUPCTRL = (((uint32_t)pwrctrl << HFXO_PWRUPCTRL_CTRL_Pos) &
                                              HFXO_PWRUPCTRL_CTRL_Msk)
                     | ((bypass_0v8        << HFXO_PWRUPCTRL_BYPASSREG0V8_Pos) &
                                              HFXO_PWRUPCTRL_BYPASSREG0V8_Msk)
                     | ((bypass_1v5        << HFXO_PWRUPCTRL_BYPASSREG1V5_Pos) &
                                              HFXO_PWRUPCTRL_BYPASSREG1V5_Msk);
}

NRF_STATIC_INLINE void nrf_hfxo_mode_set(NRF_HFXO_Type * p_reg,
                                         nrf_hfxo_mode_t oscmode)
{
    p_reg->MODE = ((uint32_t)oscmode << HFXO_MODE_MODE_Pos) & HFXO_MODE_MODE_Msk;
}

NRF_STATIC_INLINE uint8_t nrf_hfxo_peak_det_thr_get(NRF_HFXO_Type const * p_reg)
{
    return (p_reg->PDTHR & HFXO_PDTHR_VAL_Msk) >> HFXO_PDTHR_VAL_Pos;
}

NRF_STATIC_INLINE void nrf_hfxo_peak_det_thr_set(NRF_HFXO_Type * p_reg, uint8_t thr)
{
    NRFX_ASSERT(thr <= 15);
    p_reg->PDTHR = (thr << HFXO_PDTHR_VAL_Pos) & HFXO_PDTHR_VAL_Msk;
}

NRF_STATIC_INLINE uint16_t nrf_hfxo_startup_pulses_get(NRF_HFXO_Type const * p_reg)
{
    return ((p_reg->STARTUPPULSES & HFXO_STARTUPPULSES_VAL_Msk) >> HFXO_STARTUPPULSES_VAL_Pos);
}

NRF_STATIC_INLINE void nrf_hfxo_startup_pulses_set(NRF_HFXO_Type * p_reg, uint16_t pulses)
{
    NRFX_ASSERT(pulses <= HFXO_STARTUPPULSES_VAL_Max);
    p_reg->STARTUPPULSES = (pulses << HFXO_STARTUPPULSES_VAL_Pos) & HFXO_STARTUPPULSES_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo_idac_init_value_set(NRF_HFXO_Type * p_reg, uint8_t init_val)
{
    NRFX_ASSERT(init_val <= HFXO_IDAC_INIT_VAL_Max);
    p_reg->IDAC.INIT = (init_val << HFXO_IDAC_INIT_VAL_Pos) & HFXO_IDAC_INIT_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo_idac_ratio_set(NRF_HFXO_Type * p_reg, uint8_t ratio)
{
    NRFX_ASSERT(ratio <= HFXO_IDAC_ICMPRATIO_VAL_Max);
    p_reg->IDAC.ICMPRATIO = (ratio << HFXO_IDAC_ICMPRATIO_VAL_Pos) & HFXO_IDAC_ICMPRATIO_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo_idac_check_set(NRF_HFXO_Type *        p_reg,
                                               nrf_hfxo_idac_period_t period,
                                               bool                   enable)
{
    p_reg->IDAC.CHECKPERIOD = (((uint32_t)period << HFXO_IDAC_CHECKPERIOD_VAL_Pos) &
                                                    HFXO_IDAC_CHECKPERIOD_VAL_Msk)
                            | (enable            << HFXO_IDAC_CHECKPERIOD_EN_Pos);
}

NRF_STATIC_INLINE void nrf_hfxo_idac_settling_time_set(NRF_HFXO_Type *             p_reg,
                                                       nrf_hfxo_idac_settle_time_t time)
{
    p_reg->IDAC.SETTLETIME = ((uint32_t)time << HFXO_IDAC_SETTLETIME_VAL_Pos) &
                                                HFXO_IDAC_SETTLETIME_VAL_Msk;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_HFXO_H__
