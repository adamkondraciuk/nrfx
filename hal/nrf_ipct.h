/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_IPCT_H__
#define NRF_IPCT_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_ipct_hal IPCT HAL
 * @{
 * @ingroup nrf_ipct
 * @brief   Hardware access layer for managing the Inter-Processor Communication Transceiver
 *          (IPCT) peripheral.
 */

#if defined(IPCT_SHORTS_RECEIVE31_ACK31_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Full MDK support for IPCT. */
#define NRF_IPCT_FULL_MDK 1
#warning "Full MDK support for IPCT is ready. Re-check IPS and align HAL."
#else
#define NRF_IPCT_FULL_MDK 0
#endif

/** @brief IPCT tasks. */
typedef enum
{
    NRF_IPCT_TASK_SEND_0  = offsetof(NRF_IPCT_Type, TASKS_SEND[0]),  /**< Send [0] task. */
    NRF_IPCT_TASK_SEND_1  = offsetof(NRF_IPCT_Type, TASKS_SEND[1]),  /**< Send [1] task. */
    NRF_IPCT_TASK_SEND_2  = offsetof(NRF_IPCT_Type, TASKS_SEND[2]),  /**< Send [2] task. */
    NRF_IPCT_TASK_SEND_3  = offsetof(NRF_IPCT_Type, TASKS_SEND[3]),  /**< Send [3] task. */
    NRF_IPCT_TASK_SEND_4  = offsetof(NRF_IPCT_Type, TASKS_SEND[4]),  /**< Send [4] task. */
    NRF_IPCT_TASK_SEND_5  = offsetof(NRF_IPCT_Type, TASKS_SEND[5]),  /**< Send [5] task. */
    NRF_IPCT_TASK_SEND_6  = offsetof(NRF_IPCT_Type, TASKS_SEND[6]),  /**< Send [6] task. */
    NRF_IPCT_TASK_SEND_7  = offsetof(NRF_IPCT_Type, TASKS_SEND[7]),  /**< Send [7] task. */
    NRF_IPCT_TASK_SEND_8  = offsetof(NRF_IPCT_Type, TASKS_SEND[8]),  /**< Send [8] task. */
    NRF_IPCT_TASK_SEND_9  = offsetof(NRF_IPCT_Type, TASKS_SEND[9]),  /**< Send [9] task. */
    NRF_IPCT_TASK_SEND_10 = offsetof(NRF_IPCT_Type, TASKS_SEND[10]), /**< Send [10] task. */
    NRF_IPCT_TASK_SEND_11 = offsetof(NRF_IPCT_Type, TASKS_SEND[11]), /**< Send [11] task. */
    NRF_IPCT_TASK_SEND_12 = offsetof(NRF_IPCT_Type, TASKS_SEND[12]), /**< Send [12] task. */
    NRF_IPCT_TASK_SEND_13 = offsetof(NRF_IPCT_Type, TASKS_SEND[13]), /**< Send [13] task. */
    NRF_IPCT_TASK_SEND_14 = offsetof(NRF_IPCT_Type, TASKS_SEND[14]), /**< Send [14] task. */
    NRF_IPCT_TASK_SEND_15 = offsetof(NRF_IPCT_Type, TASKS_SEND[15]), /**< Send [15] task. */
#if NRF_IPCT_FULL_MDK
    NRF_IPCT_TASK_SEND_16 = offsetof(NRF_IPCT_Type, TASKS_SEND[16]), /**< Send [16] task. */
    NRF_IPCT_TASK_SEND_17 = offsetof(NRF_IPCT_Type, TASKS_SEND[17]), /**< Send [17] task. */
    NRF_IPCT_TASK_SEND_18 = offsetof(NRF_IPCT_Type, TASKS_SEND[18]), /**< Send [18] task. */
    NRF_IPCT_TASK_SEND_19 = offsetof(NRF_IPCT_Type, TASKS_SEND[19]), /**< Send [19] task. */
    NRF_IPCT_TASK_SEND_20 = offsetof(NRF_IPCT_Type, TASKS_SEND[20]), /**< Send [20] task. */
    NRF_IPCT_TASK_SEND_21 = offsetof(NRF_IPCT_Type, TASKS_SEND[21]), /**< Send [21] task. */
    NRF_IPCT_TASK_SEND_22 = offsetof(NRF_IPCT_Type, TASKS_SEND[22]), /**< Send [22] task. */
    NRF_IPCT_TASK_SEND_23 = offsetof(NRF_IPCT_Type, TASKS_SEND[23]), /**< Send [23] task. */
    NRF_IPCT_TASK_SEND_24 = offsetof(NRF_IPCT_Type, TASKS_SEND[24]), /**< Send [24] task. */
    NRF_IPCT_TASK_SEND_25 = offsetof(NRF_IPCT_Type, TASKS_SEND[25]), /**< Send [25] task. */
    NRF_IPCT_TASK_SEND_26 = offsetof(NRF_IPCT_Type, TASKS_SEND[26]), /**< Send [26] task. */
    NRF_IPCT_TASK_SEND_27 = offsetof(NRF_IPCT_Type, TASKS_SEND[27]), /**< Send [27] task. */
    NRF_IPCT_TASK_SEND_28 = offsetof(NRF_IPCT_Type, TASKS_SEND[28]), /**< Send [28] task. */
    NRF_IPCT_TASK_SEND_29 = offsetof(NRF_IPCT_Type, TASKS_SEND[29]), /**< Send [29] task. */
    NRF_IPCT_TASK_SEND_30 = offsetof(NRF_IPCT_Type, TASKS_SEND[30]), /**< Send [30] task. */
    NRF_IPCT_TASK_SEND_31 = offsetof(NRF_IPCT_Type, TASKS_SEND[31]), /**< Send [31] task. */
#endif
    NRF_IPCT_TASK_ACK_0  = offsetof(NRF_IPCT_Type, TASKS_ACK[0]),  /**< Acknowledge the RECEIVE[0] task. */
    NRF_IPCT_TASK_ACK_1  = offsetof(NRF_IPCT_Type, TASKS_ACK[1]),  /**< Acknowledge the RECEIVE[1] task. */
    NRF_IPCT_TASK_ACK_2  = offsetof(NRF_IPCT_Type, TASKS_ACK[2]),  /**< Acknowledge the RECEIVE[2] task. */
    NRF_IPCT_TASK_ACK_3  = offsetof(NRF_IPCT_Type, TASKS_ACK[3]),  /**< Acknowledge the RECEIVE[3] task. */
    NRF_IPCT_TASK_ACK_4  = offsetof(NRF_IPCT_Type, TASKS_ACK[4]),  /**< Acknowledge the RECEIVE[4] task. */
    NRF_IPCT_TASK_ACK_5  = offsetof(NRF_IPCT_Type, TASKS_ACK[5]),  /**< Acknowledge the RECEIVE[5] task. */
    NRF_IPCT_TASK_ACK_6  = offsetof(NRF_IPCT_Type, TASKS_ACK[6]),  /**< Acknowledge the RECEIVE[6] task. */
    NRF_IPCT_TASK_ACK_7  = offsetof(NRF_IPCT_Type, TASKS_ACK[7]),  /**< Acknowledge the RECEIVE[7] task. */
    NRF_IPCT_TASK_ACK_8  = offsetof(NRF_IPCT_Type, TASKS_ACK[8]),  /**< Acknowledge the RECEIVE[8] task. */
    NRF_IPCT_TASK_ACK_9  = offsetof(NRF_IPCT_Type, TASKS_ACK[9]),  /**< Acknowledge the RECEIVE[9] task. */
    NRF_IPCT_TASK_ACK_10 = offsetof(NRF_IPCT_Type, TASKS_ACK[10]), /**< Acknowledge the RECEIVE[10] task. */
    NRF_IPCT_TASK_ACK_11 = offsetof(NRF_IPCT_Type, TASKS_ACK[11]), /**< Acknowledge the RECEIVE[11] task. */
    NRF_IPCT_TASK_ACK_12 = offsetof(NRF_IPCT_Type, TASKS_ACK[12]), /**< Acknowledge the RECEIVE[12] task. */
    NRF_IPCT_TASK_ACK_13 = offsetof(NRF_IPCT_Type, TASKS_ACK[13]), /**< Acknowledge the RECEIVE[13] task. */
    NRF_IPCT_TASK_ACK_14 = offsetof(NRF_IPCT_Type, TASKS_ACK[14]), /**< Acknowledge the RECEIVE[14] task. */
    NRF_IPCT_TASK_ACK_15 = offsetof(NRF_IPCT_Type, TASKS_ACK[15]), /**< Acknowledge the RECEIVE[15] task. */
#if NRF_IPCT_FULL_MDK
    NRF_IPCT_TASK_ACK_16 = offsetof(NRF_IPCT_Type, TASKS_ACK[16]), /**< Acknowledge the RECEIVE[16] task. */
    NRF_IPCT_TASK_ACK_17 = offsetof(NRF_IPCT_Type, TASKS_ACK[17]), /**< Acknowledge the RECEIVE[17] task. */
    NRF_IPCT_TASK_ACK_18 = offsetof(NRF_IPCT_Type, TASKS_ACK[18]), /**< Acknowledge the RECEIVE[18] task. */
    NRF_IPCT_TASK_ACK_19 = offsetof(NRF_IPCT_Type, TASKS_ACK[19]), /**< Acknowledge the RECEIVE[19] task. */
    NRF_IPCT_TASK_ACK_20 = offsetof(NRF_IPCT_Type, TASKS_ACK[20]), /**< Acknowledge the RECEIVE[20] task. */
    NRF_IPCT_TASK_ACK_21 = offsetof(NRF_IPCT_Type, TASKS_ACK[21]), /**< Acknowledge the RECEIVE[21] task. */
    NRF_IPCT_TASK_ACK_22 = offsetof(NRF_IPCT_Type, TASKS_ACK[22]), /**< Acknowledge the RECEIVE[22] task. */
    NRF_IPCT_TASK_ACK_23 = offsetof(NRF_IPCT_Type, TASKS_ACK[23]), /**< Acknowledge the RECEIVE[23] task. */
    NRF_IPCT_TASK_ACK_24 = offsetof(NRF_IPCT_Type, TASKS_ACK[24]), /**< Acknowledge the RECEIVE[24] task. */
    NRF_IPCT_TASK_ACK_25 = offsetof(NRF_IPCT_Type, TASKS_ACK[25]), /**< Acknowledge the RECEIVE[25] task. */
    NRF_IPCT_TASK_ACK_26 = offsetof(NRF_IPCT_Type, TASKS_ACK[26]), /**< Acknowledge the RECEIVE[26] task. */
    NRF_IPCT_TASK_ACK_27 = offsetof(NRF_IPCT_Type, TASKS_ACK[27]), /**< Acknowledge the RECEIVE[27] task. */
    NRF_IPCT_TASK_ACK_28 = offsetof(NRF_IPCT_Type, TASKS_ACK[28]), /**< Acknowledge the RECEIVE[28] task. */
    NRF_IPCT_TASK_ACK_29 = offsetof(NRF_IPCT_Type, TASKS_ACK[29]), /**< Acknowledge the RECEIVE[29] task. */
    NRF_IPCT_TASK_ACK_30 = offsetof(NRF_IPCT_Type, TASKS_ACK[30]), /**< Acknowledge the RECEIVE[30] task. */
    NRF_IPCT_TASK_ACK_31 = offsetof(NRF_IPCT_Type, TASKS_ACK[31]), /**< Acknowledge the RECEIVE[31] task. */
#endif
} nrf_ipct_task_t;

/** @brief IPCT events. */
typedef enum
{
    NRF_IPCT_EVENT_RECEIVE_0  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[0]),  /**< Receive [0] event. */
    NRF_IPCT_EVENT_RECEIVE_1  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[1]),  /**< Receive [1] event. */
    NRF_IPCT_EVENT_RECEIVE_2  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[2]),  /**< Receive [2] event. */
    NRF_IPCT_EVENT_RECEIVE_3  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[3]),  /**< Receive [3] event. */
    NRF_IPCT_EVENT_RECEIVE_4  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[4]),  /**< Receive [4] event. */
    NRF_IPCT_EVENT_RECEIVE_5  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[5]),  /**< Receive [5] event. */
    NRF_IPCT_EVENT_RECEIVE_6  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[6]),  /**< Receive [6] event. */
    NRF_IPCT_EVENT_RECEIVE_7  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[7]),  /**< Receive [7] event. */
    NRF_IPCT_EVENT_RECEIVE_8  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[8]),  /**< Receive [8] event. */
    NRF_IPCT_EVENT_RECEIVE_9  = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[9]),  /**< Receive [9] event. */
    NRF_IPCT_EVENT_RECEIVE_10 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[10]), /**< Receive [10] event. */
    NRF_IPCT_EVENT_RECEIVE_11 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[11]), /**< Receive [11] event. */
    NRF_IPCT_EVENT_RECEIVE_12 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[12]), /**< Receive [12] event. */
    NRF_IPCT_EVENT_RECEIVE_13 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[13]), /**< Receive [13] event. */
    NRF_IPCT_EVENT_RECEIVE_14 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[14]), /**< Receive [14] event. */
    NRF_IPCT_EVENT_RECEIVE_15 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[15]), /**< Receive [15] event. */
