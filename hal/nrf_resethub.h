/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_RESETHUB_H__
#define NRF_RESETHUB_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_resethub_hal RESETHUB HAL
 * @{
 * @ingroup nrf_resethub
 * @brief   Hardware access layer (HAL) for managing the reset hub (RESETHUB) peripheral.
 */

#if defined(RESETHUB_CROSSDOMAINRESET_DOMAIN0_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether cross-domain reset is present. */
#define NRF_RESETHUB_HAS_CROSSDOMAIN 1
#else
#define NRF_RESETHUB_HAS_CROSSDOMAIN 0
#endif

#if defined(NRF9230_ENGA_XXAA) || defined(NRF9230_ENGB_XXAA) || defined(NRF9220_XXAA) || \
    defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether cellular domain is present. */
#define NRF_RESETHUB_HAS_CELLULAR 1
#else
#define NRF_RESETHUB_HAS_CELLULAR 0
#endif

#if defined(NRF9230_ENGA_XXAA) || defined(NRF9230_ENGB_XXAA) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether iSim domain is present. */
#define NRF_RESETHUB_HAS_ISIM 1
#else
#define NRF_RESETHUB_HAS_ISIM 0
#endif

#if defined(NRF9230_ENGA_XXAA) || defined(NRF9230_ENGB_XXAA) || defined(NRF9230_XXAA) || \
    defined(NRF54H20_ENGA_XXAA) || defined(NRF54H20_ENGB_XXAA) || defined(NRF54H20_XXAA) || \
    defined(NRF7140_XXAA) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether network domain is present. */
#define NRF_RESETHUB_HAS_NETWORK 1
#else
#define NRF_RESETHUB_HAS_NETWORK 0
#endif

#if defined(NRF7140_XXAA) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether WiFi domain is present. */
#define NRF_RESETHUB_HAS_WIFI 1
#else
#define NRF_RESETHUB_HAS_WIFI 0
#endif

#if defined(RESETHUB_RESETREAS_DOMAIN_DOG_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether DOG domain reset reason is present. */
#define NRF_RESETHUB_HAS_DOG_RESET 1
#else
#define NRF_RESETHUB_HAS_DOG_RESET 0
#endif

#if defined(RESETHUB_RESETREAS_DOMAIN_WDT0_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether WDT reset reason is present. */
#define NRF_RESETHUB_HAS_WDT_RESET 1
#else
#define NRF_RESETHUB_HAS_WDT_RESET 0
#endif


/** @brief Symbol specifying maximum number of available reset domain tasks. */
#define NRF_RESETHUB_TASKS_RESETDOMAIN_COUNT RESETHUB_TASKS_RESETDOMAIN_MaxCount

/** @brief Symbol specifying maximum number of available domain reset events. */
#define NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT RESETHUB_EVENTS_DOMAINRESET_MaxCount

/** @brief Symbol specifying maximum number of available domains. */
#define NRF_RESETHUB_DOMAIN_COUNT \
    NRFX_MAX(NRF_RESETHUB_TASKS_RESETDOMAIN_COUNT, NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT)

/** @brief RESETHUB tasks. */
typedef enum
{
    NRF_RESETHUB_TASK_RESET_DOMAIN_0  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[0]),  /**< Reset domain 0. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_1  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[1]),  /**< Reset domain 1. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_2  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[2]),  /**< Reset domain 2. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_3  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[3]),  /**< Reset domain 3. */
#if NRF_RESETHUB_TASKS_RESETDOMAIN_COUNT > 4
    NRF_RESETHUB_TASK_RESET_DOMAIN_4  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[4]),  /**< Reset domain 4. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_5  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[5]),  /**< Reset domain 5. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_6  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[6]),  /**< Reset domain 6. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_7  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[7]),  /**< Reset domain 7. */
#endif
#if NRF_RESETHUB_TASKS_RESETDOMAIN_COUNT > 8
    NRF_RESETHUB_TASK_RESET_DOMAIN_8  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[8]),  /**< Reset domain 8. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_9  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[9]),  /**< Reset domain 9. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_10 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[10]), /**< Reset domain 10. */
