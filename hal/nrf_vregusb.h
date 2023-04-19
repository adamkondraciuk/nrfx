/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREGUSB_H__
#define NRF_VREGUSB_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vregusb_hal USB Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the USB Voltage Regulator.
 */

/** @brief VREGUSB tasks. */
typedef enum
{
    NRF_VREGUSB_TASK_START = offsetof(NRF_VREGUSB_Type, TASKS_START), /**< Request power up of USB PM. */
    NRF_VREGUSB_TASK_STOP  = offsetof(NRF_VREGUSB_Type, TASKS_STOP),  /**< Stop requesting power up for USB PM. */
} nrf_vregusb_task_t;

/** @brief VREGUSB events. */
typedef enum
{
    NRF_VREGUSB_EVENT_VBUS_DETECTED_RAW = offsetof(NRF_VREGUSB_Type, EVENTS_VBUSDETECTEDRAW), /**< VBUS detected. */
    NRF_VREGUSB_EVENT_VBUS_DETECTED     = offsetof(NRF_VREGUSB_Type, EVENTS_VBUSDETECTED),    /**< VBUS detected. */
    NRF_VREGUSB_EVENT_SETTLED_0V8       = offsetof(NRF_VREGUSB_Type, EVENTS_SETTLED0V8),      /**< 0v8 settled. */
    NRF_VREGUSB_EVENT_SETTLED_3V3       = offsetof(NRF_VREGUSB_Type, EVENTS_SETTLED3V3),      /**< 3v3 settled. */
    NRF_VREGUSB_EVENT_VBUS_REMOVED      = offsetof(NRF_VREGUSB_Type, EVENTS_VBUSREMOVED),     /**< VBUS removed. */
} nrf_vregusb_event_t;

/** @brief VREGUSB interrupts. */
typedef enum
{
    NRF_VREGUSB_INT_VBUS_DETECTED_RAW_MASK = VREGUSB_INTEN_VBUSDETECTEDRAW_Msk, /**< Interrupt on VBUS detected. */
    NRF_VREGUSB_INT_VBUS_DETECTED_MASK     = VREGUSB_INTEN_VBUSDETECTED_Msk,    /**< Interrupt on VBUS detected. */
    NRF_VREGUSB_INT_SETTLED_0V8_MASK       = VREGUSB_INTEN_SETTLED0V8_Msk,      /**< Interrupt on 0v8 settled. */
    NRF_VREGUSB_INT_SETTLED_3V3_MASK       = VREGUSB_INTEN_SETTLED3V3_Msk,      /**< Interrupt on 3v3 settled. */
    NRF_VREGUSB_INT_VBUS_REMOVED_MASK      = VREGUSB_INTEN_VBUSREMOVED_Msk,     /**< Interrupt on VBUS removed. */
} nrf_vregusb_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VREGUSB_STATUS_READY_MASK        = VREGUSB_STATUS_READY_Msk,      /**< USB PM powered up. */
    NRF_VREGUSB_STATUS_VBUS_DETRAW_MASK  = VREGUSB_STATUS_VBUSDETRAW_Msk, /**< VBUS detected, raw signal. */
    NRF_VREGUSB_STATUS_VBUS_DET_MASK     = VREGUSB_STATUS_VBUSDET_Msk,    /**< VBUS detected. */
    NRF_VREGUSB_STATUS_READY_0V8_MASK    = VREGUSB_STATUS_READY0V8_Msk,   /**< Power 0v8 ready. */
    NRF_VREGUSB_STATUS_SETTLED_0V8_MASK  = VREGUSB_STATUS_SETTLED0V8_Msk, /**< Power 0v8 settled. */
    NRF_VREGUSB_STATUS_READY_3V3_MASK    = VREGUSB_STATUS_READY3V3_Msk,   /**< Power 3v3 ready. */
    NRF_VREGUSB_STATUS_SETTLED_3V3_MASK  = VREGUSB_STATUS_SETTLED3V3_Msk, /**< Power 3v3 settled. */
} nrf_vregusb_status_mask_t;