#if NRF_IPCT_FULL_MDK
    NRF_IPCT_EVENT_RECEIVE_16 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[16]), /**< Receive [16] event. */
    NRF_IPCT_EVENT_RECEIVE_17 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[17]), /**< Receive [17] event. */
    NRF_IPCT_EVENT_RECEIVE_18 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[18]), /**< Receive [18] event. */
    NRF_IPCT_EVENT_RECEIVE_19 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[19]), /**< Receive [19] event. */
    NRF_IPCT_EVENT_RECEIVE_20 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[20]), /**< Receive [20] event. */
    NRF_IPCT_EVENT_RECEIVE_21 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[21]), /**< Receive [21] event. */
    NRF_IPCT_EVENT_RECEIVE_22 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[22]), /**< Receive [22] event. */
    NRF_IPCT_EVENT_RECEIVE_23 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[23]), /**< Receive [23] event. */
    NRF_IPCT_EVENT_RECEIVE_24 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[24]), /**< Receive [24] event. */
    NRF_IPCT_EVENT_RECEIVE_25 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[25]), /**< Receive [25] event. */
    NRF_IPCT_EVENT_RECEIVE_26 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[26]), /**< Receive [26] event. */
    NRF_IPCT_EVENT_RECEIVE_27 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[27]), /**< Receive [27] event. */
    NRF_IPCT_EVENT_RECEIVE_28 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[28]), /**< Receive [28] event. */
    NRF_IPCT_EVENT_RECEIVE_29 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[29]), /**< Receive [29] event. */
    NRF_IPCT_EVENT_RECEIVE_30 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[30]), /**< Receive [30] event. */
    NRF_IPCT_EVENT_RECEIVE_31 = offsetof(NRF_IPCT_Type, EVENTS_RECEIVE[31]), /**< Receive [31] event. */
