/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFX_IDC_H__
#define NRFX_IDC_H__

#include <nrfx.h>

#if defined(NRF5340_XXAA)
    #include <hal/nrf_ipc.h>
#endif
#if defined(HALTIUM_XXAA)
    #include <hal/nrf_vpr.h>
    #include <hal/nrf_bellboard.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_idc Generic inter-domain communication layer.
 * @{
 * @ingroup nrf_bellboard
 * @brief   Helper layer that provides the common functionality for the IPC mechanisms.
 */

/** @brief IDC domains. */
typedef enum
{
    NRFX_IDC_DOMAIN_APP,    /**< Application domain. */
    NRFX_IDC_DOMAIN_NET,    /**< Network domain. */
    NRFX_IDC_DOMAIN_SEC,    /**< Secure domain. */
    NRFX_IDC_DOMAIN_CELL,   /**< Cellular domain. */
    NRFX_IDC_DOMAIN_SYSCTRL /**< System Controller domain. */
} nrfx_idc_domain_t;

/**
 * @brief Function for conveying the inter-domain signal to the specified domain.
 *
 * @param[in] domain  Domain to be signalled.
 * @param[in] channel Inter-domain channel for conveying the signal.
 */
__STATIC_INLINE void nrfx_idc_signal(nrfx_idc_domain_t domain, uint8_t channel)
{
#if defined(NRF5340_XXAA)
    (void)domain;
    nrf_ipc_task_trigger(NRF_IPC, nrf_ipc_send_task_get(channel));
#else
    NRF_BELLBOARD_Type * p_bell = NULL;
    NRF_VPR_Type       * p_vpr  = NULL;
    switch (domain)
    {
        case NRFX_IDC_DOMAIN_APP:
            p_bell = NRF_APPLICATION_BELLBOARD;
            break;

        case NRFX_IDC_DOMAIN_NET:
            p_bell = NRF_RADIOCORE_BELLBOARD;
            break;

        case NRFX_IDC_DOMAIN_SEC:
            p_bell = NRF_SECURE_BELLBOARD;
            break;

        case NRFX_IDC_DOMAIN_CELL:
            p_bell = NRF_CELLCORE_BELLBOARD;
            break;

        case NRFX_IDC_DOMAIN_SYSCTRL:
            p_vpr = NRF_SYSCTRL_VPR;
            break;

        default:
            NRFX_ASSERT(0);
            break;
    }

    if (p_bell)
    {
        nrf_bellboard_task_trigger(p_bell, nrf_bellboard_trigger_task_get(channel));
    }
    else
    {
        nrf_vpr_task_trigger(p_vpr, nrf_vpr_trigger_task_get(channel));
    }
#endif
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_IDC_H__
