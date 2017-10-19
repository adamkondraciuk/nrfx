/**
 *
 * @defgroup nrfx_gpiote_config GPIOTE peripheral driver configuration
 * @{
 * @ingroup nrfx_gpiote
 */
/** @brief Enable GPIOTE driver
 *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRFX_GPIOTE_ENABLED
/** @brief Number of lower power input pins
 *
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NRFX_GPIOTE_CONFIG_NUM_OF_LOW_POWER_EVENTS

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
#define NRFX_GPIOTE_CONFIG_IRQ_PRIORITY


/** @} */
