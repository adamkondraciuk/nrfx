/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_GRCCONF_H__
#define NRF_GRCCONF_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_grcconf_hal GRCCONF HAL
 * @{
 * @ingroup nrf_grcconf
 * @brief   Hardware access layer for managing Global Resource Controller (GRCCONF).
 */

/** @brief Number of events consolidated with IRQ0. */
#define NRF_GRCCONF_EVENTS_GRCPERIPH0_COUNT GRCCONF_EVENTS_GRCPERIPH0_MaxCount

/** @brief Number of events consolidated with IRQ1. */
#define NRF_GRCCONF_EVENTS_GRCPERIPH1_COUNT GRCCONF_EVENTS_GRCPERIPH1_MaxCount

/** @brief Number of all events consolidated with IRQ0 and IRQ1. */
#define NRF_GRCCONF_EVENTS_GRCPERIPH_TOTAL_COUNT (NRF_GRCCONF_EVENTS_GRCPERIPH0_COUNT + \
                                                  NRF_GRCCONF_EVENTS_GRCPERIPH1_COUNT)

/** @brief GRCCONF events. */
typedef enum
{
    NRF_GRCCONF_EVENT_GRCPERIPH0_0        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[0]),     /**< GRC peripheral 0 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_1        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[1]),     /**< GRC peripheral 1 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_2        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[2]),     /**< GRC peripheral 2 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_3        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[3]),     /**< GRC peripheral 3 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_4        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[4]),     /**< GRC peripheral 4 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_5        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[5]),     /**< GRC peripheral 5 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_6        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[6]),     /**< GRC peripheral 6 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_7        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[7]),     /**< GRC peripheral 7 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_8        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[8]),     /**< GRC peripheral 8 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_9        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[9]),     /**< GRC peripheral 9 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_10       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[10]),    /**< GRC peripheral 10 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_11       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[11]),    /**< GRC peripheral 11 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_12       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[12]),    /**< GRC peripheral 12 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_13       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[13]),    /**< GRC peripheral 13 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_14       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[14]),    /**< GRC peripheral 14 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_15       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[15]),    /**< GRC peripheral 15 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_16       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[16]),    /**< GRC peripheral 16 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_17       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[17]),    /**< GRC peripheral 17 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_18       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[18]),    /**< GRC peripheral 18 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_19       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[19]),    /**< GRC peripheral 19 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_20       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[20]),    /**< GRC peripheral 20 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_21       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[21]),    /**< GRC peripheral 21 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_22       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[22]),    /**< GRC peripheral 22 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_23       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[23]),    /**< GRC peripheral 23 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_24       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[24]),    /**< GRC peripheral 24 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_25       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[25]),    /**< GRC peripheral 25 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_26       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[26]),    /**< GRC peripheral 26 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_27       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[27]),    /**< GRC peripheral 27 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_28       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[28]),    /**< GRC peripheral 28 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_29       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[29]),    /**< GRC peripheral 29 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_30       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[30]),    /**< GRC peripheral 30 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH0_31       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[31]),    /**< GRC peripheral 31 interrupt triggered. */

    NRF_GRCCONF_EVENT_GRCPERIPH1_0        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[0]),     /**< GRC peripheral 32 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_1        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[1]),     /**< GRC peripheral 33 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_2        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[2]),     /**< GRC peripheral 34 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_3        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[3]),     /**< GRC peripheral 35 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_4        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[4]),     /**< GRC peripheral 36 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_5        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[5]),     /**< GRC peripheral 37 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_6        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[6]),     /**< GRC peripheral 38 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_7        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[7]),     /**< GRC peripheral 39 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_8        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[8]),     /**< GRC peripheral 40 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_9        = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[9]),     /**< GRC peripheral 41 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_10       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[10]),    /**< GRC peripheral 42 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_11       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[11]),    /**< GRC peripheral 43 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_12       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[12]),    /**< GRC peripheral 44 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_13       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[13]),    /**< GRC peripheral 45 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_14       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[14]),    /**< GRC peripheral 46 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_15       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[15]),    /**< GRC peripheral 47 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_16       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[16]),    /**< GRC peripheral 48 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_17       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[17]),    /**< GRC peripheral 49 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_18       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[18]),    /**< GRC peripheral 50 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_19       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[19]),    /**< GRC peripheral 51 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_20       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[20]),    /**< GRC peripheral 52 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_21       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[21]),    /**< GRC peripheral 53 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_22       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[22]),    /**< GRC peripheral 54 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_23       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[23]),    /**< GRC peripheral 55 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_24       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[24]),    /**< GRC peripheral 56 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_25       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[25]),    /**< GRC peripheral 57 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_26       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[26]),    /**< GRC peripheral 58 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_27       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[27]),    /**< GRC peripheral 59 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_28       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[28]),    /**< GRC peripheral 60 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_29       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[29]),    /**< GRC peripheral 61 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_30       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[30]),    /**< GRC peripheral 62 interrupt triggered. */
    NRF_GRCCONF_EVENT_GRCPERIPH1_31       = offsetof(NRF_GRCCONF_Type, EVENTS_GRCPERIPH1[31]),    /**< GRC peripheral 63 interrupt triggered. */

    NRF_GRCCONF_EVENT_SYSTEMOFF_READY     = offsetof(NRF_GRCCONF_Type, EVENTS_SYSTEMOFFREADY),    /**< Device ready to go to System OFF. */
    NRF_GRCCONF_EVENT_SYSTEMOFF_NOT_READY = offsetof(NRF_GRCCONF_Type, EVENTS_SYSTEMOFFNOTREADY), /**< Device not ready to go to System OFF. */
} nrf_grcconf_event_t;

