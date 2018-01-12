/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#ifndef NRFX_QDEC_H__
#define NRFX_QDEC_H__

#include <nrfx.h>
#include <hal/nrf_qdec.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_qdec QDEC driver
 * @{
 * @ingroup nrf_qdec
 * @brief   Quadrature Decoder (QDEC) peripheral driver.
 */

/**@brief QDEC configuration structure.*/
typedef struct
{
    nrf_qdec_reportper_t reportper;          /**< Report period in samples. */
    nrf_qdec_sampleper_t sampleper;          /**< Sampling period in microseconds. */
    uint32_t             psela;              /**< Pin number for A input. */
    uint32_t             pselb;              /**< Pin number for B input. */
    uint32_t             pselled;            /**< Pin number for LED output. */
    uint32_t             ledpre;             /**< Time (in microseconds) how long LED is switched on before sampling. */
    nrf_qdec_ledpol_t    ledpol;             /**< Active LED polarity. */
    bool                 dbfen;              /**< State of debouncing filter. */
    bool                 sample_inten;       /**< Enabling sample ready interrupt. */
    uint8_t              interrupt_priority; /**< QDEC interrupt priority. */
} nrfx_qdec_config_t;

/**@brief QDEC default configuration. */
#define NRFX_QDEC_DEFAULT_CONFIG                                                \
    {                                                                           \
        .reportper          = (nrf_qdec_reportper_t)NRFX_QDEC_CONFIG_REPORTPER, \
        .sampleper          = (nrf_qdec_sampleper_t)NRFX_QDEC_CONFIG_SAMPLEPER, \
        .psela              = NRFX_QDEC_CONFIG_PIO_A,                           \
        .pselb              = NRFX_QDEC_CONFIG_PIO_B,                           \
        .pselled            = NRFX_QDEC_CONFIG_PIO_LED,                         \
        .ledpre             = NRFX_QDEC_CONFIG_LEDPRE,                          \
        .ledpol             = (nrf_qdec_ledpol_t)NRFX_QDEC_CONFIG_LEDPOL,       \
        .interrupt_priority = NRFX_QDEC_CONFIG_IRQ_PRIORITY,                    \
        .dbfen              = NRFX_QDEC_CONFIG_DBFEN,                           \
        .sample_inten       = NRFX_QDEC_CONFIG_SAMPLE_INTEN                     \
    }

/**@brief QDEC sample event data.*/
typedef struct
{
    int8_t value; /**< Sample value. */
} nrfx_qdec_sample_data_evt_t;

/**@brief QDEC report event data.*/
typedef struct
{
    int16_t acc;     /**< Accumulated transitions. */
    uint16_t accdbl;  /**< Accumulated double transitions. */
} nrfx_qdec_report_data_evt_t;

/**@brief QDEC event handler structure. */
typedef struct
{
    nrf_qdec_event_t  type;
    union
    {
        nrfx_qdec_sample_data_evt_t sample; /**< Sample event data. */
        nrfx_qdec_report_data_evt_t report; /**< Report event data. */
    } data;
} nrfx_qdec_event_t;

/**@brief QDEC event handler.
 * @param[in] event  QDEC event structure.
 */
typedef void (*nrfx_qdec_event_handler_t)(nrfx_qdec_event_t event);

/**@brief Function for initializing QDEC.
 *
 * @param[in] p_config      Pointer to the structure with initial configuration.
 * @param[in] event_handler Event handler provided by the user.
 *                          Must not be NULL.
 *
 * @retval NRFX_SUCCESS             If initialization was successful.
 * @retval NRFX_ERROR_INVALID_STATE If QDEC was already initialized.
 */
nrfx_err_t nrfx_qdec_init(nrfx_qdec_config_t const * p_config,
                          nrfx_qdec_event_handler_t  event_handler);

/**@brief Function for uninitializing QDEC.
 * @note  Function asserts if module is uninitialized.
 */
void nrfx_qdec_uninit(void);

/**@brief Function for enabling QDEC.
 * @note  Function asserts if module is uninitialized or enabled.
 */
void nrfx_qdec_enable(void);

/**@brief Function for disabling QDEC.
 * @note  Function asserts if module is uninitialized or disabled.
 */
void nrfx_qdec_disable(void);

/**@brief Function for reading accumulated transitions QDEC.
 * @note  Function asserts if module is not enabled.
 * @note  Accumulators are cleared after reading.
 *
 * @param[out] p_acc      Pointer to store accumulated transitions.
 * @param[out] p_accdbl   Pointer to store accumulated double transitions.
 */
void nrfx_qdec_accumulators_read(int16_t * p_acc, int16_t * p_accdbl);

/**
 * @brief Function for returning the address of a specific QDEC task.
 *
 * @param   task    QDEC task.
 *
 * @return  Task address.
 */
__STATIC_INLINE uint32_t nrfx_qdec_task_address_get(nrf_qdec_task_t task)
{
    return (uint32_t)nrf_qdec_task_address_get(task);
}

/**
 * @brief Function for returning the address of a specific QDEC event.
 *
 * @param   event   QDEC event.
 *
 * @return  Event address.
 */
__STATIC_INLINE uint32_t nrfx_qdec_event_address_get(nrf_qdec_event_t event)
{
    return (uint32_t)nrf_qdec_event_address_get(event);
}


void nrfx_qdec_irq_handler(void);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_QDEC_H__
