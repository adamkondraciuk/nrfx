/*$$$LICENCE_NORDIC_STANDARD<2018>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_NVMC_ENABLED)

#include <nrfx_nvmc.h>

/**
 * @brief Value representing the number of bytes in a word.
 *
 * It is used in loops iterating over bytes contained in a word
 * or in word-alignment checks.
 */
#define NVMC_BYTES_IN_WORD  4

#if defined(NRF_NVMC_PARTIAL_ERASE_PRESENT)
/**
 * @brief Value representing the page erase time.
 *
 * This value is used to determine whether the partial erase is still in progress.
 */
#define NVMC_PAGE_ERASE_DURATION_MS  85

/** 
 * @brief Value representing the invalid page partial erase address.
 *
 * This value is used for representing a NULL pointer for
 * partial erase, as that address 0 can be a valid
 * memory address in flash.
 */
#define NVMC_PARTIAL_ERASE_INVALID_ADDR  0xFFFFFFFF

/**
 * @brief Internal counter for page partial erase.
 */
static uint32_t m_partial_erase_time_elapsed;

/**
 * @brief Partial erase page address.
 */
static uint32_t m_partial_erase_page_addr = NVMC_PARTIAL_ERASE_INVALID_ADDR;

#endif // defined(NRF_NVMC_PARTIAL_ERASE_PRESENT)

#if defined(NRF_NVMC_ICACHE_PRESENT)
/**
 * @brief Symbol used in checks for determining whether ICache hit or miss counter
 *        has overflowed.
 *
 * Division by 100 is included to avoid integer overflow during multiplication
 * for fractional part preservation.
 */
#define NVMC_ICACHE_HIT_MISS_MAX_COUNT   (INT32_MAX / 100)

/**
 * @brief ICache profiling test status.
 */
static bool m_icache_profiling_started;

#endif // defined(NRF_NVMC_ICACHE_PRESENT)

static void wait_for_flash_ready(void)
{
    while (!nrf_nvmc_ready_check(NRF_NVMC))
    {
        ;
    }
}

static uint32_t page_first_word_addr_get(uint32_t addr)
{
    uint32_t page_size = nrf_ficr_codepagesize_get(NRF_FICR);
    return (addr - (addr % page_size));
}

static uint32_t partial_word_create(uint32_t addr, const uint8_t * bytes, uint32_t bytes_count)
{
    uint32_t value32;
    uint32_t byte_shift;

    byte_shift = addr & 0x03UL;
    
    NRFX_ASSERT(bytes_count <= (NVMC_BYTES_IN_WORD - byte_shift));

    value32 = *(uint32_t*)(addr & ~byte_shift);
    for (uint32_t i = 0; i < bytes_count; i++)
    {
        ((uint8_t*)&value32)[byte_shift] = bytes[i];
        byte_shift++;
    }

    return value32;
}

static bool addr_inrange_check(uint32_t addr)
{
#if defined(NRF51)
    /* On nRF51, the code area can be divided into two regions CR0 and CR1.
     * The length of CR0 is specified in the CLENR0 register of UICR.
     * If CLENR0 contains 0xFFFFFFFF value, it indicates that CR0 is not set.
     * Moreover, the page from CR0 can be written or erased only from the code
     * running in CR0.*/
    uint32_t cr0_len = NRF_UICR->CLENR0 == 0xFFFFFFFF ? 0 : NRF_UICR->CLENR0;
    if (addr < cr0_len)
    {
        return false;
    }
#endif
    uint32_t code_mem_limit = nrf_ficr_codepagesize_get(NRF_FICR) * nrf_ficr_codesize_get(NRF_FICR);
    return addr < code_mem_limit;
}

void nrfx_nvmc_page_erase(uint32_t addr)
{
    NRFX_ASSERT(addr_inrange_check(addr));

    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_ERASE_MODE);
    nrf_nvmc_page_erase_start(NRF_NVMC, page_first_word_addr_get(addr));
    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_READONLY_MODE);
}

void nrfx_nvmc_uicr_erase(void)
{
    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_ERASE_MODE);
    nrf_nvmc_uicr_erase_start(NRF_NVMC);
    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_READONLY_MODE);
}

void nrfx_nvmc_all_erase(void)
{
    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_ERASE_MODE);
    nrf_nvmc_erase_all_start(NRF_NVMC);
    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_READONLY_MODE);
}

#if defined(NRF_NVMC_PARTIAL_ERASE_PRESENT)
void nrfx_nvmc_page_partial_erase_init(uint32_t addr, uint32_t duration_ms)
{
    NRFX_ASSERT(addr_inrange_check(addr));

    m_partial_erase_time_elapsed = 0;
    m_partial_erase_page_addr = page_first_word_addr_get(addr);
    nrf_nvmc_partial_erase_duration_set(NRF_NVMC, duration_ms);
}

bool nrfx_nvmc_page_partial_erase_continue(void)
{
    NRFX_ASSERT(m_partial_erase_page_addr != NVMC_PARTIAL_ERASE_INVALID_ADDR);

    uint32_t duration_ms = nrf_nvmc_partial_erase_duration_get(NRF_NVMC);

    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_ERASE_MODE);
    nrf_nvmc_page_partial_erase_start(NRF_NVMC, m_partial_erase_page_addr);
    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_READONLY_MODE);
    
    m_partial_erase_time_elapsed += duration_ms;
    if (m_partial_erase_time_elapsed < NVMC_PAGE_ERASE_DURATION_MS)
    {
        return false;
    }
    else
    {
        m_partial_erase_page_addr = NVMC_PARTIAL_ERASE_INVALID_ADDR;
        return true;
    }
}
#endif // defined(NRF_NVMC_PARTIAL_ERASE_PRESENT)

