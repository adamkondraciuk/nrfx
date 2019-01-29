/*$$$LICENCE_NORDIC_STANDARD<2012>$$$*/

#ifndef NRF_NVMC_H__
#define NRF_NVMC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @defgroup nrf_nvmc_hal NVMC HAL
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

#ifdef __cplusplus
}
#endif

#endif // NRF_NVMC_H__
