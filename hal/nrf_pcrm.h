/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_PCRM_H__
#define NRF_PCRM_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_pcrm_hal PCRM HAL
 * @{
 * @ingroup nrf_pcrm
 * @brief   Hardware access layer for managing Power and Clock Resource Manager (PCRM).
 */

/** @brief Symbol specifying the maximum number of available @p REQUEST_RISING events. */
#define NRF_PCRM_EVENTS_REQUEST_RISING_COUNT PCRM_EVENTS_REQUESTRISING_MaxCount

/** @brief Symbol specifying the maximum number of available @p REQUEST_FALLING events. */
#define NRF_PCRM_EVENTS_REQUEST_FALLING_COUNT PCRM_EVENTS_REQUESTFALLING_MaxCount

/** @brief Symbol specifying the maximum number of available @p LOAD_CHANGE_RAIL events. */
#define NRF_PCRM_EVENTS_LOAD_CHANGE_RAIL_COUNT PCRM_EVENTS_LOADCHANGERAIL_MaxCount

/** @brief Symbol specifying the number of all events combined together. */
#define NRF_PCRM_EVENTS_TOTAL_COUNT (NRF_PCRM_EVENTS_REQUEST_RISING_COUNT  + \
                                     NRF_PCRM_EVENTS_REQUEST_FALLING_COUNT + \
                                     NRF_PCRM_EVENTS_LOAD_CHANGE_RAIL_COUNT)

/** @brief Symbol specifying the number of available consumers. */
#define NRF_PCRM_CONSUMERS_COUNT PCRM_CONFIG_LOAD_MaxCount

/** @brief Symbol specifying the number of available rails. */
#define NRF_PCRM_RAILS_COUNT PCRM_RAIL_STATUS_MaxCount

/** @brief PCRM events. */
typedef enum
{
    NRF_PCRM_EVENT_REQUEST_RISING_0    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[0]),   ///< PCRM REQUEST_RISING[0] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_1    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[1]),   ///< PCRM REQUEST_RISING[1] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_2    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[2]),   ///< PCRM REQUEST_RISING[2] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_3    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[3]),   ///< PCRM REQUEST_RISING[3] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_4    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[4]),   ///< PCRM REQUEST_RISING[4] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_5    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[5]),   ///< PCRM REQUEST_RISING[5] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_6    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[6]),   ///< PCRM REQUEST_RISING[6] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_7    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[7]),   ///< PCRM REQUEST_RISING[7] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_8    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[8]),   ///< PCRM REQUEST_RISING[8] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_9    = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[9]),   ///< PCRM REQUEST_RISING[9] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_10   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[10]),  ///< PCRM REQUEST_RISING[10] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_11   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[11]),  ///< PCRM REQUEST_RISING[11] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_12   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[12]),  ///< PCRM REQUEST_RISING[12] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_13   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[13]),  ///< PCRM REQUEST_RISING[13] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_14   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[14]),  ///< PCRM REQUEST_RISING[14] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_15   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[15]),  ///< PCRM REQUEST_RISING[15] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_16   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[16]),  ///< PCRM REQUEST_RISING[16] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_17   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[17]),  ///< PCRM REQUEST_RISING[17] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_18   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[18]),  ///< PCRM REQUEST_RISING[18] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_19   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[19]),  ///< PCRM REQUEST_RISING[19] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_20   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[20]),  ///< PCRM REQUEST_RISING[20] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_21   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[21]),  ///< PCRM REQUEST_RISING[21] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_22   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[22]),  ///< PCRM REQUEST_RISING[22] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_23   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[23]),  ///< PCRM REQUEST_RISING[23] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_24   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[24]),  ///< PCRM REQUEST_RISING[24] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_25   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[25]),  ///< PCRM REQUEST_RISING[25] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_26   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[26]),  ///< PCRM REQUEST_RISING[26] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_27   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[27]),  ///< PCRM REQUEST_RISING[27] event generated. */
#if !defined(NRF54H20_XXAA)
    NRF_PCRM_EVENT_REQUEST_RISING_28   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[28]),  ///< PCRM REQUEST_RISING[28] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_29   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[29]),  ///< PCRM REQUEST_RISING[29] event generated. */
#if !defined(NRF9230_ENGA_XXAA)
    NRF_PCRM_EVENT_REQUEST_RISING_30   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[30]),  ///< PCRM REQUEST_RISING[30] event generated. */
    NRF_PCRM_EVENT_REQUEST_RISING_31   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTRISING[31]),  ///< PCRM REQUEST_RISING[31] event generated. */