#endif
#if NRF_RESETHUB_TASKS_RESETDOMAIN_COUNT > 11
    NRF_RESETHUB_TASK_RESET_DOMAIN_11 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[11]), /**< Reset domain 11. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_12 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[12]), /**< Reset domain 12. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_13 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[13]), /**< Reset domain 13. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_14 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[14]), /**< Reset domain 14. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_15 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[15]), /**< Reset domain 15. */
#endif

    NRF_RESETHUB_TASK_RESET_DOMAIN_APPLICATION =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_DOMAIN_APPLICATION]),             /**< Reset Application domain. */
#if NRF_RESETHUB_HAS_NETWORK
    NRF_RESETHUB_TASK_RESET_DOMAIN_NETWORK =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_DOMAIN_RADIOCORE]),               /**< Reset Network domain. */
#endif
#if NRF_RESETHUB_HAS_CELLULAR
    NRF_RESETHUB_TASK_RESET_DOMAIN_CELLULAR =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_DOMAIN_CELLCORE]),                /**< Reset Cellular domain. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_CELL_DSP =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_DOMAIN_CELLDSP]),                 /**< Reset Cellular DSP domain. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_CELL_RF =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_DOMAIN_CELLRF]),                  /**< Reset Cellular RF domain. */
#endif
#if NRF_RESETHUB_HAS_ISIM
    NRF_RESETHUB_TASK_RESET_DOMAIN_ISIM =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_DOMAIN_ISIMCORE]),                /**< Reset iSIM domain. */
#endif
} nrf_resethub_task_t;

/** @brief RESETHUB events. */
typedef enum
{
    NRF_RESETHUB_EVENT_DOMAIN_RESET_0  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[0]),  /**< Domain 0 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_1  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[1]),  /**< Domain 1 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_2  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[2]),  /**< Domain 2 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_3  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[3]),  /**< Domain 3 was reset. */
#if NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT > 4
    NRF_RESETHUB_EVENT_DOMAIN_RESET_4  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[4]),  /**< Domain 4 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_5  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[5]),  /**< Domain 5 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_6  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[6]),  /**< Domain 6 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_7  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[7]),  /**< Domain 7 was reset. */
#endif
#if NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT > 8
    NRF_RESETHUB_EVENT_DOMAIN_RESET_8  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[8]),  /**< Domain 8 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_9  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[9]),  /**< Domain 9 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_10 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[10]), /**< Domain 10 was reset. */
#endif
#if NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT > 11
    NRF_RESETHUB_EVENT_DOMAIN_RESET_11 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[11]), /**< Domain 11 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_12 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[12]), /**< Domain 12 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_13 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[13]), /**< Domain 13 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_14 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[14]), /**< Domain 14 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_15 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[15]), /**< Domain 15 was reset. */
#endif
    NRF_RESETHUB_EVENT_DOMAIN_RESET_APPLICATION =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_DOMAIN_APPLICATION]),              /**< Application domain was reset. */
#if NRF_RESETHUB_HAS_NETWORK
    NRF_RESETHUB_EVENT_DOMAIN_RESET_NETWORK =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_DOMAIN_RADIOCORE]),                /**< Network domain was reset. */
#endif
#if NRF_RESETHUB_HAS_CELLULAR
    NRF_RESETHUB_EVENT_DOMAIN_RESET_CELLULAR =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_DOMAIN_CELLCORE]),                 /**< Cellular domain was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_CELL_DSP =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_DOMAIN_CELLDSP]),                  /**< Cellular DSP domain was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_CELL_RF =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_DOMAIN_CELLRF]),                   /**< Cellular RF domain was reset. */
#endif
#if NRF_RESETHUB_HAS_ISIM
    NRF_RESETHUB_EVENT_DOMAIN_RESET_ISIM =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_DOMAIN_ISIMCORE]),                 /**< iSIM domain was reset. */
#endif
} nrf_resethub_event_t;

