/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_RAMC_H__
#define NRF_RAMC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NRF_RAMC_WAITSTATES_MAX RAMC_WAITSTATES_WAITSTATES_Max

/**
 * @defgroup nrf_ramc_hal RAMC RAM Controller HAL
 * @{
 * @ingroup nrf_ramc
 * @brief   Hardware access layer for managing the Random Access Memory Controller (RAMC) 
 *          peripheral.
 */

/** @brief RAMC events. */
typedef enum
{
    NRF_RAMC_EVENT_ERROR_FIXABLE     = offsetof(NRF_RAMC_Type, EVENTS_ERRORFIX),    /**< ECC detected fixable (one bit) error in read data from RAM. */
    NRF_RAMC_EVENT_ERROR_NON_FIXABLE = offsetof(NRF_RAMC_Type, EVENTS_ERRORNONFIX), /**< ECC detected non-fixable (multiple bits) error in read data from RAM. */
} nrf_ramc_event_t;

/**
 * @brief Function for clearing the specified RAMC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_ramc_event_clear(NRF_RAMC_Type * p_reg, nrf_ramc_event_t event);

/**
 * @brief Function for retrieving the state of the RAMC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_ramc_event_check(NRF_RAMC_Type const * p_reg, nrf_ramc_event_t event);

/**
 * @brief Function for returning the address of the specified RAMC event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_ramc_event_address_get(NRF_RAMC_Type const * p_reg,
                                                      nrf_ramc_event_t      event);

/**
 * @brief Function for returning the address of the last fixable error detected by the ECC.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Address of the last fixable error.
 */
NRF_STATIC_INLINE uint32_t nrf_ramc_fix_address_get(NRF_RAMC_Type const * p_reg);

/**
 * @brief Function for returning the address of the last non-fixable error detected by the ECC.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Address of the last non-fixable error.
 */
NRF_STATIC_INLINE uint32_t nrf_ramc_non_fix_address_get(NRF_RAMC_Type const * p_reg);

/**
 * @brief Function for setting number of waitstates for a read from the RAM.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] waitstates Number of waitstates [0...1].
 */
NRF_STATIC_INLINE void nrf_ramc_waitstates_set(NRF_RAMC_Type * p_reg, uint8_t waitstates);

/**
 * @brief Function for getting number of waitstates for a read from the RAM.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Number of waitstates.
 */
NRF_STATIC_INLINE uint8_t nrf_ramc_waitstates_get(NRF_RAMC_Type const * p_reg);

/**
 * @brief Function for setting base address for secure access area.
 * 
 * @note When the SECENABLE is enabled, any non-secure accesses to the address within 
 *       the RAM which are above or equal to the base address generates an error.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] addr  Base address. Writes to the bits [11:0] are ignored and are read as zero. 
 *                  Similarly, the MSB size depends on the size of the RAM, writes to those 
 *                  MSB above the size are ignored and are read as zero.
 */
NRF_STATIC_INLINE void nrf_ramc_secbase_set(NRF_RAMC_Type * p_reg, uint32_t addr);

/**
 * @brief Function for getting base address for secure access area.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Base address.
 */
NRF_STATIC_INLINE uint32_t nrf_ramc_secbase_get(NRF_RAMC_Type const * p_reg);

/**
 * @brief Function for setting secure access restrictions.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if secure access restrictions are to be enabled, false otherwise
 */
NRF_STATIC_INLINE void nrf_ramc_secenable_set(NRF_RAMC_Type * p_reg, bool enable);

/**
 * @brief Function for checking secure access restrictions.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @retval true  Secure access restrictions are enabled.
 * @retval false Secure access restrictions are disabled.
 */
NRF_STATIC_INLINE bool nrf_ramc_secenable_check(NRF_RAMC_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_ramc_event_clear(NRF_RAMC_Type * p_reg, nrf_ramc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_ramc_event_check(NRF_RAMC_Type const * p_reg, nrf_ramc_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_ramc_event_address_get(NRF_RAMC_Type const * p_reg,
                                                      nrf_ramc_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_ramc_fix_address_get(NRF_RAMC_Type const * p_reg)
{
    return p_reg->FIXADDR;
}

NRF_STATIC_INLINE uint32_t nrf_ramc_non_fix_address_get(NRF_RAMC_Type const * p_reg)
{
    return p_reg->NONFIXADDR;
}

NRF_STATIC_INLINE void nrf_ramc_waitstates_set(NRF_RAMC_Type * p_reg, uint8_t waitstates)
{
    NRFX_ASSERT(waitstates <= NRF_RAMC_WAITSTATES_MAX);
    p_reg->WAITSTATES = (uint32_t)waitstates;
}

NRF_STATIC_INLINE uint8_t nrf_ramc_waitstates_get(NRF_RAMC_Type const * p_reg)
{
    return (uint8_t)p_reg->WAITSTATES;
}

NRF_STATIC_INLINE void nrf_ramc_secbase_set(NRF_RAMC_Type * p_reg, uint32_t addr)
{
    p_reg->SECBASE = addr;
}

NRF_STATIC_INLINE uint32_t nrf_ramc_secbase_get(NRF_RAMC_Type const * p_reg)
{
    return p_reg->SECBASE;
}

NRF_STATIC_INLINE void nrf_ramc_secenable_set(NRF_RAMC_Type * p_reg, bool enable)
{
    p_reg->SECENABLE = (enable ? RAMC_SECENABLE_ENABLE_Enable : RAMC_SECENABLE_ENABLE_Disable) <<
                        RAMC_SECENABLE_ENABLE_Pos;
}

NRF_STATIC_INLINE bool nrf_ramc_secenable_check(NRF_RAMC_Type const * p_reg)
{
    return p_reg->SECENABLE == (RAMC_SECENABLE_ENABLE_Enable << RAMC_SECENABLE_ENABLE_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_RAMC_H__
