/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_LFRC_H__
#define NRF_LFRC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_lfrc_hal LFRC HAL
 * @{
 * @ingroup nrf_clock
 * @brief   Hardware access layer for managing the Low Frequency 32 KHz RC Oscillator (LFRC).
 */

/**
 * @brief LFRC tasks.
 *
 * @details The NRF_LFRC_TASK_CANCELCAL task cannot be set when the calibration is not running.
 */
typedef enum
{
    NRF_LFRC_TASK_CAL       = offsetof(NRF_LFRC_Type, TASKS_CAL),       /**< Start LFRC calibration. */
    NRF_LFRC_TASK_CANCELCAL = offsetof(NRF_LFRC_Type, TASKS_CANCELCAL), /**< Cancel LFRC calibration. */
} nrf_lfrc_task_t;

/** @brief LFRC events. */
typedef enum
{
    NRF_LFRC_EVENT_CALDONE   = offsetof(NRF_LFRC_Type, EVENTS_CALDONE),   /**< LFRC calibration done. */
    NRF_LFRC_EVENT_TRIMDONE  = offsetof(NRF_LFRC_Type, EVENTS_TRIMDONE),  /**< LFRC trim done. */
    NRF_LFRC_EVENT_TRIMERROR = offsetof(NRF_LFRC_Type, EVENTS_TRIMERROR), /**< LFRC trim error. */
} nrf_lfrc_event_t;

/** @brief LFRC interrupts. */
typedef enum
{
    NRF_LFRC_INT_CALDONE_MASK   = LFRC_INTENSET_CALDONE_Msk,   /**< Interrupt on CALDONE event. */
    NRF_LFRC_INT_TRIMDONE_MASK  = LFRC_INTENSET_TRIMDONE_Msk,  /**< Interrupt on TRIMDONE event. */
    NRF_LFRC_INT_TRIMERROR_MASK = LFRC_INTENSET_TRIMERROR_Msk, /**< Interrupt on TRIMERROR event. */
} nrf_lfrc_int_mask_t;

/** @brief LFRC override configuration. */
typedef struct
{
    bool doubletailcurrent_en;  /**< Enable double tail current. */
    bool continuoustailbias_en; /**< Enable continuous tail bias. */
    bool retention_en;          /**< Enable retention for CAL. */
    bool spare_en;              /**< Enable spare general purpose configuration bits. */
} nrf_lfrc_config_t;

/** @brief Number of measurement cycles used during calibration. */
typedef enum
{
    NRF_LFRC_CAL_CYCLE_LENGTH_64  = LFRC_CAL_LENGTH_LENGTH_N64,  /**< 64 cycles  */
    NRF_LFRC_CAL_CYCLE_LENGTH_128 = LFRC_CAL_LENGTH_LENGTH_N128, /**< 128 cycles */
    NRF_LFRC_CAL_CYCLE_LENGTH_256 = LFRC_CAL_LENGTH_LENGTH_N256, /**< 256 cycles */
    NRF_LFRC_CAL_CYCLE_LENGTH_512 = LFRC_CAL_LENGTH_LENGTH_N512  /**< 512 cycles */
} nrf_lfrc_cal_cycle_length_t;

/** @brief Power up control. */
typedef enum
{
    NRF_LFRC_POWER_CONTROL_AUTO       = LFRC_PWRUPCTRL_CTRL_Auto,     /**< Automatically handled by the peripheral */
    NRF_LFRC_POWER_CONTROL_POWER_UP   = LFRC_PWRUPCTRL_CTRL_PowerUp,  /**< Power up */
    NRF_LFRC_POWER_CONTROL_POWER_DOWN = LFRC_PWRUPCTRL_CTRL_PowerDown /**< Power down */
} nrf_lfrc_power_control_t;

/**
 * @brief Function for retrieving the address of the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  LFRC Task.
 *
 * @return Address of the requested task register.
 */
NRF_STATIC_INLINE uint32_t nrf_lfrc_task_address_get(NRF_LFRC_Type const * p_reg,
                                                     nrf_lfrc_task_t       task);

/**
 * @brief Function for setting the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_lfrc_task_trigger(NRF_LFRC_Type * p_reg, nrf_lfrc_task_t task);

/**
 * @brief Function for retrieving the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event LFRC Event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_lfrc_event_address_get(NRF_LFRC_Type const * p_reg,
                                                      nrf_lfrc_event_t      event);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_lfrc_event_clear(NRF_LFRC_Type * p_reg, nrf_lfrc_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_lfrc_event_check(NRF_LFRC_Type const * p_reg, nrf_lfrc_event_t event);

/**
 * @brief Function for enabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_lfrc_int_enable(NRF_LFRC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_lfrc_int_disable(NRF_LFRC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_lfrc_int_enable_check(NRF_LFRC_Type const * p_reg, uint32_t mask);

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
NRF_STATIC_INLINE uint32_t nrf_lfrc_int_pending_get(NRF_LFRC_Type const * p_reg);

/**
 * @brief Function for getting current trimming value of the LFRCOSC.
 *
 * @note Returned value is in 2's complement format, 1.4% steps.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trim value register contents.
 */
NRF_STATIC_INLINE int32_t nrf_lfrc_trim_status_get(NRF_LFRC_Type const * p_reg);

/**
 * @brief Function for checking status of analog module READY signal.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The signal is logic 1.
 * @retval false The signal is logic 0.
 */
NRF_STATIC_INLINE bool nrf_lfrc_statusana_ready_check(NRF_LFRC_Type const * p_reg);

/**
 * @brief Function for checking status of analog module SETTLED signal.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The signal is logic 1.
 * @retval false The signal is logic 0.
 */
NRF_STATIC_INLINE bool nrf_lfrc_statusana_settled_check(NRF_LFRC_Type const * p_reg);

/**
 * @brief Function for override the configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Configuration parameters.
 */
NRF_STATIC_INLINE void nrf_lfrc_config_set(NRF_LFRC_Type *           p_reg,
                                           nrf_lfrc_config_t const * p_config);

/**
 * @brief Function for setting measurement cycle count length used while calibration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] length Number of cycles.
 */
NRF_STATIC_INLINE void nrf_lfrc_cal_cycle_length_set(NRF_LFRC_Type *             p_reg,
                                                     nrf_lfrc_cal_cycle_length_t length);

/**
 * @brief Function for setting lower trim limit.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trimlimit TRIM limit value.
 */
NRF_STATIC_INLINE void nrf_lfrc_cal_trim_limit_low_set(NRF_LFRC_Type * p_reg, uint32_t trimlimit);

/**
 * @brief Function for setting higher trim limit.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trimlimit TRIM limit value.
 */
NRF_STATIC_INLINE void nrf_lfrc_cal_trim_limit_high_set(NRF_LFRC_Type * p_reg, uint32_t trimlimit);

/**
 * @brief Function for reading calibration results.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] number Result number.
 *
 * @return Result in 16 MHz clock cycles.
 */
NRF_STATIC_INLINE uint32_t nrf_lfrc_cal_result_get(NRF_LFRC_Type const * p_reg, uint8_t number);

/**
 * @brief Function for reading number of cycles when the CAL signal is high.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Number of cycles.
 */
NRF_STATIC_INLINE uint16_t nrf_lfrc_cal_num_of_cycles_get(NRF_LFRC_Type const * p_reg);

/**
 * @brief Function for power control set.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] pwrctrl Power up control.
 */
NRF_STATIC_INLINE void nrf_lfrc_power_control_set(NRF_LFRC_Type *          p_reg,
                                                  nrf_lfrc_power_control_t pwrctrl);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_lfrc_task_address_get(NRF_LFRC_Type const * p_reg,
                                                     nrf_lfrc_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_lfrc_task_trigger(NRF_LFRC_Type * p_reg, nrf_lfrc_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_lfrc_event_address_get(NRF_LFRC_Type const * p_reg,
                                                      nrf_lfrc_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_lfrc_event_clear(NRF_LFRC_Type * p_reg, nrf_lfrc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_lfrc_event_check(NRF_LFRC_Type const * p_reg, nrf_lfrc_event_t event)
{
    return (bool)*((volatile uint32_t *)((uint8_t *)p_reg + event));
}

NRF_STATIC_INLINE void nrf_lfrc_int_enable(NRF_LFRC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_lfrc_int_disable(NRF_LFRC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_lfrc_int_enable_check(NRF_LFRC_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_lfrc_int_pending_get(NRF_LFRC_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE int32_t nrf_lfrc_trim_status_get(NRF_LFRC_Type const * p_reg)
{
    uint32_t raw_measurement = (p_reg->STATUSTRIM & LFRC_STATUSTRIM_VAL_Msk) >>
                                    LFRC_STATUSTRIM_VAL_Pos;

    /* Register is only 6 bits length so perform sign bit extension */
    if (raw_measurement > (LFRC_STATUSTRIM_VAL_Msk >> 1))
    {
        raw_measurement |= ~LFRC_STATUSTRIM_VAL_Msk;
    }

    return (int32_t)raw_measurement;
}

NRF_STATIC_INLINE bool nrf_lfrc_statusana_ready_check(NRF_LFRC_Type const * p_reg)
{
    return (bool)(p_reg->STATUSANA & LFRC_STATUSANA_READY_Msk);
}

NRF_STATIC_INLINE bool nrf_lfrc_statusana_settled_check(NRF_LFRC_Type const * p_reg)
{
    return (bool)(p_reg->STATUSANA & LFRC_STATUSANA_SETTLED_Msk);
}

NRF_STATIC_INLINE void nrf_lfrc_config_set(NRF_LFRC_Type *           p_reg,
                                           nrf_lfrc_config_t const * p_config)
{
    p_reg->CONFIG.CFG =
        ((p_config->doubletailcurrent_en  << LFRC_CONFIG_CFG_DOUBLETAILCURRENT_Pos)  &
              LFRC_CONFIG_CFG_DOUBLETAILCURRENT_Msk)
      | ((p_config->continuoustailbias_en << LFRC_CONFIG_CFG_CONTINUOUSTAILBIAS_Pos) &
              LFRC_CONFIG_CFG_CONTINUOUSTAILBIAS_Msk)
      | ((p_config->retention_en          << LFRC_CONFIG_CFG_ENABLERETENTION_Pos)    &
              LFRC_CONFIG_CFG_ENABLERETENTION_Msk)
      | ((p_config->spare_en              << LFRC_CONFIG_CFG_SPARE_Pos)              &
              LFRC_CONFIG_CFG_SPARE_Msk);
}

NRF_STATIC_INLINE void nrf_lfrc_cal_cycle_length_set(NRF_LFRC_Type *             p_reg,
                                                     nrf_lfrc_cal_cycle_length_t length)
{
    p_reg->CAL.LENGTH = (uint32_t)length << LFRC_CAL_LENGTH_LENGTH_Pos;
}

NRF_STATIC_INLINE void nrf_lfrc_cal_trim_limit_low_set(NRF_LFRC_Type * p_reg, uint32_t trimlimit)
{
    p_reg->CAL.TRIMLIMITLO = (trimlimit << LFRC_CAL_TRIMLIMITLO_VALUE_Pos) &
                                   LFRC_CAL_TRIMLIMITLO_VALUE_Msk;
}

NRF_STATIC_INLINE void nrf_lfrc_cal_trim_limit_high_set(NRF_LFRC_Type * p_reg, uint32_t trimlimit)
{
    p_reg->CAL.TRIMLIMITHI = (trimlimit << LFRC_CAL_TRIMLIMITHI_VALUE_Pos) &
                                   LFRC_CAL_TRIMLIMITHI_VALUE_Msk;
}

NRF_STATIC_INLINE uint32_t nrf_lfrc_cal_result_get(NRF_LFRC_Type const * p_reg, uint8_t number)
{
    NRFX_ASSERT(number < LFRC_CAL_RESULT_MaxCount);
    return p_reg->CAL.RESULT[number];
}

NRF_STATIC_INLINE uint16_t nrf_lfrc_cal_num_of_cycles_get(NRF_LFRC_Type const * p_reg)
{
    return (uint16_t)p_reg->CAL.NHI;
}

NRF_STATIC_INLINE void nrf_lfrc_power_control_set(NRF_LFRC_Type *          p_reg,
                                                  nrf_lfrc_power_control_t pwrctrl)
{
    p_reg->PWRUPCTRL = (uint32_t)pwrctrl << LFRC_PWRUPCTRL_CTRL_Pos;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_LFRC_H__
