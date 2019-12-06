/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRF_DCNF_H__
#define NRF_DCNF_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_dcnf_hal DCNF HAL
 * @{
 * @ingroup nrf_dcnf
 * @brief   Hardware access layer for managing the Domain Configuration (DCNF) module.
 */

/**
 * @brief Function for getting the value of the CPU ID.
 *
 * CPU ID can be used to identify the specific CPU in the multi-core environment.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return CPU ID.
 */
NRF_STATIC_INLINE uint32_t nrf_dcnf_cpuid_get(NRF_DCNF_Type const * p_reg);

#if defined(DCNF_EXTPERI_PROTECT_SLAVE0_Msk)
/**
 * @brief Function for configuring the control access to local peripheral memory regions.
 *        Intended for external master connected to specified AMLI master port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of the master port to configure.
 * @param[in] mask     Mask of the AHB slaves to be protected from being accessed
 *                     by external AHB masters.
 */
NRF_STATIC_INLINE void nrf_dcnf_peripheral_access_set(NRF_DCNF_Type * p_reg,
                                                      uint8_t         port_idx,
                                                      uint32_t        mask);

/**
 * @brief Function for getting the configuration of control access to local peripheral
 *        memory regions. Intended for external master connected to specified AMLI master port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of the master port to configure.
 *
 * @return Mask of the AHB slaves that are currently protected.
 */
NRF_STATIC_INLINE uint32_t nrf_dcnf_peripheral_access_get(NRF_DCNF_Type const * p_reg,
                                                          uint8_t               port_idx);
#endif // defined(DCNF_EXTPERI_PROTECT_SLAVE0_Msk)

#if defined(DCNF_EXTRAM_PROTECT_SLAVE0_Msk)
/**
 * @brief Function for configuring the control access to local RAM memory regions.
 *        Intended for external master connected to specified AMLI master port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of the master port to configure.
 * @param[in] mask     Mask of the AHB slaves to be protected from being accessed
 *                     by external AHB masters.
 */
NRF_STATIC_INLINE void nrf_dcnf_ram_access_set(NRF_DCNF_Type * p_reg,
                                               uint8_t         port_idx,
                                               uint32_t        mask);

/**
 * @brief Function for getting the configuration of control access to local RAM
 *        memory regions. Intended for external master connected to specified AMLI master port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of the master port to configure.
 *
 * @return Mask of the AHB slaves that are currently protected.
 */
NRF_STATIC_INLINE uint32_t nrf_dcnf_ram_access_get(NRF_DCNF_Type const * p_reg,
                                                   uint8_t               port_idx);
#endif // defined(DCNF_EXTRAM_PROTECT_SLAVE0_Msk)

#if defined(DCNF_EXTCODE_PROTECT_SLAVE0_Msk)
/**
 * @brief Function for configuring the control access to local code memory regions.
 *        Intended for external master connected to specified AMLI master port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of the master port to configure.
 * @param[in] mask     Mask of the AHB slaves to be protected from being accessed
 *                     by external AHB masters.
 */
NRF_STATIC_INLINE void nrf_dcnf_code_access_set(NRF_DCNF_Type * p_reg,
                                                uint8_t         port_idx,
                                                uint32_t        mask);

/**
 * @brief Function for getting the configuration of control access to local code
 *        memory regions. Intended for external master connected to specified AMLI master port.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] port_idx Index of the master port to configure.
 *
 * @return Mask of the AHB slaves that are currently protected.
 */
NRF_STATIC_INLINE uint32_t nrf_dcnf_code_access_get(NRF_DCNF_Type const * p_reg,
                                                    uint8_t               port_idx);
#endif // defined(DCNF_EXTCODE_PROTECT_SLAVE0_Msk)

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_dcnf_cpuid_get(NRF_DCNF_Type const * p_reg)
{
    return p_reg->CPUID;
}

#if defined(DCNF_EXTPERI_PROTECT_SLAVE0_Msk)
NRF_STATIC_INLINE void nrf_dcnf_peripheral_access_set(NRF_DCNF_Type * p_reg,
                                                      uint8_t         port_idx,
                                                      uint32_t        mask)
{
    p_reg->EXTPERI[port_idx].PROTECT = mask;
}

NRF_STATIC_INLINE uint32_t nrf_dcnf_peripheral_access_get(NRF_DCNF_Type const * p_reg,
                                                          uint8_t               port_idx)
{
    return p_reg->EXTPERI[port_idx].PROTECT;
}
#endif

#if defined(DCNF_EXTRAM_PROTECT_SLAVE0_Msk)
NRF_STATIC_INLINE void nrf_dcnf_ram_access_set(NRF_DCNF_Type * p_reg,
                                               uint8_t         port_idx,
                                               uint32_t        mask)
{
    p_reg->EXTRAM[port_idx].PROTECT = mask;
}

NRF_STATIC_INLINE uint32_t nrf_dcnf_ram_access_get(NRF_DCNF_Type const * p_reg,
                                                   uint8_t               port_idx)
{
    return p_reg->EXTRAM[port_idx].PROTECT;
}
#endif

#if defined(DCNF_EXTCODE_PROTECT_SLAVE0_Msk)
NRF_STATIC_INLINE void nrf_dcnf_code_access_set(NRF_DCNF_Type * p_reg,
                                                uint8_t         port_idx,
                                                uint32_t        mask)
{
    p_reg->EXTCODE[port_idx].PROTECT = mask;
}

NRF_STATIC_INLINE uint32_t nrf_dcnf_code_access_get(NRF_DCNF_Type const * p_reg,
                                                    uint8_t               port_idx)
{
    return p_reg->EXTCODE[port_idx].PROTECT;
}
#endif

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_DCNF_H__