#endif
#endif

    NRF_PCRM_EVENT_REQUEST_FALLING_0   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[0]),  ///< PCRM REQUEST_FALLING[0] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_1   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[1]),  ///< PCRM REQUEST_FALLING[1] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_2   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[2]),  ///< PCRM REQUEST_FALLING[2] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_3   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[3]),  ///< PCRM REQUEST_FALLING[3] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_4   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[4]),  ///< PCRM REQUEST_FALLING[4] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_5   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[5]),  ///< PCRM REQUEST_FALLING[5] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_6   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[6]),  ///< PCRM REQUEST_FALLING[6] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_7   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[7]),  ///< PCRM REQUEST_FALLING[7] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_8   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[8]),  ///< PCRM REQUEST_FALLING[8] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_9   = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[9]),  ///< PCRM REQUEST_FALLING[9] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_10  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[10]), ///< PCRM REQUEST_FALLING[10] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_11  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[11]), ///< PCRM REQUEST_FALLING[11] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_12  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[12]), ///< PCRM REQUEST_FALLING[12] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_13  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[13]), ///< PCRM REQUEST_FALLING[13] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_14  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[14]), ///< PCRM REQUEST_FALLING[14] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_15  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[15]), ///< PCRM REQUEST_FALLING[15] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_16  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[16]), ///< PCRM REQUEST_FALLING[16] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_17  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[17]), ///< PCRM REQUEST_FALLING[17] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_18  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[18]), ///< PCRM REQUEST_FALLING[18] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_19  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[19]), ///< PCRM REQUEST_FALLING[19] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_20  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[20]), ///< PCRM REQUEST_FALLING[20] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_21  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[21]), ///< PCRM REQUEST_FALLING[21] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_22  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[22]), ///< PCRM REQUEST_FALLING[22] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_23  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[23]), ///< PCRM REQUEST_FALLING[23] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_24  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[24]), ///< PCRM REQUEST_FALLING[24] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_25  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[25]), ///< PCRM REQUEST_FALLING[25] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_26  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[26]), ///< PCRM REQUEST_FALLING[26] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_27  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[27]), ///< PCRM REQUEST_FALLING[27] event generated. */
#if !defined(NRF54H20_XXAA)
    NRF_PCRM_EVENT_REQUEST_FALLING_28  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[28]), ///< PCRM REQUEST_FALLING[28] event generated. */
    NRF_PCRM_EVENT_REQUEST_FALLING_29  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[29]), ///< PCRM REQUEST_FALLING[29] event generated. */
#if !defined(NRF9230_ENGA_XXAA)
    NRF_PCRM_EVENT_REQUEST_FALLING_30  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[30]), ///< PCRM REQUEST_FALLING[30] event generated. */
#if !defined(NRF7140_XXAA)
    NRF_PCRM_EVENT_REQUEST_FALLING_31  = offsetof(NRF_PCRM_Type, EVENTS_REQUESTFALLING[31]), ///< PCRM REQUEST_FALLING[31] event generated. */
#endif
#endif
#endif

    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_0  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[0]),  ///< PCRM LOAD_CHANGE_RAIL[0] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_1  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[1]),  ///< PCRM LOAD_CHANGE_RAIL[1] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_2  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[2]),  ///< PCRM LOAD_CHANGE_RAIL[2] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_3  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[3]),  ///< PCRM LOAD_CHANGE_RAIL[3] event generated. */
#if !(defined(NRF7140_XXAA) || defined(NRF54H20_XXAA))
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_4  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[4]),  ///< PCRM LOAD_CHANGE_RAIL[4] event generated. */
#if !defined(NRF9230_ENGA_XXAA)
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_5  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[5]),  ///< PCRM LOAD_CHANGE_RAIL[5] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_6  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[6]),  ///< PCRM LOAD_CHANGE_RAIL[6] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_7  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[7]),  ///< PCRM LOAD_CHANGE_RAIL[7] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_8  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[8]),  ///< PCRM LOAD_CHANGE_RAIL[8] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_9  = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[9]),  ///< PCRM LOAD_CHANGE_RAIL[9] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_10 = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[10]), ///< PCRM LOAD_CHANGE_RAIL[10] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_11 = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[11]), ///< PCRM LOAD_CHANGE_RAIL[11] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_12 = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[12]), ///< PCRM LOAD_CHANGE_RAIL[12] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_13 = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[13]), ///< PCRM LOAD_CHANGE_RAIL[13] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_14 = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[14]), ///< PCRM LOAD_CHANGE_RAIL[14] event generated. */
    NRF_PCRM_EVENT_LOAD_CHANGE_RAIL_15 = offsetof(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[15]), ///< PCRM LOAD_CHANGE_RAIL[15] event generated. */
