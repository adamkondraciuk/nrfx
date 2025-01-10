/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_RAM_CTRL_H
#define NRFX_RAM_CTRL_H

#include <nrfx.h>

#if defined(MEMCONF_PRESENT)
#include <hal/nrf_memconf.h>
#elif defined(NRF_VMC)
#include <hal/nrf_vmc.h>
#elif defined(POWER_PRESENT)
#include <hal/nrf_power.h>
#else
#error "Unsupported."
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_ram_ctrl Generic RAM Control layer
 * @{
 * @ingroup nrfx
 *
 * @brief Helper layer that provides a uniform way of controlling the RAM power and retention settings.
 */

/**
 * @brief Function for setting if the RAM sections containing specified object
 *        are to be powered on or off.
 *
 * @param[in] p_object Pointer to the object.
 * @param[in] length   Object size in bytes.
 * @param[in] enable   True if RAM sections are to be powered on, false otherwise.
 */
void nrfx_ram_ctrl_power_enable_set(void const * p_object, size_t length, bool enable);

/**
 * @brief Function for setting if the RAM sections containing specified object
 *        are to be retained or not.
 *
 * @param[in] p_object Pointer to the object.
 * @param[in] length   Object size in bytes.
 * @param[in] enable   True if RAM sections are to be retained, false otherwise.
 */
void nrfx_ram_ctrl_retention_enable_set(void const * p_object, size_t length, bool enable);

/**
 * @brief Function for setting if the specified mask of RAM sections contained within given RAM block
 *        is to be powered on or off.
 *
 * @param[in] block_idx    RAM block index.
 * @param[in] section_mask Mask of RAM sections.
 * @param[in] enable       True if RAM sections are to be powered on, false otherwise.
 */
__STATIC_INLINE void nrfx_ram_ctrl_section_power_mask_enable_set(uint8_t  block_idx,
                                                                 uint32_t section_mask,
                                                                 bool     enable)
{
#if defined(MEMCONF_PRESENT)
    nrf_memconf_ramblock_control_mask_enable_set(NRF_MEMCONF, block_idx, section_mask, enable);

#elif defined(NRF_VMC)
    if (enable)
    {
        nrf_vmc_ram_block_power_set(NRF_VMC, block_idx, (nrf_vmc_power_t)section_mask);
    }
    else
    {
        nrf_vmc_ram_block_power_clear(NRF_VMC, block_idx, (nrf_vmc_power_t)section_mask);
    }

#elif defined(POWER_PRESENT)
    section_mask <<= POWER_RAM_POWER_S0POWER_Pos;
    if (enable)
    {
        nrf_power_rampower_mask_on(NRF_POWER, block_idx, section_mask);
    }
    else
    {
        nrf_power_rampower_mask_off(NRF_POWER, block_idx, section_mask);
    }

#endif
}

/**
 * @brief Function for setting if the specified mask of RAM sections contained within given RAM block
 *        is to be retained or not.
 *
 * @param[in] block_idx    RAM block index.
 * @param[in] section_mask Mask of RAM sections.
 * @param[in] enable       True if RAM sections are to be retained, false otherwise.
 */
__STATIC_INLINE void nrfx_ram_ctrl_section_retention_mask_enable_set(uint8_t  block_idx,
                                                                     uint32_t section_mask,
                                                                     bool     enable)
{
#if defined(MEMCONF_PRESENT)
    NRFX_ASSERT(block_idx < NRF_MEMCONF_POWERBLOCK_COUNT);
    nrf_memconf_ramblock_ret_mask_enable_set(NRF_MEMCONF, block_idx, section_mask, enable);
#if NRF_MEMCONF_HAS_RET2
    nrf_memconf_ramblock_ret2_mask_enable_set(NRF_MEMCONF, block_idx, section_mask, enable);
#endif

#elif defined(NRF_VMC)
    section_mask <<= VMC_RAM_POWER_S0RETENTION_Pos;
    if (enable)
    {
        nrf_vmc_ram_block_retention_set(NRF_VMC, block_idx, (nrf_vmc_retention_t)section_mask);
    }
    else
    {
        nrf_vmc_ram_block_retention_clear(NRF_VMC, block_idx, (nrf_vmc_retention_t)section_mask);
    }

#elif defined(POWER_PRESENT)
    section_mask <<= POWER_RAM_POWER_S0RETENTION_Pos;
    if (enable)
    {
        nrf_power_rampower_mask_on(NRF_POWER, block_idx, section_mask);
    }
    else
    {
        nrf_power_rampower_mask_off(NRF_POWER, block_idx, section_mask);
    }

#endif
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_RAM_CTRL_H