/** @brief GRCCONF interrupt masks. */
typedef enum
{
    NRF_GRCCONF_INT_TRIGGERED_0_MASK         = GRCCONF_INTEN00_GRCPERIPH00_Msk,       /**< Interrupt on GRC peripheral 0 event. */
    NRF_GRCCONF_INT_TRIGGERED_1_MASK         = GRCCONF_INTEN00_GRCPERIPH01_Msk,       /**< Interrupt on GRC peripheral 1 event. */
    NRF_GRCCONF_INT_TRIGGERED_2_MASK         = GRCCONF_INTEN00_GRCPERIPH02_Msk,       /**< Interrupt on GRC peripheral 2 event. */
    NRF_GRCCONF_INT_TRIGGERED_3_MASK         = GRCCONF_INTEN00_GRCPERIPH03_Msk,       /**< Interrupt on GRC peripheral 3 event. */
    NRF_GRCCONF_INT_TRIGGERED_4_MASK         = GRCCONF_INTEN00_GRCPERIPH04_Msk,       /**< Interrupt on GRC peripheral 4 event. */
    NRF_GRCCONF_INT_TRIGGERED_5_MASK         = GRCCONF_INTEN00_GRCPERIPH05_Msk,       /**< Interrupt on GRC peripheral 5 event. */
    NRF_GRCCONF_INT_TRIGGERED_6_MASK         = GRCCONF_INTEN00_GRCPERIPH06_Msk,       /**< Interrupt on GRC peripheral 6 event. */
    NRF_GRCCONF_INT_TRIGGERED_7_MASK         = GRCCONF_INTEN00_GRCPERIPH07_Msk,       /**< Interrupt on GRC peripheral 7 event. */
    NRF_GRCCONF_INT_TRIGGERED_8_MASK         = GRCCONF_INTEN00_GRCPERIPH08_Msk,       /**< Interrupt on GRC peripheral 8 event. */
    NRF_GRCCONF_INT_TRIGGERED_9_MASK         = GRCCONF_INTEN00_GRCPERIPH09_Msk,       /**< Interrupt on GRC peripheral 9 event. */
    NRF_GRCCONF_INT_TRIGGERED_10_MASK        = GRCCONF_INTEN00_GRCPERIPH010_Msk,      /**< Interrupt on GRC peripheral 10 event. */
    NRF_GRCCONF_INT_TRIGGERED_11_MASK        = GRCCONF_INTEN00_GRCPERIPH011_Msk,      /**< Interrupt on GRC peripheral 11 event. */
    NRF_GRCCONF_INT_TRIGGERED_12_MASK        = GRCCONF_INTEN00_GRCPERIPH012_Msk,      /**< Interrupt on GRC peripheral 12 event. */
    NRF_GRCCONF_INT_TRIGGERED_13_MASK        = GRCCONF_INTEN00_GRCPERIPH013_Msk,      /**< Interrupt on GRC peripheral 13 event. */
    NRF_GRCCONF_INT_TRIGGERED_14_MASK        = GRCCONF_INTEN00_GRCPERIPH014_Msk,      /**< Interrupt on GRC peripheral 14 event. */
    NRF_GRCCONF_INT_TRIGGERED_15_MASK        = GRCCONF_INTEN00_GRCPERIPH015_Msk,      /**< Interrupt on GRC peripheral 15 event. */
    NRF_GRCCONF_INT_TRIGGERED_16_MASK        = GRCCONF_INTEN00_GRCPERIPH016_Msk,      /**< Interrupt on GRC peripheral 16 event. */
    NRF_GRCCONF_INT_TRIGGERED_17_MASK        = GRCCONF_INTEN00_GRCPERIPH017_Msk,      /**< Interrupt on GRC peripheral 17 event. */
    NRF_GRCCONF_INT_TRIGGERED_18_MASK        = GRCCONF_INTEN00_GRCPERIPH018_Msk,      /**< Interrupt on GRC peripheral 18 event. */
    NRF_GRCCONF_INT_TRIGGERED_19_MASK        = GRCCONF_INTEN00_GRCPERIPH019_Msk,      /**< Interrupt on GRC peripheral 19 event. */
    NRF_GRCCONF_INT_TRIGGERED_20_MASK        = GRCCONF_INTEN00_GRCPERIPH020_Msk,      /**< Interrupt on GRC peripheral 20 event. */
    NRF_GRCCONF_INT_TRIGGERED_21_MASK        = GRCCONF_INTEN00_GRCPERIPH021_Msk,      /**< Interrupt on GRC peripheral 21 event. */
    NRF_GRCCONF_INT_TRIGGERED_22_MASK        = GRCCONF_INTEN00_GRCPERIPH022_Msk,      /**< Interrupt on GRC peripheral 22 event. */
    NRF_GRCCONF_INT_TRIGGERED_23_MASK        = GRCCONF_INTEN00_GRCPERIPH023_Msk,      /**< Interrupt on GRC peripheral 23 event. */
    NRF_GRCCONF_INT_TRIGGERED_24_MASK        = GRCCONF_INTEN00_GRCPERIPH024_Msk,      /**< Interrupt on GRC peripheral 24 event. */
    NRF_GRCCONF_INT_TRIGGERED_25_MASK        = GRCCONF_INTEN00_GRCPERIPH025_Msk,      /**< Interrupt on GRC peripheral 25 event. */
    NRF_GRCCONF_INT_TRIGGERED_26_MASK        = GRCCONF_INTEN00_GRCPERIPH026_Msk,      /**< Interrupt on GRC peripheral 26 event. */
    NRF_GRCCONF_INT_TRIGGERED_27_MASK        = GRCCONF_INTEN00_GRCPERIPH027_Msk,      /**< Interrupt on GRC peripheral 27 event. */
    NRF_GRCCONF_INT_TRIGGERED_28_MASK        = GRCCONF_INTEN00_GRCPERIPH028_Msk,      /**< Interrupt on GRC peripheral 28 event. */
    NRF_GRCCONF_INT_TRIGGERED_29_MASK        = GRCCONF_INTEN00_GRCPERIPH029_Msk,      /**< Interrupt on GRC peripheral 29 event. */
    NRF_GRCCONF_INT_TRIGGERED_30_MASK        = GRCCONF_INTEN00_GRCPERIPH030_Msk,      /**< Interrupt on GRC peripheral 30 event. */
    NRF_GRCCONF_INT_TRIGGERED_31_MASK        = GRCCONF_INTEN00_GRCPERIPH031_Msk,      /**< Interrupt on GRC peripheral 31 event. */

    NRF_GRCCONF_INT_SYSTEMOFF_READY_MASK     = GRCCONF_INTEN02_SYSTEMOFFREADY_Msk,    /**< Interrupt on device System OFF readiness event.*/
    NRF_GRCCONF_INT_SYSTEMOFF_NOT_READY_MASK = GRCCONF_INTEN02_SYSTEMOFFNOTREADY_Msk, /**< Interrupt on device System OFF not readiness event.*/
} nrf_grcconf_int_mask_t;