/** @brief RESETHUB interrupt mask. */
typedef enum
{
    NRF_RESETHUB_INT_DOMAIN_RESET_0_MASK  = RESETHUB_INTENSET_DOMAINRESET0_Msk,  /**< Interrupt on event DOMAINRESET[0]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_1_MASK  = RESETHUB_INTENSET_DOMAINRESET1_Msk,  /**< Interrupt on event DOMAINRESET[1]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_2_MASK  = RESETHUB_INTENSET_DOMAINRESET2_Msk,  /**< Interrupt on event DOMAINRESET[2]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_3_MASK  = RESETHUB_INTENSET_DOMAINRESET3_Msk,  /**< Interrupt on event DOMAINRESET[3]. */
#if NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT > 4
    NRF_RESETHUB_INT_DOMAIN_RESET_4_MASK  = RESETHUB_INTENSET_DOMAINRESET4_Msk,  /**< Interrupt on event DOMAINRESET[4]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_5_MASK  = RESETHUB_INTENSET_DOMAINRESET5_Msk,  /**< Interrupt on event DOMAINRESET[5]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_6_MASK  = RESETHUB_INTENSET_DOMAINRESET6_Msk,  /**< Interrupt on event DOMAINRESET[6]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_7_MASK  = RESETHUB_INTENSET_DOMAINRESET7_Msk,  /**< Interrupt on event DOMAINRESET[7]. */
#endif
#if NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT > 8
    NRF_RESETHUB_INT_DOMAIN_RESET_8_MASK  = RESETHUB_INTENSET_DOMAINRESET8_Msk,  /**< Interrupt on event DOMAINRESET[8]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_9_MASK  = RESETHUB_INTENSET_DOMAINRESET9_Msk,  /**< Interrupt on event DOMAINRESET[9]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_10_MASK = RESETHUB_INTENSET_DOMAINRESET10_Msk, /**< Interrupt on event DOMAINRESET[10]. */
#endif
#if NRF_RESETHUB_EVENTS_DOMAINRESET_COUNT > 11
    NRF_RESETHUB_INT_DOMAIN_RESET_11_MASK = RESETHUB_INTENSET_DOMAINRESET11_Msk, /**< Interrupt on event DOMAINRESET[11]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_12_MASK = RESETHUB_INTENSET_DOMAINRESET12_Msk, /**< Interrupt on event DOMAINRESET[12]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_13_MASK = RESETHUB_INTENSET_DOMAINRESET13_Msk, /**< Interrupt on event DOMAINRESET[13]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_14_MASK = RESETHUB_INTENSET_DOMAINRESET14_Msk, /**< Interrupt on event DOMAINRESET[14]. */
    NRF_RESETHUB_INT_DOMAIN_RESET_15_MASK = RESETHUB_INTENSET_DOMAINRESET15_Msk, /**< Interrupt on event DOMAINRESET[15]. */
#endif

    NRF_RESETHUB_INT_DOMAIN_RESET_APPLICATION_MASK = (1UL << NRF_DOMAIN_APPLICATION), /**< Interrupt on Application domain reset. */
#if NRF_RESETHUB_HAS_NETWORK
    NRF_RESETHUB_INT_DOMAIN_RESET_NETWORK_MASK     = (1UL << NRF_DOMAIN_RADIOCORE),   /**< Interrupt on Network domain reset. */
#endif
#if NRF_RESETHUB_HAS_WIFI
    NRF_RESETHUB_INT_DOMAIN_RESET_WIFICORE_MASK    = (1UL << NRF_DOMAIN_WIFICORE),    /**< Interrupt on Wificore domain reset. */
#endif
#if NRF_RESETHUB_HAS_CELLULAR
    NRF_RESETHUB_INT_DOMAIN_RESET_CELLULAR_MASK    = (1UL << NRF_DOMAIN_CELLCORE),    /**< Interrupt on Cellular domain reset. */
    NRF_RESETHUB_INT_DOMAIN_RESET_CELL_DSP_MASK    = (1UL << NRF_DOMAIN_CELLDSP),     /**< Interrupt on Cellular DSP domain reset. */
    NRF_RESETHUB_INT_DOMAIN_RESET_CELL_RF_MASK     = (1UL << NRF_DOMAIN_CELLRF),      /**< Interrupt on Cellular RF domain reset. */
#endif
#if NRF_RESETHUB_HAS_ISIM
    NRF_RESETHUB_INT_DOMAIN_RESET_ISIM_MASK        = (1UL << NRF_DOMAIN_ISIMCORE),    /**< Interrupt on iSIM domain reset. */
#endif
} nrf_resethub_int_mask_t;

