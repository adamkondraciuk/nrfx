/*$$$LICENCE_NORDIC_STANDARD<2012>$$$*/

#ifndef NRF_NVMC_H__
#define NRF_NVMC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_nvmc_hal_deprecated NVMC HAL (deprecated)
 * @{
 * @ingroup nrf_nvmc
 * @brief   Hardware access layer (HAL) for managing the Non-Volatile Memory Controller (NVMC) peripheral.
 *
 * This driver allows writing to the non-volatile memory (NVM) regions
 * of the chip. To write to NVM, the controller must be powered
 * on and the relevant page must be erased.
 */

/**
 * @brief Erase a page in flash. This is required before writing to any address in the page.
 *
 * @param address Start address of the page.
 */
void nrf_nvmc_page_erase(uint32_t address);

/**
 * @brief Write a single byte to flash.
 *
 * The function reads the word containing the byte, and then rewrites the entire word.
 *
 * @param address Address to write to.
 * @param value   Value to write.
 */
void nrf_nvmc_write_byte(uint32_t address , uint8_t value);

/**
 * @brief Write a 32-bit word to flash.
 *
 * @param address Address to write to.
 * @param value   Value to write.
 */
void nrf_nvmc_write_word(uint32_t address, uint32_t value);

/**
 * @brief Write consecutive bytes to flash.
 *
 * @param address   Address to write to.
 * @param src       Pointer to data to copy from.
 * @param num_bytes Number of bytes in src to write.
 */
void nrf_nvmc_write_bytes(uint32_t  address, const uint8_t * src, uint32_t num_bytes);

/**
 * @brief Write consecutive words to flash.
 *
 * @param address   Address to write to.
 * @param src       Pointer to data to copy from.
 * @param num_words Number of words in src to write.
 */
void nrf_nvmc_write_words(uint32_t address, const uint32_t * src, uint32_t num_words);

/** @} */

/**
 * @defgroup nrf_nvmc_hal NVMC HAL
 * @{
 * @ingroup nrf_nvmc
 * @brief   Hardware access layer (HAL) for managing the Non-Volatile Memory Controller (NVMC) peripheral.
 */

/**
 * @brief Symbol indicating whether Instruction Cache (ICache) is present.
 */
#if defined(NVMC_ICACHECNF_CACHEEN_Msk)
#define NRF_NVMC_ICACHE_PRESENT
#endif

/**
 * @brief Symbol indicating whether the option of page partial erase is present.
 */
#if defined(NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Msk)
#define NRF_NVMC_PARTIAL_ERASE_PRESENT
#endif

/**
 * @brief NVMC modes.
 */
typedef enum
{
    NRF_NVMC_READONLY_MODE = NVMC_CONFIG_WEN_Ren, ///< NVMC in read-only mode.
    NRF_NVMC_WRITE_MODE    = NVMC_CONFIG_WEN_Wen, ///< NVMC in read and write mode.
    NRF_NVMC_ERASE_MODE    = NVMC_CONFIG_WEN_Een  ///< NVMC in read and erase mode.
} nrf_nvmc_mode_t;

#if defined(NRF_NVMC_ICACHE_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief NVMC ICache configurations
 */
typedef enum
{
    NRF_NVMC_ICACHE_DISABLE               = NVMC_ICACHECNF_CACHEEN_Disabled, ///< Instruction cache disabled.
    NRF_NVMC_ICACHE_ENABLE                = NVMC_ICACHECNF_CACHEEN_Enabled,  ///< Instruction cache enabled.
    NRF_NVMC_ICACHE_ENABLE_WITH_PROFILING = NVMC_ICACHECNF_CACHEEN_Enabled | ///< Instruction cache with cache profiling enabled.
                                            NVMC_ICACHECNF_CACHEPROFEN_Msk
} nrf_nvmc_icache_config_t;
#endif // defined(NRF_NVMC_ICACHE_PRESENT) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for checking if NVMC is ready to perform write or erase operation.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 *
 * @retval true   If NVMC can perform write or erase.
 * @retval false  If NVMC is busy and cannot perform next operation yet.
 */
__STATIC_INLINE bool nrf_nvmc_ready_check(NRF_NVMC_Type const * p_reg);

/**
 * @brief Function for setting NVMC mode.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 * @param[in] mode   Desired operating mode for NVMC.
 */
__STATIC_INLINE void nrf_nvmc_mode_set(NRF_NVMC_Type * p_reg,
                                       nrf_nvmc_mode_t mode);

/**
 * @brief Function for starting a single page erase of non-volatile memory (NVM).
 *
 * @param[in] p_reg      Pointer to the peripheral register structure.
 * @param[in] page_addr  Address of the first word of the page to erase.
 */
__STATIC_INLINE void nrf_nvmc_page_erase_start(NRF_NVMC_Type * p_reg,
                                               uint32_t        page_addr);

/**
 * @brief Function for starting the user information configuration registers (UICR) erase.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 */
__STATIC_INLINE void nrf_nvmc_uicr_erase_start(NRF_NVMC_Type * p_reg);

/**
 * @brief Function for starting the erase of the whole NVM, including UICR.
 *
 * Keep in mind that this function purges all user code.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 */
__STATIC_INLINE void nrf_nvmc_erase_all_start(NRF_NVMC_Type * p_reg);

#if defined(NRF_NVMC_PARTIAL_ERASE_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for configuring the page partial erase duration in milliseconds.
 *
 * @param[in] p_reg        Pointer to the peripheral register structure.
 * @param[in] duration_ms  Page partial erase duration in milliseconds.
 */
__STATIC_INLINE void nrf_nvmc_partial_erase_duration_set(NRF_NVMC_Type * p_reg,
                                                         uint32_t        duration_ms);

/**
 * @brief Function for getting the current setting for the page partial erase duration.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 *
 * @retval Interval duration setting in milliseconds.
 */
__STATIC_INLINE uint32_t nrf_nvmc_partial_erase_duration_get(NRF_NVMC_Type const * p_reg);

/**
 * @brief Function for starting a partial erase operation.
 *
 * It must be called successively until the page erase time is reached.
 *
 * @param[in] p_reg      Pointer to the peripheral register structure.
 * @param[in] page_addr  Address of the first word of the page to erase.
 */
__STATIC_INLINE void nrf_nvmc_page_partial_erase_start(NRF_NVMC_Type * p_reg,
                                                       uint32_t        page_addr);
#endif // defined(NRF_NVMC_PARTIAL_ERASE_PRESENT) || defined(__NRFX_DOXYGEN__)

#if defined(NRF_NVMC_ICACHE_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for applying instruction cache (ICache) configuration.
 *
 * Enabling the cache can increase CPU performance and reduce power
 * consumption by reducing the number of wait cycles and the number
 * of flash accesses.
 *
 * @param[in] p_reg   Pointer to the peripheral register structure.
 * @param[in] config  ICache configuration.
 */
__STATIC_INLINE void nrf_nvmc_icache_config_set(NRF_NVMC_Type *          p_reg,
                                                nrf_nvmc_icache_config_t config);

/**
 * @brief Function for checking if ICache is enabled.
 *
 * @param[in] p_reg   Pointer to the peripheral register structure.
 *
 * @retval true   ICache enabled.
 * @retval false  ICache disabled.
 */
__STATIC_INLINE bool nrf_nvmc_icache_enable_check(NRF_NVMC_Type const * p_reg);

/**
 * @brief Function for checking if ICache profiling option is enabled.
 *
 * @param[in] p_reg   Pointer to the peripheral register structure.
 *
 * @retval true   ICache profiling enabled.
 * @retval false  ICache profiling disabled.
 */
__STATIC_INLINE bool nrf_nvmc_icache_profiling_enable_check(NRF_NVMC_Type const * p_reg);

/**
 * @brief Function for getting ICache hits.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 *
 * @retval Number of successful instruction cache fetches.
 */
__STATIC_INLINE uint32_t nrf_nvmc_icache_hit_get(NRF_NVMC_Type const * p_reg);

/**
 * @brief Function for getting ICache misses.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 *
 * @retval Number of failed cache instruction fetches.
 */
__STATIC_INLINE uint32_t nrf_nvmc_icache_miss_get(NRF_NVMC_Type const * p_reg);

/**
 * @brief Function for resetting instruction cache fetch hit and miss counters.
 *
 * @param[in] p_reg  Pointer to the peripheral register structure.
 */
 __STATIC_INLINE void nrf_nvmc_icache_hit_miss_reset(NRF_NVMC_Type * p_reg);
#endif // defined(NRF_NVMC_ICACHE_PRESENT) || defined(__NRFX_DOXYGEN__)

#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE bool nrf_nvmc_ready_check(NRF_NVMC_Type const * p_reg)
{
    return (bool)(p_reg->READY & NVMC_READY_READY_Msk);
}

__STATIC_INLINE void nrf_nvmc_mode_set(NRF_NVMC_Type * p_reg,
                                       nrf_nvmc_mode_t mode)
{
    p_reg->CONFIG = (p_reg->CONFIG & ~NVMC_CONFIG_WEN_Msk) | (uint32_t)mode;
}

__STATIC_INLINE void nrf_nvmc_page_erase_start(NRF_NVMC_Type * p_reg,
                                               uint32_t        page_addr)
{
#if defined(NRF51)
    /* On nRF51, the code area can be divided into two regions CR0 and CR1.
     * The length of CR0 is specified in the CLENR0 register of UICR.
     * If CLENR0 contains 0xFFFFFFFF value, it means that CR0 is not set.
     * Moreover, the page from CR0 can be written or erased only from code
     * running in CR0.*/
    uint32_t cr0_len = NRF_UICR->CLENR0 == 0xFFFFFFFF ? 0 : NRF_UICR->CLENR0;
    if (page_addr > cr0_len)
    {
        p_reg->ERASEPCR1 = page_addr;
    } else
    {
        p_reg->ERASEPCR0 = page_addr;
    }
#else
    p_reg->ERASEPAGE = page_addr;
#endif
}

__STATIC_INLINE void nrf_nvmc_uicr_erase_start(NRF_NVMC_Type * p_reg)
{
    p_reg->ERASEUICR = 1;
}

__STATIC_INLINE void nrf_nvmc_erase_all_start(NRF_NVMC_Type * p_reg)
{
    p_reg->ERASEALL = 1;
}

#if defined(NRF_NVMC_PARTIAL_ERASE_PRESENT)
__STATIC_INLINE void nrf_nvmc_partial_erase_duration_set(NRF_NVMC_Type * p_reg,
                                                         uint32_t        duration_ms)
{
    p_reg->ERASEPAGEPARTIALCFG = duration_ms;
}

__STATIC_INLINE uint32_t nrf_nvmc_partial_erase_duration_get(NRF_NVMC_Type const * p_reg)
{
    return (p_reg->ERASEPAGEPARTIALCFG);
}

__STATIC_INLINE void nrf_nvmc_page_partial_erase_start(NRF_NVMC_Type * p_reg,
                                                       uint32_t        page_addr)
{
    p_reg->ERASEPAGEPARTIAL = page_addr;
}
#endif // defined(NRF_NVMC_PARTIAL_ERASE_PRESENT)

#if defined(NRF_NVMC_ICACHE_PRESENT)
__STATIC_INLINE void nrf_nvmc_icache_config_set(NRF_NVMC_Type *          p_reg,
                                                nrf_nvmc_icache_config_t config)
{
    p_reg->ICACHECNF = (uint32_t)config;
}

__STATIC_INLINE bool nrf_nvmc_icache_enable_check(NRF_NVMC_Type const * p_reg)
{
    return (bool)(p_reg->ICACHECNF & NVMC_ICACHECNF_CACHEEN_Msk);
}

__STATIC_INLINE bool nrf_nvmc_icache_profiling_enable_check(NRF_NVMC_Type const * p_reg)
{
    return (bool)(p_reg->ICACHECNF & NVMC_ICACHECNF_CACHEPROFEN_Msk);
}

__STATIC_INLINE uint32_t nrf_nvmc_icache_hit_get(NRF_NVMC_Type const * p_reg)
{
    return p_reg->IHIT;
}

__STATIC_INLINE uint32_t nrf_nvmc_icache_miss_get(NRF_NVMC_Type const * p_reg)
{
    return p_reg->IMISS;
}

__STATIC_INLINE void nrf_nvmc_icache_hit_miss_reset(NRF_NVMC_Type * p_reg)
{
    p_reg->IHIT = 0;
    p_reg->IMISS = 0;
}
#endif // defined(NRF_NVMC_ICACHE_PRESENT)

#endif // SUPPRESS_INLINE_IMPLEMENTATION

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_NVMC_H__
