/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_IPCT_H__
#define NRFX_IPCT_H__

#include <nrfx.h>
#include <hal/nrf_ipct.h>
#include <nrfx_apb.h>

#ifdef __cplusplus
extern "C" {
#endif  

/**
 * @defgroup nrfx_ipct IPCT support
 * @{
 * @ingroup nrf_ipct
 * @brief   Support for IPCT interconnection services.
 */

/** @brief IPCT properties structure. */
typedef struct {
    NRF_IPCT_Type * p_ipct;                 ///< Pointer to IPCT instance
    nrfx_atomic_t * p_ipct_channels;        ///< Pointer to the mask of available IPCT channels.
    uint32_t        ipct_pub_channels_mask; ///< Mask of configurable IPCT publish channels.
    uint32_t        ipct_sub_channels_mask; ///< Mask of configurable IPCT subscribe channels.
} nrfx_ipct_interconnect_t;

/**
 * @brief Function for getting the domain to which the specified IPCT belongs.
 *
 * @param[in] p_ipct_interconnect Pointer to IPCT properties structure.
 * 
 * @return Domain that includes the specified IPCT.
 */
nrf_domain_t nrf_ipct_domain_get(nrfx_ipct_interconnect_t const * p_ipct_interconnect);

/**
 * @brief Function for getting IPCT properties structure by pointer to APB bus properties
 *        structure to which this particular IPCT belongs.
 * 
 * @param[in] p_apb_interconnect Pointer to APB properties structure.
 * 
 * @return Pointer to the IPCT properties structure that belongs to the specified APB bus.
 */
nrfx_ipct_interconnect_t const * nrf_ipct_get(nrfx_apb_interconnect_t const * p_apb_interconnect);

/**
 * @brief Function for getting number entries for global domain in IPCT peripheral properties
 *        array.
 * 
 * @return Number of entries in global IPCT peripheral properties array.
 */
size_t nrf_ipct_num_of_global_get(void);

/**
 * @brief Function for getting IPCT properties structure by index of IPCT peripheral properties
 *        array.
 *
 * @param[in] idx Index of entry in IPCT peripheral properties array.
 *
 * @return Pointer to the properties structure that represents IPCT assigned to given index.
 */
nrfx_ipct_interconnect_t const * nrf_ipct_by_idx_global_get(uint8_t idx);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_IPCT_H__