bool nrfx_nvmc_byte_writable_check(uint32_t addr, uint8_t val_to_check)
{
    if (!addr_inrange_check(addr))
    {
        return false;
    }

    uint8_t val_on_addr = *(uint8_t*)addr;

    return (val_to_check & val_on_addr) == val_to_check;
}

bool nrfx_nvmc_word_writable_check(uint32_t addr, uint32_t val_to_check)
{
    if ((!addr_inrange_check(addr)) || (!nrfx_is_word_aligned((void*)addr)))
    {
        return false;
    }

    uint32_t val_on_addr = *(uint32_t*)addr;
    return (val_to_check & val_on_addr) == val_to_check;
}

void nrfx_nvmc_byte_write(uint32_t addr, uint8_t value)
{
    NRFX_ASSERT(addr_inrange_check(addr));

    uint32_t aligned_addr = addr & ~(0x03UL);

    nrfx_nvmc_word_write(aligned_addr, partial_word_create(addr, &value, 1));
}

void nrfx_nvmc_word_write(uint32_t addr, uint32_t value)
{
    NRFX_ASSERT(addr_inrange_check(addr));
    NRFX_ASSERT(nrfx_is_word_aligned((void*)addr));

    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_WRITE_MODE);

    *(uint32_t*)addr = value;

    wait_for_flash_ready();
    nrf_nvmc_mode_set(NRF_NVMC, NRF_NVMC_READONLY_MODE);
    
    NRFX_ASSERT(*(uint32_t*)addr == value);
}

void nrfx_nvmc_bytes_write(uint32_t addr, uint8_t const * src, uint32_t num_bytes)
{
    uint32_t leftover = addr % NVMC_BYTES_IN_WORD;
    
    if (leftover != 0)
    {
        nrfx_nvmc_word_write(addr-leftover, partial_word_create(addr, src, NVMC_BYTES_IN_WORD - leftover));
        
        leftover = NVMC_BYTES_IN_WORD - leftover;
        num_bytes -= leftover;
        addr += leftover;
        src += leftover;
    }

    /* Cortex-M0 allows only word-aligned memory access. To achieve this, bytes are combined
       into words explicitly. */
#if defined __CORTEX_M && (__CORTEX_M == 0U)
    for (uint32_t i = 0; i < num_bytes / NVMC_BYTES_IN_WORD; i++)
    {
        leftover = (uint32_t)src[0] | ((uint32_t)src[1])<<8 | ((uint32_t)src[2])<<16 | ((uint32_t)src[3])<<24;
        nrfx_nvmc_word_write(addr, leftover);
        src += NVMC_BYTES_IN_WORD;
        addr += NVMC_BYTES_IN_WORD;
    }
#endif

    leftover = num_bytes % NVMC_BYTES_IN_WORD;

    /* Other Cortex cores allow unaligned access. This is why the source buffer is cast to uint32_t*
     * to implicitly combine bytes into words. */
#if defined __CORTEX_M && (__CORTEX_M != 0U)
    nrfx_nvmc_words_write(addr, (const uint32_t *)(src), num_bytes / NVMC_BYTES_IN_WORD);
    addr += num_bytes - leftover;
    src += num_bytes - leftover;
#endif

    if (leftover != 0)
    {
        nrfx_nvmc_word_write(addr, partial_word_create(addr, src, leftover));
    }
}

void nrfx_nvmc_words_write(uint32_t addr, uint32_t const * src, uint32_t num_words)
{
    for (uint32_t i = 0; i < num_words; i++)
    {
        nrfx_nvmc_word_write(addr + NVMC_BYTES_IN_WORD*i, src[i]);
    }
}

#if defined(NRF_NVMC_ICACHE_PRESENT)
void nrfx_nvmc_icache_enable(void)
{
    nrf_nvmc_icache_config_set(NRF_NVMC, NRF_NVMC_ICACHE_ENABLE_WITH_PROFILING);
    nrf_nvmc_icache_hit_miss_reset(NRF_NVMC);
}

void nrfx_nvmc_icache_disable(void)
{
    nrf_nvmc_icache_config_set(NRF_NVMC, NRF_NVMC_ICACHE_DISABLE);
}

void nrfx_nvmc_icache_performance_test_start(void)
{
    NRFX_ASSERT(nrf_nvmc_icache_profiling_enable_check(NRF_NVMC));

    m_icache_profiling_started = true;
    nrf_nvmc_icache_hit_miss_reset(NRF_NVMC);
}

int32_t nrfx_nvmc_icache_performance_test_stop(void)
{
    NRFX_ASSERT(m_icache_profiling_started);
    m_icache_profiling_started = false;

    uint32_t hits = nrf_nvmc_icache_hit_get(NRF_NVMC);
    uint32_t misses = nrf_nvmc_icache_miss_get(NRF_NVMC);
    int32_t ratio;

    if ((hits > NVMC_ICACHE_HIT_MISS_MAX_COUNT) || (hits == 0)
        || (misses > NVMC_ICACHE_HIT_MISS_MAX_COUNT) || (misses == 0))
    {
        ratio = 0;
    } else if(hits > misses)
    {
        /* Multiplication by 100 is done to preserve fractional part. */
        ratio = (int32_t)((hits * 100) / misses);
    } else
    {
        ratio = (int32_t)((misses * 100) / hits);
        ratio *= (-1);
    }

    return ratio;
}

#endif // defined(NRF_NVMC_ICACHE_PRESENT)

#endif // NRFX_CHECK(NRFX_NVMC_ENABLED)
