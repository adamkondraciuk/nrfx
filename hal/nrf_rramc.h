/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_RRAMC_H__
#define NRF_RRAMC_H__

#include <nrfx.h>
#include <nrf_bitmask.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_rramc_hal RRAMC HAL
 * @{
 * @ingroup nrf_rramc
 * @brief   Hardware access layer for managing the the Resistive Random Access Memory Controller (RRAMC) peripheral.
 */

/** @brief Max size of waitstate value for frequency index 0. */
#define NRF_RRAMC_VALUE0_MAX RRAMC_WAITSTATES_VALUE0_Max

/** @brief Max size of waitstate value for frequency index 1. */
#define NRF_RRAMC_VALUE1_MAX RRAMC_WAITSTATES_VALUE1_Max

/** @brief Max size of waitstate value for frequency index 2. */
#define NRF_RRAMC_VALUE2_MAX RRAMC_WAITSTATES_VALUE2_Max

/** @brief Max preload timeout value for waiting for a next write. */
#define NRF_RRAMC_READYNEXTTIMEOUT_MAX RRAMC_READYNEXTTIMEOUT_VALUE_Max

/** @brief Max size of REGION[n] array. */
#define NRF_RRAMC_REGION_MAX RRAMC_REGION_MaxCount

/** @brief Max size of EVENTS_GLITCHDETECTED[n] array. */
#define NRF_RRAMC_GLITCHDETECTED_MAX RRAMC_EVENTS_GLITCHDETECTED_MaxCount

/** @brief Max size of PENALTY[n] array. */
#define NRF_RRAMC_PENALTY_MAX RRAMC_PCGCSLAVE_PENALTY_MaxCount

/** @brief Max size of FORCEOVERRIDE[n] array. */
#define NRF_RRAMC_FORCEOVERRIDE_MAX RRAMC_PCGCSLAVE_FORCEOVERRIDE_MaxCount

/** @brief Max size of the index array related to the AXI clock frequencies. */
#define NRF_RRAMC_FREQUENCY_INDEX_MAX RRAMC_WAITSTATES_FREQ_MaxCount

/** @brief RRAMC tasks. */
typedef enum
{
    NRF_RRAMC_TASK_WAKEUP      = offsetof(NRF_RRAMC_Type, TASKS_WAKEUP),     ///< Wakeup the RRAM from low power mode.
    NRF_RRAMC_TASK_CLR_LOADBUF = offsetof(NRF_RRAMC_Type, TASKS_CLRLOADBUF), ///< Clear write load buffer.
} nrf_rramc_task_t;

/** @brief RRAMC events. */
typedef enum
{
    NRF_RRAMC_EVENT_WOKENUP           = offsetof(NRF_RRAMC_Type, EVENTS_WOKENUP),           ///< The RRAM is woken up from low power mode.
    NRF_RRAMC_EVENT_READY             = offsetof(NRF_RRAMC_Type, EVENTS_READY),             ///< RRAMC is ready.
    NRF_RRAMC_EVENT_READY_NEXT        = offsetof(NRF_RRAMC_Type, EVENTS_READYNEXT),         ///< Ready to accept a new write operation.
    NRF_RRAMC_EVENT_ERROR_ACCESS      = offsetof(NRF_RRAMC_Type, EVENTS_ACCESSERROR),       ///< RRAM access error.
    NRF_RRAMC_EVENT_ERROR_ECC         = offsetof(NRF_RRAMC_Type, EVENTS_ECCERROR),          ///< ECC error detected that cannot be corrected.
    NRF_RRAMC_EVENT_GLITCH_DETECTED_0 = offsetof(NRF_RRAMC_Type, EVENTS_GLITCHDETECTED[0]), ///< Glitch detected at power supply glitch detector 0.
    NRF_RRAMC_EVENT_GLITCH_DETECTED_1 = offsetof(NRF_RRAMC_Type, EVENTS_GLITCHDETECTED[1]), ///< Glitch detected at power supply glitch detector 1.
} nrf_rramc_event_t;

/** @brief RRAMC interrupts. */
typedef enum
{
    NRF_RRAMC_INT_WOKENUP_MASK           = RRAMC_INTENSET_WOKENUP_Msk,         ///< Interrupt on WOKENUP event.
    NRF_RRAMC_INT_READY_MASK             = RRAMC_INTENSET_READY_Msk,           ///< Interrupt on READY event.
    NRF_RRAMC_INT_READY_NEXT_MASK        = RRAMC_INTENSET_READYNEXT_Msk,       ///< Interrupt on READYNEXT event.
    NRF_RRAMC_INT_ERROR_ACCESS_MASK      = RRAMC_INTENSET_ACCESSERROR_Msk,     ///< Interrupt on ACCESSERROR event.
    NRF_RRAMC_INT_ERROR_ECC_MASK         = RRAMC_INTENSET_ECCERROR_Msk,        ///< Interrupt on ECCERROR event.
    NRF_RRAMC_INT_GLITCH_DETECTED_0_MASK = RRAMC_INTENSET_GLITCHDETECTED0_Msk, ///< Interrupt on GLITCHDETECTED[0] event.
    NRF_RRAMC_INT_GLITCH_DETECTED_1_MASK = RRAMC_INTENSET_GLITCHDETECTED1_Msk, ///< Interrupt on GLITCHDETECTED[1] event.
} nrf_rramc_int_mask_t;

/** @brief Write mode. */ 
typedef enum
{
    NRF_RRAMC_WRITE_MODE_DISABLE = RRAMC_CONFIG_WEN_DisableWrite,      ///< Write is disabled.
    NRF_RRAMC_WRITE_MODE_NORMAL  = RRAMC_CONFIG_WEN_EnableNormalWrite, ///< Normal write is enabled.
    NRF_RRAMC_WRITE_MODE_DIRECT  = RRAMC_CONFIG_WEN_EnableDirectWrite, ///< Direct write is enabled.
} nrf_rramc_write_mode_t;

/** @brief Read mode. */
typedef enum
{
   NRF_RRAMC_READ_MODE_DIRECT = RRAMC_READCONFIG_READMODE_DirectRead, ///< RRAMC handles the reads from the RRAM.
   NRF_RRAMC_READ_MODE_NORMAL = RRAMC_READCONFIG_READMODE_NormalRead, ///< RRAM Soft-IP handles the reads from RRAM.
} nrf_rramc_read_mode_t;

/** @brief RRAM standby mode. */
typedef enum
{
    NRF_RRAMC_POWER_STANDBY_MODE_NORMAL    = RRAMC_POWER_STANDBYCONFIG_MODE_Normal,    ///< The RRAM automatically goes into standby mode while the RRAM is not being accessed.
    NRF_RRAMC_POWER_STANDBY_MODE_NAP       = RRAMC_POWER_STANDBYCONFIG_MODE_NAP,       ///< The RRAM goes into NAP mode when the access timeout counter is expired.
    NRF_RRAMC_POWER_STANDBY_MODE_POWERDOWN = RRAMC_POWER_STANDBYCONFIG_MODE_PowerDown, ///< The RRAM goes into power down mode when the access timeout counter is expired.
} nrf_rramc_power_standby_mode_t;

/** @brief RRAM low power mode. */
typedef enum
{
    NRF_RRAMC_POWER_LP_MODE_POWERDOWN = RRAMC_POWER_LOWPOWERCONFIG_MODE_PowerDown, ///< The RRAM goes into power down mode.
    NRF_RRAMC_POWER_LP_MODE_STANDBY   = RRAMC_POWER_LOWPOWERCONFIG_MODE_Standby,   ///< The RRAM automatically goes into standby mode while the RRAM is not being accessed.
    NRF_RRAMC_POWER_LP_MODE_NAP       = RRAMC_POWER_LOWPOWERCONFIG_MODE_NAP,       ///< The RRAM goes into NAP mode.
    NRF_RRAMC_POWER_LP_MODE_POWEROFF  = RRAMC_POWER_LOWPOWERCONFIG_MODE_PowerOff,  ///< The RRAM is powered off.
} nrf_rramc_power_lp_mode_t;

/** @brief RRAM wakeup configuration. */
typedef enum
{
    NRF_RRAMC_POWER_WAKEUP_AXI = RRAMC_POWER_LOWPOWERCONFIG_WAKEUP_AXI, ///< Wakeup RRAM on the first AXI transaction to the RRAM.
    NRF_RRAMC_POWER_WAKEUP_CPU = RRAMC_POWER_LOWPOWERCONFIG_WAKEUP_CPU, ///< Wakeup RRAM when the CPU wakes up from sleep.
} nrf_rramc_power_wakeup_t;

/** @brief Mask for ignoring consumer's low power mode requests. */
typedef enum
{
    NRF_RRAMC_POWER_LP_IGNORE_0_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK0_Msk, ///< Mask to ignore consumer [0] request to go into low power mode.
    NRF_RRAMC_POWER_LP_IGNORE_1_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK1_Msk, ///< Mask to ignore consumer [1] request to go into low power mode.
    NRF_RRAMC_POWER_LP_IGNORE_2_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK2_Msk, ///< Mask to ignore consumer [2] request to go into low power mode.
    NRF_RRAMC_POWER_LP_IGNORE_3_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK3_Msk, ///< Mask to ignore consumer [3] request to go into low power mode.
    NRF_RRAMC_POWER_LP_IGNORE_4_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK4_Msk, ///< Mask to ignore consumer [4] request to go into low power mode.
    NRF_RRAMC_POWER_LP_IGNORE_5_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK5_Msk, ///< Mask to ignore consumer [5] request to go into low power mode.
    NRF_RRAMC_POWER_LP_IGNORE_6_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK6_Msk, ///< Mask to ignore consumer [6] request to go into low power mode.
    NRF_RRAMC_POWER_LP_IGNORE_7_MASK = RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK7_Msk, ///< Mask to ignore consumer [7] request to go into low power mode.
} nrf_rramc_power_lp_ignore_mask_t;

/** @brief VDD force state. */
typedef enum
{
    NRF_RRAMC_POWER_FORCE_VDD_NONE = RRAMC_POWER_FORCE_VDD_NoOperation, ///< No request to force VDD.
    NRF_RRAMC_POWER_FORCE_VDD_ON   = RRAMC_POWER_FORCE_VDD_On,          ///< Force VDD on.
    NRF_RRAMC_POWER_FORCE_VDD_OFF  = RRAMC_POWER_FORCE_VDD_Off,         ///< Force VDD off.
} nrf_rramc_power_force_vdd_t;

/** @brief VDDIO force state. */
typedef enum
{
    NRF_RRAMC_POWER_FORCE_VDDIO_NONE = RRAMC_POWER_FORCE_VDDIO_NoOperation, ///< No request to force VDDIO.
    NRF_RRAMC_POWER_FORCE_VDDIO_ON  = RRAMC_POWER_FORCE_VDDIO_On,           ///< Force VDDIO on.
    NRF_RRAMC_POWER_FORCE_VDDIO_OFF = RRAMC_POWER_FORCE_VDDIO_Off,          ///< Force VDDIO off.
} nrf_rramc_power_force_vddio_t;

/** @brief RRAMC configuration structure. */
typedef struct
{
    nrf_rramc_write_mode_t mode_write;      ///< Write enable settings.
    uint8_t                write_buff_size; ///< Write buffer size.
} nrf_rramc_config_t;

/** @brief Waitstates for RRAM read access. */
typedef struct
{
    uint8_t value[NRF_RRAMC_FREQUENCY_INDEX_MAX]; ///< Waitstates values for frequency index [i].
    bool    read_done;                            ///< True if RDONE signal from the RRAM macro is to be used in addition to waitstates, false otherwise.
} nrf_rramc_waitstates_t;

/** @brief Preload timeout value for waiting for a next write. */
typedef struct
{
    uint16_t value;        ///< Preload value expressed in clock cycles.
    bool     direct_write; ///< True if write to the RRAM is to be triggered on the next timeout, false otherwise.
} nrf_rramc_readynext_timeout_t;

/** @brief Power configuration. */
typedef struct
{
    uint16_t access_timeout; ///< Access timeout used for going into standby power mode or remain active on wake up, expressed in clock cycles.
    bool     abort_on_pof;   ///< True if the current RRAM write operation is to be aborted on the power failure, false otherwise.
} nrf_rramc_power_t;

/** @brief Low power mode configuration. */
typedef struct
{
    nrf_rramc_power_lp_mode_t        mode;           ///< RRAM low power mode.
    bool                             force_on_rramc; ///< True if the RRAMC power request is to be forced to remain on, false otherwise.
    bool                             trc_reinit;     ///< True if the TRC re-initialization is to be enabled during wakeup, false otherwise.
    nrf_rramc_power_wakeup_t         wakeup;         ///< RRAM wakeup configuration.
    nrf_rramc_power_lp_ignore_mask_t lp_ignore_msk;  ///< Mask for ignoring consumer's low power mode requests.
} nrf_rramc_power_lp_t;

/** @brief Force the power switches to the RRAM on or off. */
typedef struct
{
    nrf_rramc_power_force_vdd_t   vdd;   ///< Force VDD to the RRAM.
    nrf_rramc_power_force_vddio_t vddio; ///< Force VDDIO to the RRAM.
} nrf_rramc_power_force_t;

/** @brief RRAMC region configuration. */
typedef struct
{
    bool    read;     ///< True if read access to override the specified region is to be allowed, false otherwise.
    bool    write;    ///< True if write access to override the specified region is to be allowed, false otherwise.
    bool    execute;  ///< True if execute access to override the specified region is to be allowed, false otherwise.
    bool    secure;   ///< True if only the secure access to override the specified region is to be allowed, false otherwise.
    uint8_t owner_id; ///< Owner ID.
    bool    lock;     ///< True if lock for the specified region is to be enabled, false otherwise.
    uint8_t size;     ///< Size in KBytes.
} nrf_rramc_region_t;

/** @brief Configuration for glitch detectors. */
typedef struct
{
    bool enable; ///< True if glitch detector is to be enabled, false otherwise.
    bool dtb;    ///< True if DTB for glitch detector is to be enabled, false otherwise.
} nrf_rramc_gldetect_config_t;

/** @brief Trim configuration for glitch detectors. */
typedef struct
{
    uint8_t vrefl_dvdd; ///< Voltage trimming value for VREFL_DVDD.
    uint8_t vrefh_dvdd; ///< Voltage trimming value for VREFH_DVDD.
    uint8_t vrefl_vdd;  ///< Voltage trimming value for VREFL_VDD.
    uint8_t vrefh_vdd;  ///< Voltage trimming value for VREFH_VDD.
} nrf_rramc_gldetect_trim_t;

/** @brief Force override configuration of specified power/clock pair. */
typedef struct
{
    uint8_t clock_forcing;  ///< CLOCKFORCINGPRE
    bool    do_force_clock; ///< DOFORCECLOCKPRE
    uint8_t power_forcing;  ///< POWERFORCINGPRE
    bool    do_force_power; ///< DOFORCEPOWERPRE
} nrf_rramc_forceoverride_t;

/**
 * @brief Function for activating the specified RRAMC task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_rramc_task_trigger(NRF_RRAMC_Type * p_reg,
                                              nrf_rramc_task_t task);

/**
 * @brief Function for getting the address of the specified RRAMC task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  RRAMC task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_rramc_task_address_get(NRF_RRAMC_Type const * p_reg,
                                                      nrf_rramc_task_t       task);

/**
 * @brief Function for clearing the specified RRAMC event.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_rramc_event_clear(NRF_RRAMC_Type * p_reg, nrf_rramc_event_t event);

/**
 * @brief Function for retrieving the state of the RRAMC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_rramc_event_check(NRF_RRAMC_Type const * p_reg,
                                             nrf_rramc_event_t      event);

/**
 * @brief Function for getting the address of the specified RRAMC event register.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] event Requested event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_rramc_event_address_get(NRF_RRAMC_Type const * p_reg,
                                                       nrf_rramc_event_t      event);

/**
 * @brief Function for enabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] mask  Interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_rramc_int_enable(NRF_RRAMC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_rramc_int_disable(NRF_RRAMC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_rramc_int_enable_check(NRF_RRAMC_Type const * p_reg, uint32_t mask);

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
NRF_STATIC_INLINE uint32_t nrf_rramc_int_pending_get(NRF_RRAMC_Type const * p_reg);

#if defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the subscribe configuration for a wakeup
 *        RRAMC task.
 *
 * @note Not every task has its corresponding subscribe register.
 *       Refer to the Product Specification for more information.
 * 
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] task    Task for which to set the configuration.
 * @param[in] channel Channel through which to subscribe events.
 */
NRF_STATIC_INLINE void nrf_rramc_subscribe_set(NRF_RRAMC_Type * p_reg,
                                               nrf_rramc_task_t task,
                                               uint8_t          channel);

/**
 * @brief Function for clearing the subscribe configuration for a wakeup
 *        RRAMC task.
 *
 * @note Not every task has its corresponding subscribe register.
 *       Refer to the Product Specification for more information.
 * 
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_rramc_subscribe_clear(NRF_RRAMC_Type * p_reg, nrf_rramc_task_t task);

/**
 * @brief Function for setting the publish configuration for a wokenup
 *        RRAMC event.
 *
 * @note Not every event has its corresponding publish register.
 *       Refer to the Product Specification for more information.
 * 
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] event   Event for which to set the configuration.
 * @param[in] channel Channel through which to publish the event.
 */
NRF_STATIC_INLINE void nrf_rramc_publish_set(NRF_RRAMC_Type *  p_reg,
                                             nrf_rramc_event_t event,
                                             uint8_t           channel);

/**
 * @brief Function for clearing the publish configuration for a wokenup
 *        RRAMC event.
 *
 * @note Not every event has its corresponding publish register.
 *       Refer to the Product Specification for more information.
 * 
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_rramc_publish_clear(NRF_RRAMC_Type * p_reg, nrf_rramc_event_t event);

#endif // defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for checking current RRAMC operation status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Current operation is completed and RRAMC is ready.
 * @retval false RRAMC is busy.
 */
NRF_STATIC_INLINE bool nrf_rramc_ready_check(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for checking whether RRAMC is ready to accept a new write operation.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  RRAMC is ready to accept a new write operation.
 * @retval false RRAMC cannot accept any write operation now.
 */
NRF_STATIC_INLINE bool nrf_rramc_write_ready_check(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Fuction for checking the address of the first access error.
 * 
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Access error address.
 */
NRF_STATIC_INLINE uint32_t nrf_rramc_error_access_addr_get(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for getting address of the first ECC error that could not be corrected.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return ECC error address.
 */
NRF_STATIC_INLINE uint32_t nrf_rramc_error_ecc_addr_get(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for checking the current TRC busy status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  TRC is busy.
 * @retval false TRC is not busy.
 */
NRF_STATIC_INLINE bool nrf_rramc_trc_busy_check(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for checking the current TRC initialization or re-initialization status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  TRC initialization or re-initialization is done.
 * @retval false TRC initialization or re-initialization is not done.
 */
NRF_STATIC_INLINE bool nrf_rramc_trc_init_check(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for getting the RRAMC peripheral configuration.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the structure to be filled with RRAMC configuration data.
 */
NRF_STATIC_INLINE void nrf_rramc_config_get(NRF_RRAMC_Type const * p_reg,
                                            nrf_rramc_config_t *   p_config);

/**
 * @brief Function for setting the RRAMC peripheral configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure with configuration to be set.
 */
NRF_STATIC_INLINE void nrf_rramc_config_set(NRF_RRAMC_Type *           p_reg,
                                            nrf_rramc_config_t const * p_config);

/**
 * @brief Function for getting current RRAMC read configuration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The current read mode configuration.
 */
NRF_STATIC_INLINE nrf_rramc_read_mode_t nrf_rramc_read_mode_get(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for setting RRAMC read configuration.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] read_mode RRAMC read configuration to be set.
 */
NRF_STATIC_INLINE void nrf_rramc_read_mode_set(NRF_RRAMC_Type *      p_reg,
                                               nrf_rramc_read_mode_t read_mode);

/**
 * @brief Function for getting waitstates for RRAM read access.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the data structure to be filled with waitstates information
 *                      for RRAM read access.
 */
NRF_STATIC_INLINE void nrf_rramc_waitstates_get(NRF_RRAMC_Type const *   p_reg,
                                                nrf_rramc_waitstates_t * p_config);

/**
 * @brief Function for setting preload timeout value for waiting for a next write.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure filled with information about preload
 *                     timeout value.
 */
NRF_STATIC_INLINE void nrf_rramc_waitstates_set(NRF_RRAMC_Type *               p_reg,
                                                nrf_rramc_waitstates_t const * p_config);

/**
 * @brief Function for getting preload timeout value for waiting for a next write.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the structure to be filled with information about
 *                      preload timeout value.
 */
NRF_STATIC_INLINE void nrf_rramc_ready_next_timeout_get(NRF_RRAMC_Type const *          p_reg,
                                                        nrf_rramc_readynext_timeout_t * p_config);

/**
 * @brief Function for setting preload timeout value for waiting for a next write.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure filled with information about$ preload
 *                     timeout value.
 */
NRF_STATIC_INLINE
void nrf_rramc_ready_next_timeout_set(NRF_RRAMC_Type *                      p_reg,
                                      nrf_rramc_readynext_timeout_t const * p_config);

/**
 * @brief Function for getting the RRAMC power configuration.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the structure to be filled with information about
 *                      power configuration.
 */
NRF_STATIC_INLINE void nrf_rramc_power_config_get(NRF_RRAMC_Type const * p_reg,
                                                  nrf_rramc_power_t *    p_config);

/**
 * @brief Function for setting the RRAMC power configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure filled with information about power configuration.
 */
NRF_STATIC_INLINE void nrf_rramc_power_config_set(NRF_RRAMC_Type *          p_reg,
                                                  nrf_rramc_power_t const * p_config);

/**
 * @brief Function for getting standby mode configuration
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Currnet RRAM standby mode.
 */
NRF_STATIC_INLINE
nrf_rramc_power_standby_mode_t nrf_rramc_power_standby_mode_get(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for setting standby mode configuration
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  RRAM standby mode.
 */
NRF_STATIC_INLINE void nrf_rramc_power_standby_mode_set(NRF_RRAMC_Type *               p_reg,
                                                        nrf_rramc_power_standby_mode_t mode);

/**
 * @brief Function for getting the RRAMC low power mode configuration.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the structure to be filled with information about low power mode
 *                      configuration.
 */
NRF_STATIC_INLINE void nrf_rramc_power_lp_config_get(NRF_RRAMC_Type const * p_reg,
                                                     nrf_rramc_power_lp_t * p_config);

/**
 * @brief Function for setting the RRAMC low power mode configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure filled with information about low power mode
 *                     configuration.
 */
NRF_STATIC_INLINE void nrf_rramc_power_lp_config_set(NRF_RRAMC_Type *             p_reg,
                                                     nrf_rramc_power_lp_t const * p_config);

/**
 * @brief Function for getting the values of the power switches.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the structure to be filled with information about force on
 *                      power supply.
 */
NRF_STATIC_INLINE void nrf_rramc_power_force_get(NRF_RRAMC_Type const *    p_reg,
                                                 nrf_rramc_power_force_t * p_config);

/**
 * @brief Function for setting the values to force the power switches to the RRAM.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure filled with information about force on power supply.
 */
NRF_STATIC_INLINE void nrf_rramc_power_force_set(NRF_RRAMC_Type *                p_reg,
                                                 nrf_rramc_power_force_t const * p_config);

/**
 * @brief Function for checking if the erasing operation of the whole RRAM main block has been started.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Erase of chip started.
 * @retval false No operation.
 */
NRF_STATIC_INLINE bool nrf_rramc_erase_all_check(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for erasing whole RRAM main block, that includes the SICR and the UICR.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_rramc_erase_all_set(NRF_RRAMC_Type * p_reg);

/**
 * @brief Function for checking if the erasing operation of the whole RRAM has been started.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Erase of FICR started.
 * @retval false No operation.
 */
NRF_STATIC_INLINE bool nrf_rramc_erase_ficr_check(NRF_RRAMC_Type const * p_reg);

/**
 * @brief Function for erasing whole RRAM.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_rramc_erase_ficr_set(NRF_RRAMC_Type * p_reg);

/**
 * @brief Function for getting the start address of the specified RRAMC region.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] region_num Index of the specified RRAMC region.
 * 
 * @retval Start address of the specified RRAMC region.
 */
NRF_STATIC_INLINE uint32_t nrf_rramc_region_address_get(NRF_RRAMC_Type const * p_reg,
                                                        uint8_t                region_num);

/**
 * @brief Function for setting the start address of the specified RRAMC region.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] region_num Index of the specified RRAMC region.
 * @param[in] address    Address to be set.
 */
NRF_STATIC_INLINE void nrf_rramc_region_address_set(NRF_RRAMC_Type * p_reg,
                                                    uint8_t          region_num,
                                                    uint32_t         address);

/**
 * @brief Function for getting the configuration of the specified RRAMC region.
 *
 * @param[in]  p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in]  region_num Index of the specified RRAMC region.
 * @param[out] p_config   Pointer to the structure to be filled with configuration of the specified region.
 */
NRF_STATIC_INLINE void nrf_rramc_region_config_get(NRF_RRAMC_Type const * p_reg,
                                                   uint8_t                region_num,
                                                   nrf_rramc_region_t *   p_config);

/**
 * @brief Function for setting the configuration of the specified RRAMC region.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] region_num Index of the specified RRAMC region.
 * @param[in] p_config   Pointer to the configuration of the specified region.
 */
NRF_STATIC_INLINE void nrf_rramc_region_config_set(NRF_RRAMC_Type *           p_reg,
                                                   uint8_t const              region_num,
                                                   nrf_rramc_region_t const * p_config);

/**
 * @brief Function for getting the configuration of the specified glitch detector.
 *
 * @param[in]  p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in]  gldetect_num Index of the specified glitch detector.
 * @param[out] p_config     Pointer to the configuration for glitch detector.
 */
NRF_STATIC_INLINE
void nrf_rramc_giltchdetector_config_get(NRF_RRAMC_Type const *        p_reg,
                                         uint8_t                       gldetect_num,
                                         nrf_rramc_gldetect_config_t * p_config);

/**
 * @brief Function for setting the configuration of a specified glitch detector.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] gldetect_num Index of the specified glitch detector.
 * @param[in] p_config     Pointer to the configuration for glitch detector.
 */
NRF_STATIC_INLINE
void nrf_rramc_giltchdetector_config_set(NRF_RRAMC_Type *                    p_reg,
                                         uint8_t                             gldetect_num,
                                         nrf_rramc_gldetect_config_t const * p_config);

/**
 * @brief Function for getting the trim configuration of glitch detectors.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the trim configuration for glitch detectors.
 */
NRF_STATIC_INLINE
void nrf_rramc_giltchdetectors_trim_get(NRF_RRAMC_Type const *      p_reg,
                                        nrf_rramc_gldetect_trim_t * p_config);

/**
 * @brief Function for setting the trim configuration of glitch detectors.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the trim configuration for glitch detectors.
 */
NRF_STATIC_INLINE
void nrf_rramc_giltchdetectors_trim_set(NRF_RRAMC_Type *                  p_reg,
                                        nrf_rramc_gldetect_trim_t const * p_config);

/**
 * @brief Function for getting penalty level for the specified power/clock pair.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] penalty_num Index of power/clock pair.
 *
 * @return Penalty level for power/clock pair @p penalty_num.
 */
NRF_STATIC_INLINE uint8_t nrf_rramc_pcgslave_penalty_get(NRF_RRAMC_Type const * p_reg,
                                                         uint8_t                penalty_num);

/**
 * @brief Function for setting penalty level for the specified power/clock pair.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] penalty_num Index of power/clock pair.
 * @param[in] penalty_val Value of penalty level to be set.
 */
NRF_STATIC_INLINE void nrf_rramc_pcgslave_penalty_set(NRF_RRAMC_Type * p_reg,
                                                      uint8_t          penalty_num,
                                                      uint8_t          penalty_val);

/**
 * @brief Function for getting the force override configuration of for the specified power/clock pair.
 *
 * @param[in]  p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in]  f_override_num Index of power/clock pair.
 * @param[out] p_config       Pointer to the structure to be filled with force override configuration data.
 */
NRF_STATIC_INLINE void
nrf_rramc_pcgslave_force_override_get(NRF_RRAMC_Type const *      p_reg,
                                      uint8_t                     f_override_num,
                                      nrf_rramc_forceoverride_t * p_config);

/**
 * @brief Function for setting the force override configuration of the specified power/clock pair.
 *
 * @param[in] p_reg          Pointer to the structure of registers of the peripheral.
 * @param[in] f_override_num Index of power/clock pair.
 * @param[in] p_config       Pointer to the structure filled with force override configuration data.
 */
NRF_STATIC_INLINE 
void nrf_rramc_pcgslave_force_override_set(NRF_RRAMC_Type *                  p_reg,
                                           uint8_t                           f_override_num,
                                           nrf_rramc_forceoverride_t const * p_config);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_rramc_task_trigger(NRF_RRAMC_Type * p_reg,
                                              nrf_rramc_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_rramc_task_address_get(NRF_RRAMC_Type const * p_reg,
                                                      nrf_rramc_task_t       task)
{
    return ((uint32_t)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_rramc_event_clear(NRF_RRAMC_Type * p_reg, nrf_rramc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_rramc_event_check(NRF_RRAMC_Type const * p_reg,
                                             nrf_rramc_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_rramc_event_address_get(NRF_RRAMC_Type const * p_reg,
                                                       nrf_rramc_event_t      event)
{
    return ((uint32_t)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_rramc_int_enable(NRF_RRAMC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_rramc_int_disable(NRF_RRAMC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_rramc_int_enable_check(NRF_RRAMC_Type const * p_reg,
                                                      uint32_t               mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_rramc_int_pending_get(NRF_RRAMC_Type const * p_reg)
{
    return p_reg->INTPEND;
}

#if defined(DPPI_PRESENT)
NRF_STATIC_INLINE void nrf_rramc_subscribe_set(NRF_RRAMC_Type * p_reg,
                                               nrf_rramc_task_t task,
                                               uint8_t          channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) =
            ((uint32_t)channel | NRF_SUBSCRIBE_PUBLISH_ENABLE);
}

NRF_STATIC_INLINE void nrf_rramc_subscribe_clear(NRF_RRAMC_Type * p_reg, nrf_rramc_task_t task)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) = 0;
}

NRF_STATIC_INLINE void nrf_rramc_publish_set(NRF_RRAMC_Type *  p_reg,
                                             nrf_rramc_event_t event,
                                             uint8_t           channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80uL)) =
            ((uint32_t)channel | NRF_SUBSCRIBE_PUBLISH_ENABLE);
}

NRF_STATIC_INLINE void nrf_rramc_publish_clear(NRF_RRAMC_Type * p_reg, nrf_rramc_event_t event)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80uL)) = 0;
}
#endif // defined(DPPI_PRESENT)

NRF_STATIC_INLINE bool nrf_rramc_ready_check(NRF_RRAMC_Type const * p_reg)
{
    return (bool)p_reg->READY;
}

NRF_STATIC_INLINE bool nrf_rramc_write_ready_check(NRF_RRAMC_Type const * p_reg)
{
    return (bool)p_reg->READYNEXT;
}

NRF_STATIC_INLINE uint32_t nrf_rramc_error_access_addr_get(NRF_RRAMC_Type const * p_reg)
{
    return (uint32_t)p_reg->ACCESSERRORADDR;
}

NRF_STATIC_INLINE uint32_t nrf_rramc_error_ecc_addr_get(NRF_RRAMC_Type const * p_reg)
{
    return (uint32_t)p_reg->ECC.ERRORADDR;
}

NRF_STATIC_INLINE bool nrf_rramc_trc_busy_check(NRF_RRAMC_Type const * p_reg)
{
    return (bool)(p_reg->TRCSTATUS & RRAMC_TRCSTATUS_TRCBUSY_Msk);
}

NRF_STATIC_INLINE bool nrf_rramc_trc_init_check(NRF_RRAMC_Type const * p_reg)
{
    return (bool)(p_reg->TRCSTATUS & RRAMC_TRCSTATUS_TRCINIT_Msk);
}

NRF_STATIC_INLINE void nrf_rramc_config_get(NRF_RRAMC_Type const * p_reg,
                                            nrf_rramc_config_t *   p_config)
{
    p_config->mode_write = (nrf_rramc_write_mode_t)((p_reg->CONFIG & RRAMC_CONFIG_WEN_Msk) >>
                                                    RRAMC_CONFIG_WEN_Pos);
    p_config->write_buff_size = (uint32_t)((p_reg->CONFIG & RRAMC_CONFIG_WRITEBUFSIZE_Msk) >>
                                           RRAMC_CONFIG_WRITEBUFSIZE_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_config_set(NRF_RRAMC_Type *           p_reg,
                                            nrf_rramc_config_t const * p_config)
{
    NRFX_ASSERT(p_config->write_buff_size <= RRAMC_CONFIG_WRITEBUFSIZE_Max);

    p_reg->CONFIG = ((uint32_t)p_config->mode_write      << RRAMC_CONFIG_WEN_Pos) |
                    ((uint32_t)p_config->write_buff_size << RRAMC_CONFIG_WRITEBUFSIZE_Pos);
}

NRF_STATIC_INLINE nrf_rramc_read_mode_t nrf_rramc_read_mode_get(NRF_RRAMC_Type const * p_reg)
{
    return (nrf_rramc_read_mode_t)p_reg->READCONFIG;
}

NRF_STATIC_INLINE void nrf_rramc_read_mode_set(NRF_RRAMC_Type *      p_reg,
                                               nrf_rramc_read_mode_t read_mode)
{
    p_reg->READCONFIG = (uint32_t)read_mode;
}

NRF_STATIC_INLINE void nrf_rramc_waitstates_get(NRF_RRAMC_Type const *   p_reg,
                                                nrf_rramc_waitstates_t * p_config)
{
    p_config->value[0]  = (uint8_t)((p_reg->WAITSTATES & RRAMC_WAITSTATES_VALUE0_Msk) >> 
                                    RRAMC_WAITSTATES_VALUE0_Pos);
    p_config->value[1]  = (uint8_t)((p_reg->WAITSTATES & RRAMC_WAITSTATES_VALUE1_Msk) >> 
                                    RRAMC_WAITSTATES_VALUE1_Pos);
    p_config->value[2]  = (uint8_t)((p_reg->WAITSTATES & RRAMC_WAITSTATES_VALUE2_Msk) >> 
                                    RRAMC_WAITSTATES_VALUE2_Pos);
    p_config->read_done = (bool)(p_reg->WAITSTATES & RRAMC_WAITSTATES_RDONE_Msk);
}

NRF_STATIC_INLINE void nrf_rramc_waitstates_set(NRF_RRAMC_Type *               p_reg,
                                                nrf_rramc_waitstates_t const * p_config)
{
    NRFX_ASSERT(p_config->value[0] <= NRF_RRAMC_VALUE0_MAX);
    NRFX_ASSERT(p_config->value[1] <= NRF_RRAMC_VALUE1_MAX);
    NRFX_ASSERT(p_config->value[2] <= NRF_RRAMC_VALUE2_MAX);

    p_reg->WAITSTATES = ((uint32_t)RRAMC_WAITSTATES_KEY_Enable << RRAMC_WAITSTATES_KEY_Pos)    |
                        ((uint32_t)p_config->value[0]          << RRAMC_WAITSTATES_VALUE0_Pos) | 
                        ((uint32_t)p_config->value[1]          << RRAMC_WAITSTATES_VALUE1_Pos) |  
                        ((uint32_t)p_config->value[2]          << RRAMC_WAITSTATES_VALUE2_Pos) |
                        ((uint32_t)p_config->read_done         << RRAMC_WAITSTATES_RDONE_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_ready_next_timeout_get(NRF_RRAMC_Type const *          p_reg,
                                                        nrf_rramc_readynext_timeout_t * p_config)
{
    p_config->value = (uint16_t)((p_reg->READYNEXTTIMEOUT & RRAMC_READYNEXTTIMEOUT_VALUE_Msk) >>
                                 RRAMC_READYNEXTTIMEOUT_VALUE_Pos);
    p_config->direct_write = (bool)((p_reg->READYNEXTTIMEOUT & RRAMC_READYNEXTTIMEOUT_DW_Msk) >>
                                    RRAMC_READYNEXTTIMEOUT_DW_Pos);
}

NRF_STATIC_INLINE void
nrf_rramc_ready_next_timeout_set(NRF_RRAMC_Type *                      p_reg,
                                 nrf_rramc_readynext_timeout_t const * p_config)
{
    NRFX_ASSERT(p_config->value <= NRF_RRAMC_READYNEXTTIMEOUT_MAX);

    p_reg->READYNEXTTIMEOUT = ((uint32_t)p_config->value << RRAMC_READYNEXTTIMEOUT_VALUE_Pos) |
                              ((uint32_t)p_config->direct_write << RRAMC_READYNEXTTIMEOUT_DW_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_power_config_get(NRF_RRAMC_Type const * p_reg,
                                                  nrf_rramc_power_t *    p_config)
{
    p_config->access_timeout = (uint16_t)((p_reg->POWER.CONFIG &
                                          RRAMC_POWER_CONFIG_ACCESSTIMEOUT_Msk) >>
                                          RRAMC_POWER_CONFIG_ACCESSTIMEOUT_Pos);
    p_config->abort_on_pof = (bool)((p_reg->POWER.CONFIG &
                                    RRAMC_POWER_CONFIG_POWERONFAILURE_Msk) >>
                                    RRAMC_POWER_CONFIG_POWERONFAILURE_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_power_config_set(NRF_RRAMC_Type *          p_reg,
                                                  nrf_rramc_power_t const * p_config)
{
    p_reg->POWER.CONFIG =
            ((uint32_t)p_config->access_timeout << RRAMC_POWER_CONFIG_ACCESSTIMEOUT_Pos) |
            ((uint32_t)p_config->abort_on_pof   << RRAMC_POWER_CONFIG_POWERONFAILURE_Pos);
}

NRF_STATIC_INLINE
nrf_rramc_power_standby_mode_t nrf_rramc_power_standby_mode_get(NRF_RRAMC_Type const * p_reg)
{
    return (nrf_rramc_power_standby_mode_t)p_reg->POWER.STANDBYCONFIG;
}

NRF_STATIC_INLINE void nrf_rramc_power_standby_mode_set(NRF_RRAMC_Type *               p_reg,
                                                        nrf_rramc_power_standby_mode_t mode)
{
    p_reg->POWER.STANDBYCONFIG = (uint32_t)mode;
}

NRF_STATIC_INLINE void nrf_rramc_power_lp_config_get(NRF_RRAMC_Type const * p_reg,
                                                     nrf_rramc_power_lp_t * p_config)
{
    p_config->mode = (nrf_rramc_power_lp_mode_t)((p_reg->POWER.LOWPOWERCONFIG & 
                                                 RRAMC_POWER_STANDBYCONFIG_MODE_Msk) >>
                                                 RRAMC_POWER_STANDBYCONFIG_MODE_Pos);
    p_config->force_on_rramc = (bool)((p_reg->POWER.LOWPOWERCONFIG & 
                                      RRAMC_POWER_LOWPOWERCONFIG_FORCEONRRAMC_Msk) >>
                                      RRAMC_POWER_LOWPOWERCONFIG_FORCEONRRAMC_Pos);
    p_config->trc_reinit = (bool)((p_reg->POWER.LOWPOWERCONFIG &
                                  RRAMC_POWER_LOWPOWERCONFIG_TRCREINIT_Msk) >>
                                  RRAMC_POWER_LOWPOWERCONFIG_TRCREINIT_Pos);
    p_config->wakeup = (nrf_rramc_power_wakeup_t)((p_reg->POWER.LOWPOWERCONFIG &
                                                  RRAMC_POWER_LOWPOWERCONFIG_WAKEUP_Msk) >>
                                                  RRAMC_POWER_LOWPOWERCONFIG_WAKEUP_Pos);
    p_config->lp_ignore_msk = (nrf_rramc_power_lp_ignore_mask_t)((p_reg->POWER.LOWPOWERCONFIG &
                                       (NRF_RRAMC_POWER_LP_IGNORE_0_MASK |
                                        NRF_RRAMC_POWER_LP_IGNORE_1_MASK |
                                        NRF_RRAMC_POWER_LP_IGNORE_2_MASK |
                                        NRF_RRAMC_POWER_LP_IGNORE_3_MASK |
                                        NRF_RRAMC_POWER_LP_IGNORE_4_MASK |
                                        NRF_RRAMC_POWER_LP_IGNORE_5_MASK |
                                        NRF_RRAMC_POWER_LP_IGNORE_6_MASK |
                                        NRF_RRAMC_POWER_LP_IGNORE_7_MASK)) >>
                                        RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK0_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_power_lp_config_set(NRF_RRAMC_Type *             p_reg,
                                                     nrf_rramc_power_lp_t const * p_config)
{
    p_reg->POWER.LOWPOWERCONFIG = 
        ((uint32_t)p_config->mode           << RRAMC_POWER_STANDBYCONFIG_MODE_Pos)          | 
        ((uint32_t)p_config->force_on_rramc << RRAMC_POWER_LOWPOWERCONFIG_FORCEONRRAMC_Pos) |
        ((uint32_t)p_config->trc_reinit     << RRAMC_POWER_LOWPOWERCONFIG_TRCREINIT_Pos)    |
        ((uint32_t)p_config->wakeup         << RRAMC_POWER_LOWPOWERCONFIG_WAKEUP_Pos)       |
        ((uint32_t)p_config->lp_ignore_msk  << RRAMC_POWER_LOWPOWERCONFIG_LOWPOWERMASK0_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_power_force_get(NRF_RRAMC_Type const *    p_reg,
                                                 nrf_rramc_power_force_t * p_config)
{
    p_config->vdd = (nrf_rramc_power_force_vdd_t)(p_reg->POWER.FORCE & RRAMC_POWER_FORCE_VDD_Msk >>
                                                  RRAMC_POWER_FORCE_VDD_Pos);
    p_config->vddio = (nrf_rramc_power_force_vddio_t)(p_reg->POWER.FORCE &
                                                      RRAMC_POWER_FORCE_VDDIO_Msk >>
                                                      RRAMC_POWER_FORCE_VDDIO_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_power_force_set(NRF_RRAMC_Type *                p_reg,
                                                 nrf_rramc_power_force_t const * p_config)
{
    p_reg->POWER.FORCE = ((uint32_t)RRAMC_POWER_FORCE_KEY_Enable << RRAMC_POWER_FORCE_KEY_Pos) |
                         ((uint32_t)p_config->vdd                << RRAMC_POWER_FORCE_VDD_Pos) |
                         ((uint32_t)p_config->vddio              << RRAMC_POWER_FORCE_VDDIO_Pos);
}

NRF_STATIC_INLINE bool nrf_rramc_erase_all_check(NRF_RRAMC_Type const * p_reg)
{
    return (bool)(p_reg->ERASE.ERASEALL);
}

NRF_STATIC_INLINE void nrf_rramc_erase_all_set(NRF_RRAMC_Type * p_reg)
{
    p_reg->ERASE.ERASEALL = RRAMC_ERASE_ERASEALL_ERASE_Erase;
}

NRF_STATIC_INLINE bool nrf_rramc_erase_ficr_check(NRF_RRAMC_Type const * p_reg)
{
    return (bool)(p_reg->ERASE.ERASEFICR);
}

NRF_STATIC_INLINE void nrf_rramc_erase_ficr_set(NRF_RRAMC_Type * p_reg)
{
    p_reg->ERASE.ERASEFICR = RRAMC_ERASE_ERASEFICR_ERASE_Erase;
}

NRF_STATIC_INLINE uint32_t nrf_rramc_region_address_get(NRF_RRAMC_Type const * p_reg,
                                                        uint8_t                region_num)
{
    NRFX_ASSERT(region_num < NRF_RRAMC_REGION_MAX);

    return (uint32_t)p_reg->REGION[region_num].ADDRESS;
}

NRF_STATIC_INLINE void nrf_rramc_region_address_set(NRF_RRAMC_Type * p_reg,
                                                    uint8_t          region_num,
                                                    uint32_t         address)
{
    NRFX_ASSERT(region_num < NRF_RRAMC_REGION_MAX);

    p_reg->REGION[region_num].ADDRESS = address;
}

NRF_STATIC_INLINE void nrf_rramc_region_config_get(NRF_RRAMC_Type const * p_reg,
                                                   uint8_t                region_num,
                                                   nrf_rramc_region_t *   p_config)
{
    NRFX_ASSERT(region_num < NRF_RRAMC_REGION_MAX);

    p_config->read     = (bool)((p_reg->REGION[region_num].CONFIG &
                                RRAMC_REGION_CONFIG_READ_Msk) >>
                                RRAMC_REGION_CONFIG_READ_Pos);
    p_config->write    = (bool)((p_reg->REGION[region_num].CONFIG &
                                RRAMC_REGION_CONFIG_WRITE_Msk) >>
                                RRAMC_REGION_CONFIG_WRITE_Pos);
    p_config->execute  = (bool)((p_reg->REGION[region_num].CONFIG &
                                RRAMC_REGION_CONFIG_EXECUTE_Msk) >>
                                RRAMC_REGION_CONFIG_EXECUTE_Pos);
    p_config->secure   = (bool)((p_reg->REGION[region_num].CONFIG &
                                RRAMC_REGION_CONFIG_SECURE_Msk) >>
                                RRAMC_REGION_CONFIG_SECURE_Pos);
    p_config->owner_id = (uint8_t)((p_reg->REGION[region_num].CONFIG &
                                   RRAMC_REGION_CONFIG_OWNER_Msk) >>
                                   RRAMC_REGION_CONFIG_OWNER_Pos);
    p_config->lock     = (bool)((p_reg->REGION[region_num].CONFIG &
                                RRAMC_REGION_CONFIG_LOCK_Msk) >>
                                RRAMC_REGION_CONFIG_LOCK_Pos);
    p_config->size     = (uint8_t)((p_reg->REGION[region_num].CONFIG &
                                   RRAMC_REGION_CONFIG_SIZE_Msk) >>
                                   RRAMC_REGION_CONFIG_SIZE_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_region_config_set(NRF_RRAMC_Type *           p_reg,
                                                   uint8_t const              region_num,
                                                   nrf_rramc_region_t const * p_config)
{
    NRFX_ASSERT(region_num < NRF_RRAMC_REGION_MAX);

    p_reg->REGION[region_num].CONFIG = 
        ((uint32_t)p_config->read     << RRAMC_REGION_CONFIG_READ_Pos)    |
        ((uint32_t)p_config->write    << RRAMC_REGION_CONFIG_WRITE_Pos)   |
        ((uint32_t)p_config->execute  << RRAMC_REGION_CONFIG_EXECUTE_Pos) |
        ((uint32_t)p_config->secure   << RRAMC_REGION_CONFIG_SECURE_Pos)  |
        ((uint32_t)p_config->owner_id << RRAMC_REGION_CONFIG_OWNER_Pos)   |
        ((uint32_t)p_config->lock     << RRAMC_REGION_CONFIG_LOCK_Pos)    |
        ((uint32_t)p_config->size     << RRAMC_REGION_CONFIG_SIZE_Pos);
}

NRF_STATIC_INLINE
void nrf_rramc_giltchdetector_config_get(NRF_RRAMC_Type const *        p_reg,
                                         uint8_t                       gldetect_num,
                                         nrf_rramc_gldetect_config_t * p_config)
{
    NRFX_ASSERT(gldetect_num < NRF_RRAMC_GLITCHDETECTED_MAX);

    p_config->enable = (bool)((p_reg->POWER.GLITCHDETECTOR.CONFIG[gldetect_num] &
                              RRAMC_POWER_GLITCHDETECTOR_CONFIG_ENABLE_Msk) >>
                              RRAMC_POWER_GLITCHDETECTOR_CONFIG_ENABLE_Pos);
    p_config->dtb = (bool)((p_reg->POWER.GLITCHDETECTOR.CONFIG[gldetect_num] & 
                           RRAMC_POWER_GLITCHDETECTOR_CONFIG_DTBENABLE_Msk) >>
                           RRAMC_POWER_GLITCHDETECTOR_CONFIG_DTBENABLE_Pos);
}

NRF_STATIC_INLINE
void nrf_rramc_giltchdetector_config_set(NRF_RRAMC_Type *                    p_reg,
                                         uint8_t                             gldetect_num,
                                         nrf_rramc_gldetect_config_t const * p_config)
{
    NRFX_ASSERT(gldetect_num < NRF_RRAMC_GLITCHDETECTED_MAX);

    p_reg->POWER.GLITCHDETECTOR.CONFIG[gldetect_num] =
        ((uint32_t)p_config->enable << RRAMC_POWER_GLITCHDETECTOR_CONFIG_ENABLE_Pos) |
        ((uint32_t)p_config->dtb    << RRAMC_POWER_GLITCHDETECTOR_CONFIG_DTBENABLE_Pos);
}

NRF_STATIC_INLINE void nrf_rramc_giltchdetectors_trim_get(NRF_RRAMC_Type const *      p_reg,
                                                          nrf_rramc_gldetect_trim_t * p_config) 
{
    p_config->vrefl_dvdd = (uint8_t)((p_reg->POWER.GLITCHDETECTOR.TRIM &
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGL0V9_Msk) >>
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGL0V9_Pos);
    p_config->vrefl_vdd  = (uint8_t)((p_reg->POWER.GLITCHDETECTOR.TRIM &
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGL3V0_Msk) >>
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGL3V0_Pos);
    p_config->vrefh_dvdd = (uint8_t)((p_reg->POWER.GLITCHDETECTOR.TRIM &
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGH0V9_Msk) >>
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGH0V9_Pos);
    p_config->vrefh_vdd  = (uint8_t)((p_reg->POWER.GLITCHDETECTOR.TRIM &
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGH3V0_Msk) >>
                                     RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGH3V0_Pos);
}

NRF_STATIC_INLINE
void nrf_rramc_giltchdetectors_trim_set(NRF_RRAMC_Type *                  p_reg,
                                        nrf_rramc_gldetect_trim_t const * p_config)
{
    p_reg->POWER.GLITCHDETECTOR.TRIM =
        ((uint32_t)p_config->vrefl_dvdd << RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGL0V9_Pos) |
        ((uint32_t)p_config->vrefl_vdd  << RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGL3V0_Pos) |
        ((uint32_t)p_config->vrefh_dvdd << RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGH0V9_Pos) |
        ((uint32_t)p_config->vrefh_vdd  << RRAMC_POWER_GLITCHDETECTOR_TRIM_PROGH3V0_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_rramc_pcgslave_penalty_get(NRF_RRAMC_Type const * p_reg,
                                                         uint8_t                penalty_num)
{
    NRFX_ASSERT(penalty_num < NRF_RRAMC_PENALTY_MAX);

    return (uint8_t)p_reg->PCGCSLAVE.PENALTY[penalty_num];
}

NRF_STATIC_INLINE void nrf_rramc_pcgslave_penalty_set(NRF_RRAMC_Type * p_reg,
                                                      uint8_t          penalty_num,
                                                      uint8_t          penalty_val)
{
    NRFX_ASSERT(penalty_num < NRF_RRAMC_PENALTY_MAX);

    p_reg->PCGCSLAVE.PENALTY[penalty_num] = (uint32_t)penalty_val;
}

NRF_STATIC_INLINE 
void nrf_rramc_pcgslave_force_override_get(NRF_RRAMC_Type const *      p_reg,
                                           uint8_t                     f_override_num,
                                           nrf_rramc_forceoverride_t * p_config)
{
    NRFX_ASSERT(f_override_num < NRF_RRAMC_FORCEOVERRIDE_MAX);

    p_config->clock_forcing  = (uint32_t)((p_reg->PCGCSLAVE.FORCEOVERRIDE[f_override_num] &
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Msk) >>
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos);
    p_config->do_force_clock = (uint32_t)((p_reg->PCGCSLAVE.FORCEOVERRIDE[f_override_num] &
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Msk) >>
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos);
    p_config->power_forcing  = (uint32_t)((p_reg->PCGCSLAVE.FORCEOVERRIDE[f_override_num] &
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Msk) >>
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos);
    p_config->do_force_power = (uint32_t)((p_reg->PCGCSLAVE.FORCEOVERRIDE[f_override_num] &
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Msk) >>
                                          RRAMC_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos);
}

NRF_STATIC_INLINE 
void nrf_rramc_pcgslave_force_override_set(NRF_RRAMC_Type *                  p_reg,
                                           uint8_t                           f_override_num,
                                           nrf_rramc_forceoverride_t const * p_config)
{
    NRFX_ASSERT(f_override_num < NRF_RRAMC_FORCEOVERRIDE_MAX);

    p_reg->PCGCSLAVE.FORCEOVERRIDE[f_override_num] = 
        ((uint32_t)p_config->clock_forcing  << RRAMC_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos) |
        ((uint32_t)p_config->do_force_clock << RRAMC_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos) |
        ((uint32_t)p_config->power_forcing  << RRAMC_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos) |
        ((uint32_t)p_config->do_force_power << RRAMC_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_RRAM_H__