/** @brief Domain mask. */
typedef enum
{
    NRF_RESETHUB_DOMAIN_0_MASK  = RESETHUB_RESETMASK_DOMAIN0_Msk,   /**< Domain 0. */
    NRF_RESETHUB_DOMAIN_1_MASK  = RESETHUB_RESETMASK_DOMAIN1_Msk,   /**< Domain 1. */
    NRF_RESETHUB_DOMAIN_2_MASK  = RESETHUB_RESETMASK_DOMAIN2_Msk,   /**< Domain 2. */
    NRF_RESETHUB_DOMAIN_3_MASK  = RESETHUB_RESETMASK_DOMAIN3_Msk,   /**< Domain 3. */
#if NRF_RESETHUB_DOMAIN_COUNT > 4
    NRF_RESETHUB_DOMAIN_4_MASK  = RESETHUB_RESETMASK_DOMAIN4_Msk,   /**< Domain 4. */
    NRF_RESETHUB_DOMAIN_5_MASK  = RESETHUB_RESETMASK_DOMAIN5_Msk,   /**< Domain 5. */
    NRF_RESETHUB_DOMAIN_6_MASK  = RESETHUB_RESETMASK_DOMAIN6_Msk,   /**< Domain 6. */
    NRF_RESETHUB_DOMAIN_7_MASK  = RESETHUB_RESETMASK_DOMAIN7_Msk,   /**< Domain 7. */
#endif
#if NRF_RESETHUB_DOMAIN_COUNT > 8
    NRF_RESETHUB_DOMAIN_8_MASK  = RESETHUB_RESETMASK_DOMAIN8_Msk,   /**< Domain 8. */
    NRF_RESETHUB_DOMAIN_9_MASK  = RESETHUB_RESETMASK_DOMAIN9_Msk,   /**< Domain 9. */
    NRF_RESETHUB_DOMAIN_10_MASK = RESETHUB_RESETMASK_DOMAIN10_Msk, /**< Domain 10. */
#endif
#if NRF_RESETHUB_DOMAIN_COUNT > 11
    NRF_RESETHUB_DOMAIN_11_MASK = RESETHUB_RESETMASK_DOMAIN11_Msk, /**< Domain 11. */
    NRF_RESETHUB_DOMAIN_12_MASK = RESETHUB_RESETMASK_DOMAIN12_Msk, /**< Domain 12. */
    NRF_RESETHUB_DOMAIN_13_MASK = RESETHUB_RESETMASK_DOMAIN13_Msk, /**< Domain 13. */
    NRF_RESETHUB_DOMAIN_14_MASK = RESETHUB_RESETMASK_DOMAIN14_Msk, /**< Domain 14. */
    NRF_RESETHUB_DOMAIN_15_MASK = RESETHUB_RESETMASK_DOMAIN15_Msk, /**< Domain 15. */
#endif

    NRF_RESETHUB_DOMAIN_APPLICATION_MASK = (1UL << NRF_DOMAIN_APPLICATION), /**< Application domain. */
#if NRF_RESETHUB_HAS_NETWORK
    NRF_RESETHUB_DOMAIN_NETWORK_MASK     = (1UL << NRF_DOMAIN_RADIOCORE),   /**< Network domain. */
#endif
#if NRF_RESETHUB_HAS_CELLULAR
    NRF_RESETHUB_DOMAIN_CELLULAR_MASK    = (1UL << NRF_DOMAIN_CELLCORE),    /**< Cellular domain. */
    NRF_RESETHUB_DOMAIN_CELL_DSP_MASK    = (1UL << NRF_DOMAIN_CELLDSP),     /**< Cellular DSP domain. */
    NRF_RESETHUB_DOMAIN_CELL_RF_MASK     = (1UL << NRF_DOMAIN_CELLRF),      /**< Cellular RF domain. */
#endif
#if NRF_RESETHUB_HAS_ISIM
    NRF_RESETHUB_DOMAIN_ISIM_MASK        = (1UL << NRF_DOMAIN_ISIMCORE),    /**< iSIM domain. */
#endif
} nrf_resethub_domain_mask_t;

