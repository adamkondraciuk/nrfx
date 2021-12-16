/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_FLL16M_H__
#define NRF_FLL16M_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_fll16m_hal FLL16M HAL
 * @{
 * @ingroup nrf_fll16m
 * @brief   Hardware access layer for managing the 16 MHz Frequency Locked Loop (FLL16M) peripheral.
 */

/** @brief FLL16M tasks. */
typedef enum
{
    NRF_FLL16M_TASK_ONESHOTLOCK = offsetof(NRF_FLL16M_Type, TASKS_ONESHOTLOCK), /**< Start one-shot locking process in Refresh mode. */
    NRF_FLL16M_TASK_SLEEP       = offsetof(NRF_FLL16M_Type, TASKS_SLEEP),       /**< Enter into FLL16M sleep mode. */
    NRF_FLL16M_TASK_FREQMEAS    = offsetof(NRF_FLL16M_Type, TASKS_FREQMEAS),    /**< Start frequency measurement in software-controlled mode. */
    NRF_FLL16M_TASK_FREQCHANGE  = offsetof(NRF_FLL16M_Type, TASKS_FREQCHANGE)   /**< Frequency measurement done. */
} nrf_fll16m_task_t;

/** @brief FLL16M events. */
typedef enum
{
    NRF_FLL16M_EVENT_FREQMDONE   = offsetof(NRF_FLL16M_Type, EVENTS_FREQMDONE),  /**< Frequency measurement done. */
    NRF_FLL16M_EVENT_FREQMERROR  = offsetof(NRF_FLL16M_Type, EVENTS_FREQMERROR), /**< Frequency measurement error. */
    NRF_FLL16M_EVENT_FREQCHANGED = offsetof(NRF_FLL16M_Type, EVENTS_FREQCHANGED) /**< Frequency change done. */
} nrf_fll16m_event_t;

/** @brief FLL16M interrupts. */
typedef enum
{
    NRF_FLL16M_INT_FREQMDONE_MASK   = FLL16M_INTENSET_FREQMDONE_Msk,   /**< Interrupt on FREQMDONE event. */
    NRF_FLL16M_INT_FREQMERROR_MASK  = FLL16M_INTENSET_FREQMERROR_Msk,  /**< Interrupt on FREQMERROR event. */
    NRF_FLL16M_INT_FREQCHANGED_MASK = FLL16M_INTENSET_FREQCHANGED_Msk, /**< Interrupt on FREQCHANGED event. */
} nrf_fll16m_int_mask_t;

/** @brief FLL16M operating mode. */
typedef enum
{
    NRF_FLL16M_MODE_AUTO       = FLL16M_CLOCKSTATUS_MODE_Auto,       /**< The PCGC controls the mode automatically. */
    NRF_FLL16M_MODE_OPENLOOP   = FLL16M_CLOCKSTATUS_MODE_OpenLoop,   /**< Open loop mode. */
    NRF_FLL16M_MODE_CLOSEDLOOP = FLL16M_CLOCKSTATUS_MODE_ClosedLoop, /**< Closed loop mode. */
    NRF_FLL16M_MODE_REFRESH    = FLL16M_CLOCKSTATUS_MODE_Refresh,    /**< Refresh mode. */
    NRF_FLL16M_MODE_BYPASS     = FLL16M_CLOCKSTATUS_MODE_Bypass      /**< Bypass mode. */
} nrf_fll16m_mode_t;

/** @brief Clock selection. */
typedef enum
{
    NRF_FLL16M_CLOCKSEL_DCO16M = FLL16M_CLOCKSTATUS_CLOCKSEL_DCO16M, /**< Clock from DCO16M selected. */
    NRF_FLL16M_CLOCKSEL_HFXO   = FLL16M_CLOCKSTATUS_CLOCKSEL_HFXO,   /**< Clock from HFXO selected. */
} nrf_fll16m_clocksel_t;

/** @brief Clock selection for the frequency measurement. */
typedef enum
{
    NRF_FLL16M_FREQMEAS_CLOCKSEL_DCO16M         = FLL16M_FREQM_CLOCKSEL_CLOCKSEL_DCO16M,         /**< Clock from DCO16M selected. */
    NRF_FLL16M_FREQMEAS_CLOCKSEL_CKSW16M        = FLL16M_FREQM_CLOCKSEL_CLOCKSEL_CKSW16M,        /**< Clock from CKSW16M selected. */
    NRF_FLL16M_FREQMEAS_CLOCKSEL_HFXOBY2        = FLL16M_FREQM_CLOCKSEL_CLOCKSEL_HFXOBy2,        /**< Clock from 32MHz HFXO divided by 2 selected. */
    NRF_FLL16M_FREQMEAS_CLOCKSEL_CKSW16MTESTOSC = FLL16M_FREQM_CLOCKSEL_CLOCKSEL_CKSW16MTestOsc, /**< Clock from CKSW16M TESTOSC selected. */
} nrf_fll16m_freqmeas_clocksel_t;

/** @brief Clock status. */
typedef struct
{
    nrf_fll16m_mode_t     mode;                 /**< FLL16M operating mode. */
    bool                  override_en;          /**< FLL16M Override mode enable. */
    nrf_fll16m_clocksel_t clocksel;             /**< Selected clock. */
    bool                  accuracy_withinlimit; /**< Clock accuracy. */
    bool                  locked;               /**< Loop lock status. */
    uint8_t               slope;                /**< Calculated slope value. */
} nrf_fll16m_clockstatus_t;

/** @brief Clock control. */
typedef struct
{
    nrf_fll16m_mode_t     mode;        /**< The FLL16M operating mode. */
    bool                  override_en; /**< FLL16M Override mode enable. */
    nrf_fll16m_clocksel_t clocksel;    /**< Clock selected. */
} nrf_fll16m_clockctrl_t;

/** @brief Clock dithering configuration. */
typedef struct
{
    uint8_t  cyclecount; /**< Cycle count configuration for clock dithering */
    uint8_t  maxoffset;  /**< Maximum offset configuration for clock dithering */
    uint16_t initvalue;  /**< Initial value for the dithering */
    bool     enable;     /**< Enable the clock dithering */
} nrf_fll16m_dithering_t;

/** @brief Sleep configuration. */
typedef struct
{
    bool sleep_mode_en;     /**< FLL16M sleep mode enable. */
    bool retain_dco16m_en;  /**< Retain DCO16M enable. */
    bool retain_cksw16m_en; /**< Retain CKSW16M enable. */
} nrf_fll16m_sleep_t;

/** @brief Selection for the reference clock signal in software controlled mode. */
typedef enum
{
    NRF_FLL16M_REFCLOCK_SELECT_CLOCK32KHZ = FLL16M_CLOCKCTRL_REFCLOCK_SELREF_Clock32Ki, /**< The 32 Ki clock selection. */
    NRF_FLL16M_REFCLOCK_SELECT_CLOCK16MHZ = FLL16M_CLOCKCTRL_REFCLOCK_SELREF_Clock16M,  /**< The 16 MHz clock selection. */
} nrf_fll16m_refclock_select_t;

/** @brief Reference clock configuration. */
typedef struct
{
    nrf_fll16m_refclock_select_t selref;      /**< Selection for the reference clock signal in software controlled mode. */
    bool                         disable32ki; /**< Disable the 32Ki reference clock */
} nrf_fll16m_refclock_t;

/**
 * @brief Function for retrieving the address of the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  FLL16M Task.
 *
 * @return Address of the requested task register.
 */
NRF_STATIC_INLINE uint32_t nrf_fll16m_task_address_get(NRF_FLL16M_Type const * p_reg,
                                                       nrf_fll16m_task_t       task);

/**
 * @brief Function for triggering the specified task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_fll16m_task_trigger(NRF_FLL16M_Type * p_reg, nrf_fll16m_task_t task);

/**
 * @brief Function for retrieving the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event FLL16M event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_fll16m_event_address_get(NRF_FLL16M_Type const * p_reg,
                                                        nrf_fll16m_event_t      event);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_fll16m_event_clear(NRF_FLL16M_Type * p_reg, nrf_fll16m_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_fll16m_event_check(NRF_FLL16M_Type const * p_reg,
                                              nrf_fll16m_event_t      event);

/**
 * @brief Function for enabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_fll16m_int_enable(NRF_FLL16M_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_fll16m_int_disable(NRF_FLL16M_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE
uint32_t nrf_fll16m_int_enable_check(NRF_FLL16M_Type const * p_reg, uint32_t mask);

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
NRF_STATIC_INLINE uint32_t nrf_fll16m_int_pending_get(NRF_FLL16M_Type const * p_reg);

/**
 * @brief Function for checking power up status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Power up status.
 */
NRF_STATIC_INLINE bool nrf_fll16m_powerup_ready_check(NRF_FLL16M_Type const * p_reg);

/**
 * @brief Function for getting the clock status.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_status Pointer to the structure to be filled with clock status.
 */
NRF_STATIC_INLINE void nrf_fll16m_clockstatus_get(NRF_FLL16M_Type const *    p_reg,
                                                  nrf_fll16m_clockstatus_t * p_status);

/**
 * @brief Function for checking the frequency measurement completion status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Frequency measurement is completed.
 * @retval false Frequency measurement is in progress.
 */
NRF_STATIC_INLINE bool nrf_fll16m_freqmeas_done_check(NRF_FLL16M_Type const * p_reg);

/**
 * @brief Function for checking the frequency measurement error status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Frequency exceeded the accuracy 0.5% in closed loop mode.
 * @retval false Frequency stayed within accuracy 0.5% in closed loop mode.
 */
NRF_STATIC_INLINE bool nrf_fll16m_freqmeas_error_check(NRF_FLL16M_Type const * p_reg);

/**
 * @brief Function for getting the frequency measurement.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Last frequency measurement value (DCO16M clock cycles during two 32Ki cycles).
 */
NRF_STATIC_INLINE uint16_t nrf_fll16m_freqmeas_value_get(NRF_FLL16M_Type const * p_reg);

/**
 * @brief Function for getting clock selection for the frequency measurement.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Enumerated type with clock selection data.
 */
NRF_STATIC_INLINE
nrf_fll16m_freqmeas_clocksel_t nrf_fll16m_freqmeas_clocksel_get(NRF_FLL16M_Type const * p_reg);

/**
 * @brief Function for selecting clock for the frequency measurement.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] clocksel Clock selection.
 */
NRF_STATIC_INLINE void nrf_fll16m_freqmeas_clocksel_set(NRF_FLL16M_Type *              p_reg,
                                                        nrf_fll16m_freqmeas_clocksel_t clocksel);

/**
 * @brief Function for setting clock control.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Configuration parameters.
 */
NRF_STATIC_INLINE void nrf_fll16m_clkctrl_mode_set(NRF_FLL16M_Type *              p_reg, 
                                                   nrf_fll16m_clockctrl_t const * p_config);

/**
 * @brief Function for setting clock dithering configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Configuration parameters.
 */
NRF_STATIC_INLINE
void nrf_fll16m_clctrl_dithering_set(NRF_FLL16M_Type *              p_reg,
                                     nrf_fll16m_dithering_t const * p_config);

/**
 * @brief Function for setting sleep configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Configuration parameters.
 */
NRF_STATIC_INLINE void nrf_fll16m_clctrl_sleep_set(NRF_FLL16M_Type *          p_reg,
                                                   nrf_fll16m_sleep_t const * p_config);

/**
 * @brief Function for setting the retention of the fine trim control.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] retain True if the fine trim control is to be retained when FLL16M goes to open-loop
                     mode, false otherwise.
 */
NRF_STATIC_INLINE void nrf_fll16m_clctrl_retain_set(NRF_FLL16M_Type * p_reg, bool retain);

/**
 * @brief Function for setting the override of the LOCKED signal.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] override True if the override is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE
void nrf_fll16m_clctrl_override_locked_set(NRF_FLL16M_Type * p_reg, bool override);

/**
 * @brief Function for setting reference clock configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Configuration parameters.
 */
NRF_STATIC_INLINE
void nrf_fll16m_clctrl_refclock_set(NRF_FLL16M_Type *             p_reg,
                                    nrf_fll16m_refclock_t const * p_config);

/**
 * @brief Function for setting default slope value for FLL16M.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] slope Slope value.
 */
NRF_STATIC_INLINE
void nrf_fll16m_clctrl_default_slope_set(NRF_FLL16M_Type * p_reg, uint16_t slope);

/**
 * @brief Function for setting frequency measurement limit.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] limit Determines how many frequency jumps the FLL16M will do before reaching locked
 *                  state where the fine trim is changed by only +/-1.
 */
NRF_STATIC_INLINE
void nrf_fll16m_clctrl_freq_meas_limit_set(NRF_FLL16M_Type * p_reg, uint8_t limit);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_fll16m_task_address_get(NRF_FLL16M_Type const * p_reg,
                                                       nrf_fll16m_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_fll16m_task_trigger(NRF_FLL16M_Type * p_reg, nrf_fll16m_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_fll16m_event_address_get(NRF_FLL16M_Type const * p_reg,
                                                        nrf_fll16m_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_fll16m_event_clear(NRF_FLL16M_Type * p_reg, nrf_fll16m_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_fll16m_event_check(NRF_FLL16M_Type const * p_reg,
                                              nrf_fll16m_event_t      event)
{
    return (bool)*((volatile uint32_t *)((uint8_t *)p_reg + event));
}

NRF_STATIC_INLINE void nrf_fll16m_int_enable(NRF_FLL16M_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_fll16m_int_disable(NRF_FLL16M_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE
uint32_t nrf_fll16m_int_enable_check(NRF_FLL16M_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_fll16m_int_pending_get(NRF_FLL16M_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE bool nrf_fll16m_powerup_ready_check(NRF_FLL16M_Type const * p_reg)
{
    return (p_reg->READY & FLL16M_READY_READY_Msk);
}

NRF_STATIC_INLINE void nrf_fll16m_clockstatus_get(NRF_FLL16M_Type const *    p_reg,
                                                  nrf_fll16m_clockstatus_t * p_status)
{
    uint32_t regval = p_reg->CLOCKSTATUS;

    p_status->mode = (regval & FLL16M_CLOCKSTATUS_MODE_Msk) >> FLL16M_CLOCKSTATUS_MODE_Pos;
    p_status->override_en = (regval & FLL16M_CLOCKSTATUS_OVERRIDE_Msk) >>
        FLL16M_CLOCKSTATUS_OVERRIDE_Pos;
    p_status->clocksel = (regval & FLL16M_CLOCKSTATUS_CLOCKSEL_Msk) >>
        FLL16M_CLOCKSTATUS_CLOCKSEL_Pos;
    p_status->accuracy_withinlimit = (regval & FLL16M_CLOCKSTATUS_ACCURACY_Msk) >>
        FLL16M_CLOCKSTATUS_ACCURACY_Pos;
    p_status->locked = (regval & FLL16M_CLOCKSTATUS_LOCKED_Msk) >> FLL16M_CLOCKSTATUS_LOCKED_Pos;
    p_status->slope = (regval & FLL16M_CLOCKSTATUS_SLOPE_Msk) >> FLL16M_CLOCKSTATUS_SLOPE_Pos;
}

NRF_STATIC_INLINE bool nrf_fll16m_freqmeas_done_check(NRF_FLL16M_Type const * p_reg)
{
    return (p_reg->FREQM.DONE & FLL16M_FREQM_DONE_DONE_Msk);
}

NRF_STATIC_INLINE bool nrf_fll16m_freqmeas_error_check(NRF_FLL16M_Type const * p_reg)
{
    return (p_reg->FREQM.ERROR & FLL16M_FREQM_ERROR_ERROR_OutsideLimit);
}

NRF_STATIC_INLINE uint16_t nrf_fll16m_freqmeas_value_get(NRF_FLL16M_Type const * p_reg)
{
    return (p_reg->FREQM.MEAS & FLL16M_FREQM_MEAS_VALUE_Msk) >> FLL16M_FREQM_MEAS_VALUE_Pos;
}

NRF_STATIC_INLINE
nrf_fll16m_freqmeas_clocksel_t nrf_fll16m_freqmeas_clocksel_get(NRF_FLL16M_Type const * p_reg)
{
    return (nrf_fll16m_freqmeas_clocksel_t)(p_reg->FREQM.CLOCKSEL);
}

NRF_STATIC_INLINE void nrf_fll16m_freqmeas_clocksel_set(NRF_FLL16M_Type *              p_reg,
                                                        nrf_fll16m_freqmeas_clocksel_t clocksel)
{
    p_reg->FREQM.CLOCKSEL = (uint32_t)clocksel;
}

NRF_STATIC_INLINE void nrf_fll16m_clkctrl_mode_set(NRF_FLL16M_Type *              p_reg, 
                                                   nrf_fll16m_clockctrl_t const * p_config)
{
    p_reg->CLOCKCTRL.MODE =
        (((uint32_t)p_config->mode     << FLL16M_CLOCKCTRL_MODE_MODE_Pos) &
            FLL16M_CLOCKCTRL_MODE_MODE_Msk)
      | ((p_config->override_en        << FLL16M_CLOCKCTRL_MODE_OVERRIDE_Pos) &
            FLL16M_CLOCKCTRL_MODE_OVERRIDE_Msk)
      | (((uint32_t)p_config->clocksel << FLL16M_CLOCKCTRL_MODE_CLOCKSEL_Pos) &
            FLL16M_CLOCKCTRL_MODE_CLOCKSEL_Msk);
}

NRF_STATIC_INLINE
void nrf_fll16m_clctrl_dithering_set(NRF_FLL16M_Type *              p_reg,
                                     nrf_fll16m_dithering_t const * p_config)
{
    p_reg->CLOCKCTRL.DITHERING =
        ((p_config->cyclecount << FLL16M_CLOCKCTRL_DITHERING_CYCLECOUNT_Pos) &
            FLL16M_CLOCKCTRL_DITHERING_CYCLECOUNT_Msk)
      | ((p_config->maxoffset  << FLL16M_CLOCKCTRL_DITHERING_MAXOFFSET_Pos) &
            FLL16M_CLOCKCTRL_DITHERING_MAXOFFSET_Msk)
      | ((p_config->initvalue  << FLL16M_CLOCKCTRL_DITHERING_INITVALUE_Pos) &
            FLL16M_CLOCKCTRL_DITHERING_INITVALUE_Msk)
      | ((p_config->enable     << FLL16M_CLOCKCTRL_DITHERING_EN_Pos) &
            FLL16M_CLOCKCTRL_DITHERING_EN_Msk);
}

NRF_STATIC_INLINE void nrf_fll16m_clctrl_sleep_set(NRF_FLL16M_Type *          p_reg,
                                                   nrf_fll16m_sleep_t const * p_config)
{
    p_reg->CLOCKCTRL.SLEEP =
        ((p_config->sleep_mode_en     << FLL16M_CLOCKCTRL_SLEEP_MODE_Pos) &
            FLL16M_CLOCKCTRL_SLEEP_MODE_Pos)
      | ((p_config->retain_dco16m_en  << FLL16M_CLOCKCTRL_SLEEP_RETDCO16M_Pos) &
            FLL16M_CLOCKCTRL_SLEEP_RETDCO16M_Pos)
      | ((p_config->retain_cksw16m_en << FLL16M_CLOCKCTRL_SLEEP_RETCKSW16M_Pos) &
            FLL16M_CLOCKCTRL_SLEEP_RETCKSW16M_Pos);
}

NRF_STATIC_INLINE void nrf_fll16m_clctrl_retain_set(NRF_FLL16M_Type * p_reg, bool retain)
{
    p_reg->CLOCKCTRL.RETAINFINETRIM = (retain << FLL16M_CLOCKCTRL_RETAINFINETRIM_RETAIN_Pos) &
        FLL16M_CLOCKCTRL_RETAINFINETRIM_RETAIN_Msk;
}

NRF_STATIC_INLINE
void nrf_fll16m_clctrl_override_locked_set(NRF_FLL16M_Type * p_reg, bool override)
{
    p_reg->CLOCKCTRL.OVERRIDELOCKED = (override << FLL16M_CLOCKCTRL_OVERRIDELOCKED_OVERRIDE_Pos) &
        FLL16M_CLOCKCTRL_OVERRIDELOCKED_OVERRIDE_Msk;
}

NRF_STATIC_INLINE
void nrf_fll16m_clctrl_refclock_set(NRF_FLL16M_Type *                       p_reg,
                                    nrf_fll16m_refclock_t const * p_config)
{
    p_reg->CLOCKCTRL.REFCLOCK =
        ((p_config->selref      << FLL16M_CLOCKCTRL_REFCLOCK_SELREF_Pos) &
            FLL16M_CLOCKCTRL_REFCLOCK_SELREF_Msk)
      | ((p_config->disable32ki << FLL16M_CLOCKCTRL_REFCLOCK_DISABLE32KI_Pos) &
            FLL16M_CLOCKCTRL_REFCLOCK_DISABLE32KI_Msk);
}

NRF_STATIC_INLINE void nrf_fll16m_clctrl_default_slope_set(NRF_FLL16M_Type * p_reg, uint16_t slope)
{
    p_reg->CLOCKCTRL.DEFAULTSLOPE = (slope << FLL16M_CLOCKCTRL_DEFAULTSLOPE_VALUE_Pos) &
        FLL16M_CLOCKCTRL_DEFAULTSLOPE_VALUE_Msk;
}

NRF_STATIC_INLINE
void nrf_fll16m_clctrl_freq_meas_limit_set(NRF_FLL16M_Type * p_reg, uint8_t limit)
{
    p_reg->CLOCKCTRL.FREQMEASLIMIT = (limit << FLL16M_CLOCKCTRL_FREQMEASLIMIT_VALUE_Pos) &
        FLL16M_CLOCKCTRL_FREQMEASLIMIT_VALUE_Msk;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_FLL16M_H__
