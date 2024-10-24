/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_INTERCONNECT_DPPIC_PPIB_H__
#define NRFX_INTERCONNECT_DPPIC_PPIB_H__

#include <nrfx_dppi.h>
#include <nrfx_ppib.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_interconnect_dppic_ppib DPPIC and PPIB interconnect support
 * @{
 * @ingroup nrfx
 * @brief   Support for DPPIC and PPIB interconnect services.
 */

/** @brief PPIB interconnect properties structure. */
typedef struct
{
    nrfx_ppib_interconnect_t ppib;                                  ///< Interconnect instance.
    uint8_t                  allocate_flag[PPIB_CHANNEL_MAX_COUNT]; ///< Virtual channels assigned to each of PPIB channels.
} nrfx_interconnect_ppib_t;

/** @brief DPPIC and PPIB interconnect properties structure. */
typedef struct
{
    NRF_DPPIC_Type * dppic; ///< DPPIC peripheral.
    NRF_PPIB_Type *  ppib;  ///< PPIB peripheral.
} nrfx_interconnect_dppic_ppib_t;

/** @brief DPPIC properties structure. */
typedef struct
{
    uint8_t          apb_index;                          ///< APB index to which DPPIC belongs.
#if NRFX_API_VER_AT_LEAST(3, 8, 0) || defined(__NRFX_DOXYGEN__)
    nrfx_dppi_t      dppic;                              ///< DPPIC peripheral that belongs to a given domain.
#else
    NRF_DPPIC_Type * dppic;                              ///< DPPIC peripheral that belongs to a given domain.
    nrfx_atomic_t    channels_mask;                      ///< Mask of configurable DPPIC channels.
#endif
    uint8_t          allocate_flag[NRF_DPPI_CH_NUM_MAX]; ///< Virtual channels assigned to each of DPPIC channels.
    uint32_t         apb_size;                           ///< Size of APB.
} nrfx_interconnect_dppic_t;

/** @brief DPPIC to DPPIC connection structure. */
typedef struct
{
    nrfx_interconnect_dppic_t * src_dppic;     ///< Pointer to the source of DPPIC interconnect instance.
    nrfx_interconnect_dppic_t * dst_dppic;     ///< Pointer to the destination of DPPIC interconnect instance.
    nrfx_interconnect_ppib_t *  ppib;          ///< Pointer to the PPIB interconnect instance between @p src_dppic and @p dst_dppic.
    bool                        ppib_inverted; ///< True if PPIB connection goes from second to first PPIB peripherial instance, false otherwise.
} nrfx_interconnect_dppic_to_dppic_path_t;

/**
 * @brief Function for getting DPPIC interconnect object under a specific index from connection map.
 *
 * @param[in] index Index of expected @ref nrfx_interconnect_dppic_t object.
 *
 * @return Pointer to @ref nrfx_interconnect_dppic_t.
 */
nrfx_interconnect_dppic_t * nrfx_interconnect_dppic_at_index_get(uint8_t index);

/**
 * @brief Function for getting DPPIC interconnect object with a specific domain.
 *
 * @param[in] apb_index APB index that belongs to DPPIC interconnect.
 *
 * @return Pointer to @ref nrfx_interconnect_dppic_t.
 */
nrfx_interconnect_dppic_t * nrfx_interconnect_dppic_get(uint8_t apb_index);

/**
 * @brief Function for getting main DPPIC interconnect object.
 *
 * @return Pointer to @ref nrfx_interconnect_dppic_t.
 */
nrfx_interconnect_dppic_t * nrfx_interconnect_dppic_main_get(void);

/**
 * @brief Function for getting PPIB interconnect object at specified index from connection map.
 *
 * @param[in] index Index of expected @ref nrfx_interconnect_ppib_t object.
 *
 * @return Pointer to @ref nrfx_interconnect_ppib_t.
 */
nrfx_interconnect_ppib_t * nrfx_interconnect_ppib_at_index_get(uint8_t index);

/**
 * @brief Function for checking if path from source DPPIC to destination DPPIC exists.
 *
 * @param[in] p_path Pointer to path from source DPPIC to destination DPPIC.
 *                   When path exists, @p p_path is filled with PPIB information.
 *
 * @return True if direct connection exists, false otherwise.
 */
bool nrfx_interconnect_direct_connection_check(nrfx_interconnect_dppic_to_dppic_path_t * p_path);

/**
 * @brief Function for getting @p nrf_apb_index_t from memory address.
 *
 * @param[in] addr Memory address.
 *
 * @return APB index.
 */
nrf_apb_index_t nrfx_interconnect_apb_index_get(uint32_t addr);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_DPPIC_PPIB_H__