/** @brief Local reset reason mask. */
typedef enum
{
#if NRF_RESETHUB_HAS_WDT_RESET
    NRF_RESETHUB_RESETREAS_LOCAL_WDT0_MASK   = RESETHUB_RESETREAS_DOMAIN_WDT0_Msk,        /**< Reset from the local watchdog 0. */
    NRF_RESETHUB_RESETREAS_LOCAL_WDT1_MASK   = RESETHUB_RESETREAS_DOMAIN_WDT1_Msk,        /**< Reset from the local watchdog 1. */
#endif
#if NRF_RESETHUB_HAS_DOG_RESET
    NRF_RESETHUB_RESETREAS_LOCAL_DOG_MASK    = RESETHUB_RESETREAS_DOMAIN_DOG_Msk,         /**< Reset from the local watchdog. */
    NRF_RESETHUB_RESETREAS_LOCAL_DOGNS_MASK  = RESETHUB_RESETREAS_DOMAIN_DOGNS_Msk,       /**< Reset from the local non-secure watchdog. */
#endif
    NRF_RESETHUB_RESETREAS_LOCAL_SREQ_MASK   = RESETHUB_RESETREAS_DOMAIN_SREQ_Msk,        /**< Reset from the local soft reset request. */
    NRF_RESETHUB_RESETREAS_LOCAL_LOCKUP_MASK = RESETHUB_RESETREAS_DOMAIN_LOCKUP_Msk,      /**< Reset from local CPU lockup. */
#if NRF_RESETHUB_HAS_CROSSDOMAIN
    NRF_RESETHUB_RESETREAS_LOCAL_CROSS_MASK  = RESETHUB_RESETREAS_DOMAIN_CROSSDOMAIN_Msk, /**< Reset due to cross domain reset source. */
#endif
} nrf_resethub_resetreas_local_mask_t;

/** @brief Global reset reason mask. */
typedef enum
{
    NRF_RESETHUB_RESETREAS_GLOBAL_POR_MASK       = RESETHUB_RESETREAS_GLOBAL_RESETPOR_Msk,  /**< Reset from power on reset. */
    NRF_RESETHUB_RESETREAS_GLOBAL_PIN_MASK       = RESETHUB_RESETREAS_GLOBAL_RESETPIN_Msk,  /**< Reset from pin reset. */
    NRF_RESETHUB_RESETREAS_GLOBAL_DOG_MASK       = RESETHUB_RESETREAS_GLOBAL_DOG_Msk,       /**< Reset from the SysCtrl watchdog timer. */
    NRF_RESETHUB_RESETREAS_GLOBAL_CTRLAP_MASK    = RESETHUB_RESETREAS_GLOBAL_CTRLAP_Msk,    /**< Reset from CTRL-AP. */
    NRF_RESETHUB_RESETREAS_GLOBAL_SECSREQ_MASK   = RESETHUB_RESETREAS_GLOBAL_SECSREQ_Msk,   /**< Reset due to secure domain system reset request. */
    NRF_RESETHUB_RESETREAS_GLOBAL_SECWDT0_MASK   = RESETHUB_RESETREAS_GLOBAL_SECWDT0_Msk,   /**< Reset due to the first instance of secure domain watchdog timer. */
    NRF_RESETHUB_RESETREAS_GLOBAL_SECWDT1_MASK   = RESETHUB_RESETREAS_GLOBAL_SECWDT1_Msk,   /**< Reset due to the second instance of secure domain watchdog timer. */
    NRF_RESETHUB_RESETREAS_GLOBAL_SECLOCKUP_MASK = RESETHUB_RESETREAS_GLOBAL_SECLOCKUP_Msk, /**< Reset due to secure domain lockup. */
    NRF_RESETHUB_RESETREAS_GLOBAL_SECTAMPER_MASK = RESETHUB_RESETREAS_GLOBAL_SECTAMPER_Msk, /**< Reset due to secure domain tamper detected. */
    NRF_RESETHUB_RESETREAS_GLOBAL_GPIO_MASK      = RESETHUB_RESETREAS_GLOBAL_OFF_Msk,       /**< Reset due to wakeup from System OFF triggered by DETECT signal from GPIO. */
    NRF_RESETHUB_RESETREAS_GLOBAL_LPCOMP_MASK    = RESETHUB_RESETREAS_GLOBAL_LPCOMP_Msk,    /**< Reset due to wakeup from System OFF triggered by LPCOMP. */
    NRF_RESETHUB_RESETREAS_GLOBAL_DIF_MASK       = RESETHUB_RESETREAS_GLOBAL_DIF_Msk,       /**< Reset due to wakeup from System OFF triggered by entering debug interface mode. */
    NRF_RESETHUB_RESETREAS_GLOBAL_GRTC_MASK      = RESETHUB_RESETREAS_GLOBAL_GRTC_Msk,      /**< Reset due to wakeup from System OFF triggered by GRTC interrupt. */
    NRF_RESETHUB_RESETREAS_GLOBAL_NFC_MASK       = RESETHUB_RESETREAS_GLOBAL_NFC_Msk,       /**< Reset due to wakeup from System OFF triggered by NRF field detection in sense mode. */
    NRF_RESETHUB_RESETREAS_GLOBAL_VUSB_MASK      = RESETHUB_RESETREAS_GLOBAL_VUSB_Msk,      /**< Reset due to wakeup from System OFF triggered by VBUS rising into valid range. */
} nrf_resethub_resetreas_global_mask_t;