#endif
    NRF_IPCT_EVENT_ACKED_0  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[0]),  /**< Acknowledged event for the SEND[0] task. */
    NRF_IPCT_EVENT_ACKED_1  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[1]),  /**< Acknowledged event for the SEND[1] task. */
    NRF_IPCT_EVENT_ACKED_2  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[2]),  /**< Acknowledged event for the SEND[2] task. */
    NRF_IPCT_EVENT_ACKED_3  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[3]),  /**< Acknowledged event for the SEND[3] task. */
    NRF_IPCT_EVENT_ACKED_4  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[4]),  /**< Acknowledged event for the SEND[4] task. */
    NRF_IPCT_EVENT_ACKED_5  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[5]),  /**< Acknowledged event for the SEND[5] task. */
    NRF_IPCT_EVENT_ACKED_6  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[6]),  /**< Acknowledged event for the SEND[6] task. */
    NRF_IPCT_EVENT_ACKED_7  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[7]),  /**< Acknowledged event for the SEND[7] task. */
    NRF_IPCT_EVENT_ACKED_8  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[8]),  /**< Acknowledged event for the SEND[8] task. */
    NRF_IPCT_EVENT_ACKED_9  = offsetof(NRF_IPCT_Type, EVENTS_ACKED[9]),  /**< Acknowledged event for the SEND[9] task. */
    NRF_IPCT_EVENT_ACKED_10 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[10]), /**< Acknowledged event for the SEND[10] task. */
    NRF_IPCT_EVENT_ACKED_11 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[11]), /**< Acknowledged event for the SEND[11] task. */
    NRF_IPCT_EVENT_ACKED_12 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[12]), /**< Acknowledged event for the SEND[12] task. */
    NRF_IPCT_EVENT_ACKED_13 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[13]), /**< Acknowledged event for the SEND[13] task. */
    NRF_IPCT_EVENT_ACKED_14 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[14]), /**< Acknowledged event for the SEND[14] task. */
    NRF_IPCT_EVENT_ACKED_15 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[15]), /**< Acknowledged event for the SEND[15] task. */
#if NRF_IPCT_FULL_MDK
    NRF_IPCT_EVENT_ACKED_16 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[16]), /**< Acknowledged event for the SEND[16] task. */
    NRF_IPCT_EVENT_ACKED_17 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[17]), /**< Acknowledged event for the SEND[17] task. */
    NRF_IPCT_EVENT_ACKED_18 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[18]), /**< Acknowledged event for the SEND[18] task. */
    NRF_IPCT_EVENT_ACKED_19 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[19]), /**< Acknowledged event for the SEND[19] task. */
    NRF_IPCT_EVENT_ACKED_20 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[20]), /**< Acknowledged event for the SEND[20] task. */
    NRF_IPCT_EVENT_ACKED_21 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[21]), /**< Acknowledged event for the SEND[21] task. */
    NRF_IPCT_EVENT_ACKED_22 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[22]), /**< Acknowledged event for the SEND[22] task. */
    NRF_IPCT_EVENT_ACKED_23 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[23]), /**< Acknowledged event for the SEND[23] task. */
    NRF_IPCT_EVENT_ACKED_24 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[24]), /**< Acknowledged event for the SEND[24] task. */
    NRF_IPCT_EVENT_ACKED_25 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[25]), /**< Acknowledged event for the SEND[25] task. */
    NRF_IPCT_EVENT_ACKED_26 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[26]), /**< Acknowledged event for the SEND[26] task. */
    NRF_IPCT_EVENT_ACKED_27 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[27]), /**< Acknowledged event for the SEND[27] task. */
    NRF_IPCT_EVENT_ACKED_28 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[28]), /**< Acknowledged event for the SEND[28] task. */
    NRF_IPCT_EVENT_ACKED_29 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[29]), /**< Acknowledged event for the SEND[29] task. */
    NRF_IPCT_EVENT_ACKED_30 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[30]), /**< Acknowledged event for the SEND[30] task. */
    NRF_IPCT_EVENT_ACKED_31 = offsetof(NRF_IPCT_Type, EVENTS_ACKED[31]), /**< Acknowledged event for the SEND[31] task. */
