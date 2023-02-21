/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_LFCLOCKMUX_H__
#define NRF_LFCLOCKMUX_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_lfclockmux_hal Low Frequency Clock Multiplexer HAL
 * @{
 * @ingroup nrf_clock
 * @brief   Hardware access layer for managing the Low Frequency Clock Multiplexer.
 */

/** @brief Clock component name redefinition. */
#define NRF_LFCLOCKMUX NRF_CLOCK

/** @brief Clock component type redefinition. */
typedef NRF_CLOCK_Type NRF_LFCLOCKMUX_Type;

/**
 * @brief Tasks.
 *
 * @details The NRF_LFCLOCKMUX_TASK_LFCLKSTOP task cannot be set when the low-frequency clock is not running.
 */
typedef enum
{
    NRF_LFCLOCKMUX_TASK_LFCLKSTART = offsetof(NRF_LFCLOCKMUX_Type, TASKS_LFCLKSTART), /**< Start LFCLK clock source. */
    NRF_LFCLOCKMUX_TASK_LFCLKSTOP  = offsetof(NRF_LFCLOCKMUX_Type, TASKS_LFCLKSTOP),  /**< Stop LFCLK clock source. */
} nrf_lfclockmux_task_t;

/** @brief Events. */
typedef enum
{
    NRF_LFCLOCKMUX_EVENT_LFCLKSTARTED    = offsetof(NRF_LFCLOCKMUX_Type, EVENTS_LFCLKSTARTED),    /**< LFCLK oscillator started. */
    NRF_LFCLOCKMUX_EVENT_LFCLKSRCCHANGED = offsetof(NRF_LFCLOCKMUX_Type, EVENTS_LFCLKSRCCHANGED), /**< LFCLK oscillator source changed. */
} nrf_lfclockmux_event_t;

/** @brief Interrupts. */
typedef enum
{
    NRF_LFCLOCKMUX_INT_LFCLKSTARTED_MASK    = CLOCK_INTENSET_LFCLKSTARTED_Msk,    /**< Interrupt on LFCLKSTARTED event. */
    NRF_LFCLOCKMUX_INT_LFCLKSRCCHANGED_MASK = CLOCK_INTENSET_LFCLKSRCCHANGED_Msk, /**< Interrupt on LFCLKSTARTED event. */
} nrf_lfclockmux_int_mask_t;

/**
 * @brief Low-frequency clock sources.
 * @details Used by LFCLKCTRL and LFCLKSTAT.SRC registers.
 */
typedef enum
{
    NRF_LFCLOCKMUX_SOURCE_LPRC       = (CLOCK_LFCLKSTAT_SRC_LFLPRC_Active << CLOCK_LFCLKSTAT_SRC_LFLPRC_Pos), /**< Internal 32 kHz low power RC oscillator. */
    NRF_LFCLOCKMUX_SOURCE_RC         = (CLOCK_LFCLKSTAT_SRC_LFRC_Active   << CLOCK_LFCLKSTAT_SRC_LFRC_Pos),   /**< Internal 32 kHz RC oscillator. */
    NRF_LFCLOCKMUX_SOURCE_XTAL       = (CLOCK_LFCLKSTAT_SRC_LFXO_Active   << CLOCK_LFCLKSTAT_SRC_LFXO_Pos),   /**< External 32 kHz crystal. */
    NRF_LFCLOCKMUX_SOURCE_SYNTH      = (CLOCK_LFCLKSTAT_SRC_SYNTH_Active  << CLOCK_LFCLKSTAT_SRC_SYNTH_Pos),  /**< Internal 32 kHz synthesized. */
    NRF_LFCLOCKMUX_SOURCE_LPRC_XTAL  = NRF_LFCLOCKMUX_SOURCE_LPRC  | NRF_LFCLOCKMUX_SOURCE_XTAL,              /**< Internal 32 kHz low power RC oscillator and external 32 kHz crystal. */
    NRF_LFCLOCKMUX_SOURCE_RC_XTAL    = NRF_LFCLOCKMUX_SOURCE_RC    | NRF_LFCLOCKMUX_SOURCE_XTAL,              /**< Internal 32 kHz RC oscillator and external 32 kHz crystal. */
    NRF_LFCLOCKMUX_SOURCE_SYNTH_XTAL = NRF_LFCLOCKMUX_SOURCE_SYNTH | NRF_LFCLOCKMUX_SOURCE_XTAL,              /**< Internal 32 kHz synthesized and external 32 kHz crystal. */
} nrf_lfclockmux_source_t;

/**
 * @brief Function for retrieving the address of the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  LFCLOCKMUX Task.
 *
 * @return Address of the requested task register.
 */
NRF_STATIC_INLINE uint32_t nrf_lfclockmux_task_address_get(NRF_LFCLOCKMUX_Type const * p_reg,
                                                           nrf_lfclockmux_task_t       task);

/**
 * @brief Function for setting the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_task_trigger(NRF_LFCLOCKMUX_Type * p_reg,
                                                   nrf_lfclockmux_task_t task);

/**
 * @brief Function for retrieving the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event LFCLOCKMUX Event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_lfclockmux_event_address_get(NRF_LFCLOCKMUX_Type const * p_reg,
                                                            nrf_lfclockmux_event_t      event);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_event_clear(NRF_LFCLOCKMUX_Type *  p_reg,
                                                  nrf_lfclockmux_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_lfclockmux_event_check(NRF_LFCLOCKMUX_Type const * p_reg,
                                                  nrf_lfclockmux_event_t      event);
/**
 * @brief Function for enabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_int_enable(NRF_LFCLOCKMUX_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_int_disable(NRF_LFCLOCKMUX_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_lfclockmux_int_enable_check(NRF_LFCLOCKMUX_Type const * p_reg,
                                                           uint32_t                    mask);

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
NRF_STATIC_INLINE uint32_t nrf_lfclockmux_int_pending_get(NRF_LFCLOCKMUX_Type const * p_reg);

 /**
 * @brief Function for retrieving the trigger status of the task START for LF clock.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval false The task START for the LF clock has not been triggered.
 * @retval true  The task START for the LF clock has been triggered.
 */
NRF_STATIC_INLINE bool nrf_lfclockmux_stat_run_check(NRF_LFCLOCKMUX_Type const * p_reg);

 /**
 * @brief Function for retrieving the status indicating which clock source is running for LF clock.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current low-frequency clock source.
 */
NRF_STATIC_INLINE nrf_lfclockmux_source_t nrf_lfclockmux_stat_src_get(NRF_LFCLOCKMUX_Type const * p_reg);

/**
 * @brief Function for changing the low-frequency clock source.
 * @details Check in Product Specification if this function can be called when
 *           the low-frequency clock is running.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] source New low-frequency clock source.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_lf_src_set(NRF_LFCLOCKMUX_Type *   p_reg,
                                                 nrf_lfclockmux_source_t source);

/**
 * @brief Function for retrieving the selected source for the low-frequency clock.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Source of the low-frequency clock.
 */
NRF_STATIC_INLINE nrf_lfclockmux_source_t nrf_lfclockmux_lf_src_get(NRF_LFCLOCKMUX_Type const * p_reg);

/**
 * @brief Function for setting the LF clock domain to always run.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] alwaysrun Ensure the clock is always running.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_alwaysrun_set(NRF_LFCLOCKMUX_Type * p_reg,
                                                    bool                  alwaysrun);

/**
 * @brief Function for checking if the LF clock domain is configured to always run.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The LF clock domain is configured to always run.
 * @retval false The LF clock domain is not configured to always run.
 */
NRF_STATIC_INLINE bool nrf_lfclockmux_alwaysrun_get(NRF_LFCLOCKMUX_Type const * p_reg);

/**
 * @brief Function controls reset to the LF CLOCK MUX peripheral.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] en    Enable reset.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_config_reset_set(NRF_LFCLOCKMUX_Type * p_reg, bool en);

/**
 * @brief Function for enabling bypass.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] source Bypass source.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_config_bypass_set(NRF_LFCLOCKMUX_Type *   p_reg,
                                                        nrf_lfclockmux_source_t source);

/**
 * @brief Function for setting the timeout value for the clock alignment procedure.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] timeout Number of 32Ki clocks.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_config_timeout_set(NRF_LFCLOCKMUX_Type * p_reg,
                                                         uint8_t               timeout);

/**
 * @brief Function for getting the timeout value for the clock alignment procedure.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval Number of 32Ki clocks.
 */
NRF_STATIC_INLINE uint8_t nrf_lfclockmux_config_timeout_get(NRF_LFCLOCKMUX_Type const * p_reg);

/**
 * @brief Function for setting threshold limit while clock switching.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] thr_low  Threshold low limit while clock switching.
 * @param[in] thr_high Threshold high limit while clock switching.
 * @param[in] thr_diff Threshold difference while clock switching.
 */
NRF_STATIC_INLINE void nrf_lfclockmux_config_threshold_set(NRF_LFCLOCKMUX_Type * p_reg,
                                                           uint8_t               thr_low,
                                                           uint8_t               thr_high,
                                                           uint8_t               thr_diff);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_lfclockmux_task_address_get(NRF_LFCLOCKMUX_Type const * p_reg,
                                                           nrf_lfclockmux_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_lfclockmux_task_trigger(NRF_LFCLOCKMUX_Type * p_reg,
                                                   nrf_lfclockmux_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_lfclockmux_event_address_get(NRF_LFCLOCKMUX_Type const * p_reg,
                                                            nrf_lfclockmux_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_lfclockmux_event_clear(NRF_LFCLOCKMUX_Type *  p_reg,
                                                  nrf_lfclockmux_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_lfclockmux_event_check(NRF_LFCLOCKMUX_Type const * p_reg,
                                                  nrf_lfclockmux_event_t      event)
{
    return (bool)*((volatile uint32_t *)((uint8_t *)p_reg + event));
}

NRF_STATIC_INLINE void nrf_lfclockmux_int_enable(NRF_LFCLOCKMUX_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_lfclockmux_int_disable(NRF_LFCLOCKMUX_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_lfclockmux_int_enable_check(NRF_LFCLOCKMUX_Type const * p_reg,
                                                           uint32_t                    mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_lfclockmux_int_pending_get(NRF_LFCLOCKMUX_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE bool nrf_lfclockmux_stat_run_check(NRF_LFCLOCKMUX_Type const * p_reg)
{
    return (p_reg->LFCLKSTAT.RUN & CLOCK_LFCLKSTAT_RUN_STATUS_Msk);
}

NRF_STATIC_INLINE nrf_lfclockmux_source_t nrf_lfclockmux_stat_src_get(NRF_LFCLOCKMUX_Type const * p_reg)
{
    return (nrf_lfclockmux_source_t)(p_reg->LFCLKSTAT.SRC);
}

NRF_STATIC_INLINE void nrf_lfclockmux_lf_src_set(NRF_LFCLOCKMUX_Type *   p_reg,
                                                 nrf_lfclockmux_source_t source)
{
    p_reg->LFCLKCTRL.SRC = (uint32_t)(source);
}

NRF_STATIC_INLINE nrf_lfclockmux_source_t nrf_lfclockmux_lf_src_get(NRF_LFCLOCKMUX_Type const * p_reg)
{
    return (nrf_lfclockmux_source_t)(p_reg->LFCLKCTRL.SRC);
}

NRF_STATIC_INLINE void nrf_lfclockmux_alwaysrun_set(NRF_LFCLOCKMUX_Type * p_reg,
                                                    bool                  alwaysrun)
{
    p_reg->LFCLKCTRL.ALWAYSRUN = (uint32_t)alwaysrun << CLOCK_LFCLKCTRL_ALWAYSRUN_FORCE_Pos;
}

NRF_STATIC_INLINE bool nrf_lfclockmux_alwaysrun_get(NRF_LFCLOCKMUX_Type const * p_reg)
{
    return (p_reg->LFCLKCTRL.ALWAYSRUN & CLOCK_LFCLKCTRL_ALWAYSRUN_FORCE_Msk);
}

NRF_STATIC_INLINE void nrf_lfclockmux_config_reset_set(NRF_LFCLOCKMUX_Type * p_reg, bool en)
{
    if (en)
    {
        p_reg->CONFIG.SETUP |= CLOCK_CONFIG_SETUP_RESET_Enabled << CLOCK_CONFIG_SETUP_RESET_Pos;
    }
    else
    {
        p_reg->CONFIG.SETUP &= ~CLOCK_CONFIG_SETUP_RESET_Msk;
    }
}

NRF_STATIC_INLINE void nrf_lfclockmux_config_bypass_set(NRF_LFCLOCKMUX_Type *   p_reg,
                                                        nrf_lfclockmux_source_t source)
{
    switch (source)
    {
        case NRF_LFCLOCKMUX_SOURCE_LPRC:
            p_reg->CONFIG.SETUP |= CLOCK_CONFIG_SETUP_BYPASSLFLPRC_Enabled
                                   << CLOCK_CONFIG_SETUP_BYPASSLFLPRC_Pos;
            break;
        case NRF_LFCLOCKMUX_SOURCE_RC:
            p_reg->CONFIG.SETUP |= CLOCK_CONFIG_SETUP_BYPASSLFRC_Enabled
                                   << CLOCK_CONFIG_SETUP_BYPASSLFRC_Pos;
            break;
        case NRF_LFCLOCKMUX_SOURCE_XTAL:
            p_reg->CONFIG.SETUP |= CLOCK_CONFIG_SETUP_BYPASSLFXO_Enabled
                                   << CLOCK_CONFIG_SETUP_BYPASSLFXO_Pos;
            break;
        case NRF_LFCLOCKMUX_SOURCE_SYNTH:
            p_reg->CONFIG.SETUP |= CLOCK_CONFIG_SETUP_BYPASSSYNTH_Enabled
                                   << CLOCK_CONFIG_SETUP_BYPASSSYNTH_Pos;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_lfclockmux_config_timeout_set(NRF_LFCLOCKMUX_Type * p_reg,
                                                         uint8_t               timeout)
{
    p_reg->CONFIG.SETUP = ((p_reg->CONFIG.SETUP & ~CLOCK_CONFIG_SETUP_TIMEOUT_Msk)
                           | (timeout << CLOCK_CONFIG_SETUP_TIMEOUT_Pos));
}
NRF_STATIC_INLINE uint8_t nrf_lfclockmux_config_timeout_get(NRF_LFCLOCKMUX_Type const * p_reg)
{
    return (p_reg->CONFIG.SETUP & CLOCK_CONFIG_SETUP_TIMEOUT_Msk) >> CLOCK_CONFIG_SETUP_TIMEOUT_Pos;
}

NRF_STATIC_INLINE void nrf_lfclockmux_config_threshold_set(NRF_LFCLOCKMUX_Type * p_reg,
                                                           uint8_t               thr_low,
                                                           uint8_t               thr_high,
                                                           uint8_t               thr_diff)
{
    p_reg->CONFIG.THRESHOLD = (((uint32_t)thr_low)  << CLOCK_CONFIG_THRESHOLD_LOW_Pos) |
                              (((uint32_t)thr_high) << CLOCK_CONFIG_THRESHOLD_HIGH_Pos) |
                              (((uint32_t)thr_diff) << CLOCK_CONFIG_THRESHOLD_DIFF_Pos);
}


#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_LFCLOCKMUX_H__
