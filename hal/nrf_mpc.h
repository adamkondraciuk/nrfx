/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_MPC_H_
#define NRF_MPC_H_

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_mpc_hal MPC HAL
 * @{
 * @ingroup nrf_mpc
 * @brief   Hardware access layer for managing the Memory Privilege Controller (MPC)
 *          peripheral.
 */

/** @brief Number of override regions. */
#define NRF_MPC_OVERRIDE_COUNT MPC_OVERRIDE_MaxCount

/** @brief MPC events. */
typedef enum
{
    NRF_MPC_EVENT_MEMACCERR = offsetof(NRF_MPC_Type, EVENTS_MEMACCERR), /**< Memory access error. */
} nrf_mpc_event_t;

/** @brief MPC interrupts. */
typedef enum
{
    NRF_MPC_INT_MEMACCERR_MASK = MPC_INTENSET_MEMACCERR_Msk, /**< Interrupt on MEMACCERR event. */
} nrf_mpc_int_mask_t;

/** @brief Error sources. */
typedef enum
{
    NRF_MPC_ERRORSOURCE_SLAVE = MPC_MEMACCERR_INFO_ERRORSOURCE_Slave, /**< Error was triggered by an AXI slave. */
    NRF_MPC_ERRORSOURCE_MPC   = MPC_MEMACCERR_INFO_ERRORSOURCE_MPC,   /**< Error was triggered by MCP module. */
} nrf_mpc_errorsource_t;

/**
 * @brief Permissions mask.
 *
 * @note This enum may be used for both permission settings and permission settings mask.
 */
typedef enum
{
    NRF_MPC_PERM_READ_MASK    = MPC_OVERRIDE_PERM_READ_Msk,    /**< Read access. */
    NRF_MPC_PERM_WRITE_MASK   = MPC_OVERRIDE_PERM_WRITE_Msk,   /**< Write access. */
    NRF_MPC_PERM_EXECUTE_MASK = MPC_OVERRIDE_PERM_EXECUTE_Msk, /**< Software execute. */
    NRF_MPC_PERM_SECURE_MASK  = MPC_OVERRIDE_PERM_SECATTR_Msk, /**< Security mapping. */
} nrf_mpc_permission_mask_t;

/** @brief Override region configuration. */
typedef struct
{
    uint8_t slave_number;  /**< Target slave number. */
    bool    lock;          /**< Lock region until next reset. */
    bool    enable;        /**< Enable region */
    bool    secdom_enable; /**< Enable overriding of secure domain permissions. */
    bool    secure_mask;   /**< Enable secure mask. If set, the bit 28 of the transaction is ignored while address matching. */
} nrf_mpc_override_config_t;

/**
 * @brief Function for retrieving the state of the specified MPC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_mpc_event_check(NRF_MPC_Type const * p_reg, nrf_mpc_event_t event);

/**
 * @brief Function for clearing the specified MPC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_mpc_event_clear(NRF_MPC_Type * p_reg, nrf_mpc_event_t event);

/**
 * @brief Function for getting the address of the specified MPC event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to get the address of.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_mpc_event_address_get(NRF_MPC_Type const * p_reg,
                                                     nrf_mpc_event_t      event);

/**
 * @brief Function for enabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_mpc_int_enable(NRF_MPC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_mpc_int_enable_check(NRF_MPC_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_mpc_int_disable(NRF_MPC_Type * p_reg, uint32_t mask);


/**
 * @brief Function for setting configuration of the override region.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] index    Override region index.
 * @param[in] p_config Pointer to the structure of the override region configuration parameters.
 */
NRF_STATIC_INLINE void nrf_mpc_override_config_set(NRF_MPC_Type *                    p_reg,
                                                   uint8_t                           index,
                                                   nrf_mpc_override_config_t const * p_config);

/**
 * @brief Function for setting start address of the override region.
 *
 * @note Address must be on a 4kB memory boundary.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] index   Override region index.
 * @param[in] address Address to be set.
 */
NRF_STATIC_INLINE void nrf_mpc_override_startaddr_set(NRF_MPC_Type * p_reg,
                                                      uint8_t        index,
                                                      uint32_t       address);

/**
 * @brief Function for setting end address of the override region.
 *
 * @note Address must be on a 4kB memory boundary.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] index   Override region index.
 * @param[in] address Address to be set.
 */
NRF_STATIC_INLINE void nrf_mpc_override_endaddr_set(NRF_MPC_Type * p_reg,
                                                    uint8_t        index,
                                                    uint32_t       address);

/**
 * @brief Function for setting offset of the override region.
 *
 * @note Offset will be left shifted before applying, creating a 33-bit signed integer.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] index  Override region index.
 * @param[in] offset Address offset value divided by 2.
 */
NRF_STATIC_INLINE void nrf_mpc_override_offset_set(NRF_MPC_Type * p_reg,
                                                   uint8_t        index,
                                                   uint32_t       offset);

/**
 * @brief Function for setting permission settings for the override region.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] index       Override region index.
 * @param[in] permissions Mask of permissions to be set.
 */
NRF_STATIC_INLINE void nrf_mpc_override_perm_set(NRF_MPC_Type * p_reg,
                                                 uint8_t        index,
                                                 uint32_t       permissions);

/**
 * @brief Function for setting permission settings mask for the override region.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] index       Override region index.
 * @param[in] permissions Mask of permissions settings mask to be set.
 */
NRF_STATIC_INLINE void nrf_mpc_override_permmask_set(NRF_MPC_Type * p_reg,
                                                     uint8_t        index,
                                                     uint32_t       permissions);

/**
 * @brief Function for setting owner ID for the override region.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] index    Override region index.
 * @param[in] owner_id Owner ID to be set.
 */
NRF_STATIC_INLINE void nrf_mpc_override_ownerid_set(NRF_MPC_Type * p_reg,
                                                    uint8_t        index,
                                                    nrf_owner_t    owner_id);

/**
 * @brief Function for getting the memory address of memory access error.
 *
 * @note Register content will not be changed as long as MEMACCERR event is active.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Target address for the errroneous access.
 */
NRF_STATIC_INLINE uint32_t nrf_mpc_memaccerr_address_get(NRF_MPC_Type const * p_reg);

/**
 * @brief Function for getting the owner identifier of the transaction that triggered memory access error.
 *
 * @note Register content will not be changed as long as MEMACCERR event is active.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Owner identifier of the errorneous access.
 */
NRF_STATIC_INLINE nrf_owner_t nrf_mpc_memaccerr_info_ownerid_get(NRF_MPC_Type const * p_reg);

/**
 * @brief Function for getting the master port of the transaction that triggered memory access error.
 *
 * @note Register content will not be changed as long as MEMACCERR event is active.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Master port where errorneous access is detected.
 */
NRF_STATIC_INLINE uint8_t nrf_mpc_memaccerr_info_masterport_get(NRF_MPC_Type const * p_reg);

/**
 * @brief Function for getting the permissions of the transaction that triggered memory access error.
 *
 * @note Register content will not be changed as long as MEMACCERR event is active.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Permission settings of the errorneous access.
 */
NRF_STATIC_INLINE uint32_t nrf_mpc_memaccerr_info_perm_get(NRF_MPC_Type const * p_reg);

/**
 * @brief Function for getting the source of the transaction that triggered memory access error.
 *
 * @note Register content will not be changed as long as MEMACCERR event is active.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Source of the errorneous access.
 */
NRF_STATIC_INLINE nrf_mpc_errorsource_t
nrf_mpc_memaccerr_info_errorsource_get(NRF_MPC_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE bool nrf_mpc_event_check(NRF_MPC_Type const * p_reg, nrf_mpc_event_t event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_mpc_event_clear(NRF_MPC_Type * p_reg, nrf_mpc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_mpc_event_address_get(NRF_MPC_Type const * p_reg,
                                                     nrf_mpc_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_mpc_int_enable(NRF_MPC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE uint32_t nrf_mpc_int_enable_check(NRF_MPC_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE void nrf_mpc_int_disable(NRF_MPC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE void nrf_mpc_override_config_set(NRF_MPC_Type *                    p_reg,
                                                   uint8_t                           index,
                                                   nrf_mpc_override_config_t const * p_config)
{
    NRFX_ASSERT(index < NRF_MPC_OVERRIDE_COUNT);
    NRFX_ASSERT(p_config != NULL);

    p_reg->OVERRIDE[index].CONFIG = (((p_config->slave_number <<
                                       MPC_OVERRIDE_CONFIG_SLAVENUMBER_Pos) &
                                      MPC_OVERRIDE_CONFIG_SLAVENUMBER_Msk) |
                                     ((p_config->lock ? MPC_OVERRIDE_CONFIG_LOCK_Locked :
                                       MPC_OVERRIDE_CONFIG_LOCK_Unlocked) <<
                                      MPC_OVERRIDE_CONFIG_LOCK_Pos) |
                                     ((p_config->enable ? MPC_OVERRIDE_CONFIG_ENABLE_Enabled :
                                       MPC_OVERRIDE_CONFIG_ENABLE_Disabled) <<
                                      MPC_OVERRIDE_CONFIG_ENABLE_Pos) |
                                     ((p_config->secdom_enable ?
                                       MPC_OVERRIDE_CONFIG_SECDOMENABLE_Enabled :
                                       MPC_OVERRIDE_CONFIG_SECDOMENABLE_Disabled) <<
                                      MPC_OVERRIDE_CONFIG_SECDOMENABLE_Pos) |
                                     ((p_config->secure_mask ?
                                       MPC_OVERRIDE_CONFIG_SECUREMASK_Enabled :
                                       MPC_OVERRIDE_CONFIG_SECUREMASK_Disabled) <<
                                      MPC_OVERRIDE_CONFIG_SECUREMASK_Pos));
}

NRF_STATIC_INLINE void nrf_mpc_override_startaddr_set(NRF_MPC_Type * p_reg,
                                                      uint8_t        index,
                                                      uint32_t       address)
{
    NRFX_ASSERT(index < NRF_MPC_OVERRIDE_COUNT);
    NRFX_ASSERT((address & 0xFFFUL) == 0);

    p_reg->OVERRIDE[index].STARTADDR = address;
}

NRF_STATIC_INLINE void nrf_mpc_override_endaddr_set(NRF_MPC_Type * p_reg,
                                                    uint8_t        index,
                                                    uint32_t       address)
{
    NRFX_ASSERT(index < NRF_MPC_OVERRIDE_COUNT);
    NRFX_ASSERT((address & 0xFFFUL) == 0);

    p_reg->OVERRIDE[index].ENDADDR = address;
}

NRF_STATIC_INLINE void nrf_mpc_override_offset_set(NRF_MPC_Type * p_reg,
                                                   uint8_t        index,
                                                   uint32_t       offset)
{
    NRFX_ASSERT(index < NRF_MPC_OVERRIDE_COUNT);
    NRFX_ASSERT((offset & 0x3FFUL) == 0);

    p_reg->OVERRIDE[index].OFFSET = offset;
}

NRF_STATIC_INLINE void nrf_mpc_override_perm_set(NRF_MPC_Type * p_reg,
                                                 uint8_t        index,
                                                 uint32_t       permissions)
{
    NRFX_ASSERT(index < NRF_MPC_OVERRIDE_COUNT);

    p_reg->OVERRIDE[index].PERM = permissions;
}

NRF_STATIC_INLINE void nrf_mpc_override_permmask_set(NRF_MPC_Type * p_reg,
                                                     uint8_t        index,
                                                     uint32_t       permissions)
{
    NRFX_ASSERT(index < NRF_MPC_OVERRIDE_COUNT);

    p_reg->OVERRIDE[index].PERMMASK = permissions;
}

NRF_STATIC_INLINE void nrf_mpc_override_ownerid_set(NRF_MPC_Type * p_reg,
                                                    uint8_t        index,
                                                    nrf_owner_t    owner_id)
{
    NRFX_ASSERT(index < NRF_MPC_OVERRIDE_COUNT);

    p_reg->OVERRIDE[index].OWNER = (owner_id << MPC_OVERRIDE_OWNER_OWNERID_Pos) &
                                   MPC_OVERRIDE_OWNER_OWNERID_Msk;
}

NRF_STATIC_INLINE uint32_t nrf_mpc_memaccerr_address_get(NRF_MPC_Type const * p_reg)
{
    return p_reg->MEMACCERR.ADDRESS;
}

NRF_STATIC_INLINE nrf_owner_t nrf_mpc_memaccerr_info_ownerid_get(NRF_MPC_Type const * p_reg)
{
    return ((p_reg->MEMACCERR.INFO & MPC_MEMACCERR_INFO_OWNERID_Msk)
            >> MPC_MEMACCERR_INFO_OWNERID_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_mpc_memaccerr_info_masterport_get(NRF_MPC_Type const * p_reg)
{
    return ((p_reg->MEMACCERR.INFO & MPC_MEMACCERR_INFO_MASTERPORT_Msk)
            >> MPC_MEMACCERR_INFO_MASTERPORT_Pos);
}

NRF_STATIC_INLINE uint32_t nrf_mpc_memaccerr_info_perm_get(NRF_MPC_Type const * p_reg)
{
    return ((p_reg->MEMACCERR.INFO &
             (MPC_MEMACCERR_INFO_READ_Msk | MPC_MEMACCERR_INFO_WRITE_Msk |
              MPC_MEMACCERR_INFO_EXECUTE_Msk | MPC_MEMACCERR_INFO_SECURE_Msk))
            >> MPC_MEMACCERR_INFO_READ_Pos);
}

NRF_STATIC_INLINE nrf_mpc_errorsource_t
nrf_mpc_memaccerr_info_errorsource_get(NRF_MPC_Type const * p_reg)
{
    return ((p_reg->MEMACCERR.INFO & MPC_MEMACCERR_INFO_ERRORSOURCE_Msk)
            >> MPC_MEMACCERR_INFO_ERRORSOURCE_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* NRF_MPC_H_ */
