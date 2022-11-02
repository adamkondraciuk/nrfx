/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREGMRAM_H__
#define NRF_VREGMRAM_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vregmram_hal MRAM Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the MRAM Voltage Regulator.
 */

/** @brief VREGMRAM tasks. */
typedef enum
{
    NRF_VREGMRAM_TASK_PWR_UP   = offsetof(NRF_VREGMRAM_Type, TASKS_PWRUP),   /**< Power up the VREF and VPR regulator. */
    NRF_VREGMRAM_TASK_PWR_DOWN = offsetof(NRF_VREGMRAM_Type, TASKS_PWRDOWN), /**< Power down the VREF and VPR regulator. */
} nrf_vregmram_task_t;

/** @brief VREGMRAM events. */
typedef enum
{
    NRF_VREGMRAM_EVENT_READY = offsetof(NRF_VREGMRAM_Type, EVENTS_READY), /**< Power up done. */
} nrf_vregmram_event_t;

/** @brief VREGMRAM interrupts. */
typedef enum
{
    NRF_VREGMRAM_INT_READY_MASK = VREGMRAM_INTEN_READY_Msk, /**< Interrupt on READY. */

} nrf_vregmram_int_mask_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VREGMRAM_STATUSANA_READY_MASK = VREGMRAM_STATUSANA_READY_Msk, /**< Current value of READY signal. */
} nrf_vregmram_statusana_mask_t;

/** @brief Enum for selecting adaptive bias voltage target. */
typedef enum
{
    NRF_VREGMRAM_ADAPTIVE_BIAS_VREF, /**< VREF Adaptive bias. */
    NRF_VREGMRAM_ADAPTIVE_BIAS_VPR,  /**< VPR Adaptive bias. */
} nrf_vregmram_adaptive_bias_t;

/** @brief Voltage regulator mode. */
typedef enum
{
    NRF_VREGMRAM_MODE_NORMAL = VREGMRAM_MODE_MODE_Normal, /**< Normal mode. */
    NRF_VREGMRAM_MODE_RETAIN = VREGMRAM_MODE_MODE_Retain, /**< Retain mode. */
} nrf_vregmram_mode_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VREGMRAM_ANALOG_SIGNAL_PWR_UP,  /**< Override PWRUP signal. */
    NRF_VREGMRAM_ANALOG_SIGNAL_RETAIN, /**< Override RETAIN signal. */
    NRF_VREGMRAM_ANALOG_SIGNAL_MODE,   /**< Override MODE signal. */
} nrf_vregmram_analog_signal_t;

/** @brief Configuration for Analog Test Bus 0 (ATB0). */
typedef struct
{
    bool ib_300na; /**< Enable IB 300nA. */
    bool vref;     /**< Enable VREF 0V6. */
    bool vpr;      /**< Enable VPR 1V2. */
    bool vtst;     /**< Enable V_TST. */
    bool atb;      /**< Enable the analog test bus. */
} nrf_vregmram_atb0_t;

/** @brief Configuration for Analog Test Bus 1 (ATB1). */
typedef struct
{
    bool tst_bf_mux; /**< Enable TST_BF MUX. */
    bool vref;       /**< Enable VREF 0V6. */
    bool vpr;        /**< Enable VPR 1V2. */
    bool atb;        /**< Enable the analog test bus. */
} nrf_vregmram_atb1_t;

/** @brief Configuration for Test mode. */
typedef struct
{
    bool vtst_powerup;   /**< Power up the V_TST to ATB buffer. */
    bool vtst_pulldown;  /**< Enable Pull down V_TEST. */
    bool vtst_bypass;    /**< Enable Bypass V_TST buf to ATB1 mux. */
    bool vtst_sel;       /**< Select V_TST buffer to ATB1 mux. */
    bool vrefout_sel;    /**< Select VREF VOUT to V_TST. */
    bool vrefref_sel;    /**< Select VREF reference to V_TST. */
    bool vprout_sel;     /**< Select VPR VOUT to V_TST. */
    bool vprref_sel;     /**< Select VPR reference to V_TST. */
    bool vrefgencal_sel; /**< Select vref gen v calib to V_TST. */
} nrf_vregmram_tcfg_t;

