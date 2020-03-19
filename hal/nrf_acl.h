/*$$$LICENCE_NORDIC_STANDARD<2018>$$$*/

#ifndef NRF_ACL_H__
#define NRF_ACL_H__

#include <nrfx.h>
#include <hal/nrf_ficr.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NRF_ACL_REGION_SIZE_MAX \
    (nrf_ficr_codepagesize_get(NRF_FICR) * nrf_ficr_codesize_get(NRF_FICR))

/**
 * @defgroup nrf_acl_hal ACL HAL
 * @{
 * @ingroup nrf_acl
 * @brief   Hardware access layer for managing the Access Control List (ACL) peripheral.
 */

/** @brief ACL permissions. */
typedef enum
{
    NRF_ACL_PERM_READ_NO_WRITE    = ACL_ACL_PERM_WRITE_Msk,                        /**< Read allowed, write disallowed. */
    NRF_ACL_PERM_NO_READ_WRITE    = ACL_ACL_PERM_READ_Msk,                         /**< Read disallowed, write allowed. */
    NRF_ACL_PERM_NO_READ_NO_WRITE = ACL_ACL_PERM_READ_Msk | ACL_ACL_PERM_WRITE_Msk /**< Read disallowed, write disallowed. */
} nrf_acl_perm_t;

/**
 * @brief Function for setting region parameters for given ACL region.
 *
 * Address must be word and page aligned. Size must be page aligned.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] region_id ACL region index.
 * @param[in] address   Start address.
 * @param[in] size      Size of region to protect in bytes.
 * @param[in] perm      Permissions to set for region to protect.
 */
NRF_STATIC_INLINE void nrf_acl_region_set(NRF_ACL_Type * p_reg,
                                          uint32_t       region_id,
                                          uint32_t       address,
                                          size_t         size,
                                          nrf_acl_perm_t perm);

/**
 * @brief Function for getting the configured region address of a specific ACL region.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] region_id ACL region index.
 *
 * @return Configured region address of given ACL region.
 */
NRF_STATIC_INLINE uint32_t nrf_acl_region_address_get(NRF_ACL_Type const * p_reg,
                                                      uint32_t             region_id);

/**
 * @brief Function for getting the configured region size of a specific ACL region.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] region_id ACL region index.
 *
 * @return Configured region size of given ACL region.
 */
NRF_STATIC_INLINE size_t nrf_acl_region_size_get(NRF_ACL_Type const * p_reg, uint32_t region_id);

/**
 * @brief Function for getting the configured region permissions of a specific ACL region.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] region_id ACL region index.
 *
 * @return Configured region permissions of given ACL region.
 */
NRF_STATIC_INLINE nrf_acl_perm_t nrf_acl_region_perm_get(NRF_ACL_Type const * p_reg,
                                                         uint32_t             region_id);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_acl_region_set(NRF_ACL_Type * p_reg,
                                          uint32_t       region_id,
                                          uint32_t       address,
                                          size_t         size,
                                          nrf_acl_perm_t perm)
{
    NRFX_ASSERT(region_id < ACL_REGIONS_COUNT);
    NRFX_ASSERT(address % nrf_ficr_codepagesize_get(NRF_FICR) == 0);
    NRFX_ASSERT(size <= NRF_ACL_REGION_SIZE_MAX);
    NRFX_ASSERT(size != 0);
    NRFX_ASSERT(size % nrf_ficr_codepagesize_get(NRF_FICR) == 0);

    p_reg->ACL[region_id].ADDR = address;
    p_reg->ACL[region_id].SIZE = size;
    p_reg->ACL[region_id].PERM = perm;
}

NRF_STATIC_INLINE uint32_t nrf_acl_region_address_get(NRF_ACL_Type const * p_reg,
                                                      uint32_t             region_id)
{
    return (uint32_t)p_reg->ACL[region_id].ADDR;
}

NRF_STATIC_INLINE size_t nrf_acl_region_size_get(NRF_ACL_Type const * p_reg, uint32_t region_id)
{
    return (size_t)p_reg->ACL[region_id].SIZE;
}

NRF_STATIC_INLINE nrf_acl_perm_t nrf_acl_region_perm_get(NRF_ACL_Type const * p_reg,
                                                         uint32_t             region_id)
{
    return (nrf_acl_perm_t)p_reg->ACL[region_id].PERM;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_ACL_H__