/**
 * @brief Function for activating the specified RESETHUB task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_resethub_task_trigger(NRF_RESETHUB_Type * p_reg,
                                                 nrf_resethub_task_t task);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_resethub_event_clear(NRF_RESETHUB_Type *  p_reg,
                                                nrf_resethub_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_resethub_event_check(NRF_RESETHUB_Type const * p_reg,
                                                nrf_resethub_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_resethub_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_resethub_int_enable(NRF_RESETHUB_Type * p_reg,
                                               uint32_t            mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_resethub_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_resethub_int_disable(NRF_RESETHUB_Type * p_reg,
                                                uint32_t            mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_resethub_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_resethub_int_enable_check(NRF_RESETHUB_Type const * p_reg,
                                                         uint32_t                  mask);

/**
 * @brief Function for getting the reset reason bitmask associated with specified domain.
 *
 * @note Unless cleared, the RESETREAS register is cumulative.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Domain to have reset reason returned.
 *
 * @return The mask of reset reasons constructed with @ref nrf_resethub_resetreas_local_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_resethub_resetreas_domain_get(NRF_RESETHUB_Type const * p_reg,
                                                             nrf_domain_t              domain);

/**
 * @brief Function for clearing the selected reset reason bitmask associated with specified domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Domain to have reset reason cleared.
 * @param[in] mask   The mask constructed from @ref nrf_resethub_resetreas_local_mask_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_resethub_resetreas_domain_clear(NRF_RESETHUB_Type *   p_reg,
                                                           nrf_domain_t          domain,
                                                           uint32_t              mask);

/**
 * @brief Function for getting the global reset reason bitmask.
 *
 * @note Unless cleared, the RESETREAS register is cumulative.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The mask of reset reasons constructed with @ref nrf_resethub_resetreas_global_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_resethub_resetreas_global_get(NRF_RESETHUB_Type const * p_reg);

/**
 * @brief Function for clearing the selected global reset reason bitmask.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  The mask constructed from @ref nrf_resethub_resetreas_global_mask_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_resethub_resetreas_global_clear(NRF_RESETHUB_Type *   p_reg,
                                                           uint32_t              mask);

/**
 * @brief Function for getting the reset request masking bitmask.
 *
 * @note 1 signifies the reset request is unmasked, 0 signifies it is masked.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The mask of reset request masking with @ref nrf_resethub_domain_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_resethub_reset_mask_get(NRF_RESETHUB_Type const * p_reg);

/**
 * @brief Function for setting the reset request masking bitmask.
 *
 * @note Setting value to 1 will unmask the reset request, 0 will mask the reset request.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  The mask constructed from @ref nrf_resethub_domain_mask_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_resethub_reset_mask_set(NRF_RESETHUB_Type *   p_reg,
                                                   uint32_t              mask);

#if NRF_RESETHUB_HAS_CROSSDOMAIN
/**
 * @brief Function for getting the cross domain reset enable bitmask.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The mask of reset request with @ref nrf_resethub_domain_mask_t.
 */