/** @brief Enum for selecting bias trimming value. */
typedef enum
{
    NRF_VREGMRAM_TRIM_BIAS_450NA, /**< Bias trimming is 450nA. */
    NRF_VREGMRAM_TRIM_BIAS_530NA, /**< Bias trimming is 530nA. */
    NRF_VREGMRAM_TRIM_BIAS_400NA, /**< Bias trimming is 400nA. */
} nrf_vregmram_trim_bias_t;

/**
 * @brief Function for triggering an VREGMRAM task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task.
 */
NRF_STATIC_INLINE void nrf_vregmram_task_trigger(NRF_VREGMRAM_Type * p_reg, 
                                                 nrf_vregmram_task_t task);

/**
 * @brief Function for returning the address of the specified VREGMRAM task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task.
 *
 * @return Task address.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmram_task_address_get(NRF_VREGMRAM_Type const * p_reg,
                                                         nrf_vregmram_task_t       task);

/**
 * @brief Function for clearing the specified VREGMRAM event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vregmram_event_clear(NRF_VREGMRAM_Type *  p_reg,
                                                nrf_vregmram_event_t event);

/**
 * @brief Function for retrieving the state of the VREGMRAM event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vregmram_event_check(NRF_VREGMRAM_Type const * p_reg,
                                                nrf_vregmram_event_t      event);

/**
 * @brief Function for returning the address of the specified VREGMRAM event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmram_event_address_get(NRF_VREGMRAM_Type const * p_reg,
                                                          nrf_vregmram_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_vregmram_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregmram_int_enable(NRF_VREGMRAM_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_vregmram_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregmram_int_disable(NRF_VREGMRAM_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_vregmram_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmram_int_enable_check(NRF_VREGMRAM_Type const * p_reg,
                                                         uint32_t                  mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 * 
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_vregmram_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmram_int_pending_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for getting VREGMRAM status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vregmram_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmram_statusana_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for setting voltage reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage reference trimming value. The value is 1.433V - 9.75mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmram_trim_vbg_set(NRF_VREGMRAM_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting current reference trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Voltage reference trimming value. The value is 1.433V - 9.75mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmram_trim_vbg_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for setting bias trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Bias trimming value.
 */
NRF_STATIC_INLINE void nrf_vregmram_trim_bias_set(NRF_VREGMRAM_Type *      p_reg, 
                                                  nrf_vregmram_trim_bias_t val);

/**
 * @brief Function for getting bias trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Bias trimming value.
 */
