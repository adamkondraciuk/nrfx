/**
 *
 * @defgroup nrfx_pdm_config PDM peripheral driver configuration
 * @{
 * @ingroup nrfx_pdm
 */
/** @brief Enable PDM driver
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRFX_PDM_ENABLED
/** @brief Mode
 *
 *  Following options are available:
 * - 0 - Stereo
 * - 1 - Mono
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRFX_PDM_CONFIG_MODE

/** @brief Edge
 *
 *  Following options are available:
 * - 0 - Left falling
 * - 1 - Left rising
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRFX_PDM_CONFIG_EDGE

/** @brief Clock frequency
 *
 *  Following options are available:
 * - 134217728 - 1000k
 * - 138412032 - 1032k (default)
 * - 142606336 - 1067k
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRFX_PDM_CONFIG_CLOCK_FREQ

/** @brief Interrupt priority
 *
 * Priorities 0,2 (nRF51) and 0,1,4,5 (nRF52) are reserved for SoftDevice
 *
 *  Following options are available:
 * - 0 - 0 (highest)
 * - 1 - 1
 * - 2 - 2
 * - 3 - 3
 * - 4 - 4 (Software Component only)
 * - 5 - 5 (Software Component only)
 * - 6 - 6 (Software Component only)
 * - 7 - 7 (Software Component only)
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRFX_PDM_CONFIG_IRQ_PRIORITY


/** @} */
