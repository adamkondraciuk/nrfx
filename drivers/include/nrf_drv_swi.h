/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/
/**@file
 *
 * @defgroup nrf_drv_swi SWI driver
 * @{
 * @ingroup  nrf_drivers
 *
 * @brief    Driver for software interrupts (SWI).
 * @details  The SWI driver allows the user to allocate SWIs and pass extra flags to interrupt handler functions.
 */

#ifndef NRF_DRV_SWI_H__
#define NRF_DRV_SWI_H__

#include <nrfx.h>

#ifndef EGU_ENABLED
    #define EGU_ENABLED 0
#endif

#if NRFX_CHECK(EGU_ENABLED)
#include <hal/nrf_egu.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t nrf_swi_t;         ///< @brief SWI channel (unsigned integer).

/** @brief   SWI user flags (unsigned integer).
 *
 *  User flags are set during the SWI trigger and passed to the callback function as an argument.
 */
typedef uint16_t nrf_swi_flags_t;

/** @brief Unallocated channel value. */
#define NRF_SWI_UNALLOCATED ((nrf_swi_t) 0xFFFFFFFFuL)

/** @brief   SWI handler function.
 *
 *  Takes two arguments: SWI number (nrf_swi_t) and flags (nrf_swi_flags_t).
 */
typedef void (* nrf_swi_handler_t)(nrf_swi_t, nrf_swi_flags_t);

/**@brief Maximum numbers of SWIs. This number is fixed for a specific chip. */
#if NRFX_CHECK(EGU_ENABLED)
#define SWI_MAX              EGU_COUNT
#else
#define SWI_MAX              SWI_COUNT
/**@brief Number of flags per SWI (fixed number). */
#define SWI_MAX_FLAGS        16
#endif

#ifdef SOFTDEVICE_PRESENT
    #if SWI_COUNT > 2
        #undef SWI_COUNT
        #define SWI_COUNT 2
    #endif
#else
    #ifdef SVCALL_AS_NORMAL_FUNCTION
    // Serialization is enabled.
        #if SWI_COUNT > 2
            #undef SWI_COUNT
            #define SWI_COUNT 2
        #endif
    #endif
#endif

#if NRFX_CHECK(PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED)
    #if   (PWM_NRF52_ANOMALY_109_EGU_INSTANCE == 0)
        #define SWI_DISABLE0
    #elif (PWM_NRF52_ANOMALY_109_EGU_INSTANCE == 1)
        #define SWI_DISABLE1
    #elif (PWM_NRF52_ANOMALY_109_EGU_INSTANCE == 2)
        #define SWI_DISABLE2
    #elif (PWM_NRF52_ANOMALY_109_EGU_INSTANCE == 3)
        #define SWI_DISABLE3
    #elif (PWM_NRF52_ANOMALY_109_EGU_INSTANCE == 4)
        #define SWI_DISABLE4
    #elif (PWM_NRF52_ANOMALY_109_EGU_INSTANCE == 5)
        #define SWI_DISABLE5
    #endif
#endif

/**@brief Default SWI priority. */
#define SWI_DEFAULT_PRIORITY APP_IRQ_PRIORITY_LOWEST


/**@brief Function for initializing the SWI module.
 *
 * @retval     NRFX_SUCCESS                           If the module was successfully initialized.
 * @retval     NRFX_ERROR_MODULE_ALREADY_INITIALIZED  If the module has already been initialized.
 */
ret_code_t nrf_drv_swi_init(void);


/**@brief Function for uninitializing the SWI module.
 *
 * This function also disables all SWIs.
 */
void nrf_drv_swi_uninit(void);


/**@brief Function for allocating a first unused SWI instance and setting a handler.
 * @details The event handler function returns void and takes one uint32_t argument (SWI number).
 *
 * @param[out] p_swi         Pointer to the SWI that has been allocated.
 * @param[in]  event_handler Event handler function.
 *                           If NULL, no interrupt will be enabled (can be NULL only if the EGU driver is enabled).
 *                           For classic SWI, must be a valid handler pointer.
 * @param[in]  priority      Interrupt priority.
 *
 * @retval     NRFX_SUCCESS      If the SWI was successfully allocated.
 * @retval     NRFX_ERROR_NO_MEM If there is no available SWI to be used.
 */
ret_code_t nrf_drv_swi_alloc(nrf_swi_t * p_swi, nrf_swi_handler_t event_handler, uint32_t priority);


/**@brief Function for freeing a previously allocated SWI.
 *
 * @param[in,out]  p_swi     SWI to free. The value is changed to NRF_SWI_UNALLOCATED on success.
 */
void nrf_drv_swi_free(nrf_swi_t * p_swi);


/**@brief Function for triggering the SWI.
 *
 * @param[in]  swi           SWI to trigger.
 * @param[in]  flag_number   Number of user flag to trigger.
 */
void nrf_drv_swi_trigger(nrf_swi_t swi, uint8_t flag_number);


#if (EGU_ENABLED > 0) || defined(__SDK_DOXYGEN__)


/**@brief Function for returning the EGU trigger task address.
 *
 * @param[in]  swi           SWI instance.
 * @param[in]  channel       Number of the EGU channel.
 *
 * @returns EGU trigger task address.
 */
uint32_t nrf_drv_swi_task_trigger_address_get(nrf_swi_t swi, uint8_t channel);

/**@brief Function for returning the EGU triggered event address.
 *
 * @param[in]  swi           SWI instance.
 * @param[in]  channel       Number of the EGU channel.
 *
 * @returns EGU triggered event address.
 */
uint32_t nrf_drv_swi_event_triggered_address_get(nrf_swi_t swi, uint8_t channel);

#endif // NRFX_CHECK(EGU_ENABLED)



#ifdef __cplusplus
}
#endif

#endif // NRF_DRV_SWI_H__

/** @} */