/** @brief Power up modes. */
typedef enum
{
    NRF_VREGUSB_PWRUP_MODE_AUTO       = VREGUSB_PWRUP_AUTOMODE_Auto << VREGUSB_PWRUP_AUTOMODE_Pos,   /**< USB PM automatically powered. */
    NRF_VREGUSB_PWRUP_MODE_MANUAL_ON  = (VREGUSB_PWRUP_MANUAL_On << VREGUSB_PWRUP_MANUAL_Pos)  |
                                      (VREGUSB_PWRUP_AUTOMODE_Manual << VREGUSB_PWRUP_AUTOMODE_Pos), /**< USB PM manually powered on. */
    NRF_VREGUSB_PWRUP_MODE_MANUAL_OFF = (VREGUSB_PWRUP_MANUAL_Off << VREGUSB_PWRUP_MANUAL_Pos) |
                                      (VREGUSB_PWRUP_AUTOMODE_Manual << VREGUSB_PWRUP_AUTOMODE_Pos), /**< USB PM manually powered off. */
} nrf_vregusb_pwrup_mode_t;

/** @brief Power up target. */
typedef enum
{
    NRF_VREGUSB_PWRUP_TARGET_USB_PM, /**< Power up USB PM. */
    NRF_VREGUSB_PWRUP_TARGET_0V8,    /**< Power up 0v8. */
    NRF_VREGUSB_PWRUP_TARGET_3V3,    /**< Power up 3v3. */
} nrf_vregusb_pwrup_target_t;

/** @brief Analog signal to be overridden. */
typedef enum
{
    NRF_VREGUSB_ANALOG_SIGNAL_VBUS_DETRAW, /**< Override VBUSDETRAW signal. */
    NRF_VREGUSB_ANALOG_SIGNAL_VBUS_DET,    /**< Override VBUSDET signal. */
    NRF_VREGUSB_ANALOG_SIGNAL_SETTLED_0V8, /**< Override SETTLED0V8 signal. */
    NRF_VREGUSB_ANALOG_SIGNAL_SETTLED_3V3, /**< Override SETTLED3V3 signal. */
} nrf_vregusb_analog_signal_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool test_load_3v3;  /**< Controls test load LDO 3v3. */
    bool test_load_0v8;  /**< Controls test load LDO 0v8. */
    bool test_vbus_det;  /**< Controls VBUS det test. */
    bool test_ibp;       /**< Controls IBP test. */
} nrf_vregusb_tcfg_t;

/**
 * @brief Function for activating the specified VREGUSB task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_vregusb_task_trigger(NRF_VREGUSB_Type * p_reg,
                                                nrf_vregusb_task_t task);

/**
 * @brief Function for getting the address of the specified VREGUSB task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_vregusb_task_address_get(NRF_VREGUSB_Type const * p_reg,
                                                        nrf_vregusb_task_t       task);

/**
 * @brief Function for clearing the specified VREGUSB event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vregusb_event_clear(NRF_VREGUSB_Type *  p_reg,
                                               nrf_vregusb_event_t event);

/**
 * @brief Function for retrieving the state of the VREGUSB event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vregusb_event_check(NRF_VREGUSB_Type const * p_reg,
                                               nrf_vregusb_event_t      event);

/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vregusb_event_address_get(NRF_VREGUSB_Type const * p_reg,
                                                         nrf_vregusb_event_t      event);
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled. Use @ref nrf_vregusb_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregusb_int_enable(NRF_VREGUSB_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled. Use @ref nrf_vregusb_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregusb_int_disable(NRF_VREGUSB_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked. Use @ref nrf_vregusb_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vregusb_int_enable_check(NRF_VREGUSB_Type const * p_reg,
                                                        uint32_t                 mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts. Use @ref nrf_vregusb_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregusb_int_pending_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for getting VREGUSB status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 *         Use @ref nrf_vregusb_status_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregusb_status_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting time from PM power up to ready signal.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   From 0 (0us) to 48 (3us).
 */
