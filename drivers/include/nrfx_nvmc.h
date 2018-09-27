/*$$$LICENCE_NORDIC_STANDARD<2018>$$$*/

#ifndef NRFX_NVMC_H__
#define NRFX_NVMC_H__

#include <nrfx.h>
#include <hal/nrf_nvmc.h>
#include <hal/nrf_ficr.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_nvmc NVMC driver
 * @{
 * @ingroup nrf_nvmc
 * @brief   Non-Volatile Memory Controller (NVMC) peripheral driver.
 */

/**
 * @brief Function for erasing a page in flash.
 *
 * This function blocks until the erase operation finishes. The CPU is halted during
 * the erase operation.
 * 
 * @param address  Address pointing to the memory location contained in 
 *                 the page to be erased.
 */
void nrfx_nvmc_page_erase(uint32_t address);

/**
 * @brief Function for erasing the user information configuration register (UICR).
 *
 * The CPU is halted during the erase operation.
 */
void nrfx_nvmc_uicr_erase(void);

/**
 * @brief Function for erasing the whole flash memory.
 *
 * Keep in mind that this function purges all user code.
 */
void nrfx_nvmc_all_erase(void);

#if defined(NRF_NVMC_PARTIAL_ERASE_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for initiating a split erase of a page in flash.
 *
 * This function initiates a partial erase with specified duration. Using
 * a page that was not completely erased leads to undefined behavior.
 * The CPU is halted during the erase operation. 
 *
 * @param address      Address pointing to the memory location contained in 
 *                     the page to be erased.
 * @param duration_ms  Time in milliseconds that each partial erase will take.
 */
void nrfx_nvmc_page_partial_erase_init(uint32_t address, uint32_t duration_ms);

/**
 * @brief Function for performing a partial erase.
 *
 * This function performs erase operation split into parts. Each part 
 * takes time specified during initialization. It must be called several times
 * to erase the whole page. Using a page that was not completely erased
 * leads to undefined behavior. The CPU is halted during the erase operation.
 *
 * @retval true   Partial erase finished.
 * @retval false  Partial erase in progress. Call the function again.
 */
bool nrfx_nvmc_page_partial_erase_continue(void);

#endif // defined(NRF_NVMC_PARTIAL_ERASE_PRESENT) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for checking whether a byte is writable at the specified address.
 *
 * It is impossible to set bit '0' to '1' in a flash region without a page
 * erase. This function checks if the value currently residing
 * at the specified address can be transformed to the desired value
 * without any '0' to '1' transitions.
 *
 * @param address  Address to be checked.
 * @param value    Value to be checked.
 *
 * @retval true   Byte can be written at the specified address.
 * @retval false  Byte cannot be written at the specified address.
 *                Erase the page or change the address.
 */
bool nrfx_nvmc_byte_writable_check(uint32_t address, uint8_t value);

/**
 * @brief Function for writing a single byte to flash.
 *
 * This function reads the word containing the byte, and then
 * rewrites the entire word.
 *
 * @param address  Address to write to.
 * @param value    Value to write.
 */
void nrfx_nvmc_byte_write(uint32_t address, uint8_t value);

/**
 * @brief Function for checking whether a word is writable at the specified address.
 *
 * Address must be word-aligned. It is impossible to set bit '0' to '1'
 * in a flash region without a page erase. This function checks if the value 
 * currently residing at the specified address can be transformed to the desired value
 * without any '0' to '1' transitions.
 *
 * @param address  Address to be checked.
 * @param value    Value to be checked.
 *
 * @retval true   Word can be written at the specified address.
 * @retval false  Word cannot be written at the specified address.
 *                Erase page or change address.
 */
bool nrfx_nvmc_word_writable_check(uint32_t address, uint32_t value);

/**
 * @brief Function for writing a 32-bit word to flash.
 *
 * Address must be word-aligned.
 *
 * @param address  Address to write to.
 * @param value    Value to write.
 */
void nrfx_nvmc_word_write(uint32_t address, uint32_t value);

/**
 * @brief Function for writing consecutive bytes to flash.
 *
 * @param address    Address to write to.
 * @param src        Pointer to the data to copy from.
 * @param num_bytes  Number of bytes in src to write.
 */
void nrfx_nvmc_bytes_write(uint32_t address, uint8_t const * src, uint32_t num_bytes);

/**
 * @brief Function for writing consecutive words to flash.
 *
 * Address must be word-aligned.
 *
 * @param address    Address to write to.
 * @param src        Pointer to data to copy from.
 * @param num_words  Number of words in src to write.
 */
void nrfx_nvmc_words_write(uint32_t address, uint32_t const * src, uint32_t num_words);

#if defined(NRF_NVMC_ICACHE_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for enabling the instruction cache (ICache).
 *
 * Enabling ICache can result in performance boost and power consumption reduction, due
 * to fewer flash memory accesses.
 */
void nrfx_nvmc_icache_enable(void);

/**
 * @brief Function for disabling ICache.
 */
void nrfx_nvmc_icache_disable(void);

/**
 * @brief Function for starting the ICache performance measurement.
 */
void nrfx_nvmc_icache_performance_test_start(void);

/**
 * @brief Function for finishing the ICache performance measurement.
 *
 * Performance is presented as a ratio of ICache hits to ICache misses in code between start and 
 * stop function calls, multiplied by 100. If there are more cache misses than hits, negative 
 * value of the ratio is returned. The higher the value is, the more efficent the ICache. ICache
 * hit and miss counters do not wrap around, so a value of 0 is returned if a potential
 * counter overflow is detected.
 *
 *@retval icache_performance  Ratio of ICache fetch hits to misses.
 */
int32_t nrfx_nvmc_icache_performance_test_stop(void);

#endif // defined(NRF_NVMC_ICACHE_PRESENT) || defined(__NRFX_DOXYGEN__)

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_NVMC_H__