#endif
#endif
} nrf_pcrm_event_t;

/** @brief PCRM interrupt masks. */
typedef enum
{
    NRF_PCRM_INT_REQUEST_0_MASK           = PCRM_INTEN0_REQUESTRISING0_Msk,   ///< Interrupt on REQUEST_RISING[0] or REQUEST_FALLING[0] event. */
    NRF_PCRM_INT_REQUEST_1_MASK           = PCRM_INTEN0_REQUESTRISING1_Msk,   ///< Interrupt on REQUEST_RISING[1] or REQUEST_FALLING[1] event. */
    NRF_PCRM_INT_REQUEST_2_MASK           = PCRM_INTEN0_REQUESTRISING2_Msk,   ///< Interrupt on REQUEST_RISING[2] or REQUEST_FALLING[2] event. */
    NRF_PCRM_INT_REQUEST_3_MASK           = PCRM_INTEN0_REQUESTRISING3_Msk,   ///< Interrupt on REQUEST_RISING[3] or REQUEST_FALLING[3] event. */
    NRF_PCRM_INT_REQUEST_4_MASK           = PCRM_INTEN0_REQUESTRISING4_Msk,   ///< Interrupt on REQUEST_RISING[4] or REQUEST_FALLING[4] event. */
    NRF_PCRM_INT_REQUEST_5_MASK           = PCRM_INTEN0_REQUESTRISING5_Msk,   ///< Interrupt on REQUEST_RISING[5] or REQUEST_FALLING[5] event. */
    NRF_PCRM_INT_REQUEST_6_MASK           = PCRM_INTEN0_REQUESTRISING6_Msk,   ///< Interrupt on REQUEST_RISING[6] or REQUEST_FALLING[6] event. */
    NRF_PCRM_INT_REQUEST_7_MASK           = PCRM_INTEN0_REQUESTRISING7_Msk,   ///< Interrupt on REQUEST_RISING[7] or REQUEST_FALLING[7] event. */
    NRF_PCRM_INT_REQUEST_8_MASK           = PCRM_INTEN0_REQUESTRISING8_Msk,   ///< Interrupt on REQUEST_RISING[8] or REQUEST_FALLING[8] event. */
    NRF_PCRM_INT_REQUEST_9_MASK           = PCRM_INTEN0_REQUESTRISING9_Msk,   ///< Interrupt on REQUEST_RISING[9] or REQUEST_FALLING[9] event. */
    NRF_PCRM_INT_REQUEST_10_MASK          = PCRM_INTEN0_REQUESTRISING10_Msk,  ///< Interrupt on REQUEST_RISING[10] or REQUEST_FALLING[10] event. */
    NRF_PCRM_INT_REQUEST_11_MASK          = PCRM_INTEN0_REQUESTRISING11_Msk,  ///< Interrupt on REQUEST_RISING[11] or REQUEST_FALLING[11] event. */
    NRF_PCRM_INT_REQUEST_12_MASK          = PCRM_INTEN0_REQUESTRISING12_Msk,  ///< Interrupt on REQUEST_RISING[12] or REQUEST_FALLING[12] event. */
    NRF_PCRM_INT_REQUEST_13_MASK          = PCRM_INTEN0_REQUESTRISING13_Msk,  ///< Interrupt on REQUEST_RISING[13] or REQUEST_FALLING[13] event. */
    NRF_PCRM_INT_REQUEST_14_MASK          = PCRM_INTEN0_REQUESTRISING14_Msk,  ///< Interrupt on REQUEST_RISING[14] or REQUEST_FALLING[14] event. */
    NRF_PCRM_INT_REQUEST_15_MASK          = PCRM_INTEN0_REQUESTRISING15_Msk,  ///< Interrupt on REQUEST_RISING[15] or REQUEST_FALLING[15] event. */
    NRF_PCRM_INT_REQUEST_16_MASK          = PCRM_INTEN0_REQUESTRISING16_Msk,  ///< Interrupt on REQUEST_RISING[16] or REQUEST_FALLING[16] event. */
    NRF_PCRM_INT_REQUEST_17_MASK          = PCRM_INTEN0_REQUESTRISING17_Msk,  ///< Interrupt on REQUEST_RISING[17] or REQUEST_FALLING[17] event. */
    NRF_PCRM_INT_REQUEST_18_MASK          = PCRM_INTEN0_REQUESTRISING18_Msk,  ///< Interrupt on REQUEST_RISING[18] or REQUEST_FALLING[18] event. */
    NRF_PCRM_INT_REQUEST_19_MASK          = PCRM_INTEN0_REQUESTRISING19_Msk,  ///< Interrupt on REQUEST_RISING[19] or REQUEST_FALLING[19] event. */
    NRF_PCRM_INT_REQUEST_20_MASK          = PCRM_INTEN0_REQUESTRISING20_Msk,  ///< Interrupt on REQUEST_RISING[20] or REQUEST_FALLING[20] event. */
    NRF_PCRM_INT_REQUEST_21_MASK          = PCRM_INTEN0_REQUESTRISING21_Msk,  ///< Interrupt on REQUEST_RISING[21] or REQUEST_FALLING[21] event. */
    NRF_PCRM_INT_REQUEST_22_MASK          = PCRM_INTEN0_REQUESTRISING22_Msk,  ///< Interrupt on REQUEST_RISING[22] or REQUEST_FALLING[22] event. */
    NRF_PCRM_INT_REQUEST_23_MASK          = PCRM_INTEN0_REQUESTRISING23_Msk,  ///< Interrupt on REQUEST_RISING[23] or REQUEST_FALLING[23] event. */
    NRF_PCRM_INT_REQUEST_24_MASK          = PCRM_INTEN0_REQUESTRISING24_Msk,  ///< Interrupt on REQUEST_RISING[24] or REQUEST_FALLING[24] event. */
    NRF_PCRM_INT_REQUEST_25_MASK          = PCRM_INTEN0_REQUESTRISING25_Msk,  ///< Interrupt on REQUEST_RISING[25] or REQUEST_FALLING[25] event. */
    NRF_PCRM_INT_REQUEST_26_MASK          = PCRM_INTEN0_REQUESTRISING26_Msk,  ///< Interrupt on REQUEST_RISING[26] or REQUEST_FALLING[26] event. */
    NRF_PCRM_INT_REQUEST_27_MASK          = PCRM_INTEN0_REQUESTRISING27_Msk,  ///< Interrupt on REQUEST_RISING[27] or REQUEST_FALLING[27] event. */
#if !defined(NRF54H20_XXAA)
    NRF_PCRM_INT_REQUEST_28_MASK          = PCRM_INTEN0_REQUESTRISING28_Msk,  ///< Interrupt on REQUEST_RISING[28] or REQUEST_FALLING[28] event. */
    NRF_PCRM_INT_REQUEST_29_MASK          = PCRM_INTEN0_REQUESTRISING29_Msk,  ///< Interrupt on REQUEST_RISING[29] or REQUEST_FALLING[29] event. */
#if !defined(NRF9230_ENGA_XXAA)
    NRF_PCRM_INT_REQUEST_30_MASK          = PCRM_INTEN0_REQUESTRISING30_Msk,  ///< Interrupt on REQUEST_RISING[30] or REQUEST_FALLING[30] event. */
#if !defined(NRF7140_XXAA)
    NRF_PCRM_INT_REQUEST_31_MASK          = PCRM_INTEN0_REQUESTRISING31_Msk,  ///< Interrupt on REQUEST_RISING[31] or REQUEST_FALLING[31] event. */
#endif
#endif
#endif

    NRF_PCRM_INT_LOAD_CHANGE_RAIL_0_MASK  = PCRM_INTEN4_LOADCHANGERAIL0_Msk,  ///< Interrupt on LOAD_CHANGE_RAIL[0] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_1_MASK  = PCRM_INTEN4_LOADCHANGERAIL1_Msk,  ///< Interrupt on LOAD_CHANGE_RAIL[1] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_2_MASK  = PCRM_INTEN4_LOADCHANGERAIL2_Msk,  ///< Interrupt on LOAD_CHANGE_RAIL[2] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_3_MASK  = PCRM_INTEN4_LOADCHANGERAIL3_Msk,  ///< Interrupt on LOAD_CHANGE_RAIL[3] event. */
#if !(defined(NRF7140_XXAA) || defined(NRF54H20_XXAA))
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_4_MASK  = PCRM_INTEN4_LOADCHANGERAIL4_Msk,  ///< Interrupt on LOAD_CHANGE_RAIL[4] event. */
#if !defined(NRF9230_ENGA_XXAA)
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_5_MASK  = PCRM_INTEN4_LOADCHANGERAIL5_Msk,  ///< Interrupt on event LOAD_CHANGE_RAIL[5] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_6_MASK  = PCRM_INTEN4_LOADCHANGERAIL6_Msk,  ///< Interrupt on event LOAD_CHANGE_RAIL[6] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_7_MASK  = PCRM_INTEN4_LOADCHANGERAIL7_Msk,  ///< Interrupt on event LOAD_CHANGE_RAIL[7] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_8_MASK  = PCRM_INTEN4_LOADCHANGERAIL8_Msk,  ///< Interrupt on event LOAD_CHANGE_RAIL[8] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_9_MASK  = PCRM_INTEN4_LOADCHANGERAIL9_Msk,  ///< Interrupt on event LOAD_CHANGE_RAIL[9] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_10_MASK = PCRM_INTEN4_LOADCHANGERAIL10_Msk, ///< Interrupt on event LOAD_CHANGE_RAIL[10] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_11_MASK = PCRM_INTEN4_LOADCHANGERAIL11_Msk, ///< Interrupt on event LOAD_CHANGE_RAIL[11] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_12_MASK = PCRM_INTEN4_LOADCHANGERAIL12_Msk, ///< Interrupt on event LOAD_CHANGE_RAIL[12] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_13_MASK = PCRM_INTEN4_LOADCHANGERAIL13_Msk, ///< Interrupt on event LOAD_CHANGE_RAIL[13] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_14_MASK = PCRM_INTEN4_LOADCHANGERAIL14_Msk, ///< Interrupt on event LOAD_CHANGE_RAIL[14] event. */
    NRF_PCRM_INT_LOAD_CHANGE_RAIL_15_MASK = PCRM_INTEN4_LOADCHANGERAIL15_Msk, ///< Interrupt on event LOAD_CHANGE_RAIL[15] event. */
#endif
#endif
} nrf_pcrm_int_mask_t;