NRF_STATIC_INLINE void nrf_vregusb_config_rdy_tim_set(NRF_VREGUSB_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting time from PM power up to ready signal.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Time value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregusb_config_rdy_tim_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting time from VBUSDETRAW until filtered VBUSDET.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   From 0 (0us) to 8000 (500us).
 */
NRF_STATIC_INLINE void nrf_vregusb_config_vbrft_set(NRF_VREGUSB_Type * p_reg, uint16_t val);

/**
 * @brief Function for getting time from VBUSDETRAW until filtered VBUSDET.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Time value.
 */
NRF_STATIC_INLINE uint16_t nrf_vregusb_config_vbrft_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting time from power up LDOs until ready.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   From 0 (0us) to 160 (10us).
 */
NRF_STATIC_INLINE void nrf_vregusb_config_rdy_ldo_stim_set(NRF_VREGUSB_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting time from power up LDOs until ready.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Time value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregusb_config_rdy_ldo_stim_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting time from LDOs ready to SETTLED0v8.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   From 0 (0us) to 16000 (1000us).
 */
NRF_STATIC_INLINE void nrf_vregusb_config_setl_0v8_tim_set(NRF_VREGUSB_Type * p_reg, uint16_t val);

/**
 * @brief Function for getting time from LDOs ready to SETTLED0v8.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Time value.
 */
NRF_STATIC_INLINE uint16_t nrf_vregusb_config_setl_0v8_tim_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting time from SETTLE0v8 to SETTLED3v3.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   From 0 (0us) to 16000 (1000us).
 */
NRF_STATIC_INLINE void nrf_vregusb_config_setl_3v3_tim_set(NRF_VREGUSB_Type * p_reg, uint16_t val);

/**
 * @brief Function for getting time from SETTLE0v8 to SETTLED3v3.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Time value.
 */
NRF_STATIC_INLINE uint16_t nrf_vregusb_config_setl_3v3_tim_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting USB PM internal 1.8V trim.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Current reference trimming value. The value is 35.2mV - 4.4mV steps.
 */
NRF_STATIC_INLINE void nrf_vregusb_trim_vdd_set(NRF_VREGUSB_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting USB PM internal 1.8V trim.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_vdd_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting 10uA IBP bias current trim.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is -2.28uA + 0.285uA steps.
 */
NRF_STATIC_INLINE void nrf_vregusb_trim_ibp_set(NRF_VREGUSB_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting 10uA IBP bias current trim.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_ibp_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting USB PHY 0.8V DVDD trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is -160mV + 20mV steps.
 */
NRF_STATIC_INLINE void nrf_vregusb_trim_0v8_set(NRF_VREGUSB_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting USB PHY 0.8V DVDD trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_0v8_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for setting USB PHY 3.3V VDD trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Voltage offset trimming value. The value is -528mV + 66mV steps.
 */
NRF_STATIC_INLINE void nrf_vregusb_trim_3v3_set(NRF_VREGUSB_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting USB PHY 3.3V VDD trimming value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage offset trimming value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_3v3_get(NRF_VREGUSB_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vregusb_mirror_lock_set(NRF_VREGUSB_Type * p_reg, bool lock);

/**
 * @brief Function for setting power up target configuration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] target Power up target.
 * @param[in] mode   Mode configuration.
 */
NRF_STATIC_INLINE void nrf_vregusb_pwrup_set(NRF_VREGUSB_Type *         p_reg,
                                             nrf_vregusb_pwrup_target_t target,
                                             nrf_vregusb_pwrup_mode_t   mode);


/**
 * @brief Function for override signal to the analog module.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */
NRF_STATIC_INLINE void nrf_vregusb_override_set(NRF_VREGUSB_Type *          p_reg,
                                                nrf_vregusb_analog_signal_t signal,
                                                bool                        enable,
                                                uint8_t                     val);

/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregusb_dft_atb0_config_set(NRF_VREGUSB_Type * p_reg,
                                                       bool               enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregusb_dft_atb1_config_set(NRF_VREGUSB_Type * p_reg,
                                                       bool               enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregusb_dft_dtb0_config_set(NRF_VREGUSB_Type * p_reg,
                                                       bool               enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vregusb_dft_tcfg_config_set(NRF_VREGUSB_Type * p_reg,
                                                       nrf_vregusb_tcfg_t tcfg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vregusb_task_trigger(NRF_VREGUSB_Type * p_reg,
                                                nrf_vregusb_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_vregusb_task_address_get(NRF_VREGUSB_Type const * p_reg,
                                                        nrf_vregusb_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_vregusb_event_clear(NRF_VREGUSB_Type *  p_reg,
                                               nrf_vregusb_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vregusb_event_check(NRF_VREGUSB_Type const * p_reg,
                                               nrf_vregusb_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_vregusb_event_address_get(NRF_VREGUSB_Type const * p_reg,
                                                         nrf_vregusb_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vregusb_int_enable(NRF_VREGUSB_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vregusb_int_disable(NRF_VREGUSB_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregusb_int_enable_check(NRF_VREGUSB_Type const * p_reg,
                                                          uint32_t                mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregusb_int_pending_get(NRF_VREGUSB_Type const * p_reg)
{
        return p_reg->INTPEND;
}

NRF_STATIC_INLINE uint32_t nrf_vregusb_status_get(NRF_VREGUSB_Type const * p_reg)
{
    return p_reg->STATUS;
}

NRF_STATIC_INLINE void nrf_vregusb_config_rdy_tim_set(NRF_VREGUSB_Type * p_reg, uint8_t val)
{
    p_reg->CONFIG.RDYTIM = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregusb_config_rdy_tim_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint8_t)p_reg->CONFIG.RDYTIM;
}

NRF_STATIC_INLINE void nrf_vregusb_config_vbrft_set(NRF_VREGUSB_Type * p_reg, uint16_t val)
{
    p_reg->CONFIG.VBRFT = (uint32_t)val;
}

NRF_STATIC_INLINE uint16_t nrf_vregusb_config_vbrft_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint16_t)p_reg->CONFIG.VBRFT;
}

NRF_STATIC_INLINE void nrf_vregusb_config_rdy_ldo_stim_set(NRF_VREGUSB_Type * p_reg, uint8_t val)
{
    p_reg->CONFIG.RDYLDOSTIM = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregusb_config_rdy_ldo_stim_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint8_t)p_reg->CONFIG.RDYLDOSTIM;
}

NRF_STATIC_INLINE void nrf_vregusb_config_setl_0v8_tim_set(NRF_VREGUSB_Type * p_reg, uint16_t val)
{
    p_reg->CONFIG.SETL0V8TIM = (uint32_t)val;
}

NRF_STATIC_INLINE uint16_t nrf_vregusb_config_setl_0v8_tim_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint16_t)p_reg->CONFIG.SETL0V8TIM;
}

NRF_STATIC_INLINE void nrf_vregusb_config_setl_3v3_tim_set(NRF_VREGUSB_Type * p_reg, uint16_t val)
{
    p_reg->CONFIG.SETL3V3TIM = (uint32_t)val;
}

NRF_STATIC_INLINE uint16_t nrf_vregusb_config_setl_3v3_tim_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint16_t)p_reg->CONFIG.SETL3V3TIM;
}

NRF_STATIC_INLINE void nrf_vregusb_trim_vdd_set(NRF_VREGUSB_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.TRIMVDD = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_vdd_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.TRIMVDD;
}

NRF_STATIC_INLINE void nrf_vregusb_trim_ibp_set(NRF_VREGUSB_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.TRIMIBP = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_ibp_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.TRIMIBP;
}

NRF_STATIC_INLINE void nrf_vregusb_trim_0v8_set(NRF_VREGUSB_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.TRIM0V8 = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_0v8_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.TRIM0V8;
}

NRF_STATIC_INLINE void nrf_vregusb_trim_3v3_set(NRF_VREGUSB_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.TRIM3V3 = (uint32_t)val;
}

NRF_STATIC_INLINE uint8_t nrf_vregusb_trim_3v3_get(NRF_VREGUSB_Type const * p_reg)
{
    return (uint8_t)p_reg->TRIM.TRIM3V3;
}

NRF_STATIC_INLINE void nrf_vregusb_mirror_lock_set(NRF_VREGUSB_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VREGUSB_MIRROR_LOCK_Enabled : VREGUSB_MIRROR_LOCK_Disabled) <<
                    VREGUSB_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vregusb_pwrup_set(NRF_VREGUSB_Type *         p_reg,
                                             nrf_vregusb_pwrup_target_t target,
                                             nrf_vregusb_pwrup_mode_t   mode)
{
    switch (target)
    {
        case NRF_VREGUSB_PWRUP_TARGET_USB_PM:
            p_reg->PWRUP = mode;
            break;
        case NRF_VREGUSB_PWRUP_TARGET_0V8:
            p_reg->PWRUP0V8 = mode;
            break;
        case NRF_VREGUSB_PWRUP_TARGET_3V3:
            p_reg->PWRUP3V3 = mode;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_vregusb_override_set(NRF_VREGUSB_Type *          p_reg,
                                                nrf_vregusb_analog_signal_t signal,
                                                bool                        enable,
                                                uint8_t                     val)
{
    switch (signal)
    {
        case NRF_VREGUSB_ANALOG_SIGNAL_VBUS_DETRAW:
              p_reg->OVERRIDE.VBUSDETRAW = ((enable ?
                                             VREGUSB_OVERRIDE_VBUSDETRAW_EN_Enabled :
                                             VREGUSB_OVERRIDE_VBUSDETRAW_EN_Disabled) <<
                                            VREGUSB_OVERRIDE_VBUSDETRAW_EN_Pos) |
                                           val << VREGUSB_OVERRIDE_VBUSDETRAW_VAL_Pos;
              break;
        case NRF_VREGUSB_ANALOG_SIGNAL_VBUS_DET:
              p_reg->OVERRIDE.VBUSDET = ((enable ?
                                          VREGUSB_OVERRIDE_VBUSDET_EN_Enabled :
                                          VREGUSB_OVERRIDE_VBUSDET_EN_Disabled) <<
                                         VREGUSB_OVERRIDE_VBUSDET_EN_Pos) |
                                        val << VREGUSB_OVERRIDE_VBUSDET_VAL_Pos;
              break;
        case NRF_VREGUSB_ANALOG_SIGNAL_SETTLED_0V8:
              p_reg->OVERRIDE.SETTLED0V8 = ((enable ?
                                             VREGUSB_OVERRIDE_SETTLED0V8_EN_Enabled :
                                             VREGUSB_OVERRIDE_SETTLED0V8_EN_Disabled) <<
                                            VREGUSB_OVERRIDE_SETTLED0V8_EN_Pos) |
                                           val << VREGUSB_OVERRIDE_SETTLED0V8_VAL_Pos;
              break;
        case NRF_VREGUSB_ANALOG_SIGNAL_SETTLED_3V3:
              p_reg->OVERRIDE.SETTLED3V3 = ((enable ?
                                             VREGUSB_OVERRIDE_SETTLED3V3_EN_Enabled :
                                             VREGUSB_OVERRIDE_SETTLED3V3_EN_Disabled) <<
                                            VREGUSB_OVERRIDE_SETTLED3V3_EN_Pos) |
                                           val << VREGUSB_OVERRIDE_SETTLED3V3_VAL_Pos;
              break;
        default:
              NRFX_ASSERT(0);
              break;
    }
}

NRF_STATIC_INLINE void nrf_vregusb_dft_atb0_config_set(NRF_VREGUSB_Type * p_reg,
                                                       bool               enable)
{
    p_reg->DFT.ATB0CONFIG = (enable ?
                             VREGUSB_DFT_ATB0CONFIG_EN_Enabled :
                             VREGUSB_DFT_ATB0CONFIG_EN_Disabled) <<
                            VREGUSB_DFT_ATB0CONFIG_EN_Pos;
}

NRF_STATIC_INLINE void nrf_vregusb_dft_atb1_config_set(NRF_VREGUSB_Type * p_reg,
                                                       bool               enable)
{
    p_reg->DFT.ATB1CONFIG = (enable ?
                             VREGUSB_DFT_ATB1CONFIG_EN_Enabled :
                             VREGUSB_DFT_ATB1CONFIG_EN_Disabled) <<
                            VREGUSB_DFT_ATB1CONFIG_EN_Pos;
}

NRF_STATIC_INLINE void nrf_vregusb_dft_dtb0_config_set(NRF_VREGUSB_Type * p_reg,
                                                       bool               enable)
{
    p_reg->DFT.DTB0CONFIG = (enable ?
                             VREGUSB_DFT_DTB0CONFIG_EN_Enabled :
                             VREGUSB_DFT_DTB0CONFIG_EN_Disabled) <<
                            VREGUSB_DFT_DTB0CONFIG_EN_Pos;
}

NRF_STATIC_INLINE void nrf_vregusb_dft_tcfg_config_set(NRF_VREGUSB_Type * p_reg,
                                                       nrf_vregusb_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.test_load_3v3 ?
                        VREGUSB_DFT_TCFG_TESTLOAD3V3_Enabled :
                        VREGUSB_DFT_TCFG_TESTLOAD3V3_Disabled) <<
                       VREGUSB_DFT_TCFG_TESTLOAD3V3_Pos) |
                      ((tcfg.test_load_0v8 ?
                        VREGUSB_DFT_TCFG_TESTLOAD0V8_Enabled :
                        VREGUSB_DFT_TCFG_TESTLOAD0V8_Disabled) <<
                       VREGUSB_DFT_TCFG_TESTLOAD0V8_Pos) |
                      ((tcfg.test_vbus_det ?
                        VREGUSB_DFT_TCFG_TESTVBUSDET_Enabled :
                        VREGUSB_DFT_TCFG_TESTVBUSDET_Disabled) <<
                       VREGUSB_DFT_TCFG_TESTVBUSDET_Pos) |
                      ((tcfg.test_ibp ?
                        VREGUSB_DFT_TCFG_TESTIBP_Enabled :
                        VREGUSB_DFT_TCFG_TESTIBP_Disabled) <<
                       VREGUSB_DFT_TCFG_TESTIBP_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREGUSB_H__
