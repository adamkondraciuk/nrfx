/*$$$LICENCE_NORDIC_STANDARD<2025>$$$*/

#ifndef NRFX_CRACEN_H
#define NRFX_CRACEN_H

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_cracen CRACEN driver
 * @{
 * @ingroup nrf_cracen
 * @brief   Cryptographic accelerator engine (CRACEN) peripheral driver
 */

/**
 * @brief Function for initializing the CRACEN CTR_DRBG random generator.
 *
 * @note This initialization is relatively slow and power consuming.
 *
 * @note This function assumes exclusive access to the CRACEN TRNG and CryptoMaster, and may
 *       not be used while any other component is using those peripherals.
 *
 * @retval NRFX_SUCCESS        Initialization was successful.
 * @retval NRFX_ERROR_INTERNAL Unexpected error.
 * @retval NRFX_ERROR_ALREADY  If it was was already initialized.
 */
nrfx_err_t nrfx_cracen_ctr_drbg_init(void);

/** @brief Function for uninitializing the CRACEN CTR_DRBG random generator. */
void nrfx_cracen_ctr_drbg_uninit(void);

/**
 * @brief Function for filling the specified /p p_buf buffer with /p size bytes of random data.
 *
 * @note This function assumes exclusive access to the CRACEN TRNG and CryptoMaster, and may
 *       not be used while any other component is using those peripherals.
 *
 * @param[out] p_buf Buffer into which to copy \p size bytes of entropy.
 * @param[in]  size  Number of bytes to copy.
 *
 * @retval NRFX_SUCCESS             Success.
 * @retval NRFX_ERROR_INVALID_PARAM Invalid inputs.
 * @retval NRFX_ERROR_INTERNAL      Unexpected error.
 */
nrfx_err_t nrfx_cracen_ctr_drbg_random_get(uint8_t * p_buf, size_t size);

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* NRFX_CRACEN_H */