#endif
} nrf_ipct_event_t;

/** @brief IPCT shortcuts. */
typedef enum
{
    NRF_IPCT_SHORT_RECEIVE0_ACK0_MASK   = IPCT_SHORTS_RECEIVE0_ACK0_Msk,   /**< Shortcut between event RECEIVE[0] and task ACK[0]. */
    NRF_IPCT_SHORT_RECEIVE1_ACK1_MASK   = IPCT_SHORTS_RECEIVE1_ACK1_Msk,   /**< Shortcut between event RECEIVE[1] and task ACK[1]. */
    NRF_IPCT_SHORT_RECEIVE2_ACK2_MASK   = IPCT_SHORTS_RECEIVE2_ACK2_Msk,   /**< Shortcut between event RECEIVE[2] and task ACK[2]. */
    NRF_IPCT_SHORT_RECEIVE3_ACK3_MASK   = IPCT_SHORTS_RECEIVE3_ACK3_Msk,   /**< Shortcut between event RECEIVE[3] and task ACK[3]. */
    NRF_IPCT_SHORT_RECEIVE4_ACK4_MASK   = IPCT_SHORTS_RECEIVE4_ACK4_Msk,   /**< Shortcut between event RECEIVE[4] and task ACK[4]. */
    NRF_IPCT_SHORT_RECEIVE5_ACK5_MASK   = IPCT_SHORTS_RECEIVE5_ACK5_Msk,   /**< Shortcut between event RECEIVE[5] and task ACK[5]. */
    NRF_IPCT_SHORT_RECEIVE6_ACK6_MASK   = IPCT_SHORTS_RECEIVE6_ACK6_Msk,   /**< Shortcut between event RECEIVE[6] and task ACK[6]. */
    NRF_IPCT_SHORT_RECEIVE7_ACK7_MASK   = IPCT_SHORTS_RECEIVE7_ACK7_Msk,   /**< Shortcut between event RECEIVE[7] and task ACK[7]. */
    NRF_IPCT_SHORT_RECEIVE8_ACK8_MASK   = IPCT_SHORTS_RECEIVE8_ACK8_Msk,   /**< Shortcut between event RECEIVE[8] and task ACK[8]. */
    NRF_IPCT_SHORT_RECEIVE9_ACK9_MASK   = IPCT_SHORTS_RECEIVE9_ACK9_Msk,   /**< Shortcut between event RECEIVE[9] and task ACK[9]. */
    NRF_IPCT_SHORT_RECEIVE10_ACK10_MASK = IPCT_SHORTS_RECEIVE10_ACK10_Msk, /**< Shortcut between event RECEIVE[10] and task ACK[10]. */
    NRF_IPCT_SHORT_RECEIVE11_ACK11_MASK = IPCT_SHORTS_RECEIVE11_ACK11_Msk, /**< Shortcut between event RECEIVE[11] and task ACK[11]. */
    NRF_IPCT_SHORT_RECEIVE12_ACK12_MASK = IPCT_SHORTS_RECEIVE12_ACK12_Msk, /**< Shortcut between event RECEIVE[12] and task ACK[12]. */
    NRF_IPCT_SHORT_RECEIVE13_ACK13_MASK = IPCT_SHORTS_RECEIVE13_ACK13_Msk, /**< Shortcut between event RECEIVE[13] and task ACK[13]. */
    NRF_IPCT_SHORT_RECEIVE14_ACK14_MASK = IPCT_SHORTS_RECEIVE14_ACK14_Msk, /**< Shortcut between event RECEIVE[14] and task ACK[14]. */
    NRF_IPCT_SHORT_RECEIVE15_ACK15_MASK = IPCT_SHORTS_RECEIVE15_ACK15_Msk, /**< Shortcut between event RECEIVE[15] and task ACK[15]. */
#if NRF_IPCT_FULL_MDK
    NRF_IPCT_SHORT_RECEIVE16_ACK16_MASK = IPCT_SHORTS_RECEIVE16_ACK16_Msk, /**< Shortcut between event RECEIVE[16] and task ACK[16]. */
    NRF_IPCT_SHORT_RECEIVE17_ACK17_MASK = IPCT_SHORTS_RECEIVE17_ACK17_Msk, /**< Shortcut between event RECEIVE[17] and task ACK[17]. */
    NRF_IPCT_SHORT_RECEIVE18_ACK18_MASK = IPCT_SHORTS_RECEIVE18_ACK18_Msk, /**< Shortcut between event RECEIVE[18] and task ACK[18]. */
    NRF_IPCT_SHORT_RECEIVE19_ACK19_MASK = IPCT_SHORTS_RECEIVE19_ACK19_Msk, /**< Shortcut between event RECEIVE[19] and task ACK[19]. */
    NRF_IPCT_SHORT_RECEIVE20_ACK20_MASK = IPCT_SHORTS_RECEIVE20_ACK20_Msk, /**< Shortcut between event RECEIVE[20] and task ACK[20]. */
    NRF_IPCT_SHORT_RECEIVE21_ACK21_MASK = IPCT_SHORTS_RECEIVE21_ACK21_Msk, /**< Shortcut between event RECEIVE[21] and task ACK[21]. */
    NRF_IPCT_SHORT_RECEIVE22_ACK22_MASK = IPCT_SHORTS_RECEIVE22_ACK22_Msk, /**< Shortcut between event RECEIVE[22] and task ACK[22]. */
    NRF_IPCT_SHORT_RECEIVE23_ACK23_MASK = IPCT_SHORTS_RECEIVE23_ACK23_Msk, /**< Shortcut between event RECEIVE[23] and task ACK[23]. */
    NRF_IPCT_SHORT_RECEIVE24_ACK24_MASK = IPCT_SHORTS_RECEIVE24_ACK24_Msk, /**< Shortcut between event RECEIVE[24] and task ACK[24]. */
    NRF_IPCT_SHORT_RECEIVE25_ACK25_MASK = IPCT_SHORTS_RECEIVE25_ACK25_Msk, /**< Shortcut between event RECEIVE[25] and task ACK[25]. */
    NRF_IPCT_SHORT_RECEIVE26_ACK26_MASK = IPCT_SHORTS_RECEIVE26_ACK26_Msk, /**< Shortcut between event RECEIVE[26] and task ACK[26]. */
    NRF_IPCT_SHORT_RECEIVE27_ACK27_MASK = IPCT_SHORTS_RECEIVE27_ACK27_Msk, /**< Shortcut between event RECEIVE[27] and task ACK[27]. */
    NRF_IPCT_SHORT_RECEIVE28_ACK28_MASK = IPCT_SHORTS_RECEIVE28_ACK28_Msk, /**< Shortcut between event RECEIVE[28] and task ACK[28]. */
    NRF_IPCT_SHORT_RECEIVE29_ACK29_MASK = IPCT_SHORTS_RECEIVE29_ACK29_Msk, /**< Shortcut between event RECEIVE[29] and task ACK[29]. */
    NRF_IPCT_SHORT_RECEIVE30_ACK30_MASK = IPCT_SHORTS_RECEIVE30_ACK30_Msk, /**< Shortcut between event RECEIVE[30] and task ACK[30]. */
    NRF_IPCT_SHORT_RECEIVE31_ACK31_MASK = IPCT_SHORTS_RECEIVE31_ACK31_Msk, /**< Shortcut between event RECEIVE[31] and task ACK[31]. */
#endif
    NRF_IPCT_ALL_SHORTS_MASK            = NRF_IPCT_SHORT_RECEIVE0_ACK0_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE1_ACK1_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE2_ACK2_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE3_ACK3_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE4_ACK4_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE5_ACK5_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE6_ACK6_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE7_ACK7_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE8_ACK8_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE9_ACK9_MASK   |
                                          NRF_IPCT_SHORT_RECEIVE10_ACK10_MASK |
                                          NRF_IPCT_SHORT_RECEIVE11_ACK11_MASK |
                                          NRF_IPCT_SHORT_RECEIVE12_ACK12_MASK |
                                          NRF_IPCT_SHORT_RECEIVE13_ACK13_MASK |
                                          NRF_IPCT_SHORT_RECEIVE14_ACK14_MASK |
                                          NRF_IPCT_SHORT_RECEIVE15_ACK15_MASK |
#if NRF_IPCT_FULL_MDK
                                          NRF_IPCT_SHORT_RECEIVE16_ACK16_MASK |
                                          NRF_IPCT_SHORT_RECEIVE17_ACK17_MASK |
                                          NRF_IPCT_SHORT_RECEIVE18_ACK18_MASK |
                                          NRF_IPCT_SHORT_RECEIVE19_ACK19_MASK |
                                          NRF_IPCT_SHORT_RECEIVE20_ACK20_MASK |
                                          NRF_IPCT_SHORT_RECEIVE21_ACK21_MASK |
                                          NRF_IPCT_SHORT_RECEIVE22_ACK22_MASK |
                                          NRF_IPCT_SHORT_RECEIVE23_ACK23_MASK |
                                          NRF_IPCT_SHORT_RECEIVE24_ACK24_MASK |
                                          NRF_IPCT_SHORT_RECEIVE25_ACK25_MASK |
                                          NRF_IPCT_SHORT_RECEIVE26_ACK26_MASK |
                                          NRF_IPCT_SHORT_RECEIVE27_ACK27_MASK |
                                          NRF_IPCT_SHORT_RECEIVE28_ACK28_MASK |
                                          NRF_IPCT_SHORT_RECEIVE29_ACK29_MASK |
                                          NRF_IPCT_SHORT_RECEIVE30_ACK30_MASK |
                                          NRF_IPCT_SHORT_RECEIVE31_ACK31_MASK |
#endif
                                          0 /**< All IPCT shortcuts. */
} nrf_ipct_short_mask_t;