/** @brief PCRM interrupt groups. */
typedef enum
{
    NRF_PCRM_INT_GROUP_REQUEST_RISING   = offsetof(NRF_PCRM_Type, INTEN0), ///< Group for @p REQUEST_RISING interrupts. */
    NRF_PCRM_INT_GROUP_REQUEST_FALLING  = offsetof(NRF_PCRM_Type, INTEN2), ///< Group for @p REQUEST_FALLING interrupts. */
    NRF_PCRM_INT_GROUP_LOAD_CHANGE_RAIL = offsetof(NRF_PCRM_Type, INTEN4), ///< Group for @p LOAD_CHANGE_RAIL interrupts. */
} nrf_pcrm_int_group_t;

/**
 * @brief Function for getting the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event PCRM event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_pcrm_event_address_get(NRF_PCRM_Type const * p_reg,
                                                      nrf_pcrm_event_t      event);

/**
 * @brief Function for getting the rising request event associated with the specified customer.
 *
 * @param[in] consumer_idx Index of a consumer.
 *
 * @return Retrieved rising request event.
 */
NRF_STATIC_INLINE nrf_pcrm_event_t nrf_pcrm_request_rising_event_get(uint8_t consumer_idx);

/**
 * @brief Function for getting the falling request event associated with the specified customer.
 *
 * @param[in] consumer_idx Index of a consumer.
 *
 * @return Retrieved falling request event.
 */
