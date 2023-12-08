/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_HFXO64M_H__
#define NRF_HFXO64M_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_hfxo64m_hal HFXO64M HAL
 * @{
 * @ingroup nrf_clock
 * @brief   Hardware access layer for managing the High Frequency Crystal Oscillator 64MHz (HFXO64M).
 */

#if defined(HFXO64M_INTENSET_ERRORTCXO_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether the TCXO is present. */
#define NRF_HFXO64M_HAS_TCXO 1
#else
#define NRF_HFXO64M_HAS_TCXO 0
#endif

/** @brief HFXO64M events. */
typedef enum
{
    NRF_HFXO64M_EVENT_STARTED        = offsetof(NRF_HFXO64M_Type, EVENTS_STARTED),       /**< HFXO64M started. */
    NRF_HFXO64M_EVENT_STOPPED        = offsetof(NRF_HFXO64M_Type, EVENTS_STOPPED),       /**< HFXO64M stopped. */
    NRF_HFXO64M_EVENT_ERROR_BIAS     = offsetof(NRF_HFXO64M_Type, EVENTS_ERRORBIAS),     /**< Error in BIAS setup. */
    NRF_HFXO64M_EVENT_ERROR_DETECTOR = offsetof(NRF_HFXO64M_Type, EVENTS_ERRORDETECTOR), /**< Error with DETECTOR. */
#if NRF_HFXO64M_HAS_TCXO
    NRF_HFXO64M_EVENT_ERROR_TCXO     = offsetof(NRF_HFXO64M_Type, EVENTS_ERRORTCXO),     /**< Error with TCXO startup. */
    NRF_HFXO64M_EVENT_STARTREQ       = offsetof(NRF_HFXO64M_Type, EVENTS_STARTREQ),      /**< Clock start has been requested. */
    NRF_HFXO64M_EVENT_STOPREQ        = offsetof(NRF_HFXO64M_Type, EVENTS_STOPREQ),       /**< Clock start has been requested. */
#endif
} nrf_hfxo64m_event_t;

/** @brief HFXO64M interrupts. */
typedef enum
{
    NRF_HFXO64M_INT_STARTED_MASK        = HFXO64M_INTENSET_STARTED_Msk,       /**< Interrupt on STARTED event. */
    NRF_HFXO64M_INT_STOPPED_MASK        = HFXO64M_INTENSET_STOPPED_Msk,       /**< Interrupt on STOPPED event. */
    NRF_HFXO64M_INT_ERROR_BIAS_MASK     = HFXO64M_INTENSET_ERRORBIAS_Msk,     /**< Interrupt on ERRORBIAS event. */
    NRF_HFXO64M_INT_ERROR_DETECTOR_MASK = HFXO64M_INTENSET_ERRORDETECTOR_Msk, /**< Interrupt on ERRORDETECTOR event. */
#if NRF_HFXO64M_HAS_TCXO
    NRF_HFXO64M_INT_ERROR_TCXO_MASK     = HFXO64M_INTENSET_ERRORTCXO_Msk,     /**< Interrupt on ERRORTCXO event. */
    NRF_HFXO64M_INT_STARTREQ_MASK       = HFXO64M_INTENSET_STARTREQ_Msk,      /**< Interrupt on STARTREQ event. */
    NRF_HFXO64M_INT_STOPREQ_MASK        = HFXO64M_INTENSET_STOPREQ_Msk,       /**< Interrupt on STOPREQ event. */
#endif
} nrf_hfxo64m_int_mask_t;

/** @brief HFXO64M status modes. */
typedef enum
{
    NRF_HFXO64M_STATUS_MODE_NORMAL = HFXO64M_STATUS_MODE_Normal, /**< Normal HFXO64M mode. */
    NRF_HFXO64M_STATUS_MODE_TCXO   = HFXO64M_STATUS_MODE_TCXO,   /**< External TCXO used, HFXO64M core is bypassed. */
} nrf_hfxo64m_status_mode_t;

/** @brief HFXO64M status. */
typedef struct
{
    nrf_hfxo64m_status_mode_t oscmode; /**< Oscillator mode. */
    bool                      running; /**< HFXO64M running status. */
} nrf_hfxo64m_status_t;

/** @brief HFXO64M status of analog module output signals. */
typedef struct
{
    bool current_comparison; /**< Current value of the CURRENT_COMPARISON from the analog module. */
    bool detector1;          /**< Current value of the DETECTOR1 signal from the analog module. */
    bool detector2;          /**< Current value of the DETECTOR2 signal from the analog module. */
} nrf_hfxo64m_statusana_t;

/** @brief HFXO64M process modes. */
typedef enum
{
    NRF_HFXO64M_PROCESS_TYPICAL = 0, /**< Typical process compensation. */
    NRF_HFXO64M_PROCESS_SLOW,        /**< Slow process compensation. */
    NRF_HFXO64M_PROCESS_FAST         /**< Fast process compensation. */
} nrf_hfxo64m_process_t;

/** @brief HFXO64M Temperature measurement interval mode. */
typedef enum
{
    NRF_HFXO64M_TS_INTERVAL_4US   = HFXO64M_TS_CFG_TIMERSEL_Interval4us,   /**< 4 us. */
    NRF_HFXO64M_TS_INTERVAL_8US   = HFXO64M_TS_CFG_TIMERSEL_Interval8us,   /**< 8 us. */
    NRF_HFXO64M_TS_INTERVAL_16US  = HFXO64M_TS_CFG_TIMERSEL_Interval16us,  /**< 16 us. */
    NRF_HFXO64M_TS_INTERVAL_32US  = HFXO64M_TS_CFG_TIMERSEL_Interval32us,  /**< 32 us. */
    NRF_HFXO64M_TS_INTERVAL_64US  = HFXO64M_TS_CFG_TIMERSEL_Interval64us,  /**< 64 us. */
    NRF_HFXO64M_TS_INTERVAL_128US = HFXO64M_TS_CFG_TIMERSEL_Interval128us, /**< 128 us. */
    NRF_HFXO64M_TS_INTERVAL_256US = HFXO64M_TS_CFG_TIMERSEL_Interval256us, /**< 256 us. */
    NRF_HFXO64M_TS_INTERVAL_512US = HFXO64M_TS_CFG_TIMERSEL_Interval512us, /**< 512 us. */
} nrf_hfxo64m_ts_interval_t;

/** @brief HFXO64M Temperature sensor configuration. */
typedef struct
{
    uint8_t meas_mode1;                      /**< Measurement mode for CH1. */
    uint8_t meas_mode2;                      /**< Measurement mode for CH2. */
    nrf_hfxo64m_ts_interval_t meas_interval; /**< Measurement interval. */
    bool fast_mode;                          /**< Fast slew rate function enable. */
    bool filter;                             /**< Continous slow filter enable. */
    bool gating;                             /**< Continous comparison enable/disable comparator current saving. */
    bool toggle_mode;                        /**< Continuous toggle if both channels are on enable. */
    bool test_mode;                          /**< Temperature sensor test mode enable. */
} nrf_hfxo64m_ts_cfg_t;

/** @brief HFXO64M Temperature sensor enable settings. */
typedef struct
{
    bool cmos1;  /**< Enable/disable temperature sensor when CMOS1 is requested. */
    bool cmos2;  /**< Enable/disable temperature sensor when CMOS2 is requested. */
    bool cmos3;  /**< Enable/disable temperature sensor when CMOS3 is requested. */
    bool cmos2x; /**< Enable/disable temperature sensor when CMOS2X is requested. */
    bool sin1;   /**< Enable/disable temperature sensor when SIN1 is requested. */
    bool sin2;   /**< Enable/disable temperature sensor when SIN2 is requested. */
    bool sin3;   /**< Enable/disable temperature sensor when SIN3 is requested. */
    bool sin4;   /**< Enable/disable temperature sensor when SIN4 is requested. */
    bool force;  /**< Force temperature sensor on when HFXO64M is powered. */
} nrf_hfxo64m_ts_ensel_t;

/** @brief Power up control modes. */
typedef enum
{
    NRF_HFXO64M_POWER_CONTROL_AUTO       = HFXO64M_PWRUPCTRL_CTRL_Auto,      /**< Automatically handled by the peripheral. */
    NRF_HFXO64M_POWER_CONTROL_POWER_UP   = HFXO64M_PWRUPCTRL_CTRL_PowerUp,   /**< Power up. */
    NRF_HFXO64M_POWER_CONTROL_POWER_DOWN = HFXO64M_PWRUPCTRL_CTRL_PowerDown, /**< Power down. */
} nrf_hfxo64m_power_control_t;

/** @brief HFXO64M modes. */
typedef enum
{
    NRF_HFXO64M_MODE_NORMAL = HFXO64M_MODE_MODE_Normal, /**< Normal operating mode. */
    NRF_HFXO64M_MODE_TCXO   = HFXO64M_MODE_MODE_TCXO,   /**< TCXO/bypass mode. */
} nrf_hfxo64m_mode_t;

/** @brief HFXO64M Crystal settle time mode. */
typedef enum
{
    NRF_HFXO64M_XTAL_SETTLETIME_250US  = HFXO64M_XTALSETTLETIME_VAL_Settle250us,  /**< 250 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_300US  = HFXO64M_XTALSETTLETIME_VAL_Settle300us,  /**< 300 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_350US  = HFXO64M_XTALSETTLETIME_VAL_Settle350us,  /**< 350 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_400US  = HFXO64M_XTALSETTLETIME_VAL_Settle400us,  /**< 400 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_500US  = HFXO64M_XTALSETTLETIME_VAL_Settle500us,  /**< 500 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_600US  = HFXO64M_XTALSETTLETIME_VAL_Settle600us,  /**< 600 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_700US  = HFXO64M_XTALSETTLETIME_VAL_Settle700us,  /**< 700 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_800US  = HFXO64M_XTALSETTLETIME_VAL_Settle800us,  /**< 800 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_1000US = HFXO64M_XTALSETTLETIME_VAL_Settle1000us, /**< 1000 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_2000US = HFXO64M_XTALSETTLETIME_VAL_Settle2000us, /**< 2000 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_3000US = HFXO64M_XTALSETTLETIME_VAL_Settle3000us, /**< 3000 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_4000US = HFXO64M_XTALSETTLETIME_VAL_Settle4000us, /**< 4000 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_5000US = HFXO64M_XTALSETTLETIME_VAL_Settle5000us, /**< 5000 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_6000US = HFXO64M_XTALSETTLETIME_VAL_Settle6000us, /**< 6000 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_7000US = HFXO64M_XTALSETTLETIME_VAL_Settle7000us, /**< 7000 us. */
    NRF_HFXO64M_XTAL_SETTLETIME_8500US = HFXO64M_XTALSETTLETIME_VAL_Settle8500us, /**< 8000 us. */
} nrf_hfxo64m_xtal_settletime_t;

/** @brief HFXO64M Chirp period length. */
typedef enum
{
    NRF_HFXO64M_CHIRP_PERIOD_32US  = HFXO64M_CHIRPTIME_VAL_Chirp32us,  /**< 32.0 us. */
    NRF_HFXO64M_CHIRP_PERIOD_40US  = HFXO64M_CHIRPTIME_VAL_Chirp40us,  /**< 40.3 us. */
    NRF_HFXO64M_CHIRP_PERIOD_48US  = HFXO64M_CHIRPTIME_VAL_Chirp48us,  /**< 48.5 us. */
    NRF_HFXO64M_CHIRP_PERIOD_56US  = HFXO64M_CHIRPTIME_VAL_Chirp56us,  /**< 56.8 us. */
    NRF_HFXO64M_CHIRP_PERIOD_65US  = HFXO64M_CHIRPTIME_VAL_Chirp65us,  /**< 65.1 us. */
    NRF_HFXO64M_CHIRP_PERIOD_73US  = HFXO64M_CHIRPTIME_VAL_Chirp73us,  /**< 73.3 us. */
    NRF_HFXO64M_CHIRP_PERIOD_81US  = HFXO64M_CHIRPTIME_VAL_Chirp81us,  /**< 81.6 us. */
    NRF_HFXO64M_CHIRP_PERIOD_89US  = HFXO64M_CHIRPTIME_VAL_Chirp89us,  /**< 89.9 us. */
    NRF_HFXO64M_CHIRP_PERIOD_98US  = HFXO64M_CHIRPTIME_VAL_Chirp98us,  /**< 98.1 us. */
    NRF_HFXO64M_CHIRP_PERIOD_106US = HFXO64M_CHIRPTIME_VAL_Chirp106us, /**< 106.4 us. */
    NRF_HFXO64M_CHIRP_PERIOD_114US = HFXO64M_CHIRPTIME_VAL_Chirp114us, /**< 114.7 us. */
    NRF_HFXO64M_CHIRP_PERIOD_122US = HFXO64M_CHIRPTIME_VAL_Chirp122us, /**< 122.9 us. */
    NRF_HFXO64M_CHIRP_PERIOD_131US = HFXO64M_CHIRPTIME_VAL_Chirp131us, /**< 131.2 us. */
    NRF_HFXO64M_CHIRP_PERIOD_139US = HFXO64M_CHIRPTIME_VAL_Chirp139us, /**< 139.5 us. */
    NRF_HFXO64M_CHIRP_PERIOD_147US = HFXO64M_CHIRPTIME_VAL_Chirp147us, /**< 147.7 us. */
    NRF_HFXO64M_CHIRP_PERIOD_156US = HFXO64M_CHIRPTIME_VAL_Chirp156us, /**< 156.0 us. */
} nrf_hfxo64m_chirp_period_t;

/** @brief HFXO64M select for AREG level. */
typedef enum
{
    NRF_HFXO64M_LEVELSELECT_HIGH = HFXO64M_CFG_LEVELSELECT_High, /**< Normal, high amplitude. */
    NRF_HFXO64M_LEVELSELECT_LOW  = HFXO64M_CFG_LEVELSELECT_Low,  /**< Low power, low amplitude. */
} nrf_hfxo64m_levelselect_t;

/** @brief HFXO64M configuration. */
typedef struct
{
    nrf_hfxo64m_levelselect_t areg_level; /**< Select for AREG level. */
    bool normal_bias_mode;                /**< Enable for bias mode. */
    bool reg0v8_bypass;                   /**< 0V8 regulator bypass enable. */
    bool reg1v5_bypass;                   /**< 1V5 regulator bypass enable. */
    bool cmos1_divider;                   /**< CMOSOUT1 clock divider enable. */
    bool cmos2_divider;                   /**< CMOSOUT2 clock divider enable. */
    bool cmos3_divider;                   /**< CMOSOUT3 clock divider enable. */
    bool ts_divider;                      /**< Temperature sensor clock divider enable. */
    uint8_t buff_drv_cfg_cmos1 : 2;       /**< CMOSOUT1 buffer drive configuration. */
    uint8_t buff_drv_cfg_cmos2 : 2;       /**< CMOSOUT2 buffer drive configuration. */
    uint8_t buff_drv_cfg_cmos3 : 2;       /**< CMOSOUT3 buffer drive configuration. */
    uint8_t buff_drv_cfg_ts : 2;          /**< Temperature sensor clock buffer drive configuration. */
    bool chirp;                           /**< HFXO64 startup chirp enable. */
} nrf_hfxo64m_cfg_t;

/**
 * @brief Function for retrieving the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event HFXO64M Event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_hfxo64m_event_address_get(NRF_HFXO64M_Type const * p_reg,
                                                         nrf_hfxo64m_event_t      event);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_event_clear(NRF_HFXO64M_Type * p_reg, nrf_hfxo64m_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_hfxo64m_event_check(NRF_HFXO64M_Type const * p_reg,
                                               nrf_hfxo64m_event_t      event);

/**
 * @brief Function for enabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_hfxo64m_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_int_enable(NRF_HFXO64M_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_hfxo64m_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_int_disable(NRF_HFXO64M_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_hfxo64m_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_hfxo64m_int_enable_check(NRF_HFXO64M_Type const * p_reg,
                                                        uint32_t                 mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_hfxo64m_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_hfxo64m_int_pending_get(NRF_HFXO64M_Type const * p_reg);

/**
 * @brief Function for getting HFXO64M status.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_status Pointer to the structure to be filled with HFXO64M status.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_status_get(NRF_HFXO64M_Type const * p_reg,
                                              nrf_hfxo64m_status_t *   p_status);

/**
 * @brief Function for getting HFXO64M status of analog module output signals.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_status Pointer to the structure to be filled with HFXO64M status of analog module
 *                      output signals.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_statusana_get(NRF_HFXO64M_Type const *  p_reg,
                                                 nrf_hfxo64m_statusana_t * p_status);

/**
 * @brief Function for getting the HFXO64M voltage reference tuning.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Voltage reference tuning value. 2's complement (MSB bit is inverted).
 */
NRF_STATIC_INLINE uint8_t nrf_hfxo64m_trim_rtune_get(NRF_HFXO64M_Type const * p_reg);

/**
 * @brief Function for setting the HFXO64M voltage reference tuning.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] value Value to set as voltage reference tuning. 2's complement (MSB bit is inverted).
 */
NRF_STATIC_INLINE void nrf_hfxo64m_trim_rtune_set(NRF_HFXO64M_Type * p_reg, uint8_t value);

/**
 * @brief Function for getting the HFXO64M process compensation tuning mode for chirp generator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Process compensation tuning mode.
 */
NRF_STATIC_INLINE
nrf_hfxo64m_process_t nrf_hfxo64m_trim_chirptune_get(NRF_HFXO64M_Type const * p_reg);

/**
 * @brief Function for setting the HFXO64M process compensation tuning mode for chirp generator.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode to set for process compensation tuning.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_trim_chirptune_set(NRF_HFXO64M_Type *    p_reg,
                                                      nrf_hfxo64m_process_t mode);

/**
 * @brief Function for getting the HFXO64M process compensation mode for frequency doubler.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Process compensation mode.
 */
NRF_STATIC_INLINE
nrf_hfxo64m_process_t nrf_hfxo64m_trim_doublercomp_get(NRF_HFXO64M_Type const * p_reg);

/**
 * @brief Function for setting the HFXO64M process compensation mode for frequency doubler.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode to set for process compensation.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_trim_doublercomp_set(NRF_HFXO64M_Type *    p_reg,
                                                        nrf_hfxo64m_process_t mode);

/**
 * @brief Function for getting the HFXO64M temperature sensor configuration.
 *
 * @param[in]  p_reg Pointer to the structure of registers of the peripheral.
 * @param[out] p_cfg Pointer to the structure to be filled with temperature sensor configuration.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_ts_cfg_get(NRF_HFXO64M_Type const * p_reg,
                                              nrf_hfxo64m_ts_cfg_t *   p_cfg);

/**
 * @brief Function for setting the HFXO64M temperature sensor measurement mode for ch1.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] p_cfg Pointer to the structure with temperature sensor configuration.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_ts_cfg_set(NRF_HFXO64M_Type *     p_reg,
                                              nrf_hfxo64m_ts_cfg_t * p_cfg);

/**
 * @brief Function for enabling/disabling the HFXO64M temperature sensor enabling per clock request.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] p_sel Pointer to the structure with temperature sensor enable settings.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_ts_ensel_set(NRF_HFXO64M_Type *       p_reg,
                                                nrf_hfxo64m_ts_ensel_t * p_sel);

/**
 * @brief Function for setting the HFXO64M temperature sensor test data input.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] value Test data input value.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_ts_datain_set(NRF_HFXO64M_Type * p_reg, uint16_t value);

/**
 * @brief Function for enabling/disabling the HFXO64M temperature sensor test data latch pulse
 *        input.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable Enable/disable test data latch pulse input value.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_ts_datainload_set(NRF_HFXO64M_Type * p_reg, bool enable);

/**
 * @brief Function for enabling/disabling lock for mirrored registers.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable Enable lock.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_mirror_lock_set(NRF_HFXO64M_Type * p_reg, bool enable);

/**
 * @brief Function for setting the power control configuration.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] pwrctrl    Power up control mode.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_power_control_set(NRF_HFXO64M_Type *          p_reg,
                                                     nrf_hfxo64m_power_control_t pwrctrl);

/**
 * @brief Function for setting HFXO64M mode.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] oscmode Oscillator mode.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_mode_set(NRF_HFXO64M_Type * p_reg,
                                            nrf_hfxo64m_mode_t oscmode);

/**
 * @brief Function for setting the HFXO64M settle time of the crystal.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] settle_time Settle time of the crystal.
 */
NRF_STATIC_INLINE void
nrf_hfxo64m_xtal_settletime_set(NRF_HFXO64M_Type *            p_reg,
                                nrf_hfxo64m_xtal_settletime_t settle_time);

/**
 * @brief Function for setting the HFXO64M chirp period length.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] period Chirp period length.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_chirp_period_set(NRF_HFXO64M_Type *         p_reg,
                                                    nrf_hfxo64m_chirp_period_t period);

/**
 * @brief Function for enabling/disabling the HFXO64M MMI to do crystal damping when stopping
 *        the oscillator.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable Enable crystal damping.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_damping_set(NRF_HFXO64M_Type * p_reg, bool enable);

/**
 * @brief Function for enabling/disabling all clock buffers when sinOut4_ana buffer is enabled.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable Enable all clock buffers.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_forcebuff_set(NRF_HFXO64M_Type * p_reg, bool enable);

/**
 * @brief Function for getting the HFXO64M configuration.
 *
 * @param[in]  p_reg Pointer to the structure of registers of the peripheral.
 * @param[out] p_cfg Pointer to the structure to be filled with temperature sensor configuration.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_cfg_get(NRF_HFXO64M_Type const *  p_reg,
                                           nrf_hfxo64m_cfg_t *       p_cfg);

/**
 * @brief Function for setting the HFXO64M configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] p_cfg Pointer to the structure with HFXO64M configuration.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_cfg_set(NRF_HFXO64M_Type *  p_reg,
                                           nrf_hfxo64m_cfg_t * p_cfg);

#if NRF_HFXO64M_HAS_TCXO

/**
 * @brief Function for checking the status of the TCXO power.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  TCXO is powered on.
 * @retval false TCXO is powered off.
 */
NRF_STATIC_INLINE bool nrf_hfxo64m_tcxopowered_check(NRF_HFXO64M_Type const * p_reg);

/**
 * @brief Function for setting the status of the TCXO power.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the TCXO power status is to be set, false otherwise.
 */
NRF_STATIC_INLINE void nrf_hfxo64m_tcxopowered_set(NRF_HFXO64M_Type * p_reg, bool enable);

#endif // NRF_HFXO64M_HAS_TCXO

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_hfxo64m_event_address_get(NRF_HFXO64M_Type const * p_reg,
                                                         nrf_hfxo64m_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_hfxo64m_event_clear(NRF_HFXO64M_Type * p_reg, nrf_hfxo64m_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_hfxo64m_event_check(NRF_HFXO64M_Type const * p_reg,
                                               nrf_hfxo64m_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE void nrf_hfxo64m_int_enable(NRF_HFXO64M_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_hfxo64m_int_disable(NRF_HFXO64M_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_hfxo64m_int_enable_check(NRF_HFXO64M_Type const * p_reg,
                                                        uint32_t                 mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_hfxo64m_int_pending_get(NRF_HFXO64M_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE void nrf_hfxo64m_status_get(NRF_HFXO64M_Type const * p_reg,
                                              nrf_hfxo64m_status_t *   p_status)
{
    NRFX_ASSERT(p_status);
    p_status->oscmode = (p_reg->STATUS & HFXO64M_STATUS_MODE_Msk)    >> HFXO64M_STATUS_MODE_Pos;
    p_status->running = (p_reg->STATUS & HFXO64M_STATUS_RUNNING_Msk) >> HFXO64M_STATUS_RUNNING_Pos;
}

NRF_STATIC_INLINE void nrf_hfxo64m_statusana_get(NRF_HFXO64M_Type const *  p_reg,
                                                 nrf_hfxo64m_statusana_t * p_status)
{
    NRFX_ASSERT(p_status);
    p_status->current_comparison = (p_reg->STATUSANA & HFXO64M_STATUSANA_CURRENTCOMPARISON_Msk)
                                    >> HFXO64M_STATUSANA_CURRENTCOMPARISON_Pos;
    p_status->detector1 = (p_reg->STATUSANA & HFXO64M_STATUSANA_DETECTOR1_Msk)
                           >> HFXO64M_STATUSANA_DETECTOR1_Pos;
    p_status->detector2 = (p_reg->STATUSANA & HFXO64M_STATUSANA_DETECTOR2_Msk)
                           >> HFXO64M_STATUSANA_DETECTOR2_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_hfxo64m_trim_rtune_get(NRF_HFXO64M_Type const * p_reg)
{
    return (p_reg->TRIM.RTUNE & HFXO64M_TRIM_RTUNE_VAL_Msk) >> HFXO64M_TRIM_RTUNE_VAL_Pos;
}

NRF_STATIC_INLINE void nrf_hfxo64m_trim_rtune_set(NRF_HFXO64M_Type * p_reg, uint8_t value)
{
    p_reg->TRIM.RTUNE = ((uint32_t)value << HFXO64M_TRIM_RTUNE_VAL_Pos) &
                                            HFXO64M_TRIM_RTUNE_VAL_Msk;
}

NRF_STATIC_INLINE
nrf_hfxo64m_process_t nrf_hfxo64m_trim_chirptune_get(NRF_HFXO64M_Type const * p_reg)
{
    uint8_t val = (p_reg->TRIM.CHIRPTUNE & HFXO64M_TRIM_CHIRPTUNE_VAL_Msk) >>
        HFXO64M_TRIM_CHIRPTUNE_VAL_Pos;
    switch (val)
    {
        case HFXO64M_TRIM_CHIRPTUNE_VAL_Fast:
            return NRF_HFXO64M_PROCESS_FAST;
        case HFXO64M_TRIM_CHIRPTUNE_VAL_Typical:
            return NRF_HFXO64M_PROCESS_TYPICAL;
        case HFXO64M_TRIM_CHIRPTUNE_VAL_Slow:
            return NRF_HFXO64M_PROCESS_SLOW;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_hfxo64m_trim_chirptune_set(NRF_HFXO64M_Type *    p_reg,
                                                      nrf_hfxo64m_process_t mode)
{
    switch (mode)
    {
        case NRF_HFXO64M_PROCESS_FAST:
            p_reg->TRIM.CHIRPTUNE =
                HFXO64M_TRIM_CHIRPTUNE_VAL_Fast << HFXO64M_TRIM_CHIRPTUNE_VAL_Pos;
            break;
        case NRF_HFXO64M_PROCESS_TYPICAL:
            p_reg->TRIM.CHIRPTUNE =
                HFXO64M_TRIM_CHIRPTUNE_VAL_Typical << HFXO64M_TRIM_CHIRPTUNE_VAL_Pos;
            break;
        case NRF_HFXO64M_PROCESS_SLOW:
            p_reg->TRIM.CHIRPTUNE =
                HFXO64M_TRIM_CHIRPTUNE_VAL_Slow << HFXO64M_TRIM_CHIRPTUNE_VAL_Pos;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE
nrf_hfxo64m_process_t nrf_hfxo64m_trim_doublercomp_get(NRF_HFXO64M_Type const * p_reg)
{
    uint8_t val = (p_reg->TRIM.DOUBLERCOMP & HFXO64M_TRIM_DOUBLERCOMP_VAL_Msk) >>
        HFXO64M_TRIM_DOUBLERCOMP_VAL_Pos;
    switch (val)
    {
        case HFXO64M_TRIM_DOUBLERCOMP_VAL_Slow:
            return NRF_HFXO64M_PROCESS_SLOW;
        case HFXO64M_TRIM_DOUBLERCOMP_VAL_Typical:
            return NRF_HFXO64M_PROCESS_TYPICAL;
        case HFXO64M_TRIM_DOUBLERCOMP_VAL_Fast:
            return NRF_HFXO64M_PROCESS_FAST;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_hfxo64m_trim_doublercomp_set(NRF_HFXO64M_Type *    p_reg,
                                                        nrf_hfxo64m_process_t mode)
{
    switch (mode)
    {
        case NRF_HFXO64M_PROCESS_SLOW:
            p_reg->TRIM.DOUBLERCOMP =
                HFXO64M_TRIM_DOUBLERCOMP_VAL_Slow << HFXO64M_TRIM_DOUBLERCOMP_VAL_Pos;
            break;
        case NRF_HFXO64M_PROCESS_TYPICAL:
            p_reg->TRIM.DOUBLERCOMP =
                HFXO64M_TRIM_DOUBLERCOMP_VAL_Typical << HFXO64M_TRIM_DOUBLERCOMP_VAL_Pos;
            break;
        case NRF_HFXO64M_PROCESS_FAST:
            p_reg->TRIM.DOUBLERCOMP =
                HFXO64M_TRIM_DOUBLERCOMP_VAL_Fast << HFXO64M_TRIM_DOUBLERCOMP_VAL_Pos;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_hfxo64m_ts_cfg_get(NRF_HFXO64M_Type const * p_reg,
                                              nrf_hfxo64m_ts_cfg_t *   p_cfg)
{
    NRFX_ASSERT(p_cfg);
    uint32_t reg = p_reg->TS.CFG;

    p_cfg->meas_mode1 =
        (reg & HFXO64M_TS_CFG_MEASMODE1_Msk) >> HFXO64M_TS_CFG_MEASMODE1_Pos;
    p_cfg->meas_mode2 =
        (reg & HFXO64M_TS_CFG_MEASMODE2_Msk) >> HFXO64M_TS_CFG_MEASMODE2_Pos;
    p_cfg->meas_interval =
        (reg & HFXO64M_TS_CFG_TIMERSEL_Msk) >> HFXO64M_TS_CFG_TIMERSEL_Pos;
    p_cfg->fast_mode =
        (reg & HFXO64M_TS_CFG_ENABLEFASTMODE_Msk) >> HFXO64M_TS_CFG_ENABLEFASTMODE_Pos;
    p_cfg->filter =
        (reg & HFXO64M_TS_CFG_ENABLEFILTER_Msk) >> HFXO64M_TS_CFG_ENABLEFILTER_Pos;
    p_cfg->gating =
        (reg & HFXO64M_TS_CFG_ENABLEGATING_Msk) >> HFXO64M_TS_CFG_ENABLEGATING_Pos;
    p_cfg->toggle_mode =
        (reg & HFXO64M_TS_CFG_ENABLETOGGLEMODE_Msk) >> HFXO64M_TS_CFG_ENABLETOGGLEMODE_Pos;
    p_cfg->test_mode =
        (reg & HFXO64M_TS_CFG_ENABLETEST_Msk) >> HFXO64M_TS_CFG_ENABLETEST_Pos;
}

NRF_STATIC_INLINE void nrf_hfxo64m_ts_cfg_set(NRF_HFXO64M_Type *     p_reg,
                                              nrf_hfxo64m_ts_cfg_t * p_cfg)
{
    NRFX_ASSERT(p_cfg);
    p_reg->TS.CFG =
          ((p_cfg->meas_mode1 << HFXO64M_TS_CFG_MEASMODE1_Pos)
            & HFXO64M_TS_CFG_MEASMODE1_Msk)
        | ((p_cfg->meas_mode2 << HFXO64M_TS_CFG_MEASMODE2_Pos)
            & HFXO64M_TS_CFG_MEASMODE2_Msk)
        | ((p_cfg->meas_interval << HFXO64M_TS_CFG_TIMERSEL_Pos)
            & HFXO64M_TS_CFG_TIMERSEL_Msk)
        | ((p_cfg->fast_mode << HFXO64M_TS_CFG_ENABLEFASTMODE_Pos)
            & HFXO64M_TS_CFG_ENABLEFASTMODE_Msk)
        | ((p_cfg->filter << HFXO64M_TS_CFG_ENABLEFILTER_Pos)
            & HFXO64M_TS_CFG_ENABLEFILTER_Msk)
        | ((p_cfg->gating << HFXO64M_TS_CFG_ENABLEGATING_Pos)
            & HFXO64M_TS_CFG_ENABLEGATING_Msk)
        | ((p_cfg->toggle_mode << HFXO64M_TS_CFG_ENABLETOGGLEMODE_Pos)
            & HFXO64M_TS_CFG_ENABLETOGGLEMODE_Msk)
        | ((p_cfg->test_mode << HFXO64M_TS_CFG_ENABLETEST_Pos)
            & HFXO64M_TS_CFG_ENABLETEST_Msk);
}

NRF_STATIC_INLINE void nrf_hfxo64m_ts_ensel_set(NRF_HFXO64M_Type *       p_reg,
                                                nrf_hfxo64m_ts_ensel_t * p_sel)
{
    p_reg->TS.ENSEL =
          (((uint32_t)p_sel->cmos1 << HFXO64M_TS_ENSEL_CMOS1_Pos) & HFXO64M_TS_ENSEL_CMOS1_Msk)
        | (((uint32_t)p_sel->cmos2 << HFXO64M_TS_ENSEL_CMOS2_Pos) & HFXO64M_TS_ENSEL_CMOS2_Msk)
        | (((uint32_t)p_sel->cmos3 << HFXO64M_TS_ENSEL_CMOS3_Pos) & HFXO64M_TS_ENSEL_CMOS3_Msk)
        | (((uint32_t)p_sel->cmos2x << HFXO64M_TS_ENSEL_CMOS2X_Pos) & HFXO64M_TS_ENSEL_CMOS2X_Msk)
        | (((uint32_t)p_sel->sin1 << HFXO64M_TS_ENSEL_SIN1_Pos) & HFXO64M_TS_ENSEL_SIN1_Msk)
        | (((uint32_t)p_sel->sin2 << HFXO64M_TS_ENSEL_SIN2_Pos) & HFXO64M_TS_ENSEL_SIN2_Msk)
        | (((uint32_t)p_sel->sin3 << HFXO64M_TS_ENSEL_SIN3_Pos) & HFXO64M_TS_ENSEL_SIN3_Msk)
        | (((uint32_t)p_sel->sin4 << HFXO64M_TS_ENSEL_SIN4_Pos) & HFXO64M_TS_ENSEL_SIN4_Msk)
        | (((uint32_t)p_sel->force << HFXO64M_TS_ENSEL_FORCE_Pos) & HFXO64M_TS_ENSEL_FORCE_Msk);
}

NRF_STATIC_INLINE void nrf_hfxo64m_ts_datain_set(NRF_HFXO64M_Type * p_reg, uint16_t value)
{
    p_reg->TS.DATAIN = ((uint32_t)value << HFXO64M_TS_DATAIN_VAL_Pos) & HFXO64M_TS_DATAIN_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo64m_ts_datainload_set(NRF_HFXO64M_Type * p_reg, bool enable)
{
    p_reg->TS.DATAINLOAD = ((uint32_t)enable << HFXO64M_TS_DATAINLOAD_VAL_Pos)
                           & HFXO64M_TS_DATAINLOAD_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo64m_mirror_lock_set(NRF_HFXO64M_Type * p_reg, bool enable)
{
    p_reg->MIRROR = ((uint32_t)enable << HFXO64M_MIRROR_LOCK_Pos) & HFXO64M_MIRROR_LOCK_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo64m_power_control_set(NRF_HFXO64M_Type *          p_reg,
                                                     nrf_hfxo64m_power_control_t pwrctrl)
{
    p_reg->PWRUPCTRL = (((uint32_t)pwrctrl << HFXO64M_PWRUPCTRL_CTRL_Pos) &
                                              HFXO64M_PWRUPCTRL_CTRL_Msk);
}

NRF_STATIC_INLINE void nrf_hfxo64m_mode_set(NRF_HFXO64M_Type * p_reg,
                                            nrf_hfxo64m_mode_t oscmode)
{
    p_reg->MODE = ((uint32_t)oscmode << HFXO64M_MODE_MODE_Pos) & HFXO64M_MODE_MODE_Msk;
}

NRF_STATIC_INLINE void
nrf_hfxo64m_xtal_settletime_set(NRF_HFXO64M_Type *            p_reg,
                                nrf_hfxo64m_xtal_settletime_t settle_time)
{
    p_reg->XTALSETTLETIME = ((uint32_t)settle_time << HFXO64M_XTALSETTLETIME_VAL_Pos) &
                                                      HFXO64M_XTALSETTLETIME_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo64m_chirp_period_set(NRF_HFXO64M_Type *         p_reg,
                                                    nrf_hfxo64m_chirp_period_t period)
{
    p_reg->CHIRPTIME = ((uint32_t)period << HFXO64M_CHIRPTIME_VAL_Pos) & HFXO64M_CHIRPTIME_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo64m_damping_set(NRF_HFXO64M_Type * p_reg, bool enable)
{
    p_reg->ENABLEDAMPING = ((uint32_t)enable << HFXO64M_ENABLEDAMPING_VAL_Pos) &
                                                HFXO64M_ENABLEDAMPING_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo64m_forcebuff_set(NRF_HFXO64M_Type * p_reg, bool enable)
{
    p_reg->FORCEBUFF = ((uint32_t)enable << HFXO64M_FORCEBUFF_VAL_Pos) & HFXO64M_FORCEBUFF_VAL_Msk;
}

NRF_STATIC_INLINE void nrf_hfxo64m_cfg_get(NRF_HFXO64M_Type const *  p_reg,
                                           nrf_hfxo64m_cfg_t *       p_cfg)
{
    NRFX_ASSERT(p_cfg);
    uint32_t reg = p_reg->CFG;

    p_cfg->areg_level =
        (reg & HFXO64M_CFG_LEVELSELECT_Msk) >> HFXO64M_CFG_LEVELSELECT_Pos;
    p_cfg->normal_bias_mode =
        (reg & HFXO64M_CFG_ENABLENORMALBIASMODE_Msk) >> HFXO64M_CFG_ENABLENORMALBIASMODE_Pos;
    p_cfg->reg0v8_bypass =
        (reg & HFXO64M_CFG_BYPASSREG0V8_Msk) >> HFXO64M_CFG_BYPASSREG0V8_Pos;
    p_cfg->reg1v5_bypass =
        (reg & HFXO64M_CFG_BYPASSREG1V5_Msk) >> HFXO64M_CFG_BYPASSREG1V5_Pos;
    p_cfg->cmos1_divider =
        (reg & HFXO64M_CFG_ENABLECMOS1DIVIDER_Msk) >> HFXO64M_CFG_ENABLECMOS1DIVIDER_Pos;
    p_cfg->cmos2_divider =
        (reg & HFXO64M_CFG_ENABLECMOS2DIVIDER_Msk) >> HFXO64M_CFG_ENABLECMOS2DIVIDER_Pos;
    p_cfg->cmos3_divider =
        (reg & HFXO64M_CFG_ENABLECMOS3DIVIDER_Msk) >> HFXO64M_CFG_ENABLECMOS3DIVIDER_Pos;
    p_cfg->ts_divider =
        (reg & HFXO64M_CFG_ENABLETSDIVIDER_Msk) >> HFXO64M_CFG_ENABLETSDIVIDER_Pos;
    p_cfg->buff_drv_cfg_cmos1 =
        (reg & HFXO64M_CFG_BUFFDRIVECMOS1_Msk) >> HFXO64M_CFG_BUFFDRIVECMOS1_Pos;
    p_cfg->buff_drv_cfg_cmos2 =
        (reg & HFXO64M_CFG_BUFFDRIVECMOS2_Msk) >> HFXO64M_CFG_BUFFDRIVECMOS2_Pos;
    p_cfg->buff_drv_cfg_cmos3 =
        (reg & HFXO64M_CFG_BUFFDRIVECMOS3_Msk) >> HFXO64M_CFG_BUFFDRIVECMOS3_Pos;
    p_cfg->buff_drv_cfg_ts =
        (reg & HFXO64M_CFG_BUFFDRIVETS_Msk) >> HFXO64M_CFG_BUFFDRIVETS_Pos;
    p_cfg->chirp =
        (reg & HFXO64M_CFG_CHIRPEN_Msk) >> HFXO64M_CFG_CHIRPEN_Pos;
}

NRF_STATIC_INLINE void nrf_hfxo64m_cfg_set(NRF_HFXO64M_Type *  p_reg,
                                           nrf_hfxo64m_cfg_t * p_cfg)
{
    NRFX_ASSERT(p_cfg);
    p_reg->CFG =
          ((p_cfg->areg_level << HFXO64M_CFG_LEVELSELECT_Pos)
            & HFXO64M_CFG_LEVELSELECT_Msk)
        | ((p_cfg->normal_bias_mode << HFXO64M_CFG_ENABLENORMALBIASMODE_Pos)
            & HFXO64M_CFG_ENABLENORMALBIASMODE_Msk)
        | ((p_cfg->reg0v8_bypass << HFXO64M_CFG_BYPASSREG0V8_Pos)
            & HFXO64M_CFG_BYPASSREG0V8_Msk)
        | ((p_cfg->reg1v5_bypass << HFXO64M_CFG_BYPASSREG1V5_Pos)
            & HFXO64M_CFG_BYPASSREG1V5_Msk)
        | ((p_cfg->cmos1_divider << HFXO64M_CFG_ENABLECMOS1DIVIDER_Pos)
            & HFXO64M_CFG_ENABLECMOS1DIVIDER_Msk)
        | ((p_cfg->cmos2_divider << HFXO64M_CFG_ENABLECMOS2DIVIDER_Pos)
            & HFXO64M_CFG_ENABLECMOS2DIVIDER_Msk)
        | ((p_cfg->cmos3_divider << HFXO64M_CFG_ENABLECMOS3DIVIDER_Pos)
            & HFXO64M_CFG_ENABLECMOS3DIVIDER_Msk)
        | ((p_cfg->ts_divider << HFXO64M_CFG_ENABLETSDIVIDER_Pos)
            & HFXO64M_CFG_ENABLETSDIVIDER_Msk)
        | ((p_cfg->buff_drv_cfg_cmos1 << HFXO64M_CFG_BUFFDRIVECMOS1_Pos)
            & HFXO64M_CFG_BUFFDRIVECMOS1_Msk)
        | ((p_cfg->buff_drv_cfg_cmos2 << HFXO64M_CFG_BUFFDRIVECMOS2_Pos)
            & HFXO64M_CFG_BUFFDRIVECMOS2_Msk)
        | ((p_cfg->buff_drv_cfg_cmos3 << HFXO64M_CFG_BUFFDRIVECMOS3_Pos)
            & HFXO64M_CFG_BUFFDRIVECMOS3_Msk)
        | ((p_cfg->buff_drv_cfg_ts << HFXO64M_CFG_BUFFDRIVETS_Pos)
            & HFXO64M_CFG_BUFFDRIVETS_Msk)
        | ((p_cfg->chirp << HFXO64M_CFG_CHIRPEN_Pos)
            & HFXO64M_CFG_CHIRPEN_Msk);
}

#if NRF_HFXO64M_HAS_TCXO

NRF_STATIC_INLINE bool nrf_hfxo64m_tcxopowered_check(NRF_HFXO64M_Type const * p_reg)
{
    return (p_reg->TCXOPOWERED & HFXO64M_TCXOPOWERED_VAL_Msk) >> HFXO64M_TCXOPOWERED_VAL_Pos;
}

NRF_STATIC_INLINE void nrf_hfxo64m_tcxopowered_set(NRF_HFXO64M_Type * p_reg, bool enable)
{
    p_reg->TCXOPOWERED = ((p_reg->TCXOPOWERED & ~HFXO64M_TCXOPOWERED_VAL_Msk) |
                          ((enable ? HFXO64M_TCXOPOWERED_VAL_On : HFXO64M_TCXOPOWERED_VAL_Off)
                           << HFXO64M_TCXOPOWERED_VAL_Pos));
}

#endif // NRF_HFXO64M_HAS_TCXO

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_HFXO64M_H__
