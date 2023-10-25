/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_OTPC_H__
#define NRF_OTPC_H__

#include <nrfx.h>
#include <nrf_bitmask.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NRF_OTPC_REGION_MAX_COUNT OTPC_REGION_MaxCount

/**
 * @defgroup nrf_otpc_hal OTPC HAL
 * @{
 * @ingroup nrf_otpc
 * @brief   Hardware access layer for managing the One Time Programmable Controller (OTPC) peripheral.
 */

#if defined(OTPC_REGION_READ_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether REGION[n] registers are available. */
#define NRF_OTPC_HAS_REGION 1
#else
#define NRF_OTPC_HAS_REGION 0
#endif

#if defined(OTPC_REGIONLOCK_REGION0_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether REGIONLOCK register is available. */
#define NRF_OTPC_HAS_REGIONLOCK 1
#else
#define NRF_OTPC_HAS_REGIONLOCK 0
#endif

/** @brief OTPC events. */
typedef enum
{
    NRF_OTPC_EVENT_READY      = offsetof(NRF_OTPC_Type, EVENTS_READY),     ///< Current operation is completed.
    NRF_OTPC_EVENT_READY_NEXT = offsetof(NRF_OTPC_Type, EVENTS_READYNEXT), ///< Ready to accept a new write operation.
} nrf_otpc_event_t;

/** @brief OTPC interrupts. */
typedef enum
{
    NRF_OTPC_INT_READY_MASK      = OTPC_INTENSET_READY_Msk,     ///< Interrupt on READY event.
    NRF_OTPC_INT_READY_NEXT_MASK = OTPC_INTENSET_READYNEXT_Msk, ///< Interrupt on READYNEXT event.
} nrf_otpc_int_mask_t;

/** @brief Write enable (WEN) settings. */
typedef enum
{
    NRF_OTPC_MODE_WRITE_DISABLE = OTPC_CONFIG_WEN_DisableWrite, ///< Write is disabled.
    NRF_OTPC_MODE_WRITE_ENABLE  = OTPC_CONFIG_WEN_EnableWrite,  ///< Write is enabled.
} nrf_otpc_mode_write_t;

/** @brief Power mode settings. */
typedef enum
{
    NRF_OTPC_POWER_INIT_MODE_UP   = OTPC_POWER_INIT_MODE_PowerUp,   ///< Triggers power-up sequence.
    NRF_OTPC_POWER_INIT_MODE_DOWN = OTPC_POWER_INIT_MODE_PowerDown, ///< Triggers power-down sequence.
} nrf_otpc_power_init_t;

/** @brief Power mode status. */
typedef enum
{
    NRF_OTPC_POWER_STATUS_OFF            = OTPC_POWER_STATUS_STATE_Off,          ///< OTP is OFF.
    NRF_OTPC_POWER_STATUS_POWER_UP_SEQ   = OTPC_POWER_STATUS_STATE_PowerUpSeq,   ///< OTP power-up sequence is active.
    NRF_OTPC_POWER_STATUS_STANDBY        = OTPC_POWER_STATUS_STATE_Standby,      ///< OTP is in standby mode.
    NRF_OTPC_POWER_STATUS_ACTIVE         = OTPC_POWER_STATUS_STATE_Active,       ///< OTP is in active mode.
    NRF_OTPC_POWER_STATUS_POWER_DOWN_SEQ = OTPC_POWER_STATUS_STATE_PowerDownSeq, ///< OTP power-down sequence is active.
} nrf_otpc_power_status_t;

/** @brief Status of the PUF write lock. */
typedef enum
{
    NRF_OTPC_PUF_LOCK_PENDING  = OTPC_PUF_LOCK_LOCK_Pending,  ///< The PUF.PAD is not written. The PUF.READ is locked.
    NRF_OTPC_PUF_LOCK_DISABLED = OTPC_PUF_LOCK_LOCK_Disabled, ///< PUF.READ is not locked.
    NRF_OTPC_PUF_LOCK_ENABLED  = OTPC_PUF_LOCK_LOCK_Enabled,  ///< PUF.READ is locked.
} nrf_otpc_puf_lock_t;

/** @brief OTPC configuration structure. */
typedef struct
{
    nrf_otpc_mode_write_t mode_write; ///< Write enable settings.
} nrf_otpc_config_t;