NRF_STATIC_INLINE nrf_pcrm_event_t nrf_pcrm_request_falling_event_get(uint8_t consumer_idx);

/**
 * @brief Function for getting the load change event associated with the specified rail.
 *
 * @param[in] rail_idx Index of a rail.
 *
 * @return Retrieved load change on rail event.
 */
NRF_STATIC_INLINE nrf_pcrm_event_t nrf_pcrm_load_change_rail_event_get(uint8_t rail_idx);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_pcrm_event_clear(NRF_PCRM_Type * p_reg, nrf_pcrm_event_t event);

/**
 * @brief Function for checking the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_pcrm_event_check(NRF_PCRM_Type const * p_reg, nrf_pcrm_event_t event);

/**
 * @brief Function for enabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group Interrupt group to be enabled.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_pcrm_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_pcrm_int_enable(NRF_PCRM_Type *      p_reg,
                                           nrf_pcrm_int_group_t group,
                                           uint32_t             mask);

/**
 * @brief Function for disabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group Interrupt group to be disabled.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_pcrm_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_pcrm_int_disable(NRF_PCRM_Type *      p_reg,
                                            nrf_pcrm_int_group_t group,
                                            uint32_t             mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group Interrupt group to be checked.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_pcrm_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_pcrm_int_enable_check(NRF_PCRM_Type const * p_reg,
                                                     nrf_pcrm_int_group_t  group,
                                                     uint32_t              mask);

/**
 * @brief Function for getting the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group Interrupt group to be checked.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_pcrm_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_pcrm_int_pending_get(NRF_PCRM_Type const * p_reg,
                                                    nrf_pcrm_int_group_t  group);

/**
 * @brief Function for checking the request status associated with the specified customer.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] consumer_idx Index of a consumer whose request status is checked.
 *
 * @retval true  Request rising.
 * @retval false Request falling.
 */