NRF_STATIC_INLINE
nrf_vregmram_trim_bias_t nrf_vregmram_trim_bias_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for setting VPR reference voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 1.174V + 4.75mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmram_trim_vpr_set(NRF_VREGMRAM_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting VPR reference voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Voltage offset trimming value. The value is 1.174V + 4.75mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmram_trim_vpr_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for setting VREF reference voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is 0.582V + 2.375mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmram_trim_vref_set(NRF_VREGMRAM_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting VREF reference voltage offset trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Voltage offset trimming value. The value is 0.582V + 2.375mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmram_trim_vref_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vregmram_mirror_lock(NRF_VREGMRAM_Type * p_reg, bool lock);

/**
 * @brief Function for setting VPR output load current.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] vpr_bleed When true VPR output load current is enabled. 
 *                      When false VPR output load current is disabled.
 */
NRF_STATIC_INLINE void nrf_vregmram_vprbleed_set(NRF_VREGMRAM_Type * p_reg,
                                                 bool                vpr_bleed);

/**
 * @brief Function for getting VPR output load current.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @retval true  VPR output load current is enabled.
 * @retval false VPR output load current is disabled.
 */
NRF_STATIC_INLINE bool nrf_vregmram_vprbleed_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for setting adaptive bias.
 *
 * @param[in] p_reg           Pointer to the structure of registers of the peripheral.
 * @param[in] adaptive_bias   Adaptive bias voltage target.
 * @param[in] enable          True to enable adaptive bias and false to disable.
 */
NRF_STATIC_INLINE void nrf_vregmram_adaptive_bias_set(NRF_VREGMRAM_Type *          p_reg,
                                                      nrf_vregmram_adaptive_bias_t adaptive_bias,
                                                      bool                         enable);

/**
 * @brief Function for checking adaptive bias.
 *
 * @param[in] p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in] adaptive_bias  Adaptive bias voltage target.
 * 
 * @retval true  Adaptive bias is enabled.
 * @retval false Adaptive bias is disabled.
 */
NRF_STATIC_INLINE bool nrf_vregmram_adaptive_bias_check(NRF_VREGMRAM_Type const *    p_reg,
                                                        nrf_vregmram_adaptive_bias_t adaptive_bias);

/**
 * @brief Function for setting MRAM voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode.
 */
NRF_STATIC_INLINE void nrf_vregmram_mode_set(NRF_VREGMRAM_Type * p_reg,
                                             nrf_vregmram_mode_t  mode);

/**
 * @brief Function for getting MRAM voltage regulator mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Mode.
 */
NRF_STATIC_INLINE nrf_vregmram_mode_t nrf_vregmram_mode_get(NRF_VREGMRAM_Type const * p_reg);

/**
 * @brief Function for override signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */
NRF_STATIC_INLINE void nrf_vregmram_override(NRF_VREGMRAM_Type *          p_reg,
                                             nrf_vregmram_analog_signal_t signal,
                                             bool                         enable,
                                             uint8_t                      val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] config Analog Test Bus 0 configuration.
 */
NRF_STATIC_INLINE void nrf_vregmram_dft_atb0_config_set(NRF_VREGMRAM_Type * p_reg,
                                                        nrf_vregmram_atb0_t config);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] config Analog Test Bus 1 configuration.
 */
NRF_STATIC_INLINE void nrf_vregmram_dft_atb1_config_set(NRF_VREGMRAM_Type * p_reg,
                                                        nrf_vregmram_atb1_t config);

/**
 * @brief Function for configuring Test Mode.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] config Test Mode configuration.
 */
NRF_STATIC_INLINE void nrf_vregmram_dft_tcfg_config_set(NRF_VREGMRAM_Type * p_reg,
                                                        nrf_vregmram_tcfg_t config);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vregmram_task_trigger(NRF_VREGMRAM_Type * p_reg, 
                                                 nrf_vregmram_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_vregmram_task_address_get(NRF_VREGMRAM_Type const * p_reg,
                                                         nrf_vregmram_task_t       task)
{
    return (uint32_t)p_reg + (uint32_t)task;
}

NRF_STATIC_INLINE void nrf_vregmram_event_clear(NRF_VREGMRAM_Type *  p_reg,
                                                nrf_vregmram_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vregmram_event_check(NRF_VREGMRAM_Type const * p_reg,
                                                nrf_vregmram_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_vregmram_event_address_get(NRF_VREGMRAM_Type const *  p_reg,
                                                          nrf_vregmram_event_t       event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vregmram_int_enable(NRF_VREGMRAM_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vregmram_int_disable(NRF_VREGMRAM_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregmram_int_enable_check(NRF_VREGMRAM_Type const * p_reg,
                                                        uint32_t                   mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregmram_int_pending_get(NRF_VREGMRAM_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE uint32_t nrf_vregmram_statusana_get(NRF_VREGMRAM_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE void nrf_vregmram_trim_vbg_set(NRF_VREGMRAM_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.VBG = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmram_trim_vbg_get(NRF_VREGMRAM_Type const * p_reg)
{
    return p_reg->TRIM.VBG;
}

NRF_STATIC_INLINE void nrf_vregmram_trim_bias_set(NRF_VREGMRAM_Type *      p_reg, 
                                                  nrf_vregmram_trim_bias_t val)
{
    p_reg->TRIM.BIAS = (uint32_t)val;
}

NRF_STATIC_INLINE
nrf_vregmram_trim_bias_t nrf_vregmram_trim_bias_get(NRF_VREGMRAM_Type const * p_reg)
{
    return (nrf_vregmram_trim_bias_t)p_reg->TRIM.BIAS;
}

NRF_STATIC_INLINE void nrf_vregmram_trim_vpr_set(NRF_VREGMRAM_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.VPR = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmram_trim_vpr_get(NRF_VREGMRAM_Type const * p_reg)
{
    return p_reg->TRIM.VPR;
}

NRF_STATIC_INLINE void nrf_vregmram_trim_vref_set(NRF_VREGMRAM_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.VREF = val;
}

NRF_STATIC_INLINE void nrf_vregmram_trim_vref_get(NRF_VREGMRAM_Type const * p_reg)
{
    return p_reg->TRIM.VREF;
}

NRF_STATIC_INLINE void nrf_vregmram_mirror_lock(NRF_VREGMRAM_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VREGMRAM_MIRROR_LOCK_Enabled : VREGMRAM_MIRROR_LOCK_Disabled) <<
                     VREGMRAM_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vregmram_vprbleed_set(NRF_VREGMRAM_Type * p_reg,
                                                 bool                vpr_bleed)
{
    p_reg->VPRBLEED = (uint32_t)vpr_bleed;
}

NRF_STATIC_INLINE bool nrf_vregmram_vprbleed_get(NRF_VREGMRAM_Type const * p_reg)
{
    return (bool)p_reg->VPRBLEED;
}

NRF_STATIC_INLINE void nrf_vregmram_adaptive_bias_set(NRF_VREGMRAM_Type *          p_reg,
                                                      nrf_vregmram_adaptive_bias_t adaptive_bias,
                                                      bool                         enable)
{
    switch (adaptive_bias)
    {
        case NRF_VREGMRAM_ADAPTIVE_BIAS_VREF:
            p_reg->VREFADAPTIVEBIAS = ((enable ?
                                       VREGMRAM_VREFADAPTIVEBIAS_EN_Enabled :
                                       VREGMRAM_VREFADAPTIVEBIAS_EN_Disabled) <<
                                       VREGMRAM_VREFADAPTIVEBIAS_EN_Pos);
            break;
        case NRF_VREGMRAM_ADAPTIVE_BIAS_VPR:
            p_reg->VPRADAPTIVEBIAS = ((enable ?
                                      VREGMRAM_VPRADAPTIVEBIAS_EN_Enabled :
                                      VREGMRAM_VPRADAPTIVEBIAS_EN_Disabled) <<
                                      VREGMRAM_VPRADAPTIVEBIAS_EN_Pos);
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE bool nrf_vregmram_adaptive_bias_check(NRF_VREGMRAM_Type const *    p_reg,
                                                        nrf_vregmram_adaptive_bias_t adaptive_bias)
{
    switch (adaptive_bias)
    {
        case NRF_VREGMRAM_ADAPTIVE_BIAS_VREF:
            return p_reg->VREFADAPTIVEBIAS == VREGMRAM_VREFADAPTIVEBIAS_EN_Enabled;
            break;
        case NRF_VREGMRAM_ADAPTIVE_BIAS_VPR:
            return p_reg->VPRADAPTIVEBIAS == VREGMRAM_VPRADAPTIVEBIAS_EN_Enabled;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_vregmram_mode_set(NRF_VREGMRAM_Type * p_reg,
                                             nrf_vregmram_mode_t mode)
{
    p_reg->MODE = mode;
}

NRF_STATIC_INLINE nrf_vregmram_mode_t nrf_vregmram_mode_get(NRF_VREGMRAM_Type const * p_reg)
{
    return (nrf_vregmram_mode_t)p_reg->MODE;
}

NRF_STATIC_INLINE void nrf_vregmram_override(NRF_VREGMRAM_Type *          p_reg,
                                             nrf_vregmram_analog_signal_t signal,
                                             bool                         enable,
                                             uint8_t                      val)
{
    switch (signal)
    {
        case NRF_VREGMRAM_ANALOG_SIGNAL_PWR_UP:
              p_reg->OVERRIDE.PWRUP = ((enable ?
                                        VREGMRAM_OVERRIDE_PWRUP_EN_Enabled :
                                        VREGMRAM_OVERRIDE_PWRUP_EN_Disabled) <<
                                        VREGMRAM_OVERRIDE_PWRUP_EN_Pos) |
                                        val << VREGMRAM_OVERRIDE_PWRUP_VAL_Pos;
              break;
        case NRF_VREGMRAM_ANALOG_SIGNAL_RETAIN:
              p_reg->OVERRIDE.RETAIN = ((enable ?
                                         VREGMRAM_OVERRIDE_RETAIN_EN_Enabled :
                                         VREGMRAM_OVERRIDE_RETAIN_EN_Disabled) <<
                                         VREGMRAM_OVERRIDE_RETAIN_EN_Pos) |
                                         val << VREGMRAM_OVERRIDE_RETAIN_VAL_Pos;
              break;
        case NRF_VREGMRAM_ANALOG_SIGNAL_MODE:
              p_reg->OVERRIDE.MODE = ((enable ?
                                       VREGMRAM_OVERRIDE_MODE_EN_Enabled :
                                       VREGMRAM_OVERRIDE_MODE_EN_Disabled) <<
                                       VREGMRAM_OVERRIDE_MODE_EN_Pos) |
                                       val << VREGMRAM_OVERRIDE_MODE_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vregmram_dft_atb0_config_set(NRF_VREGMRAM_Type * p_reg,
                                                        nrf_vregmram_atb0_t config)
{
    p_reg->DFT.ATB0CONFIG = ((config.ib_300na ?
                              VREGMRAM_DFT_ATB0CONFIG_IB300NA_Enabled :
                              VREGMRAM_DFT_ATB0CONFIG_IB300NA_Disabled) <<
                             VREGMRAM_DFT_ATB0CONFIG_IB300NA_Pos) |
                            ((config.vref ?
                             VREGMRAM_DFT_ATB0CONFIG_VREF_Enabled :
                             VREGMRAM_DFT_ATB0CONFIG_VREF_Disabled) <<
                            VREGMRAM_DFT_ATB0CONFIG_VREF_Pos) |
                            ((config.vpr ?
                              VREGMRAM_DFT_ATB0CONFIG_VPR_Enabled :
                              VREGMRAM_DFT_ATB0CONFIG_VPR_Disabled) <<
                             VREGMRAM_DFT_ATB0CONFIG_VPR_Pos) |
                            ((config.vtst ?
                             VREGMRAM_DFT_ATB0CONFIG_VTST_Enabled :
                             VREGMRAM_DFT_ATB0CONFIG_VTST_Disabled) <<
                            VREGMRAM_DFT_ATB0CONFIG_VTST_Pos) |
                            ((config.atb ?
                             VREGMRAM_DFT_ATB0CONFIG_EN_Enabled :
                             VREGMRAM_DFT_ATB0CONFIG_EN_Disabled) <<
                            VREGMRAM_DFT_ATB0CONFIG_EN_Pos);
}

NRF_STATIC_INLINE void nrf_vregmram_dft_atb1_config_set(NRF_VREGMRAM_Type * p_reg,
                                                        nrf_vregmram_atb1_t config)
{
    p_reg->DFT.ATB1CONFIG = ((config.tst_bf_mux ?
                             VREGMRAM_DFT_ATB1CONFIG_TSTBFMUX_Enabled :
                             VREGMRAM_DFT_ATB1CONFIG_TSTBFMUX_Disabled) <<
                            VREGMRAM_DFT_ATB1CONFIG_TSTBFMUX_Pos) |
                            ((config.vref ?
                              VREGMRAM_DFT_ATB1CONFIG_VREF_Enabled :
                              VREGMRAM_DFT_ATB1CONFIG_VREF_Disabled) <<
                             VREGMRAM_DFT_ATB1CONFIG_VREF_Pos) |
                            ((config.vpr ?
                             VREGMRAM_DFT_ATB1CONFIG_VPR_Enabled :
                             VREGMRAM_DFT_ATB1CONFIG_VPR_Disabled) <<
                            VREGMRAM_DFT_ATB1CONFIG_VPR_Pos) |
                            ((config.atb ?
                             VREGMRAM_DFT_ATB1CONFIG_EN_Enabled :
                             VREGMRAM_DFT_ATB1CONFIG_EN_Disabled) <<
                            VREGMRAM_DFT_ATB1CONFIG_EN_Pos);
}

NRF_STATIC_INLINE void nrf_vregmram_dft_tcfg_config_set(NRF_VREGMRAM_Type * p_reg,
                                                        nrf_vregmram_tcfg_t config)
{
    p_reg->DFT.TCFG = ((config.vtst_powerup ?
                        VREGMRAM_DFT_TCFG_PWRUPVTST_Enabled :
                        VREGMRAM_DFT_TCFG_PWRUPVTST_Disabled) <<
                       VREGMRAM_DFT_TCFG_PWRUPVTST_Pos) |
                      ((config.vtst_pulldown ?
                       VREGMRAM_DFT_TCFG_PDVTST_Enabled :
                       VREGMRAM_DFT_TCFG_PDVTST_Disabled) <<
                      VREGMRAM_DFT_TCFG_PDVTST_Pos) |
                      ((config.vtst_bypass ?
                        VREGMRAM_DFT_TCFG_BYPASSVTST_Enabled :
                        VREGMRAM_DFT_TCFG_BYPASSVTST_Disabled) <<
                       VREGMRAM_DFT_TCFG_BYPASSVTST_Pos) |
                      ((config.vtst_sel ?
                       VREGMRAM_DFT_TCFG_SELVTST_Enabled :
                       VREGMRAM_DFT_TCFG_SELVTST_Disabled) <<
                      VREGMRAM_DFT_TCFG_SELVTST_Pos) |
                      ((config.vrefout_sel ?
                        VREGMRAM_DFT_TCFG_SELVREFOUT_Enabled :
                        VREGMRAM_DFT_TCFG_SELVREFOUT_Disabled) <<
                       VREGMRAM_DFT_TCFG_SELVREFOUT_Pos) |
                      ((config.vrefref_sel ?
                       VREGMRAM_DFT_TCFG_SELVREFREF_Enabled :
                       VREGMRAM_DFT_TCFG_SELVREFREF_Disabled) <<
                      VREGMRAM_DFT_TCFG_SELVREFREF_Pos) |
                      ((config.vprout_sel ?
                        VREGMRAM_DFT_TCFG_SELVPROUT_Enabled :
                        VREGMRAM_DFT_TCFG_SELVPROUT_Disabled) <<
                       VREGMRAM_DFT_TCFG_SELVPROUT_Pos) |
                      ((config.vprref_sel ?
                       VREGMRAM_DFT_TCFG_SELVPRREF_Enabled :
                       VREGMRAM_DFT_TCFG_SELVPRREF_Disabled) <<
                      VREGMRAM_DFT_TCFG_SELVPRREF_Pos) |
                      ((config.vrefgencal_sel ?
                       VREGMRAM_DFT_TCFG_SELVREFGENCAL_Enabled :
                       VREGMRAM_DFT_TCFG_SELVREFGENCAL_Disabled) <<
                      VREGMRAM_DFT_TCFG_SELVREFGENCAL_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREGMRAM_H__