/**
 * @brief GRCCONF chip configuration readiness status.
 * @details It's used to notify when the configuration is applied from FICR.
 */
typedef enum
{
    NRF_GRCCONF_CONF_NOT_READY = GRCCONF_CHIPCONF_CONFREADY_NotReady, /**< Chip configuration is not ready. */
    NRF_GRCCONF_CONF_READY     = GRCCONF_CHIPCONF_CONFREADY_Ready,    /**< Chip configuration is ready. */
} nrf_grcconf_conf_t;

/**
 * @brief GRCCONF trim configuration readiness status.
 * @details When the pre-calibration is applied, this bit is set.
 */
typedef enum
{
    NRF_GRCCONF_TRIM_NOT_READY = GRCCONF_CHIPCONF_TRIMREADY_NotReady, /**< Trim configuration is not ready. */
    NRF_GRCCONF_TRIM_READY     = GRCCONF_CHIPCONF_TRIMREADY_Ready,    /**< Trim configuration is ready. */
} nrf_grcconf_trim_t;

/**
 * @brief GRCCONF ramp up status.
 * @details When power up sequence is completed, this bit is set.
 */
typedef enum
{
    NRF_GRCCONF_RAMP_UP_NOT_DONE = GRCCONF_CHIPCONF_RAMPUP_NotDone, /**< Ramp up is done. */
    NRF_GRCCONF_RAMP_UP_DONE     = GRCCONF_CHIPCONF_RAMPUP_Done,    /**< Ramp up is not done. */
} nrf_grcconf_ramp_up_t;