NRF_STATIC_INLINE bool nrf_pcrm_request_status_check(NRF_PCRM_Type const * p_reg,
                                                     uint8_t               consumer_idx);

/**
 * @brief Function for checking the acknowledgment status of the request associated
 *        with the specified customer.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] consumer_idx Index of a consumer whose acknowledgment status of the request is checked.
 *
 * @retval true  Acknowledgment received.
 * @retval false Acknowledgment not received.
 */
NRF_STATIC_INLINE bool nrf_pcrm_request_ack_status_check(NRF_PCRM_Type const * p_reg,
                                                         uint8_t               consumer_idx);

/**
 * @brief Function for getting the estimated current value associated with the specified rail.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] rail_idx Index of a rail which estimated current value is retrieved.
 *
 * @return Estimated current value. The value is 0A + 500uA steps.
 */
NRF_STATIC_INLINE uint32_t nrf_pcrm_rail_current_get(NRF_PCRM_Type const * p_reg, uint8_t rail_idx);

/**
 * @brief Function for getting the configured current threshold value for the load
 *        associated with the specified customer.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] consumer_idx Index of a consumer whose load configuration is retrieved.
 *
 * @return Threshold current value for the load. The value is 0A + 500uA steps.
 */
NRF_STATIC_INLINE uint32_t nrf_pcrm_config_load_get(NRF_PCRM_Type const * p_reg,
                                                    uint8_t               consumer_idx);

/**
 * @brief Function for setting configuration of the current threshold value for the load
 *        associated with the specified customer.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] consumer_idx Index of a consumer whose load configuration is set.
 * @param[in] value        Threshold current value for the load. The value is 0A + 500uA steps.
 */
NRF_STATIC_INLINE void nrf_pcrm_config_load_set(NRF_PCRM_Type * p_reg,
                                                uint8_t         consumer_idx,
                                                uint32_t        value);

/**
 * @brief Function for overriding the request value associated with the specified customer.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] consumer_idx Index of a consumer whose request value is overridden.
 * @param[in] enable       True if the override is to be enabled, false otherwise.
 * @param[in] request      True if the value of overridden request is to be set, false otherwise.
 */
NRF_STATIC_INLINE void nrf_pcrm_override_request_set(NRF_PCRM_Type * p_reg,
                                                     uint8_t         consumer_idx,
                                                     bool            enable,
                                                     bool            request);

/**
 * @brief Function for overriding acknowledgment status value of the request associated
 *        with the specified customer.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] consumer_idx Index of a consumer whose request acknowledgment status value is overridden.
 * @param[in] enable       True if the override is to be enabled, false otherwise.
 * @param[in] ack_status   True if the value of overridden acknowledgment is to be set, false otherwise.
 */
NRF_STATIC_INLINE void nrf_pcrm_override_ack_set(NRF_PCRM_Type * p_reg,
                                                 uint8_t         consumer_idx,
                                                 bool            enable,
                                                 bool            ack_status);

/**
 * @brief Function for overriding the cross current value associated with the specified rail.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] rail_idx   Index of a rail which cross current value is overridden.
 * @param[in] enable     True if the override is to be enabled, false otherwise.
 * @param[in] cross_curr True if the value of overridden cross current is to be set, false otherwise.
 */
