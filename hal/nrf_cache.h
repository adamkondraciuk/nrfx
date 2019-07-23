/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRF_CACHE_H__
#define NRF_CACHE_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_cache_hal CACHE HAL
 * @{
 * @ingroup nrf_cache
 * @brief   Hardware access layer for managing the CACHE peripheral.
 */

/** @brief Cache regions. */
typedef enum
{
    NRF_CACHE_REGION_FLASH = 0, ///< Cache region related to Flash access.
    NRF_CACHE_REGION_XIP   = 1, ///< Cache region related to XIP access.
} nrf_cache_region_t;

/**
 * @brief Function for enabling CACHE.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_cache_enable(NRF_CACHE_Type * p_reg);

/**
 * @brief Function for disabling CACHE.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_cache_disable(NRF_CACHE_Type * p_reg);

/**
 * @brief Function for invalidating cache content.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_cache_invalidate(NRF_CACHE_Type * p_reg);

/**
 * @brief Function for erasing cache content.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_cache_erase(NRF_CACHE_Type * p_reg);

/**
 * @brief Function for checking the status of the cache erase.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Erase is finished.
 * @retval false Erase is not complete or has not started.
 */
__STATIC_INLINE bool nrf_cache_erase_status_check(NRF_CACHE_Type const * p_reg);

/**
 * @brief Function for clearing the status of the cache erase.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_cache_erase_status_clear(NRF_CACHE_Type * p_reg);

/**
 * @brief Function for setting the cache profiling.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if cache profiling is to be enabled.
 *                   False if otherwise.
 */
__STATIC_INLINE void nrf_cache_profiling_set(NRF_CACHE_Type * p_reg, bool enable);

/**
 * @brief Function for clearing the cache profiling counters.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_cache_profiling_counters_clear(NRF_CACHE_Type * p_reg);

/**
 * @brief Function for getting the number of instruction fetch cache hits.
 *
 * @note Cache profiling must be enabled first. See @ref nrf_cache_profiling_set.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Cache region.
 *
 * @return Number of instruction fetch cache hits.
 */
__STATIC_INLINE uint32_t nrf_cache_instruction_hit_counter_get(NRF_CACHE_Type const * p_reg,
                                                               nrf_cache_region_t     region);

/**
 * @brief Function for getting the number of instruction fetch cache misses.
 *
 * @note Cache profiling must be enabled first. See @ref nrf_cache_profiling_set.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Cache region.
 *
 * @return Number of instruction fetch cache misses.
 */
__STATIC_INLINE uint32_t nrf_cache_instruction_miss_counter_get(NRF_CACHE_Type const * p_reg,
                                                                nrf_cache_region_t     region);

/**
 * @brief Function for getting the number of data fetch cache hits.
 *
 * @note Cache profiling must be enabled first. See @ref nrf_cache_profiling_set.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Cache region.
 *
 * @return Number of data fetch cache hits.
 */
__STATIC_INLINE uint32_t nrf_cache_data_hit_counter_get(NRF_CACHE_Type const * p_reg,
                                                        nrf_cache_region_t     region);

/**
 * @brief Function for getting the number of data fetch cache misses.
 *
 * @note Cache profiling must be enabled first. See @ref nrf_cache_profiling_set.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] region Cache region.
 *
 * @return Number of data fetch cache misses.
 */
__STATIC_INLINE uint32_t nrf_cache_data_miss_counter_get(NRF_CACHE_Type const * p_reg,
                                                         nrf_cache_region_t     region);

/**
 * @brief Function for setting the cache RAM mode.
 *
 * When configured in RAM mode, the accesses to internal or external flash will not be cached.
 * In this mode, the cache data contents can be used as read/write RAM.
 * Only the data content of the cache is available as RAM.
 *
 * @note Enabling the RAM mode causes the RAM to be cleared.
 *       Disabling the RAM to Cache mode causes the cache to be invalidated.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if cache RAM mode is to be enabled.
 *                   False if otherwise.
 */
__STATIC_INLINE void nrf_cache_ram_mode_set(NRF_CACHE_Type * p_reg, bool enable);

/**
 * @brief Function for blocking the cache content access.
 *
 * Cache content access can only be unlocked by a reset.
 *
 * @note Blockade is ignored in RAM mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_cache_read_lock_enable(NRF_CACHE_Type * p_reg);

/**
 * @brief Function for blocking the cache content updates.
 *
 * Update lock prevents updating of cache content on cache misses,
 * but will continue to lookup instruction/data fetches in content already present in the cache.
 *
 * @note Blockade is ignored in RAM mode.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if cache content update lock is to be enabled.
 *                   False if otherwise.
 */
__STATIC_INLINE void nrf_cache_update_lock_set(NRF_CACHE_Type * p_reg, bool enable);

/**
 * @brief Function for getting the cache data content.
 *
 * Cache data is organized into evenly-sized chunks called sets.
 * Each set consists of two ways and a way contains 128-bit data.
 * The 128-bit data is available as 4x32-bit words in sequential order.
 *
 * @note When operating in RAM mode, the cache data is accessible as general purpose RAM.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] set   Set containing the data to get.
 * @param[in] way   Way containing the data to get.
 * @param[in] word  Data word to get.
 *
 * @return Data word.
 */
__STATIC_INLINE uint32_t nrf_cache_data_get(NRF_CACHEDATA_Type const * p_reg,
                                            uint32_t                   set,
                                            uint8_t                    way,
                                            uint8_t                    word);

/**
 * @brief Function for getting the tag associated with the specified set and way.
 *
 * The tag is used to check if an entry in the cache matches the address being fetched.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] set   Set containing the tag to get.
 * @param[in] way   Way containing the tag to get.
 *
 * @return Tag value.
 */
__STATIC_INLINE uint32_t nrf_cache_tag_get(NRF_CACHEINFO_Type const * p_reg,
                                           uint32_t                   set,
                                           uint8_t                    way);

/**
 * @brief Function for checking the validity of a cache line associated with the specified set and way.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] set   Set containing the cache line to check.
 * @param[in] way   Way containing the cache line to check.
 *
 * @retval true  Cache line is valid.
 * @retval false Cache line is invalid.
 */
__STATIC_INLINE bool nrf_cache_line_validity_check(NRF_CACHEINFO_Type const * p_reg,
                                                   uint32_t                   set,
                                                   uint8_t                    way);

/**
 * @brief Function for getting the most recently used way in the specified set.
 *
 * The most recently used way is updated on each fetch from the cache and is used for the cache replacement policy.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] set   Specified set.
 *
 * @return The most recently used way in the specified set.
 */
__STATIC_INLINE uint8_t nrf_cache_mru_get(NRF_CACHEINFO_Type const * p_reg, uint32_t set);

#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE void nrf_cache_enable(NRF_CACHE_Type * p_reg)
{
    p_reg->ENABLE = CACHE_ENABLE_ENABLE_Enabled;
}

__STATIC_INLINE void nrf_cache_disable(NRF_CACHE_Type * p_reg)
{
    p_reg->ENABLE = CACHE_ENABLE_ENABLE_Disabled;
}

__STATIC_INLINE void nrf_cache_invalidate(NRF_CACHE_Type * p_reg)
{
    p_reg->INVALIDATE = CACHE_INVALIDATE_INVALIDATE_Invalidate;
}

__STATIC_INLINE void nrf_cache_erase(NRF_CACHE_Type * p_reg)
{
    p_reg->ERASE = CACHE_ERASE_ERASE_Erase;
}

__STATIC_INLINE bool nrf_cache_erase_status_check(NRF_CACHE_Type const * p_reg)
{
    return (bool)(p_reg->ERASESTATUS & CACHE_ERASESTATUS_ERASESTATUS_Msk);
}

__STATIC_INLINE void nrf_cache_erase_status_clear(NRF_CACHE_Type * p_reg)
{
    p_reg->ERASESTATUS = 0;
}

__STATIC_INLINE void nrf_cache_profiling_set(NRF_CACHE_Type * p_reg, bool enable)
{
    p_reg->PROFILINGENABLE =
        (enable ? CACHE_PROFILINGENABLE_ENABLE_Enable : CACHE_PROFILINGENABLE_ENABLE_Disable);
}

__STATIC_INLINE void nrf_cache_profiling_counters_clear(NRF_CACHE_Type * p_reg)
{
    p_reg->PROFILINGCLEAR = CACHE_PROFILINGCLEAR_ENABLE_Clear;
}

__STATIC_INLINE uint32_t nrf_cache_instruction_hit_counter_get(NRF_CACHE_Type const * p_reg,
                                                               nrf_cache_region_t     region)
{
    return p_reg->PROFILING[region].IHIT;
}

__STATIC_INLINE uint32_t nrf_cache_instruction_miss_counter_get(NRF_CACHE_Type const * p_reg,
                                                                nrf_cache_region_t     region)
{
    return p_reg->PROFILING[region].IMISS;
}

__STATIC_INLINE uint32_t nrf_cache_data_hit_counter_get(NRF_CACHE_Type const * p_reg,
                                                        nrf_cache_region_t     region)
{
    return p_reg->PROFILING[region].DHIT;
}

__STATIC_INLINE uint32_t nrf_cache_data_miss_counter_get(NRF_CACHE_Type const * p_reg,
                                                         nrf_cache_region_t     region)
{
    return p_reg->PROFILING[region].DMISS;
}

__STATIC_INLINE void nrf_cache_ram_mode_set(NRF_CACHE_Type * p_reg, bool enable)
{
    p_reg->MODE = (enable ? CACHE_MODE_MODE_Ram : CACHE_MODE_MODE_Cache);
}

__STATIC_INLINE void nrf_cache_read_lock_enable(NRF_CACHE_Type * p_reg)
{
    p_reg->DEBUGLOCK = CACHE_DEBUGLOCK_DEBUGLOCK_Locked;
}

__STATIC_INLINE void nrf_cache_update_lock_set(NRF_CACHE_Type * p_reg, bool enable)
{
    p_reg->WRITELOCK =
        (enable ? CACHE_WRITELOCK_WRITELOCK_Locked : CACHE_WRITELOCK_WRITELOCK_Unlocked);
}

__STATIC_INLINE uint32_t nrf_cache_data_get(NRF_CACHEDATA_Type const * p_reg,
                                            uint32_t                   set,
                                            uint8_t                    way,
                                            uint8_t                    word)
{
    NRFX_ASSERT(set < NRFX_ARRAY_SIZE(NRF_CACHEDATA->SET));
    NRFX_ASSERT(way < NRFX_ARRAY_SIZE(NRF_CACHEDATA->SET[0].WAY));

    volatile CACHEDATA_SET_WAY_Type * reg = &p_reg->SET[set].WAY[way];
    switch (word)
    {
        case 0: return reg->DATA0;
        case 1: return reg->DATA1;
        case 2: return reg->DATA2;
        case 3: return reg->DATA3;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

__STATIC_INLINE uint32_t nrf_cache_tag_get(NRF_CACHEINFO_Type const * p_reg,
                                                uint32_t              set,
                                                uint8_t               way)
{
    NRFX_ASSERT(set < NRFX_ARRAY_SIZE(NRF_CACHEINFO->SET));
    NRFX_ASSERT(way < NRFX_ARRAY_SIZE(NRF_CACHEINFO->SET[0].WAY));
    return (p_reg->SET[set].WAY[way] & CACHEINFO_SET_WAY_TAG_Msk);
}

__STATIC_INLINE bool nrf_cache_line_validity_check(NRF_CACHEINFO_Type const * p_reg,
                                                   uint32_t                   set,
                                                   uint8_t                    way)
{
    NRFX_ASSERT(set < NRFX_ARRAY_SIZE(NRF_CACHEINFO->SET));
    NRFX_ASSERT(way < NRFX_ARRAY_SIZE(NRF_CACHEINFO->SET[0].WAY));
    return (bool)(p_reg->SET[set].WAY[way] & CACHEINFO_SET_WAY_V_Msk);
}

__STATIC_INLINE uint8_t nrf_cache_mru_get(NRF_CACHEINFO_Type const * p_reg, uint32_t set)
{
    NRFX_ASSERT(set < NRFX_ARRAY_SIZE(NRF_CACHEINFO->SET));
    return ((p_reg->SET[set].WAY[0] & CACHEINFO_SET_WAY_MRU_Msk) >> CACHEINFO_SET_WAY_MRU_Pos);
}

#endif // SUPPRESS_INLINE_IMPLEMENTATION

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_CACHE_H__