/** @brief Mask for the various voltages supplies when switching power modes. */
typedef struct
{
    bool vdd;  ///< Mask VDD.
    bool vdd2; ///< Mask VDD2.
} nrf_otpc_power_conf_t;

#if NRF_OTPC_HAS_REGION
/** @brief OTPC region configuration structure. */
typedef struct
{
    bool read_allow;    ///< True if the reads to the region are to be allowed, false otherwise.
    bool write_allow;   ///< True if the writes to the region are to be allowed, false otherwise.
    bool execute_allow; ///< True if the code execution from the region is to be allowed, false otherwise.
} nrf_otpc_region_config_t;
#endif

/**
 * @brief Function for clearing the specified OTPC event.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_otpc_event_clear(NRF_OTPC_Type * p_reg, nrf_otpc_event_t event);

/**
 * @brief Function for retrieving the state of the OTPC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_otpc_event_check(NRF_OTPC_Type const * p_reg, nrf_otpc_event_t event);

/**
 * @brief Function for getting the address of the specified OTPC event register.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] event Requested event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_otpc_event_address_get(NRF_OTPC_Type const * p_reg,
                                                      nrf_otpc_event_t      event);

/**
 * @brief Function for enabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_otpc_int_enable(NRF_OTPC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_otpc_int_disable(NRF_OTPC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_otpc_int_enable_check(NRF_OTPC_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at a particular position means that an interrupt for the event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_otpc_int_pending_get(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for checking current OTPC operation status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Current operation is completed and OTPC is ready.
 * @retval false OTPC is busy.
 */
