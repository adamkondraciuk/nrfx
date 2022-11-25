/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_INTERCONNECT_APB_H__
#define NRFX_INTERCONNECT_APB_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif  

/**
 * @defgroup nrfx_interconnect_apb APB bus support
 * @{
 * @ingroup nrf_apb
 * @brief   Support for APB bus services.
 */

/** @brief APB bus properties structure. */
typedef struct {
    NRF_DPPIC_Type * p_dppi;                 ///< DPPIC peripheral that belongs to given APB.
    nrfx_atomic_t  * p_dppi_channels;        ///< Pointer to the mask of available DPPI channels.
    uint32_t         dppi_pub_channels_mask; ///< Mask of configurable DPPI publish channels.
    uint32_t         dppi_sub_channels_mask; ///< Mask of configurable DPPI subscribe channels.
    NRF_PPIB_Type  * p_ppib;                 ///< PPIB peripheral that belongs to given APB.
    size_t           size;                   ///< Size of APB.
} nrfx_interconnect_apb_t;


/**
 * @brief Function for getting the domain to which the specified APB bus belongs.
 *
 * @param[in] p_apb_prop Pointer to APB properties structure.
 * 
 * @return Domain that includes the specified APB.
 */
nrf_domain_t nrfx_interconnect_apb_domain_get(nrfx_interconnect_apb_t const * p_apb_prop);

/**
 * @brief Function for getting the main APB interconnection.
 * 
 * @note In some domains the connection between different APBs is realized via additional
 *       bus which is called here `main_apb_connection`
 * 
 * @return Pointer to the properties structure that represents the main APB interconnection.
 */
nrfx_interconnect_apb_t const * nrfx_interconnect_apb_main_get(void);

/**
 * @brief Function for getting APB bus properties structure by address of any peripheral 
 *        that is included in.
 * 
 * @param[in] addr Address of the peripheral.
 * 
 * @return Pointer to the properties structure that represents the main APB interconnection
 *         or NULL if provided address is invalid.
 */
nrfx_interconnect_apb_t const * nrfx_interconnect_apb_get(uint32_t addr);

/**
 * @brief Function for getting number entries for global domain in APB bus properties array.
 *
 * @note The number of entries is equal to number of APB buses in global domain which contain
 *       DPPIC peripheral.
 *
 * @return Number of entries in APB properties array.
 */
size_t nrfx_interconnect_apb_global_num_of_get(void);

/**
 * @brief Function for getting APB bus properties structure by index of APB bus properties array.
 *
 * @param[in] idx Index of entry in APB bus properties array.
 *
 * @return Pointer to the properties structure that represents APB assigned to given index.
 */
nrfx_interconnect_apb_t const * nrf_apb_interconnect_by_idx_global_get(uint8_t idx);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_APB_H__