NRF_STATIC_INLINE void nrf_pcrm_override_cross_current_set(NRF_PCRM_Type * p_reg,
                                                           uint8_t         rail_idx,
                                                           bool            enable,
                                                           bool            cross_curr);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_pcrm_event_address_get(NRF_PCRM_Type const * p_reg,
                                                      nrf_pcrm_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE nrf_pcrm_event_t nrf_pcrm_request_rising_event_get(uint8_t consumer_idx)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);
    return (nrf_pcrm_event_t)NRFX_OFFSETOF(NRF_PCRM_Type, EVENTS_REQUESTRISING[consumer_idx]);
}

NRF_STATIC_INLINE nrf_pcrm_event_t nrf_pcrm_request_falling_event_get(uint8_t consumer_idx)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);
    return (nrf_pcrm_event_t)NRFX_OFFSETOF(NRF_PCRM_Type, EVENTS_REQUESTFALLING[consumer_idx]);
}

NRF_STATIC_INLINE nrf_pcrm_event_t nrf_pcrm_load_change_rail_event_get(uint8_t rail_idx)
{
    NRFX_ASSERT(rail_idx < NRF_PCRM_RAILS_COUNT);
    return (nrf_pcrm_event_t)NRFX_OFFSETOF(NRF_PCRM_Type, EVENTS_LOADCHANGERAIL[rail_idx]);
}

NRF_STATIC_INLINE void nrf_pcrm_event_clear(NRF_PCRM_Type * p_reg, nrf_pcrm_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_pcrm_event_check(NRF_PCRM_Type const * p_reg, nrf_pcrm_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE void nrf_pcrm_int_enable(NRF_PCRM_Type *      p_reg,
                                           nrf_pcrm_int_group_t group,
                                           uint32_t             mask)
{
    switch (group)
    {
        case NRF_PCRM_INT_GROUP_REQUEST_RISING:
            p_reg->INTENSET0 |= mask;
            break;
        case NRF_PCRM_INT_GROUP_REQUEST_FALLING:
            p_reg->INTENSET2 |= mask;
            break;
        case NRF_PCRM_INT_GROUP_LOAD_CHANGE_RAIL:
            p_reg->INTENSET4 |= mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_pcrm_int_disable(NRF_PCRM_Type *      p_reg,
                                            nrf_pcrm_int_group_t group,
                                            uint32_t             mask)
{
    switch (group)
    {
        case NRF_PCRM_INT_GROUP_REQUEST_RISING:
            p_reg->INTENCLR0 |= mask;
            break;
        case NRF_PCRM_INT_GROUP_REQUEST_FALLING:
            p_reg->INTENCLR2 |= mask;
            break;
        case NRF_PCRM_INT_GROUP_LOAD_CHANGE_RAIL:
            p_reg->INTENCLR4 |= mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_pcrm_int_enable_check(NRF_PCRM_Type const * p_reg,
                                                     nrf_pcrm_int_group_t  group,
                                                     uint32_t              mask)
{
    switch (group)
    {
        case NRF_PCRM_INT_GROUP_REQUEST_RISING:
            return p_reg->INTENSET0 & mask;
        case NRF_PCRM_INT_GROUP_REQUEST_FALLING:
            return p_reg->INTENSET2 & mask;
        case NRF_PCRM_INT_GROUP_LOAD_CHANGE_RAIL:
            return p_reg->INTENSET4 & mask;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE uint32_t nrf_pcrm_int_pending_get(NRF_PCRM_Type const * p_reg,
                                                    nrf_pcrm_int_group_t  group)
{
    switch (group)
    {
        case NRF_PCRM_INT_GROUP_REQUEST_RISING:
            return p_reg->INTPEND0;
        case NRF_PCRM_INT_GROUP_REQUEST_FALLING:
            return p_reg->INTPEND2;
        case NRF_PCRM_INT_GROUP_LOAD_CHANGE_RAIL:
            return p_reg->INTPEND4;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE bool nrf_pcrm_request_status_check(NRF_PCRM_Type const * p_reg,
                                                     uint8_t               consumer_idx)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);

        return ((p_reg->REQUEST.STATUS >> consumer_idx) & PCRM_REQUEST_STATUS_CONSUMER0_Msk) ==
               PCRM_REQUEST_STATUS_CONSUMER0_Rising;
}

NRF_STATIC_INLINE bool nrf_pcrm_request_ack_status_check(NRF_PCRM_Type const * p_reg,
                                                         uint8_t               consumer_idx)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);

    return ((p_reg->REQUEST.ACKSTATUS >> consumer_idx) &  PCRM_REQUEST_ACKSTATUS_CONSUMER0_Msk) ==
           PCRM_REQUEST_ACKSTATUS_CONSUMER0_AckReceived;
}

NRF_STATIC_INLINE uint32_t nrf_pcrm_rail_current_get(NRF_PCRM_Type const * p_reg, uint8_t rail_idx)
{
    NRFX_ASSERT(rail_idx < NRF_PCRM_RAILS_COUNT);

    return (p_reg->RAIL.STATUS[rail_idx] & PCRM_RAIL_STATUS_VALUE_Msk) >>
           PCRM_RAIL_STATUS_VALUE_Pos;
}

NRF_STATIC_INLINE uint32_t nrf_pcrm_config_load_get(NRF_PCRM_Type const * p_reg,
                                                    uint8_t               consumer_idx)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);

    return (p_reg->CONFIG.LOAD[consumer_idx] & PCRM_CONFIG_LOAD_VALUE_Msk) >>
           PCRM_CONFIG_LOAD_VALUE_Pos;
}

NRF_STATIC_INLINE void nrf_pcrm_config_load_set(NRF_PCRM_Type * p_reg,
                                                uint8_t         consumer_idx,
                                                uint32_t        value)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);

    p_reg->CONFIG.LOAD[consumer_idx] = (value << PCRM_CONFIG_LOAD_VALUE_Pos) &
                                       PCRM_CONFIG_LOAD_VALUE_Msk;
}

NRF_STATIC_INLINE void nrf_pcrm_override_request_set(NRF_PCRM_Type * p_reg,
                                                     uint8_t         consumer_idx,
                                                     bool            enable,
                                                     bool            request)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);

    p_reg->OVERRIDE.REQUEST[consumer_idx] =
        (((request ? PCRM_OVERRIDE_REQUEST_VAL_Set : PCRM_OVERRIDE_REQUEST_VAL_Clear) <<
          PCRM_OVERRIDE_REQUEST_VAL_Pos) & PCRM_OVERRIDE_REQUEST_VAL_Msk) |
        (((enable ? PCRM_OVERRIDE_REQUEST_MASK_UnMask : PCRM_OVERRIDE_REQUEST_MASK_Mask) <<
          PCRM_OVERRIDE_REQUEST_MASK_Pos) & PCRM_OVERRIDE_REQUEST_MASK_Msk);
}

