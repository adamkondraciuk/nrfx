/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_BELLBOARD_H__
#define NRF_BELLBOARD_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_bellboard_hal BELLBOARD HAL
 * @{
 * @ingroup nrf_bellboard
 * @brief   Hardware access layer for managing the BELLBOARD peripheral.
 */

/** @brief BELLBOARD events. */
typedef enum
{
    NRF_BELLBOARD_EVENT_SIGNALSET_0  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[0]),  /**< Signal set 0 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_1  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[1]),  /**< Signal set 1 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_2  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[2]),  /**< Signal set 2 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_3  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[3]),  /**< Signal set 3 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_4  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[4]),  /**< Signal set 4 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_5  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[5]),  /**< Signal set 5 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_6  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[6]),  /**< Signal set 6 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_7  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[7]),  /**< Signal set 7 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_8  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[8]),  /**< Signal set 8 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_9  = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[9]),  /**< Signal set 9 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_10 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[10]), /**< Signal set 10 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_11 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[11]), /**< Signal set 11 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_12 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[12]), /**< Signal set 12 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_13 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[13]), /**< Signal set 13 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_14 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[14]), /**< Signal set 14 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_15 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[15]), /**< Signal set 15 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_16 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[16]), /**< Signal set 16 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_17 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[17]), /**< Signal set 17 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_18 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[18]), /**< Signal set 18 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_19 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[19]), /**< Signal set 19 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_20 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[20]), /**< Signal set 20 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_21 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[21]), /**< Signal set 21 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_22 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[22]), /**< Signal set 22 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_23 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[23]), /**< Signal set 23 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_24 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[24]), /**< Signal set 24 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_25 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[25]), /**< Signal set 25 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_26 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[26]), /**< Signal set 26 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_27 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[27]), /**< Signal set 27 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_28 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[28]), /**< Signal set 28 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_29 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[29]), /**< Signal set 29 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_30 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[30]), /**< Signal set 30 event.*/
    NRF_BELLBOARD_EVENT_SIGNALSET_31 = offsetof(NRF_BELLBOARD_Type, EVENTS_SIGNALSET[31]), /**< Signal set 31 event.*/
} nrf_bellboard_event_t;

/** @brief BELLBOARD interrupts. */
typedef enum
{
    NRF_BELLBOARD_INT_SIGNALSET_0_MASK  = BELLBOARD_INTENSET0_SIGNALSET0_Msk,  /**< Signal set 0 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_1_MASK  = BELLBOARD_INTENSET0_SIGNALSET1_Msk,  /**< Signal set 1 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_2_MASK  = BELLBOARD_INTENSET0_SIGNALSET2_Msk,  /**< Signal set 2 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_3_MASK  = BELLBOARD_INTENSET0_SIGNALSET3_Msk,  /**< Signal set 3 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_4_MASK  = BELLBOARD_INTENSET0_SIGNALSET4_Msk,  /**< Signal set 4 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_5_MASK  = BELLBOARD_INTENSET0_SIGNALSET5_Msk,  /**< Signal set 5 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_6_MASK  = BELLBOARD_INTENSET0_SIGNALSET6_Msk,  /**< Signal set 6 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_7_MASK  = BELLBOARD_INTENSET0_SIGNALSET7_Msk,  /**< Signal set 7 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_8_MASK  = BELLBOARD_INTENSET0_SIGNALSET8_Msk,  /**< Signal set 8 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_9_MASK  = BELLBOARD_INTENSET0_SIGNALSET9_Msk,  /**< Signal set 9 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_10_MASK = BELLBOARD_INTENSET0_SIGNALSET10_Msk, /**< Signal set 10 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_11_MASK = BELLBOARD_INTENSET0_SIGNALSET11_Msk, /**< Signal set 11 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_12_MASK = BELLBOARD_INTENSET0_SIGNALSET12_Msk, /**< Signal set 12 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_13_MASK = BELLBOARD_INTENSET0_SIGNALSET13_Msk, /**< Signal set 13 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_14_MASK = BELLBOARD_INTENSET0_SIGNALSET14_Msk, /**< Signal set 14 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_15_MASK = BELLBOARD_INTENSET0_SIGNALSET15_Msk, /**< Signal set 15 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_16_MASK = BELLBOARD_INTENSET0_SIGNALSET16_Msk, /**< Signal set 16 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_17_MASK = BELLBOARD_INTENSET0_SIGNALSET17_Msk, /**< Signal set 17 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_18_MASK = BELLBOARD_INTENSET0_SIGNALSET18_Msk, /**< Signal set 18 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_19_MASK = BELLBOARD_INTENSET0_SIGNALSET19_Msk, /**< Signal set 19 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_20_MASK = BELLBOARD_INTENSET0_SIGNALSET20_Msk, /**< Signal set 20 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_21_MASK = BELLBOARD_INTENSET0_SIGNALSET21_Msk, /**< Signal set 21 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_22_MASK = BELLBOARD_INTENSET0_SIGNALSET22_Msk, /**< Signal set 22 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_23_MASK = BELLBOARD_INTENSET0_SIGNALSET23_Msk, /**< Signal set 23 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_24_MASK = BELLBOARD_INTENSET0_SIGNALSET24_Msk, /**< Signal set 24 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_25_MASK = BELLBOARD_INTENSET0_SIGNALSET25_Msk, /**< Signal set 25 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_26_MASK = BELLBOARD_INTENSET0_SIGNALSET26_Msk, /**< Signal set 26 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_27_MASK = BELLBOARD_INTENSET0_SIGNALSET27_Msk, /**< Signal set 27 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_28_MASK = BELLBOARD_INTENSET0_SIGNALSET28_Msk, /**< Signal set 28 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_29_MASK = BELLBOARD_INTENSET0_SIGNALSET29_Msk, /**< Signal set 29 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_30_MASK = BELLBOARD_INTENSET0_SIGNALSET30_Msk, /**< Signal set 30 interrupt mask. */
    NRF_BELLBOARD_INT_SIGNALSET_31_MASK = BELLBOARD_INTENSET0_SIGNALSET31_Msk, /**< Signal set 31 interrupt mask. */
} nrf_bellboard_int_mask_t;

