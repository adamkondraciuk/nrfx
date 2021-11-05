/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFX_IDC_H__
#define NRFX_IDC_H__

#include <nrfx.h>

#if defined(NRF5340_XXAA)
    #include <nrfx_ipc.h>
#elif defined(HALTIUM_XXAA)
    #include <nrfx_vevif.h>
    #include <nrfx_bellboard.h>
#else
    #error "No inter-domain communication supported."
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_idc Generic inter-domain communication layer.
 * @{
 * @ingroup nrfx_ipc
 * @ingroup nrfx_vevif
 * @ingroup nrfx_bellboard
 * @brief   Helper layer that provides the common functionality for the inter-domain communication mechanisms.
 */

/**
 * @brief IDC event handler callback.
 *
 * @param[in] event_idx IDC event index.
 * @param[in] p_context User context.
 */
typedef void (*nrfx_idc_event_handler_t) (uint8_t event_idx, void * p_context);

/** @brief Structure for the IDC instance. */
typedef struct
{
    uint8_t  drv_inst_idx; ///< Index of the instance. For internal use only.
    uint8_t  int_idx;      ///< Interrupt index. For internal use only.
} nrfx_idc_t;

#ifndef __NRFX_DOXYGEN__
enum {
#if defined(NRF5340_XXAA)
#if NRFX_CHECK(NRFX_IPC_ENABLED)
    NRFX_IDC0_INST_IDX,
#endif
#elif defined(HALTIUM_XXAA)
#if defined(ISA_RISCV)
#if NRFX_CHECK(NRFX_VEVIF_ENABLED)
    NRFX_IDC0_INST_IDX,
#endif
#elif defined(ISA_ARM)
#if NRFX_CHECK(NRFX_BELLBOARD0_ENABLED)
    NRFX_IDC0_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_BELLBOARD1_ENABLED)
    NRFX_IDC1_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_BELLBOARD2_ENABLED)
    NRFX_IDC2_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_BELLBOARD3_ENABLED)
    NRFX_IDC3_INST_IDX,
#endif
#endif /* HALTIUM_XXAA */
#endif
    NRFX_IDC_ENABLED_COUNT
};
#endif /* __NRFX_DOXYGEN__ */

/** @brief Macro for creating a IDC instance. */
#define NRFX_IDC_INSTANCE(id)                               \
{                                                           \
    .drv_inst_idx = NRFX_CONCAT_3(NRFX_IDC, id, _INST_IDX), \
    .int_idx      = id,                                     \
}

/** @brief Macro for creating channel bitmask associated with specified channel index. */
#define NRFX_IDC_CHANNEL(channel) (0x1UL << (channel))

/** @brief IDC domains. */
typedef enum
{
    NRFX_IDC_DOMAIN_APP,     /**< Application domain. */
    NRFX_IDC_DOMAIN_NET,     /**< Network domain. */
    NRFX_IDC_DOMAIN_SEC,     /**< Secure domain. */
    NRFX_IDC_DOMAIN_CELL,    /**< Cellular domain. */
    NRFX_IDC_DOMAIN_SYSCTRL, /**< System Controller domain. */
    NRFX_IDC_DOMAIN_FLPR,    /**< Fast Lightweight Processor */
    NRFX_IDC_DOMAIN_PPR,     /**< Peripheral Processor */
    NRFX_IDC_DOMAIN_COUNT    /**< Total number of possible IDC domains. */
} nrfx_idc_domain_t;

/** @brief Symbol specifying maximum number of available events triggered. */
#if defined(NRF5340_XXAA)
#define NRFX_IDC_EVENTS_TRIGGERED_COUNT IPC_CONF_NUM
#elif defined(HALTIUM_XXAA)
#if defined(ISA_ARM)
#define NRFX_IDC_EVENTS_TRIGGERED_COUNT NRF_BELLBOARD_EVENTS_TRIGGERED_COUNT
#else /* ISA_RISCV */
#define NRFX_IDC_EVENTS_TRIGGERED_COUNT NRF_VPR_EVENTS_TRIGGERED_COUNT
#endif
#endif

/**
 * @brief Function for initializing the IDC instance.
 *
 * @param[in] p_instance         Pointer to IDC instance.
 * @param[in] interrupt_priority Interrupt priority.
 * @param[in] event_handler      Function to be called on interrupt.
 * @param[in] p_context          Context passed to the event handler.
 * @param[in] p_config           Pointer to the structure containing peripheral-specific configuration. Can be NULL.
 *
 * @retval NRFX_SUCCESS                   Driver successfully initialized.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED Driver already initialized.
 */