NRF_STATIC_INLINE bool nrf_otpc_ready_check(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for checking whether OTPC is ready to accept a new write operation.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  OTPC is ready to accept a new write operation.
 * @retval false OTPC cannot accept any write operation now.
 */
NRF_STATIC_INLINE bool nrf_otpc_write_ready_check(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for setting the OTPC peripheral configuration.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure containing configuration to be set.
 */
NRF_STATIC_INLINE void nrf_otpc_config_set(NRF_OTPC_Type *           p_reg,
                                           nrf_otpc_config_t const * p_config);

/**
 * @brief Function for getting the OTPC peripheral configuration.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the structure to be filled with OTPC configuration data.
 */
NRF_STATIC_INLINE void nrf_otpc_config_get(NRF_OTPC_Type const * p_reg,
                                           nrf_otpc_config_t *   p_config);

/**
 * @brief Function for setting wait states number for the OTP read access.
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] waitstate_num Number of wait states for the OTP read to be set.
 */
NRF_STATIC_INLINE void nrf_otpc_waitstates_set(NRF_OTPC_Type * p_reg, uint32_t waitstate_num);

/**
 * @brief Function for reading wait states for OTP read access.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current number of wait states for the OTP read.
 */
NRF_STATIC_INLINE uint32_t nrf_otpc_waitstates_get(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for setting power mode switching sequence.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Power mode switching sequence.
 */
NRF_STATIC_INLINE void nrf_otpc_power_init_set(NRF_OTPC_Type * p_reg, nrf_otpc_power_init_t mode);

/**
 * @brief Function for getting power mode switching sequence.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Power mode switching sequence.
 */
NRF_STATIC_INLINE nrf_otpc_power_init_t nrf_otpc_power_init_get(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for setting mask for the various voltages supplies when switching power modes.
 *
 * @note All bits must be set to 0 for normal operation of OTP. Incorrect usage would
 *       result in unknown behavior of OTP.
 *
 * @warning Do not use this function unless you know the consequences.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] p_data Pointer to the structure filled with information about various voltages
 *                   supplies when switching power modes.
 */
NRF_STATIC_INLINE void nrf_otpc_power_mask_set(NRF_OTPC_Type *               p_reg,
                                               nrf_otpc_power_conf_t const * p_data);

/**
 * @brief Function for getting mask for the various voltages supplies when switching power modes.
 *
 * @note All bits must be set to 0 for normal operation of OTP. Incorrect usage would
 *       result in unknown behavior of OTP. Do not use this function unless
 *       you know the consequences.
 *
 * @param[in]  p_reg  Pointer to the structure of registers of the peripheral.
 * @param[out] p_data Pointer to the structure to be filled with information about various
 *                    voltages supplies when switching power modes.
 */
NRF_STATIC_INLINE void nrf_otpc_power_mask_get(NRF_OTPC_Type const *   p_reg,
                                               nrf_otpc_power_conf_t * p_data);

/**
 * @brief Function for getting the power mode status.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Status of the power mode.
 */
NRF_STATIC_INLINE nrf_otpc_power_status_t nrf_otpc_power_status_get(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for getting status of the power control signals acknowledgement
 *        during power-up sequence.
 *
 * @param[in]  p_reg  Pointer to the structure of registers of the peripheral.
 * @param[out] p_data Pointer to the structure to be filled with information about
 *                    status of the power control signals acknowledgement
 *                    during power-up sequence.
 */
NRF_STATIC_INLINE void nrf_otpc_power_up_ack_get(NRF_OTPC_Type const *   p_reg,
                                                 nrf_otpc_power_conf_t * p_data);

/**
 * @brief Function for getting status of the power control signals acknowledgement
 *        during power-down sequence.
 *
 * @param[in]  p_reg  Pointer to the structure of registers of the peripheral.
 * @param[out] p_data Pointer to the structure to be filled with information about
 *                    status of the power control signals acknowledgement
 *                    during power-down sequence.
 */
NRF_STATIC_INLINE void nrf_otpc_power_down_ack_get(NRF_OTPC_Type const *   p_reg,
                                                   nrf_otpc_power_conf_t * p_data);

/**
 * @brief Function for setting the configuration of force ON signal of the power supply.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] p_data Pointer to the structure filled with information about force ON power supply.
 */
NRF_STATIC_INLINE void nrf_otpc_power_force_on_set(NRF_OTPC_Type *               p_reg,
                                                   nrf_otpc_power_conf_t const * p_data);

/**
 * @brief Function for getting force ON the power supply.
 *
 * @param[in]  p_reg  Pointer to the structure of registers of the peripheral.
 * @param[out] p_data Pointer to the structure to be filled with information about force ON
 *                    power supply.
 */
NRF_STATIC_INLINE void nrf_otpc_power_force_on_get(NRF_OTPC_Type const *   p_reg,
                                                   nrf_otpc_power_conf_t * p_data);

/**
 * @brief Function for setting force OFF the power supply.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] p_data Pointer to the structure filled with information about force OFF power supply.
 */
NRF_STATIC_INLINE void nrf_otpc_power_force_off_set(NRF_OTPC_Type *               p_reg,
                                                    nrf_otpc_power_conf_t const * p_data);

/**
 * @brief Function for getting force OFF the power supply.
 *
 * @param[in]  p_reg  Pointer to the structure of registers of the peripheral.
 * @param[out] p_data Pointer to the structure to be filled with information about force OFF
 *                    power supply.
 */
NRF_STATIC_INLINE void nrf_otpc_power_force_off_get(NRF_OTPC_Type const *   p_reg,
                                                    nrf_otpc_power_conf_t * p_data);

/**
 * @brief Function for getting the PUF bits stream XORed with the PUF pad value.
 *        Function returns 0 if the PUF is locked.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return PUF word from the the PUF bits stream XORed with the PUF pad value.
 */
NRF_STATIC_INLINE uint32_t nrf_otpc_puf_read_get(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for setting the PUF pad value used to XOR with the PUF word read.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] pad_val PUF pad value.
 */
NRF_STATIC_INLINE void nrf_otpc_puf_pad_set(NRF_OTPC_Type * p_reg, uint32_t pad_val);

/**
 * @brief Function for getting the status of the PUF write lock.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return PUF pad value.
 */
NRF_STATIC_INLINE nrf_otpc_puf_lock_t nrf_otpc_puf_lock_get(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for enabling the PUF write lock.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_otpc_puf_lock_enable(NRF_OTPC_Type * p_reg);

/**
 * @brief Function for setting timeout to go into standby mode.
 *
 * @note It is the timeout between two OTP memory operations (read or write) or PUF read.
 *       This feature is disabled when the timeout is set to zero.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] timeout Timeout in terms of OTPC clock cycles, based on frequency.
 *                    Allowed values 0-511.
 */
NRF_STATIC_INLINE void nrf_otpc_standby_timeout_set(NRF_OTPC_Type * p_reg, uint32_t timeout);

/**
 * @brief Function for getting timeout to go into standby mode.
 *
 * @note It is the timeout between two OTP memory operations (read or write) or PUF read.
 *       Timeout is disabled if the returned value is zero.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Timeout in terms of OTPC clock cycles, based on frequency.
 */
NRF_STATIC_INLINE uint32_t nrf_otpc_standby_timeout_get(NRF_OTPC_Type const * p_reg);

/**
 * @brief Function for setting clock frequency of OTPC.
 *        This clock is used by the OTPC for timing OTP operations.
 *        OTPC rounds this value up internally to the nearest multiple of 20 MHz.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] freq  Frequency in MHz.
 */
NRF_STATIC_INLINE void nrf_otpc_frequency_set(NRF_OTPC_Type * p_reg, uint32_t freq);

/**
 * @brief Function for getting clock frequency of OTPC.
 *        This clock is used by the OTPC for timing OTP operations.
 *        OTPC rounds this value up internally to the nearest multiple of 20 MHz.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Frequency in MHz.
 */
NRF_STATIC_INLINE uint32_t nrf_otpc_frequency_get(NRF_OTPC_Type const * p_reg);

#if NRF_OTPC_HAS_REGION
/**
 * @brief Function for setting the configuration of the specified region.
 *
 * @note Setting the configuration is not possible if the configuration is locked.
 *       Use @p nrf_otpc_region_config_lock_check to check the status of the configuration lock.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the structure with region configuration to be set.
 * @param[in] region   Region.
 */
NRF_STATIC_INLINE void nrf_otpc_region_config_set(NRF_OTPC_Type *                  p_reg,
                                                  nrf_otpc_region_config_t const * p_config,
                                                  uint32_t                         region);

/**
 * @brief Function for getting the configuration of the specified region.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_config Pointer to the structure to be filled with region configuration data.
 * @param[in]  region   Region.
 */
NRF_STATIC_INLINE void nrf_otpc_region_config_get(NRF_OTPC_Type const *      p_reg,
                                                  nrf_otpc_region_config_t * p_config,
                                                  uint32_t                   region);

/**
 * @brief Function for setting the configuration lock for the specified region.
 *
 * @note If lock is enabled, changing the configuration of the region is not possible,
 *       and any config set with @p nrf_otpc_region_config_set is ignored.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Region.
 * @param[in] lock   True if lock is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_otpc_region_config_lock_set(NRF_OTPC_Type * p_reg,
                                                       uint32_t        region,
                                                       bool            lock);

/**
 * @brief Function for checking the configuration lock for the specified region.
 *
 * @note If lock is enabled, changing the configuration of the region is not possible,
 *       and any config set with @p nrf_otpc_region_config_set is ignored.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Region.
 *
 * @retval true  Region is locked.
 * @retval false Region is not locked.
 */
NRF_STATIC_INLINE bool nrf_otpc_region_config_lock_check(NRF_OTPC_Type const * p_reg,
                                                         uint32_t              region);
#endif // NRF_OTPC_HAS_REGION

#if NRF_OTPC_HAS_REGIONLOCK
/**
 * @brief Function for setting the write lock for the specified region.
 *
 * @note If lock is enabled, writing to the region is not possible, and any written value is ignored.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Region.
 * @param[in] lock   True if lock is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_otpc_region_write_lock_set(NRF_OTPC_Type * p_reg,
                                                      uint32_t        region,
                                                      bool            lock);

/**
 * @brief Function for checking if the write lock for the specified region is enabled.
 *
 * @note If lock is enabled, writing to the region is not possible, and any written value is ignored.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Region.
 *
 * @retval true  Region is locked.
 * @retval false Region is not locked.
 */
NRF_STATIC_INLINE bool nrf_otpc_region_write_lock_check(NRF_OTPC_Type const * p_reg,
                                                        uint32_t              region);
#endif

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_otpc_event_clear(NRF_OTPC_Type * p_reg, nrf_otpc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_otpc_event_check(NRF_OTPC_Type const * p_reg, nrf_otpc_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_otpc_event_address_get(NRF_OTPC_Type const * p_reg,
                                                      nrf_otpc_event_t      event)
{
    return ((uint32_t)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_otpc_int_enable(NRF_OTPC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_otpc_int_disable(NRF_OTPC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_otpc_int_enable_check(NRF_OTPC_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_otpc_int_pending_get(NRF_OTPC_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE bool nrf_otpc_ready_check(NRF_OTPC_Type const * p_reg)
{
    return (bool)p_reg->READY;
}

NRF_STATIC_INLINE bool nrf_otpc_write_ready_check(NRF_OTPC_Type const * p_reg)
{
    return (bool)p_reg->READYNEXT;
}

NRF_STATIC_INLINE void nrf_otpc_config_set(NRF_OTPC_Type *           p_reg,
                                           nrf_otpc_config_t const * p_config)
{
    p_reg->CONFIG = ((uint32_t)p_config->mode_write << OTPC_CONFIG_WEN_Pos);
}

NRF_STATIC_INLINE void nrf_otpc_config_get(NRF_OTPC_Type const * p_reg,
                                           nrf_otpc_config_t *   p_config)
{
    p_config->mode_write = (nrf_otpc_mode_write_t)((p_reg->CONFIG & OTPC_CONFIG_WEN_Msk)
                                                   >> OTPC_CONFIG_WEN_Pos);
}

NRF_STATIC_INLINE void nrf_otpc_waitstates_set(NRF_OTPC_Type * p_reg, uint32_t waitstate_num)
{
    p_reg->WAITSTATES = ((uint32_t)OTPC_WAITSTATES_KEY_Allowed << OTPC_WAITSTATES_KEY_Pos) |
                        ((waitstate_num << OTPC_WAITSTATES_WAITSTATENUM_Pos) &
                         OTPC_WAITSTATES_WAITSTATENUM_Msk);
}

NRF_STATIC_INLINE uint32_t nrf_otpc_waitstates_get(NRF_OTPC_Type const * p_reg)
{
    return ((p_reg->WAITSTATES & OTPC_WAITSTATES_WAITSTATENUM_Msk)
            >> OTPC_WAITSTATES_WAITSTATENUM_Pos);
}

NRF_STATIC_INLINE void nrf_otpc_power_init_set(NRF_OTPC_Type * p_reg, nrf_otpc_power_init_t mode)
{
    p_reg->POWER.INIT = (uint32_t)mode | (OTPC_POWER_INIT_KEY_Allowed << OTPC_POWER_INIT_KEY_Pos);
}

NRF_STATIC_INLINE nrf_otpc_power_init_t nrf_otpc_power_init_get(NRF_OTPC_Type const * p_reg)
{
    return (nrf_otpc_power_init_t)(p_reg->POWER.INIT & OTPC_POWER_INIT_MODE_Msk);
}

NRF_STATIC_INLINE void nrf_otpc_power_mask_set(NRF_OTPC_Type *               p_reg,
                                               nrf_otpc_power_conf_t const * p_data)
{
    p_reg->POWER.MASK =
        ((uint32_t)OTPC_POWER_MASK_KEY_Allowed << OTPC_POWER_MASK_KEY_Pos) |
        ((uint32_t)p_data->vdd << OTPC_POWER_MASK_VDD_Pos) |
        ((uint32_t)p_data->vdd2 << OTPC_POWER_MASK_VDD2_Pos);
}

NRF_STATIC_INLINE void nrf_otpc_power_mask_get(NRF_OTPC_Type const *   p_reg,
                                               nrf_otpc_power_conf_t * p_data)
{
    p_data->vdd  = (bool)(p_reg->POWER.MASK & OTPC_POWER_MASK_VDD_Msk);
    p_data->vdd2 = (bool)(p_reg->POWER.MASK & OTPC_POWER_MASK_VDD2_Pos);
}

NRF_STATIC_INLINE nrf_otpc_power_status_t nrf_otpc_power_status_get(NRF_OTPC_Type const * p_reg)
{
    return (nrf_otpc_power_status_t)p_reg->POWER.STATUS;
}

NRF_STATIC_INLINE void nrf_otpc_power_up_ack_get(NRF_OTPC_Type const *   p_reg,
                                                 nrf_otpc_power_conf_t * p_data)
{
    p_data->vdd  = (bool)(p_reg->POWER.POWERUPACK & OTPC_POWER_POWERUPACK_VDD_Msk);
    p_data->vdd2 = (bool)(p_reg->POWER.POWERUPACK & OTPC_POWER_POWERUPACK_VDD2_Msk);
}

NRF_STATIC_INLINE void nrf_otpc_power_down_ack_get(NRF_OTPC_Type const *   p_reg,
                                                   nrf_otpc_power_conf_t * p_data)
{
    p_data->vdd  = (bool)(p_reg->POWER.POWERDOWNACK & OTPC_POWER_POWERDOWNACK_VDD_Msk);
    p_data->vdd2 = (bool)(p_reg->POWER.POWERDOWNACK & OTPC_POWER_POWERDOWNACK_VDD2_Msk);
}

NRF_STATIC_INLINE void nrf_otpc_power_force_on_set(NRF_OTPC_Type *               p_reg,
                                                   nrf_otpc_power_conf_t const * p_data)
{
    p_reg->POWER.FORCEON =
        ((uint32_t)OTPC_POWER_FORCEON_KEY_Allowed << OTPC_POWER_FORCEON_KEY_Pos) |
        ((uint32_t)p_data->vdd << OTPC_POWER_FORCEON_VDD_Pos) |
        ((uint32_t)p_data->vdd2 << OTPC_POWER_FORCEON_VDD2_Pos);
}

NRF_STATIC_INLINE void nrf_otpc_power_force_on_get(NRF_OTPC_Type const *   p_reg,
                                                   nrf_otpc_power_conf_t * p_data)
{
    p_data->vdd  = (bool)(p_reg->POWER.FORCEON & OTPC_POWER_FORCEON_VDD_Msk);
    p_data->vdd2 = (bool)(p_reg->POWER.FORCEON & OTPC_POWER_FORCEON_VDD2_Msk);
}

NRF_STATIC_INLINE void nrf_otpc_power_force_off_set(NRF_OTPC_Type *               p_reg,
                                                    nrf_otpc_power_conf_t const * p_data)
{
    p_reg->POWER.FORCEOFF =
        ((uint32_t)OTPC_POWER_FORCEOFF_KEY_Allowed << OTPC_POWER_FORCEOFF_KEY_Pos) |
        ((uint32_t)p_data->vdd << OTPC_POWER_FORCEOFF_VDD_Pos) |
        ((uint32_t)p_data->vdd2 << OTPC_POWER_FORCEOFF_VDD2_Pos);
}

NRF_STATIC_INLINE void nrf_otpc_power_force_off_get(NRF_OTPC_Type const *   p_reg,
                                                    nrf_otpc_power_conf_t * p_data)
{
    p_data->vdd  = (bool)(p_reg->POWER.FORCEOFF & OTPC_POWER_FORCEOFF_VDD_Msk);
    p_data->vdd2 = (bool)(p_reg->POWER.FORCEOFF & OTPC_POWER_FORCEOFF_VDD2_Msk);
}

NRF_STATIC_INLINE uint32_t nrf_otpc_puf_read_get(NRF_OTPC_Type const * p_reg)
{
    return (p_reg->PUF.READ & OTPC_PUF_READ_Value_Msk);
}

NRF_STATIC_INLINE void nrf_otpc_puf_pad_set(NRF_OTPC_Type * p_reg, uint32_t pad_val)
{
    p_reg->PUF.PAD = pad_val << OTPC_PUF_LOCK_LOCK_Pos;
}

NRF_STATIC_INLINE nrf_otpc_puf_lock_t nrf_otpc_puf_lock_get(NRF_OTPC_Type const * p_reg)
{
    return (nrf_otpc_puf_lock_t)(p_reg->PUF.LOCK & OTPC_PUF_LOCK_LOCK_Msk);
}

NRF_STATIC_INLINE void nrf_otpc_puf_lock_enable(NRF_OTPC_Type * p_reg)
{
    p_reg->PUF.LOCK = OTPC_PUF_LOCK_LOCK_Enable << OTPC_PUF_LOCK_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_otpc_standby_timeout_set(NRF_OTPC_Type * p_reg, uint32_t timeout)
{
    p_reg->STANDBYTIMEOUT = timeout << OTPC_STANDBYTIMEOUT_TIMEOUT_Pos;
}

NRF_STATIC_INLINE uint32_t nrf_otpc_standby_timeout_get(NRF_OTPC_Type const * p_reg)
{
    return (p_reg->STANDBYTIMEOUT & OTPC_STANDBYTIMEOUT_TIMEOUT_Msk)
           >> OTPC_STANDBYTIMEOUT_TIMEOUT_Pos;
}

NRF_STATIC_INLINE void nrf_otpc_frequency_set(NRF_OTPC_Type * p_reg, uint32_t freq)
{
    p_reg->FREQUENCY = freq << OTPC_FREQUENCY_FREQUENCY_Pos;
}

NRF_STATIC_INLINE uint32_t nrf_otpc_frequency_get(NRF_OTPC_Type const * p_reg)
{
    return (p_reg->FREQUENCY & OTPC_FREQUENCY_FREQUENCY_Msk)
           >> OTPC_FREQUENCY_FREQUENCY_Pos;
}

#if NRF_OTPC_HAS_REGION
NRF_STATIC_INLINE void nrf_otpc_region_config_set(NRF_OTPC_Type *                  p_reg,
                                                  nrf_otpc_region_config_t const * p_config,
                                                  uint32_t                         region)
{
    NRFX_ASSERT(region < NRF_OTPC_REGION_MAX_COUNT);

    p_reg->REGION[region] =
        ((p_config->read_allow << OTPC_REGION_READ_Pos) & OTPC_REGION_READ_Msk) |
        ((p_config->write_allow << OTPC_REGION_WRITE_Pos) & OTPC_REGION_WRITE_Msk) |
        ((p_config->execute_allow << OTPC_REGION_EXECUTE_Pos) & OTPC_REGION_EXECUTE_Msk);
}

NRF_STATIC_INLINE void nrf_otpc_region_config_get(NRF_OTPC_Type const *      p_reg,
                                                  nrf_otpc_region_config_t * p_config,
                                                  uint32_t                   region)
{
    NRFX_ASSERT(region < NRF_OTPC_REGION_MAX_COUNT);

    p_config->read_allow = (p_reg->REGION[region] & OTPC_REGION_READ_Msk)
                           >> OTPC_REGION_READ_Pos;
    p_config->write_allow = (p_reg->REGION[region] & OTPC_REGION_WRITE_Msk)
                            >> OTPC_REGION_WRITE_Pos;
    p_config->execute_allow = (p_reg->REGION[region] & OTPC_REGION_EXECUTE_Msk)
                              >> OTPC_REGION_EXECUTE_Pos;
}

NRF_STATIC_INLINE void nrf_otpc_region_config_lock_set(NRF_OTPC_Type * p_reg,
                                                       uint32_t        region,
                                                       bool            lock)
{
    NRFX_ASSERT(region < NRF_OTPC_REGION_MAX_COUNT);

    p_reg->REGION[region] = (lock ? OTPC_REGION_LOCK_Locked : OTPC_REGION_LOCK_NotLocked)
                            << OTPC_REGION_LOCK_Pos;
}

NRF_STATIC_INLINE bool nrf_otpc_region_config_lock_check(NRF_OTPC_Type const * p_reg,
                                                         uint32_t              region)
{
    NRFX_ASSERT(region < NRF_OTPC_REGION_MAX_COUNT);

    return ((p_reg->REGION[region] & OTPC_REGION_LOCK_Msk) >> OTPC_REGION_LOCK_Pos) ==
           OTPC_REGION_LOCK_Locked;
}
#endif // NRF_OTPC_HAS_REGION

#if NRF_OTPC_HAS_REGIONLOCK
NRF_STATIC_INLINE void nrf_otpc_region_write_lock_set(NRF_OTPC_Type * p_reg,
                                                      uint32_t        region,
                                                      bool            lock)
{
    p_reg->REGIONLOCK = (lock ? OTPC_REGIONLOCK_REGION0_Locked : OTPC_REGIONLOCK_REGION0_NotLocked)
                        << region;
}

NRF_STATIC_INLINE bool nrf_otpc_region_write_lock_check(NRF_OTPC_Type const * p_reg,
                                                        uint32_t              region)
{
    return ((p_reg->REGIONLOCK & (OTPC_REGIONLOCK_REGION0_Msk << region)) >> region) ==
           OTPC_REGIONLOCK_REGION0_Locked;
}
#endif

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_OTPC_H__
