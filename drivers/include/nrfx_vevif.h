/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFX_VEVIF_H__
#define NRFX_VEVIF_H__

#include <nrfx.h>

#include <hal/nrf_vpr_clic.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_VEVIF_IRQ_HANDLER_DECLARE(idx, _) \
void nrfx_vevif_##idx##_irq_handler(void);

/**
 * @defgroup nrfx_vevif VEVIF driver
 * @{
 * @ingroup nrf_vpr
 * @brief   VPR Event Interface (VEVIF) mechanism driver.
 */

/**
 * @brief VEVIF event handler callback.
 *
 * @param[in] event_idx VEVIF event index.
 * @param[in] p_context Context passed to the event handler. Set on initialization.
 */
typedef void (*nrfx_vevif_event_handler_t)(uint8_t event_idx, void * p_context);

/**
 * @brief Function for initializing the VEVIF driver.
 *
 * @param[in] interrupt_priority Interrupt priority.
 * @param[in] event_handler      Function to be called on interrupt.
 *                               Must not be NULL.
 * @param[in] p_context          Context passed to the event handler.
 *
 * @retval NRFX_SUCCESS             Driver successfully initialized.
 * @retval NRFX_ERROR_ALREADY       The driver is already initialized.
 * @retval NRFX_ERROR_INVALID_STATE The driver is already initialized.
 *                                  @deprecated Use @ref NRFX_ERROR_ALREADY instead.
 */
nrfx_err_t nrfx_vevif_init(nrf_vpr_clic_priority_t    interrupt_priority,
                           nrfx_vevif_event_handler_t event_handler,
                           void *                     p_context);

/** @brief Function for uninitializing the VEVIF driver. */
void nrfx_vevif_uninit(void);

/**
 * @brief Function for checking if the VEVIF driver is initialized.
 *
 * @retval true  Driver is already initialized.
 * @retval false Driver is not initialized.
 */
bool nrfx_vevif_init_check(void);

/**
 * @brief Function for enabling interrupts on specified VEVIF events.
 *
 * @param[in] mask Mask of interrupts to be enabled.
 */
void nrfx_vevif_int_enable(uint32_t mask);

/**
 * @brief Function for disabling interrupts on specified VEVIF events.
 *
 * @param[in] mask Mask of interrupts to be disabled.
 */
void nrfx_vevif_int_disable(uint32_t mask);

/** @} */

/* Declare interrupt handlers for 0..31 NRF_VEVIF driver instances. */
NRFX_LISTIFY(32, NRFX_VEVIF_IRQ_HANDLER_DECLARE, (;), _)

#ifdef __cplusplus
}
#endif

#endif // NRFX_VEVIF_H__