__STATIC_INLINE nrfx_err_t nrfx_idc_init(nrfx_idc_t const *       p_instance,
                                         uint8_t                  interrupt_priority,
                                         nrfx_idc_event_handler_t event_handler,
                                         void *                   p_context,
                                         void const *             p_config)
{
#if defined(NRF5340_XXAA)
    (void)p_instance;
    nrfx_err_t err_code = nrfx_ipc_init(interrupt_priority,
                                        (nrfx_ipc_handler_t)event_handler,
                                        p_context);
    nrfx_ipc_config_load((nrfx_ipc_config_t const *)p_config);
    return err_code;
#elif defined(HALTIUM_XXAA)
#if defined(ISA_ARM)
    (void)p_config;
    return nrfx_bellboard_init((nrfx_bellboard_t const *)p_instance,
                               interrupt_priority,
                               (nrfx_bellboard_event_handler_t)event_handler,
                               p_context);
#else /* ISA_RISCV */
    (void)p_instance;
    (void)p_config;
    return nrfx_vevif_init(interrupt_priority, (nrfx_vevif_event_handler_t)event_handler, p_context);
#endif
#endif /* HALTIUM_XXAA */
}

/**
 * @brief Function for uninitializing the IDC instance.
 *
 * @param[in] p_instance Pointer to IPC instance.
 */
__STATIC_INLINE void nrfx_idc_uninit(nrfx_idc_t const * p_instance)
{
#if defined(NRF5340_XXAA)
    (void)p_instance;
    nrfx_ipc_uninit();
#elif defined(HALTIUM_XXAA)
#if defined(ISA_ARM)
    nrfx_bellboard_uninit((nrfx_bellboard_t *)p_instance);
#else /* ISA_RISCV */
    (void)p_instance;
    nrfx_vevif_uninit();
#endif
#endif /* HALTIUM_XXAA */
}

/**
 * @brief Function for enabling specified interrupts in the IDS instance.
 *
 * @param[in] p_instance Pointer to IDC instance.
 * @param[in] mask       Mask of interrupts to be enabled.
 */
__STATIC_INLINE void nrfx_idc_int_enable(nrfx_idc_t const * p_instance, uint32_t mask)
{
#if defined(NRF5340_XXAA)
    (void)p_instance;
    nrfx_ipc_receive_event_group_enable(mask);
#elif defined(HALTIUM_XXAA)
#if defined(ISA_ARM)
    nrfx_bellboard_int_enable((nrfx_bellboard_t *)p_instance, mask);
#else /* ISA_RISCV */
    (void)p_instance;
    nrfx_vevif_int_enable(mask);
#endif  /* HALTIUM_XXAA */
#endif
}

/**
 * @brief Function for disabling interrupt in the IDC instance.
 *
 * @param[in] p_instance Pointer to IDC instance.
 * @param[in] mask       Mask of interrupts to be disabled.
 */
__STATIC_INLINE void nrfx_idc_int_disable(nrfx_idc_t const * p_instance, uint32_t mask)
{
#if defined(NRF5340_XXAA)
    (void)p_instance;
    nrfx_ipc_receive_event_group_disable(mask);
#elif defined(HALTIUM_XXAA)
#if defined(ISA_ARM)
    nrfx_bellboard_int_disable((nrfx_bellboard_t *)p_instance, mask);
#else /* ISA_RISCV */
    (void)p_instance;
    nrfx_vevif_int_disable(mask);
#endif  /* HALTIUM_XXAA */
#endif
}

/**
 * @brief Function for conveying the inter-domain signal to the specified domain.
 *
 * @param[in] p_instance Pointer to IDC instance.
 * @param[in] domain     Domain to be signalled.
 * @param[in] channel    Inter-domain channel for conveying the signal.
 */
__STATIC_INLINE void nrfx_idc_signal(nrfx_idc_t *      p_instance,
                                     nrfx_idc_domain_t domain,
                                     uint8_t           channel)
{
#if defined(NRF5340_XXAA)
    (void)domain;
    (void)p_instance;
    nrf_ipc_task_trigger(NRF_IPC, nrf_ipc_send_task_get(channel));
#elif defined(HALTIUM_XXAA)
    (void)p_instance;
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

        case NRFX_IDC_DOMAIN_FLPR:
            p_vpr = NRF_FLPR_VPR;
            break;

        case NRFX_IDC_DOMAIN_PPR:
            p_vpr = NRF_PPR_VPR;
            break;

        default:
            NRFX_ASSERT(0);
            break;
    }

    if (p_bell)
    {
        nrfy_bellboard_task_trigger(p_bell, nrf_bellboard_trigger_task_get(channel));
    }
    else
    {
        nrfy_vpr_task_trigger(p_vpr, nrf_vpr_trigger_task_get(channel));
    }
#endif
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_IDC_H__
