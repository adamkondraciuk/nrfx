/*$$$LICENCE_NORDIC_STANDARD<2018>$$$*/

#ifndef NRF_FICR_H__
#define NRF_FICR_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_ficr_hal FICR HAL
 * @{
 * @ingroup nrf_ficr
 * @brief   Hardware access layer for getting data from the Factory Information Configuration Registers (FICR).
 */

/**
 * @brief Function for getting code memory page size.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 */
__STATIC_INLINE uint32_t nrf_ficr_codepagesize_get(NRF_FICR_Type * p_reg);

/**
 * @brief Function for getting code memory size in number of pages.
 *
 * @param[in] p_reg Pointer to the peripheral register structure.
 */
__STATIC_INLINE uint32_t nrf_ficr_codesize_get(NRF_FICR_Type * p_reg);

/**
 * @brief Function for getting unique device identifier number.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 * @param[in] reg_id Register index.
 */
__STATIC_INLINE uint32_t nrf_ficr_deviceid_get(NRF_FICR_Type * p_reg, uint32_t reg_id);

#if defined(FICR_NFC_TAGHEADER0_MFGID_Msk) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting default header values for the NFC tag.
 *
 * @param[in] p_reg        Pointer to the peripheral register structure.
 * @param[in] tagheader_id Tag header index.
 */
__STATIC_INLINE uint32_t nrf_ficr_nfc_tagheader_get(NRF_FICR_Type * p_reg, uint32_t tagheader_id);
#endif // defined(FICR_NFC_TAGHEADER0_MFGID_Msk) || defined(__NRFX_DOXYGEN__)

#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE uint32_t nrf_ficr_codepagesize_get(NRF_FICR_Type * p_reg)
{
    return p_reg->CODEPAGESIZE;
}

__STATIC_INLINE uint32_t nrf_ficr_codesize_get(NRF_FICR_Type * p_reg)
{
    return p_reg->CODESIZE;
}

__STATIC_INLINE uint32_t nrf_ficr_deviceid_get(NRF_FICR_Type * p_reg, uint32_t reg_id)
{
    return p_reg->DEVICEID[reg_id];
}

#if defined(FICR_NFC_TAGHEADER0_MFGID_Msk)
__STATIC_INLINE uint32_t nrf_ficr_nfc_tagheader_get(NRF_FICR_Type * p_reg, uint32_t tagheader_id)
{
    switch(tagheader_id) {
        case 0:
            return p_reg->NFC.TAGHEADER0;
            break;
        case 1:
            return p_reg->NFC.TAGHEADER1;
            break;
        case 2:
            return p_reg->NFC.TAGHEADER2;
            break;
        case 3:
            return p_reg->NFC.TAGHEADER3;
            break;
        default:
            return 0;
    }
}
#endif // defined(FICR_NFC_TAGHEADER0_MFGID_Msk)

#endif // SUPPRESS_INLINE_IMPLEMENTATION

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_FICR_H__
