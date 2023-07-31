/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFX_VEVIF_H__
#define NRFX_VEVIF_H__

#include <nrfx.h>

#include <hal/nrf_vpr_clic.h>

#ifdef __cplusplus
extern "C" {
#endif

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
 * @param[in] p_context          Context passed to the event handler.
 *
 * @retval NRFX_SUCCESS       Driver successfully initialized.
 * @retval NRFX_ERROR_ALREADY Driver already initialized.
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

void nrfx_vevif_0_irq_handler(void);
void nrfx_vevif_1_irq_handler(void);
void nrfx_vevif_2_irq_handler(void);
void nrfx_vevif_3_irq_handler(void);
void nrfx_vevif_4_irq_handler(void);
void nrfx_vevif_5_irq_handler(void);
void nrfx_vevif_6_irq_handler(void);
void nrfx_vevif_7_irq_handler(void);
void nrfx_vevif_8_irq_handler(void);
void nrfx_vevif_9_irq_handler(void);
void nrfx_vevif_10_irq_handler(void);
void nrfx_vevif_11_irq_handler(void);
void nrfx_vevif_12_irq_handler(void);
void nrfx_vevif_13_irq_handler(void);
void nrfx_vevif_14_irq_handler(void);
void nrfx_vevif_15_irq_handler(void);
void nrfx_vevif_16_irq_handler(void);
void nrfx_vevif_17_irq_handler(void);
void nrfx_vevif_18_irq_handler(void);
void nrfx_vevif_19_irq_handler(void);
void nrfx_vevif_20_irq_handler(void);
void nrfx_vevif_21_irq_handler(void);
void nrfx_vevif_22_irq_handler(void);
void nrfx_vevif_23_irq_handler(void);
void nrfx_vevif_24_irq_handler(void);
void nrfx_vevif_25_irq_handler(void);
void nrfx_vevif_26_irq_handler(void);
void nrfx_vevif_27_irq_handler(void);
void nrfx_vevif_28_irq_handler(void);
void nrfx_vevif_29_irq_handler(void);
void nrfx_vevif_30_irq_handler(void);
void nrfx_vevif_31_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_VEVIF_H__