/** @brief IPCT interrupts. */
typedef enum
{
    NRF_IPCT_INT_RECEIVE_0  = IPCT_INTEN_RECEIVE0_Msk,  /**< Interrupt for event RECEIVE[0]. */
    NRF_IPCT_INT_RECEIVE_1  = IPCT_INTEN_RECEIVE1_Msk,  /**< Interrupt for event RECEIVE[1]. */
    NRF_IPCT_INT_RECEIVE_2  = IPCT_INTEN_RECEIVE2_Msk,  /**< Interrupt for event RECEIVE[2]. */
    NRF_IPCT_INT_RECEIVE_3  = IPCT_INTEN_RECEIVE3_Msk,  /**< Interrupt for event RECEIVE[3]. */
    NRF_IPCT_INT_RECEIVE_4  = IPCT_INTEN_RECEIVE4_Msk,  /**< Interrupt for event RECEIVE[4]. */
    NRF_IPCT_INT_RECEIVE_5  = IPCT_INTEN_RECEIVE5_Msk,  /**< Interrupt for event RECEIVE[5]. */
    NRF_IPCT_INT_RECEIVE_6  = IPCT_INTEN_RECEIVE6_Msk,  /**< Interrupt for event RECEIVE[6]. */
    NRF_IPCT_INT_RECEIVE_7  = IPCT_INTEN_RECEIVE7_Msk,  /**< Interrupt for event RECEIVE[7]. */
    NRF_IPCT_INT_RECEIVE_8  = IPCT_INTEN_RECEIVE8_Msk,  /**< Interrupt for event RECEIVE[8]. */
    NRF_IPCT_INT_RECEIVE_9  = IPCT_INTEN_RECEIVE9_Msk,  /**< Interrupt for event RECEIVE[9]. */
    NRF_IPCT_INT_RECEIVE_10 = IPCT_INTEN_RECEIVE10_Msk, /**< Interrupt for event RECEIVE[10]. */
    NRF_IPCT_INT_RECEIVE_11 = IPCT_INTEN_RECEIVE11_Msk, /**< Interrupt for event RECEIVE[11]. */
    NRF_IPCT_INT_RECEIVE_12 = IPCT_INTEN_RECEIVE12_Msk, /**< Interrupt for event RECEIVE[12]. */
    NRF_IPCT_INT_RECEIVE_13 = IPCT_INTEN_RECEIVE13_Msk, /**< Interrupt for event RECEIVE[13]. */
    NRF_IPCT_INT_RECEIVE_14 = IPCT_INTEN_RECEIVE14_Msk, /**< Interrupt for event RECEIVE[14]. */
    NRF_IPCT_INT_RECEIVE_15 = IPCT_INTEN_RECEIVE15_Msk, /**< Interrupt for event RECEIVE[15]. */
#if NRF_IPCT_FULL_MDK
    NRF_IPCT_INT_RECEIVE_16 = IPCT_INTEN_RECEIVE16_Msk, /**< Interrupt for event RECEIVE[16]. */
    NRF_IPCT_INT_RECEIVE_17 = IPCT_INTEN_RECEIVE17_Msk, /**< Interrupt for event RECEIVE[17]. */
    NRF_IPCT_INT_RECEIVE_18 = IPCT_INTEN_RECEIVE18_Msk, /**< Interrupt for event RECEIVE[18]. */
    NRF_IPCT_INT_RECEIVE_19 = IPCT_INTEN_RECEIVE19_Msk, /**< Interrupt for event RECEIVE[19]. */
    NRF_IPCT_INT_RECEIVE_20 = IPCT_INTEN_RECEIVE20_Msk, /**< Interrupt for event RECEIVE[20]. */
    NRF_IPCT_INT_RECEIVE_21 = IPCT_INTEN_RECEIVE21_Msk, /**< Interrupt for event RECEIVE[21]. */
    NRF_IPCT_INT_RECEIVE_22 = IPCT_INTEN_RECEIVE22_Msk, /**< Interrupt for event RECEIVE[22]. */
    NRF_IPCT_INT_RECEIVE_23 = IPCT_INTEN_RECEIVE23_Msk, /**< Interrupt for event RECEIVE[23]. */
    NRF_IPCT_INT_RECEIVE_24 = IPCT_INTEN_RECEIVE24_Msk, /**< Interrupt for event RECEIVE[24]. */
    NRF_IPCT_INT_RECEIVE_25 = IPCT_INTEN_RECEIVE25_Msk, /**< Interrupt for event RECEIVE[25]. */
    NRF_IPCT_INT_RECEIVE_26 = IPCT_INTEN_RECEIVE26_Msk, /**< Interrupt for event RECEIVE[26]. */
    NRF_IPCT_INT_RECEIVE_27 = IPCT_INTEN_RECEIVE27_Msk, /**< Interrupt for event RECEIVE[27]. */
    NRF_IPCT_INT_RECEIVE_28 = IPCT_INTEN_RECEIVE28_Msk, /**< Interrupt for event RECEIVE[28]. */
    NRF_IPCT_INT_RECEIVE_29 = IPCT_INTEN_RECEIVE29_Msk, /**< Interrupt for event RECEIVE[29]. */
    NRF_IPCT_INT_RECEIVE_30 = IPCT_INTEN_RECEIVE30_Msk, /**< Interrupt for event RECEIVE[30]. */
    NRF_IPCT_INT_RECEIVE_31 = IPCT_INTEN_RECEIVE31_Msk, /**< Interrupt for event RECEIVE[31]. */
#endif
    NRF_IPCT_INT_ACKED_0  = IPCT_INTEN_ACKED0_Msk,  /**< Interrupt for event ACKED[0]. */
    NRF_IPCT_INT_ACKED_1  = IPCT_INTEN_ACKED1_Msk,  /**< Interrupt for event ACKED[1]. */
    NRF_IPCT_INT_ACKED_2  = IPCT_INTEN_ACKED2_Msk,  /**< Interrupt for event ACKED[2]. */
    NRF_IPCT_INT_ACKED_3  = IPCT_INTEN_ACKED3_Msk,  /**< Interrupt for event ACKED[3]. */
    NRF_IPCT_INT_ACKED_4  = IPCT_INTEN_ACKED4_Msk,  /**< Interrupt for event ACKED[4]. */
    NRF_IPCT_INT_ACKED_5  = IPCT_INTEN_ACKED5_Msk,  /**< Interrupt for event ACKED[5]. */
    NRF_IPCT_INT_ACKED_6  = IPCT_INTEN_ACKED6_Msk,  /**< Interrupt for event ACKED[6]. */
    NRF_IPCT_INT_ACKED_7  = IPCT_INTEN_ACKED7_Msk,  /**< Interrupt for event ACKED[7]. */
    NRF_IPCT_INT_ACKED_8  = IPCT_INTEN_ACKED8_Msk,  /**< Interrupt for event ACKED[8]. */
    NRF_IPCT_INT_ACKED_9  = IPCT_INTEN_ACKED9_Msk,  /**< Interrupt for event ACKED[9]. */
    NRF_IPCT_INT_ACKED_10 = IPCT_INTEN_ACKED10_Msk, /**< Interrupt for event ACKED[10]. */
    NRF_IPCT_INT_ACKED_11 = IPCT_INTEN_ACKED11_Msk, /**< Interrupt for event ACKED[11]. */
    NRF_IPCT_INT_ACKED_12 = IPCT_INTEN_ACKED12_Msk, /**< Interrupt for event ACKED[12]. */
    NRF_IPCT_INT_ACKED_13 = IPCT_INTEN_ACKED13_Msk, /**< Interrupt for event ACKED[13]. */
    NRF_IPCT_INT_ACKED_14 = IPCT_INTEN_ACKED14_Msk, /**< Interrupt for event ACKED[14]. */
    NRF_IPCT_INT_ACKED_15 = IPCT_INTEN_ACKED15_Msk, /**< Interrupt for event ACKED[15]. */
#if NRF_IPCT_FULL_MDK
    NRF_IPCT_INT_ACKED_16 = IPCT_INTEN_ACKED16_Msk, /**< Interrupt for event ACKED[16]. */
    NRF_IPCT_INT_ACKED_17 = IPCT_INTEN_ACKED17_Msk, /**< Interrupt for event ACKED[17]. */
    NRF_IPCT_INT_ACKED_18 = IPCT_INTEN_ACKED18_Msk, /**< Interrupt for event ACKED[18]. */
    NRF_IPCT_INT_ACKED_19 = IPCT_INTEN_ACKED19_Msk, /**< Interrupt for event ACKED[19]. */
    NRF_IPCT_INT_ACKED_20 = IPCT_INTEN_ACKED20_Msk, /**< Interrupt for event ACKED[20]. */
    NRF_IPCT_INT_ACKED_21 = IPCT_INTEN_ACKED21_Msk, /**< Interrupt for event ACKED[21]. */
    NRF_IPCT_INT_ACKED_22 = IPCT_INTEN_ACKED22_Msk, /**< Interrupt for event ACKED[22]. */
    NRF_IPCT_INT_ACKED_23 = IPCT_INTEN_ACKED23_Msk, /**< Interrupt for event ACKED[23]. */
    NRF_IPCT_INT_ACKED_24 = IPCT_INTEN_ACKED24_Msk, /**< Interrupt for event ACKED[24]. */
    NRF_IPCT_INT_ACKED_25 = IPCT_INTEN_ACKED25_Msk, /**< Interrupt for event ACKED[25]. */
    NRF_IPCT_INT_ACKED_26 = IPCT_INTEN_ACKED26_Msk, /**< Interrupt for event ACKED[26]. */
    NRF_IPCT_INT_ACKED_27 = IPCT_INTEN_ACKED27_Msk, /**< Interrupt for event ACKED[27]. */
    NRF_IPCT_INT_ACKED_28 = IPCT_INTEN_ACKED28_Msk, /**< Interrupt for event ACKED[28]. */
    NRF_IPCT_INT_ACKED_29 = IPCT_INTEN_ACKED29_Msk, /**< Interrupt for event ACKED[29]. */
    NRF_IPCT_INT_ACKED_30 = IPCT_INTEN_ACKED30_Msk, /**< Interrupt for event ACKED[30]. */
    NRF_IPCT_INT_ACKED_31 = IPCT_INTEN_ACKED31_Msk, /**< Interrupt for event ACKED[31]. */
#endif
} nrf_ipct_int_mask_t;