/**
 * @brief Function for retrieving the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event GRCCONF event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_grcconf_event_address_get(NRF_GRCCONF_Type const * p_reg,
                                                         nrf_grcconf_event_t      event);

/**
 * @brief Function for getting the specified GRCCONF TRIGGERED event.
 *
 * @param[in] index Event index.
 *
 * @return The specified GRCCONF TRIGGERED event.
 */
NRF_STATIC_INLINE nrf_grcconf_event_t nrf_grcconf_triggered_event_get(uint8_t index);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_grcconf_event_clear(NRF_GRCCONF_Type * p_reg, nrf_grcconf_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_grcconf_event_check(NRF_GRCCONF_Type const * p_reg,
                                               nrf_grcconf_event_t      event);

/**
 * @brief Function for enabling the specified interrupt.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be enabled.
 * @param[in] mask      Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_grcconf_int_enable(NRF_GRCCONF_Type * p_reg,
                                              uint8_t            group_idx,
                                              uint32_t           mask);

/**
 * @brief Function for disabling the specified interrupt.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be disabled.
 * @param[in] mask      Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_grcconf_int_disable(NRF_GRCCONF_Type * p_reg,
                                               uint8_t            group_idx,
                                               uint32_t           mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 * @param[in] mask      Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_grcconf_int_enable_check(NRF_GRCCONF_Type const * p_reg,
                                                        uint8_t                  group_idx,
                                                        uint32_t                 mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @details States of pending interrupt are saved as a bitmask.
 *          One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 *
 * @return Bitmask with information about pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_grcconf_int_pending_get(NRF_GRCCONF_Type const * p_reg,
                                                       uint8_t                  group_idx);

/**
 * @brief Function for checking whether the chip configuration is completed.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return True if the chip configuration is completed, false otherwise.
 */
NRF_STATIC_INLINE bool nrf_grcconf_confready_check(NRF_GRCCONF_Type const * p_reg);

/**
 * @brief Function for checking whether the trim configuration is completed.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return True if the trim configuration is completed, false otherwise.
 */
NRF_STATIC_INLINE bool nrf_grcconf_trimready_check(NRF_GRCCONF_Type const * p_reg);

/**
 * @brief Function for checking whether the ramp up is done.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return True if the ramp up is done, false otherwise.
 */
NRF_STATIC_INLINE bool nrf_grcconf_rampup_check(NRF_GRCCONF_Type const * p_reg);

/**
 * @brief Function for going into System OFF mode.
 *
 * @details Enters System OFF, when PCGC acknowledge the System OFF request.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_grcconf_system_off(NRF_GRCCONF_Type * p_reg);

/**
 * @brief Function for forcing going into System OFF mode.
 *
 * @details Enters System OFF without waiting for PCGC or power domains.
 *          If @p now is true, it does not wait for voltage regulators either.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] now   True if System OFF shall be entered immediately, false otherwise.
 */
NRF_STATIC_INLINE void nrf_grcconf_force_system_off(NRF_GRCCONF_Type * p_reg, bool now);

/**
 * @brief Function for retrieving power domain readiness of going to System OFF.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information which power domain is ready to go to System OFF.
 */
NRF_STATIC_INLINE uint32_t nrf_grcconf_systemoff_stat_get(NRF_GRCCONF_Type const * p_reg);

/**
 * @brief Function for setting System OFF prevention bit for specified domains.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of power domain which prevents System OFF.
 */
NRF_STATIC_INLINE void nrf_grcconf_systemoff_stat_set(NRF_GRCCONF_Type * p_reg, uint32_t mask);

/**
 * @brief Function for retrieving power domain request mask.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 *
 * @return Bitmask of domains that are kept on when the corresponding GRC interrupt is active.
 */
NRF_STATIC_INLINE uint32_t nrf_grcconf_grc_forceon_get(NRF_GRCCONF_Type const * p_reg,
                                                       uint8_t                  group_idx);

/**
 * @brief Function for setting power domain request mask.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 * @param[in] mask      Mask with power domain which preventing System OFF.
 */
NRF_STATIC_INLINE void nrf_grcconf_grc_forceon_set(NRF_GRCCONF_Type * p_reg,
                                                   uint8_t            group_idx,
                                                   uint32_t           mask);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_grcconf_event_address_get(NRF_GRCCONF_Type const * p_reg,
                                                         nrf_grcconf_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_grcconf_event_clear(NRF_GRCCONF_Type *  p_reg,
                                               nrf_grcconf_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_grcconf_event_check(NRF_GRCCONF_Type const * p_reg,
                                               nrf_grcconf_event_t      event)
{
    return (bool)*((volatile uint32_t *)((uint8_t *)p_reg + event));
}

NRF_STATIC_INLINE void nrf_grcconf_int_enable(NRF_GRCCONF_Type * p_reg,
                                              uint8_t            group_idx,
                                              uint32_t           mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->INTENSET00 |= mask;
            break;
        case 1:
            p_reg->INTENSET01 |= mask;
            break;
        case 2:
            p_reg->INTENSET02 |= mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_grcconf_int_disable(NRF_GRCCONF_Type * p_reg,
                                               uint8_t            group_idx,
                                               uint32_t           mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->INTENCLR00 |= mask;
            break;
        case 1:
            p_reg->INTENCLR01 |= mask;
            break;
        case 2:
            p_reg->INTENCLR02 |= mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_grcconf_int_enable_check(NRF_GRCCONF_Type const * p_reg,
                                                        uint8_t                  group_idx,
                                                        uint32_t                 mask)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTENSET00 & mask;
        case 1:
            return p_reg->INTENSET01 & mask;
        case 2:
            return p_reg->INTENSET02 & mask;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE uint32_t nrf_grcconf_int_pending_get(NRF_GRCCONF_Type const * p_reg,
                                                       uint8_t                  group_idx)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTPEND00;
        case 1:
            return p_reg->INTPEND01;
        case 2:
            return p_reg->INTPEND02;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE nrf_grcconf_event_t nrf_grcconf_triggered_event_get(uint8_t index)
{
    if (index < NRF_GRCCONF_EVENTS_GRCPERIPH0_COUNT)
    {
        return (nrf_grcconf_event_t)NRFX_OFFSETOF(NRF_GRCCONF_Type, EVENTS_GRCPERIPH0[index]);
    }
    else if (index < NRF_GRCCONF_EVENTS_GRCPERIPH_TOTAL_COUNT)
    {
        return (nrf_grcconf_event_t)NRFX_OFFSETOF(NRF_GRCCONF_Type,
                                                  EVENTS_GRCPERIPH1[index -
                                                                    NRF_GRCCONF_EVENTS_GRCPERIPH0_COUNT]);
    }
    else
    {
        NRFX_ASSERT(false);
        return 0;
    }
}

NRF_STATIC_INLINE bool nrf_grcconf_confready_check(NRF_GRCCONF_Type const * p_reg)
{
    return p_reg->CHIPCONF & GRCCONF_CHIPCONF_CONFREADY_Msk;
}

NRF_STATIC_INLINE bool nrf_grcconf_trimready_check(NRF_GRCCONF_Type const * p_reg)
{
    return p_reg->CHIPCONF & GRCCONF_CHIPCONF_TRIMREADY_Msk;
}

NRF_STATIC_INLINE bool nrf_grcconf_rampup_check(NRF_GRCCONF_Type const * p_reg)
{
    return p_reg->CHIPCONF & GRCCONF_CHIPCONF_RAMPUP_Msk;
}

NRF_STATIC_INLINE void nrf_grcconf_system_off(NRF_GRCCONF_Type * p_reg)
{
    p_reg->SYSTEMOFF =
        (GRCCONF_SYSTEMOFF_SYSTEMOFF_Enter
         << GRCCONF_SYSTEMOFF_SYSTEMOFF_Pos) & GRCCONF_SYSTEMOFF_SYSTEMOFF_Msk;
}

NRF_STATIC_INLINE void nrf_grcconf_force_system_off(NRF_GRCCONF_Type * p_reg, bool now)
{
#if !defined(GRCCONF_SYSTEMOFF_FORCESYSTEMOFF_Msk)
    (void)now;
    p_reg->SYSTEMOFF =
        (GRCCONF_SYSTEMOFF_FORCESYSTEMOFFNOW_Force
         << GRCCONF_SYSTEMOFF_FORCESYSTEMOFFNOW_Pos) & GRCCONF_SYSTEMOFF_FORCESYSTEMOFFNOW_Msk;
#else
    p_reg->SYSTEMOFF =
        now ? (GRCCONF_SYSTEMOFF_FORCESYSTEMOFFNOW_Force
               << GRCCONF_SYSTEMOFF_FORCESYSTEMOFFNOW_Pos) &
        GRCCONF_SYSTEMOFF_FORCESYSTEMOFFNOW_Msk :
              (GRCCONF_SYSTEMOFF_FORCESYSTEMOFF_Force
         << GRCCONF_SYSTEMOFF_FORCESYSTEMOFF_Pos) & GRCCONF_SYSTEMOFF_FORCESYSTEMOFF_Msk;
#endif
}

NRF_STATIC_INLINE uint32_t nrf_grcconf_systemoff_stat_get(NRF_GRCCONF_Type const * p_reg)
{
    return p_reg->SYSTEMOFFSTAT;
}

NRF_STATIC_INLINE void nrf_grcconf_systemoff_stat_set(NRF_GRCCONF_Type * p_reg, uint32_t mask)
{
    p_reg->SYSTEMOFFSTAT = mask;
}

NRF_STATIC_INLINE uint32_t nrf_grcconf_grc_forceon_get(NRF_GRCCONF_Type const * p_reg,
                                                       uint8_t                  group_idx)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->GRCFORCEON.MASK0;
        case 1:
            return p_reg->GRCFORCEON.MASK1;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_grcconf_grc_forceon_set(NRF_GRCCONF_Type * p_reg,
                                                   uint8_t            group_idx,
                                                   uint32_t           mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->GRCFORCEON.MASK0 = mask;
            break;
        case 1:
            p_reg->GRCFORCEON.MASK1 = mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_GRCCONF_H__