NRF_STATIC_INLINE void nrf_pcrm_override_ack_set(NRF_PCRM_Type * p_reg,
                                                 uint8_t         consumer_idx,
                                                 bool            enable,
                                                 bool            ack_status)
{
    NRFX_ASSERT(consumer_idx < NRF_PCRM_CONSUMERS_COUNT);

    p_reg->OVERRIDE.ACK[consumer_idx] =
        (((ack_status ? PCRM_OVERRIDE_ACK_VAL_Set : PCRM_OVERRIDE_ACK_VAL_Clear) <<
          PCRM_OVERRIDE_ACK_VAL_Pos) & PCRM_OVERRIDE_ACK_VAL_Msk) |
        (((enable ? PCRM_OVERRIDE_ACK_MASK_UnMask : PCRM_OVERRIDE_ACK_MASK_Mask) <<
          PCRM_OVERRIDE_ACK_MASK_Pos) & PCRM_OVERRIDE_ACK_MASK_Msk);
}

NRF_STATIC_INLINE void nrf_pcrm_override_cross_current_set(NRF_PCRM_Type * p_reg,
                                                           uint8_t         rail_idx,
                                                           bool            enable,
                                                           bool            cross_curr)
{
    NRFX_ASSERT(rail_idx < NRF_PCRM_RAILS_COUNT);

    p_reg->OVERRIDE.CROSSCURRENT[rail_idx] =
        (((cross_curr ? PCRM_OVERRIDE_CROSSCURRENT_VAL_Enabled :
           PCRM_OVERRIDE_CROSSCURRENT_VAL_Disabled) << PCRM_OVERRIDE_CROSSCURRENT_VAL_Pos) &
         PCRM_OVERRIDE_CROSSCURRENT_VAL_Msk) |
        (((enable ? PCRM_OVERRIDE_CROSSCURRENT_MASK_UnMask :
           PCRM_OVERRIDE_CROSSCURRENT_MASK_Mask) << PCRM_OVERRIDE_CROSSCURRENT_MASK_Pos) &
         PCRM_OVERRIDE_CROSSCURRENT_MASK_Msk);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_PCRM_H__