/** @brief BELLBOARD tasks. */
typedef enum
{
    NRF_BELLBOARD_TASK_SIGNAL_0  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[0]),  /**< Signal 0 task. */
    NRF_BELLBOARD_TASK_SIGNAL_1  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[1]),  /**< Signal 1 task. */
    NRF_BELLBOARD_TASK_SIGNAL_2  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[2]),  /**< Signal 2 task. */
    NRF_BELLBOARD_TASK_SIGNAL_3  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[3]),  /**< Signal 3 task. */
    NRF_BELLBOARD_TASK_SIGNAL_4  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[4]),  /**< Signal 4 task. */
    NRF_BELLBOARD_TASK_SIGNAL_5  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[5]),  /**< Signal 5 task. */
    NRF_BELLBOARD_TASK_SIGNAL_6  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[6]),  /**< Signal 6 task. */
    NRF_BELLBOARD_TASK_SIGNAL_7  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[7]),  /**< Signal 7 task. */
    NRF_BELLBOARD_TASK_SIGNAL_8  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[8]),  /**< Signal 8 task. */
    NRF_BELLBOARD_TASK_SIGNAL_9  = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[9]),  /**< Signal 9 task. */
    NRF_BELLBOARD_TASK_SIGNAL_10 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[10]), /**< Signal 10 task. */
    NRF_BELLBOARD_TASK_SIGNAL_11 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[11]), /**< Signal 11 task. */
    NRF_BELLBOARD_TASK_SIGNAL_12 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[12]), /**< Signal 12 task. */
    NRF_BELLBOARD_TASK_SIGNAL_13 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[13]), /**< Signal 13 task. */
    NRF_BELLBOARD_TASK_SIGNAL_14 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[14]), /**< Signal 14 task. */
    NRF_BELLBOARD_TASK_SIGNAL_15 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[15]), /**< Signal 15 task. */
    NRF_BELLBOARD_TASK_SIGNAL_16 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[16]), /**< Signal 16 task. */
    NRF_BELLBOARD_TASK_SIGNAL_17 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[17]), /**< Signal 17 task. */
    NRF_BELLBOARD_TASK_SIGNAL_18 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[18]), /**< Signal 18 task. */
    NRF_BELLBOARD_TASK_SIGNAL_19 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[19]), /**< Signal 19 task. */
    NRF_BELLBOARD_TASK_SIGNAL_20 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[20]), /**< Signal 20 task. */
    NRF_BELLBOARD_TASK_SIGNAL_21 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[21]), /**< Signal 21 task. */
    NRF_BELLBOARD_TASK_SIGNAL_22 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[22]), /**< Signal 22 task. */
    NRF_BELLBOARD_TASK_SIGNAL_23 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[23]), /**< Signal 23 task. */
    NRF_BELLBOARD_TASK_SIGNAL_24 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[24]), /**< Signal 24 task. */
    NRF_BELLBOARD_TASK_SIGNAL_25 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[25]), /**< Signal 25 task. */
    NRF_BELLBOARD_TASK_SIGNAL_26 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[26]), /**< Signal 26 task. */
    NRF_BELLBOARD_TASK_SIGNAL_27 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[27]), /**< Signal 27 task. */
    NRF_BELLBOARD_TASK_SIGNAL_28 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[28]), /**< Signal 28 task. */
    NRF_BELLBOARD_TASK_SIGNAL_29 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[29]), /**< Signal 29 task. */
    NRF_BELLBOARD_TASK_SIGNAL_30 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[30]), /**< Signal 30 task. */
    NRF_BELLBOARD_TASK_SIGNAL_31 = offsetof(NRF_BELLBOARD_Type, TASKS_SIGNAL[31]), /**< Signal 31 task. */
} nrf_bellboard_task_t;

