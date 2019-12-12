/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRF_BPROT_H__
#define NRF_BPROT_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_bprot_hal BPROT HAL
 * @{
 * @ingroup nrf_bprot
 * @brief   Hardware access layer for managing the Block Protection (BPROT) mechanism.
 */

/**
 * @brief Function for enabling protection for specified non-volatile memory blocks.
 *
 * Blocks are arranged into groups of 32 blocks each. Each block size is 4 kB.
 * Any attempt to write or erase a protected block will result in hard fault.
 * The memory block protection can be disabled only by resetting the device.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx  Non-volatile memory group containing memory blocks to protect.
 * @param[in] block_mask Non-volatile memory blocks to protect. Each bit in bitmask represents
 *                       one memory block in the specified group.
 */
NRF_STATIC_INLINE void nrf_bprot_nvm_blocks_protection_enable(NRF_BPROT_Type * p_reg,
                                                              uint8_t          group_idx,
                                                              uint32_t         block_mask);

/**
 * @brief Function for setting the non-volatile memory (NVM) protection during debug.
 *
 * NVM protection is disabled by default while debugging.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if NVM protection during debug is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_bprot_nvm_protection_in_debug_set(NRF_BPROT_Type * p_reg,
                                                             bool             enable);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_bprot_nvm_blocks_protection_enable(NRF_BPROT_Type * p_reg,
                                                              uint8_t          group_idx,
                                                              uint32_t         block_mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->CONFIG0 = block_mask;
            break;

        case 1:
            p_reg->CONFIG1 = block_mask;
            break;

#if defined(BPROT_CONFIG2_REGION64_Pos)
        case 2:
            p_reg->CONFIG2 = block_mask;
            break;
#endif

#if defined(BPROT_CONFIG3_REGION96_Pos)
        case 3:
            p_reg->CONFIG3 = block_mask;
            break;
#endif

        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_bprot_nvm_protection_in_debug_set(NRF_BPROT_Type * p_reg,
                                                             bool             enable)
{
    p_reg->DISABLEINDEBUG =
        (enable ? 0 : BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Msk);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_BPROT_H__