/**
 * @brief Function for triggering the specified IPCT task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be triggered.
 */
NRF_STATIC_INLINE void nrf_ipct_task_trigger(NRF_IPCT_Type * p_reg, nrf_ipct_task_t task);

/**
 * @brief Function for getting the address of the specified IPCT task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_ipct_task_address_get(NRF_IPCT_Type const * p_reg,
                                                     nrf_ipct_task_t       task);

/**
 * @brief Function for clearing the specified IPCT event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_ipct_event_clear(NRF_IPCT_Type * p_reg, nrf_ipct_event_t event);

/**
 * @brief Function for retrieving the state of the IPCT event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_ipct_event_check(NRF_IPCT_Type const * p_reg, nrf_ipct_event_t event);

/**
 * @brief Function for getting the address of the specified IPCT event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_ipct_event_address_get(NRF_IPCT_Type const * p_reg,
                                                      nrf_ipct_event_t      event);

#if NRF_IPCT_FULL_MDK

/**
 * @brief Function for getting the specified interrupt's group.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] interrupt Specified interrupt.
 *
 * @return Group of the specified interrupt.
 */
NRF_STATIC_INLINE uint8_t nrf_ipct_int_group_index_get(NRF_IPCT_Type const * p_reg,
                                                       nrf_ipct_int_mask_t   interrupt);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be enabled.
 *                      Use @ref nrf_ipct_int_group_index_get() to retrieve it.
 * @param[in] mask      Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_ipct_int_enable(NRF_IPCT_Type * p_reg,
                                           uint8_t         group_idx,
                                           uint32_t        mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be disabled.
 *                      Use @ref nrf_ipct_int_group_index_get() to retrieve it.
 * @param[in] mask      Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_ipct_int_disable(NRF_IPCT_Type * p_reg,
                                            uint8_t         group_idx,
                                            uint32_t        mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 *                      Use @ref nrf_ipct_int_group_index_get() to retrieve it.
 * @param[in] mask      Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_ipct_int_enable_check(NRF_IPCT_Type const * p_reg,
                                                     uint8_t               group_idx,
                                                     uint32_t              mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be retreived.
 *                      Use @ref nrf_ipct_int_group_index_get() to retrieve it.
 *
 * @return Bitmask with information about pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_ipct_int_pending_get(NRF_IPCT_Type const * p_reg,
                                                    uint8_t               group_idx);

#else
/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_ipct_int_enable(NRF_IPCT_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_ipct_int_disable(NRF_IPCT_Type * p_reg, uint32_t mask);
/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_ipct_int_enable_check(NRF_IPCT_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_ipct_int_pending_get(NRF_IPCT_Type const * p_reg);

#endif // NRF_IPCT_FULL_MDK

/**
 *
 * @brief Function for setting the DPPI subscribe configuration for a given
 *        IPCT task.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] task    Task for which to set the configuration.
 * @param[in] channel DPPI channel through which to subscribe events.
 */
NRF_STATIC_INLINE void nrf_ipct_subscribe_set(NRF_IPCT_Type * p_reg,
                                              nrf_ipct_task_t task,
                                              uint8_t         channel);

/**
 * @brief Function for clearing the DPPI subscribe configuration for a given
 *        IPCT task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_ipct_subscribe_clear(NRF_IPCT_Type * p_reg, nrf_ipct_task_t task);

/**
 * @brief Function for setting the DPPI publish configuration for a given
 *        IPCT event.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] event   Event for which to set the configuration.
 * @param[in] channel DPPI channel through which to publish the event.
 */
NRF_STATIC_INLINE void nrf_ipct_publish_set(NRF_IPCT_Type *  p_reg,
                                           nrf_ipct_event_t event,
                                           uint8_t         channel);

/**
 * @brief Function for clearing the DPPI publish configuration for a given
 *        IPCT event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_ipct_publish_clear(NRF_IPCT_Type * p_reg, nrf_ipct_event_t event);

/**
 * @brief Function for getting value of the task overflow status for SEND task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] index SEND task index to be checked.
 *
 * @retval true  Task overflow has happened.
 * @retval false Task overflow has not happened.
 */
NRF_STATIC_INLINE bool nrf_ipct_overflow_send_get(NRF_IPCT_Type const * p_reg, uint8_t index);

/**
 * @brief Function for getting value of the task overflow status for ACK task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] index ACK task index to be checked.
 *
 * @retval true  Task overflow has happened.
 * @retval false Task overflow has not happened.
 */
NRF_STATIC_INLINE bool nrf_ipct_overflow_ack_get(NRF_IPCT_Type const * p_reg, uint8_t index);

/**
 * @brief Function for getting SEND task by its index.
 *
 * @param[in] index Index of the SEND task.
 *
 * @return SEND task.
 */
NRF_STATIC_INLINE nrf_ipct_task_t nrf_ipct_send_task_get(uint8_t index);

/**
 * @brief Function for getting ACK task by its index.
 *
 * @param[in] index Index of the ACK task.
 *
 * @return ACK task.
 */
NRF_STATIC_INLINE nrf_ipct_task_t nrf_ipct_ack_task_get(uint8_t index);

/**
 * @brief Function for getting RECEIVE event by its index.
 *
 * @param[in] index Index of the RECEIVE event.
 *
 * @return RECEIVE event.
 */
NRF_STATIC_INLINE nrf_ipct_event_t nrf_ipct_receive_event_get(uint8_t index);

/**
 * @brief Function for getting ACKED event by its index.
 *
 * @param[in] index Index of the ACKED event.
 *
 * @return ACKED event.
 */
NRF_STATIC_INLINE nrf_ipct_event_t nrf_ipct_acked_event_get(uint8_t index);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_ipct_task_trigger(NRF_IPCT_Type * p_reg, nrf_ipct_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_ipct_task_address_get(NRF_IPCT_Type const * p_reg,
                                                     nrf_ipct_task_t       task)
{
    return ((uint32_t)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_ipct_event_clear(NRF_IPCT_Type * p_reg, nrf_ipct_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
}

NRF_STATIC_INLINE bool nrf_ipct_event_check(NRF_IPCT_Type const * p_reg, nrf_ipct_event_t event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_ipct_event_address_get(NRF_IPCT_Type const * p_reg,
                                                      nrf_ipct_event_t      event)
{
    return ((uint32_t)p_reg + (uint32_t)event);
}

#if NRF_IPCT_FULL_MDK

NRF_STATIC_INLINE uint8_t nrf_ipct_int_group_index_get(NRF_IPCT_Type const * p_reg,
                                                       nrf_ipct_int_mask_t   interrupt)
{
    if (interrupt <= NRF_IPCT_INT_RECEIVE_31)
    {
        return 0;
    }
    else if (interrupt <= NRF_IPCT_INT_ACKED_31)
    {
        return 1;
    }
    else
    {
        NRFX_ASSERT(false);
        return 0;
    }

    /* TODO: add other interrupts when full MDK support arrives */
}

NRF_STATIC_INLINE void nrf_ipct_int_enable(NRF_IPCT_Type * p_reg,
                                           uint8_t         group_idx,
                                           uint32_t        mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->INTENSET0 = mask;
            break;
        case 1:
            p_reg->INTENSET1 = mask;
            break;
        case 2:
            p_reg->INTENSET2 = mask;
            break;
        case 3:
            p_reg->INTENSET3 = mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_ipct_int_disable(NRF_IPCT_Type * p_reg,
                                            uint8_t         group_idx,
                                            uint32_t        mask)
{
    switch (group_idx)
    {
        case 0:
            p_reg->INTENCLR0 = mask;
            break;
        case 1:
            p_reg->INTENCLR1 = mask;
            break;
        case 2:
            p_reg->INTENCLR2 = mask;
            break;
        case 3:
            p_reg->INTENCLR3 = mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_ipct_int_enable_check(NRF_IPCT_Type const * p_reg,
                                                     uint8_t               group_idx,
                                                     uint32_t              mask)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTENSET0 & mask;
        case 1:
            return p_reg->INTENSET1 & mask;
        case 2:
            return p_reg->INTENSET2 & mask;
        case 3:
            return p_reg->INTENSET3 & mask;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE uint32_t nrf_ipct_int_pending_get(NRF_IPCT_Type const * p_reg,
                                                    uint8_t               group_idx)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTPEND0;
        case 1:
            return p_reg->INTPEND1;
        case 2:
            return p_reg->INTPEND2;
        case 3:
            return p_reg->INTPEND3;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

#else

NRF_STATIC_INLINE void nrf_ipct_int_enable(NRF_IPCT_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_ipct_int_disable(NRF_IPCT_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_ipct_int_enable_check(NRF_IPCT_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_ipct_int_pending_get(NRF_IPCT_Type const * p_reg)
{
    return p_reg->INTPEND;
}

#endif // NRF_IPCT_FULL_MDK

NRF_STATIC_INLINE void nrf_ipct_subscribe_set(NRF_IPCT_Type * p_reg,
                                             nrf_ipct_task_t task,
                                             uint8_t        channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) =
            ((uint32_t)channel | IPCT_SUBSCRIBE_SEND_EN_Msk);
}

NRF_STATIC_INLINE void nrf_ipct_subscribe_clear(NRF_IPCT_Type * p_reg, nrf_ipct_task_t task)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) = 0;
}

NRF_STATIC_INLINE void nrf_ipct_publish_set(NRF_IPCT_Type *  p_reg,
                                           nrf_ipct_event_t event,
                                           uint8_t         channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80uL)) =
            ((uint32_t)channel | IPCT_PUBLISH_RECEIVE_EN_Msk);
}

NRF_STATIC_INLINE void nrf_ipct_publish_clear(NRF_IPCT_Type *  p_reg, nrf_ipct_event_t event)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80uL)) = 0;
}

NRF_STATIC_INLINE bool nrf_ipct_overflow_send_get(NRF_IPCT_Type const * p_reg, uint8_t index)
{
    NRFX_ASSERT(index < 32);
    return (p_reg->OVERFLOW.SEND & (1uL << index));
}

NRF_STATIC_INLINE bool nrf_ipct_overflow_ack_get(NRF_IPCT_Type const * p_reg, uint8_t index)
{
    NRFX_ASSERT(index < 32);
    return (p_reg->OVERFLOW.ACK & (1uL << index));
}

NRF_STATIC_INLINE nrf_ipct_task_t nrf_ipct_send_task_get(uint8_t index)
{
    return (nrf_ipct_task_t)(NRFX_OFFSETOF(NRF_IPCT_Type, TASKS_SEND[index]));
}

NRF_STATIC_INLINE nrf_ipct_task_t nrf_ipct_ack_task_get(uint8_t index)
{
    return (nrf_ipct_task_t)(NRFX_OFFSETOF(NRF_IPCT_Type, TASKS_ACK[index]));
}

NRF_STATIC_INLINE nrf_ipct_event_t nrf_ipct_receive_event_get(uint8_t index)
{
    return (nrf_ipct_event_t)(NRFX_OFFSETOF(NRF_IPCT_Type, EVENTS_RECEIVE[index]));
}

NRF_STATIC_INLINE nrf_ipct_event_t nrf_ipct_acked_event_get(uint8_t index)
{
    return (nrf_ipct_event_t)(NRFX_OFFSETOF(NRF_IPCT_Type, EVENTS_ACKED[index]));
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_IPCT_H__