/**
 * @brief Function for triggering the specified BELLBOARD task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be triggered.
 */
NRF_STATIC_INLINE void nrf_bellboard_task_trigger(NRF_BELLBOARD_Type * p_reg,
                                                  nrf_bellboard_task_t task);

/**
 * @brief Function for getting the address of the specified BELLBOARD task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_task_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                          nrf_bellboard_task_t       task);

/**
 * @brief Function for clearing the specified BELLBOARD event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_bellboard_event_clear(NRF_BELLBOARD_Type *  p_reg,
                                                 nrf_bellboard_event_t event);

/**
 * @brief Function for retrieving the state of the BELLBOARD event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_bellboard_event_check(NRF_BELLBOARD_Type const * p_reg,
                                                 nrf_bellboard_event_t      event);

/**
 * @brief Function for getting the address of the specified BELLBOARD event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_event_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                           nrf_bellboard_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be enabled.
 * @param[in] mask      Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_bellboard_int_enable(NRF_BELLBOARD_Type * p_reg,
                                                uint8_t              group_idx,
                                                uint32_t             mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be disabled.
 * @param[in] mask      Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_bellboard_int_disable(NRF_BELLBOARD_Type * p_reg,
                                                 uint8_t              group_idx,
                                                 uint32_t             mask);


/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 * @param[in] mask      Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_int_enable_check(NRF_BELLBOARD_Type const * p_reg,
                                                          uint8_t                    group_idx,
                                                          uint32_t                   mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be retreived.
 *
 * @return Bitmask with information about pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_bellboard_int_pending_get(NRF_BELLBOARD_Type const * p_reg,
                                                         uint8_t                    group_idx);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE void nrf_bellboard_task_trigger(NRF_BELLBOARD_Type * p_reg,
                                                  nrf_bellboard_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_task_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                          nrf_bellboard_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_bellboard_event_clear(NRF_BELLBOARD_Type *  p_reg,
                                                 nrf_bellboard_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
}

NRF_STATIC_INLINE bool nrf_bellboard_event_check(NRF_BELLBOARD_Type const * p_reg,
                                                 nrf_bellboard_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_event_address_get(NRF_BELLBOARD_Type const * p_reg,
                                                           nrf_bellboard_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_bellboard_int_enable(NRF_BELLBOARD_Type * p_reg,
                                                uint8_t              group_idx,
                                                uint32_t             mask)
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
        case 4:
            p_reg->INTENSET4 = mask;
            break;
        case 5:
            p_reg->INTENSET5 = mask;
            break;
        case 6:
            p_reg->INTENSET6 = mask;
            break;
        case 7:
            p_reg->INTENSET7 = mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_bellboard_int_disable(NRF_BELLBOARD_Type * p_reg,
                                                 uint8_t              group_idx,
                                                 uint32_t             mask)
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
        case 4:
            p_reg->INTENCLR4 = mask;
            break;
        case 5:
            p_reg->INTENCLR5 = mask;
            break;
        case 6:
            p_reg->INTENCLR6 = mask;
            break;
        case 7:
            p_reg->INTENCLR7 = mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_int_enable_check(NRF_BELLBOARD_Type const * p_reg,
                                                          uint8_t                    group_idx,
                                                          uint32_t                   mask)
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
        case 4:
            return p_reg->INTENSET4 & mask;
        case 5:
            return p_reg->INTENSET5 & mask;
        case 6:
            return p_reg->INTENSET6 & mask;
        case 7:
            return p_reg->INTENSET7 & mask;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

NRF_STATIC_INLINE uint32_t nrf_bellboard_int_pending_get(NRF_BELLBOARD_Type const * p_reg,
                                                         uint8_t                    group_idx)
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
        case 4:
            return p_reg->INTPEND4;
        case 5:
            return p_reg->INTPEND5;
        case 6:
            return p_reg->INTPEND6;
        case 7:
            return p_reg->INTPEND7;
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_BELLBOARD_H__