NRF_STATIC_INLINE uint32_t nrf_resethub_cross_domain_reset_get(NRF_RESETHUB_Type const * p_reg);

/**
 * @brief Function for setting the cross domain reset enable bitmask.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  The mask constructed from @ref nrf_resethub_domain_mask_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_resethub_cross_domain_reset_set(NRF_RESETHUB_Type *   p_reg,
                                                           uint32_t              mask);
#endif

/**
 * @brief Function for getting the general purpose retention register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Value of general purpose retention register.
 */
NRF_STATIC_INLINE uint8_t nrf_resethub_gpregret_get(NRF_RESETHUB_Type const * p_reg);

/**
 * @brief Function for setting the general purpose retention register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] data  Value to be written to the general purpose retention register.
 */
NRF_STATIC_INLINE void nrf_resethub_gpregret_set(NRF_RESETHUB_Type * p_reg, uint8_t data);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_resethub_task_trigger(NRF_RESETHUB_Type * p_reg,
                                                 nrf_resethub_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE void nrf_resethub_event_clear(NRF_RESETHUB_Type *  p_reg,
                                                nrf_resethub_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_resethub_event_check(NRF_RESETHUB_Type const * p_reg,
                                                nrf_resethub_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE void nrf_resethub_int_enable(NRF_RESETHUB_Type * p_reg,
                                               uint32_t            mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_resethub_int_disable(NRF_RESETHUB_Type * p_reg,
                                                uint32_t            mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_resethub_int_enable_check(NRF_RESETHUB_Type const * p_reg,
                                                         uint32_t                  mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_resethub_resetreas_domain_get(NRF_RESETHUB_Type const * p_reg,
                                                             nrf_domain_t              domain)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    return p_reg->RESETREAS.DOMAIN[domain];
}

NRF_STATIC_INLINE void nrf_resethub_resetreas_domain_clear(NRF_RESETHUB_Type *   p_reg,
                                                           nrf_domain_t          domain,
                                                           uint32_t              mask)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    p_reg->RESETREAS.DOMAIN[domain] = mask;
}

NRF_STATIC_INLINE uint32_t nrf_resethub_resetreas_global_get(NRF_RESETHUB_Type const * p_reg)
{
    return p_reg->RESETREAS.GLOBAL;
}

NRF_STATIC_INLINE void nrf_resethub_resetreas_global_clear(NRF_RESETHUB_Type *   p_reg,
                                                           uint32_t              mask)
{
    p_reg->RESETREAS.GLOBAL = mask;
}

NRF_STATIC_INLINE uint32_t nrf_resethub_reset_mask_get(NRF_RESETHUB_Type const * p_reg)
{
    return p_reg->RESETMASK;
}

NRF_STATIC_INLINE void nrf_resethub_reset_mask_set(NRF_RESETHUB_Type *   p_reg,
                                                   uint32_t              mask)
{
    p_reg->RESETMASK = mask;
}

#if NRF_RESETHUB_HAS_CROSSDOMAIN
NRF_STATIC_INLINE uint32_t nrf_resethub_cross_domain_reset_get(NRF_RESETHUB_Type const * p_reg)
{
    return p_reg->CROSSDOMAINRESET;
}

NRF_STATIC_INLINE void nrf_resethub_cross_domain_reset_set(NRF_RESETHUB_Type *   p_reg,
                                                           uint32_t              mask)
{
    p_reg->CROSSDOMAINRESET = mask;
}
#endif

NRF_STATIC_INLINE uint8_t nrf_resethub_gpregret_get(NRF_RESETHUB_Type const * p_reg)
{
    return (uint8_t)p_reg->GPREGRET;
}

NRF_STATIC_INLINE void nrf_resethub_gpregret_set(NRF_RESETHUB_Type * p_reg, uint8_t data)
{
    p_reg->GPREGRET = data;
}

#endif

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_RESETHUB_H__
