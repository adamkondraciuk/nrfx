/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_GRTC_H
#define NRF_GRTC_H

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_grtc_hal GRTC HAL
 * @{
 * @ingroup nrf_grtc
 * @brief   Hardware access layer for managing the Global Real Time Counter (GRTC) peripheral.
 *
 * @note The GRTC peripheral includes two counters:
 *         32 kHz real time counter (marked as 'RTCOUNTER') and
 *         1 MHz system counter (marked as 'SYSCOUNTER').
 */

/** @brief Number of capture/compare channels for SYSCOUNTER. */
#define NRF_GRTC_SYSCOUNTER_CC_COUNT GRTC_CC_MaxCount

/** @brief Bitmask of the higher 32-bits of capture/compare register for the SYSCOUNTER. */
#define NRF_GRTC_SYSCOUNTER_CCH_MASK GRTC_CC_CCH_CCH_Msk

/** @brief Bitmask of CCADD register for the SYSCOUNTER. */
#define NRF_GRTC_SYSCOUNTER_CCADD_MASK GRTC_CC_CCADD_VALUE_Msk

/** @brief Bitmask of the higher 32-bits of capture/compare register for the RTCOUNTER. */
#define NRF_GRTC_RTCOUNTER_CCH_MASK GRTC_RTCOMPAREH_VALUE_Msk

/** @brief Macro for creating the interrupt bitmask for the specified compare channel. */
#define NRF_GRTC_CHANNEL_INT_MASK(ch) ((uint32_t)(NRF_GRTC_INT_COMPARE0_MASK) << (ch))

/**
 * @brief Symbol describing number of interrupt groups.
 *
 * @todo Remove magic numbers when corresponding defines will be available in MDK.
 */
#define NRF_GRTC_INTERRUPT_GROUPS_COUNT 15

/**
 * @brief Symbol describing interrupt mask.
 *
 * @todo Remove magic numbers when corresponding defines will be available in MDK.
 */
#define NRF_GRTC_INTEN_MASK 0x7FFFFFF

/** @brief GRTC tasks. */
typedef enum
{
    NRF_GRTC_TASK_START      = offsetof(NRF_GRTC_Type, TASKS_START),       /**< Start. */
    NRF_GRTC_TASK_STOP       = offsetof(NRF_GRTC_Type, TASKS_STOP),        /**< Stop. */
    NRF_GRTC_TASK_CLEAR      = offsetof(NRF_GRTC_Type, TASKS_CLEAR),       /**< Clear. */
    NRF_GRTC_TASK_CAPTURE_0  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[0]),  /**< Capture the counter value on channel 0. */
    NRF_GRTC_TASK_CAPTURE_1  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[1]),  /**< Capture the counter value on channel 1. */
    NRF_GRTC_TASK_CAPTURE_2  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[2]),  /**< Capture the counter value on channel 2. */
    NRF_GRTC_TASK_CAPTURE_3  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[3]),  /**< Capture the counter value on channel 3. */
    NRF_GRTC_TASK_CAPTURE_4  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[4]),  /**< Capture the counter value on channel 4. */
    NRF_GRTC_TASK_CAPTURE_5  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[5]),  /**< Capture the counter value on channel 5. */
    NRF_GRTC_TASK_CAPTURE_6  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[6]),  /**< Capture the counter value on channel 6. */
    NRF_GRTC_TASK_CAPTURE_7  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[7]),  /**< Capture the counter value on channel 7. */
    NRF_GRTC_TASK_CAPTURE_8  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[8]),  /**< Capture the counter value on channel 8. */
    NRF_GRTC_TASK_CAPTURE_9  = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[9]),  /**< Capture the counter value on channel 9. */
    NRF_GRTC_TASK_CAPTURE_10 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[10]), /**< Capture the counter value on channel 10. */
    NRF_GRTC_TASK_CAPTURE_11 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[11]), /**< Capture the counter value on channel 11. */
    NRF_GRTC_TASK_CAPTURE_12 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[12]), /**< Capture the counter value on channel 12. */
    NRF_GRTC_TASK_CAPTURE_13 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[13]), /**< Capture the counter value on channel 13. */
    NRF_GRTC_TASK_CAPTURE_14 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[14]), /**< Capture the counter value on channel 14. */
    NRF_GRTC_TASK_CAPTURE_15 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[15]), /**< Capture the counter value on channel 15. */
    NRF_GRTC_TASK_CAPTURE_16 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[16]), /**< Capture the counter value on channel 16. */
    NRF_GRTC_TASK_CAPTURE_17 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[17]), /**< Capture the counter value on channel 17. */
    NRF_GRTC_TASK_CAPTURE_18 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[18]), /**< Capture the counter value on channel 18. */
    NRF_GRTC_TASK_CAPTURE_19 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[19]), /**< Capture the counter value on channel 19. */
    NRF_GRTC_TASK_CAPTURE_20 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[20]), /**< Capture the counter value on channel 20. */
    NRF_GRTC_TASK_CAPTURE_21 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[21]), /**< Capture the counter value on channel 21. */
    NRF_GRTC_TASK_CAPTURE_22 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[22]), /**< Capture the counter value on channel 22. */
    NRF_GRTC_TASK_CAPTURE_23 = offsetof(NRF_GRTC_Type, TASKS_CAPTURE[23]), /**< Capture the counter value on channel 23. */
} nrf_grtc_task_t;

/** @brief GRTC events. */
typedef enum
{
    NRF_GRTC_EVENT_COMPARE_0       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[0]),      /**< Compare 0 event. */
    NRF_GRTC_EVENT_COMPARE_1       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[1]),      /**< Compare 1 event. */
    NRF_GRTC_EVENT_COMPARE_2       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[2]),      /**< Compare 2 event. */
    NRF_GRTC_EVENT_COMPARE_3       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[3]),      /**< Compare 3 event. */
    NRF_GRTC_EVENT_COMPARE_4       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[4]),      /**< Compare 4 event. */
    NRF_GRTC_EVENT_COMPARE_5       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[5]),      /**< Compare 5 event. */
    NRF_GRTC_EVENT_COMPARE_6       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[6]),      /**< Compare 6 event. */
    NRF_GRTC_EVENT_COMPARE_7       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[7]),      /**< Compare 7 event. */
    NRF_GRTC_EVENT_COMPARE_8       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[8]),      /**< Compare 8 event. */
    NRF_GRTC_EVENT_COMPARE_9       = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[9]),      /**< Compare 9 event. */
    NRF_GRTC_EVENT_COMPARE_10      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[10]),     /**< Compare 10 event. */
    NRF_GRTC_EVENT_COMPARE_11      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[11]),     /**< Compare 11 event. */
    NRF_GRTC_EVENT_COMPARE_12      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[12]),     /**< Compare 12 event. */
    NRF_GRTC_EVENT_COMPARE_13      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[13]),     /**< Compare 13 event. */
    NRF_GRTC_EVENT_COMPARE_14      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[14]),     /**< Compare 14 event. */
    NRF_GRTC_EVENT_COMPARE_15      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[15]),     /**< Compare 15 event. */
    NRF_GRTC_EVENT_COMPARE_16      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[16]),     /**< Compare 16 event. */
    NRF_GRTC_EVENT_COMPARE_17      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[17]),     /**< Compare 17 event. */
    NRF_GRTC_EVENT_COMPARE_18      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[18]),     /**< Compare 18 event. */
    NRF_GRTC_EVENT_COMPARE_19      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[19]),     /**< Compare 19 event. */
    NRF_GRTC_EVENT_COMPARE_20      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[20]),     /**< Compare 20 event. */
    NRF_GRTC_EVENT_COMPARE_21      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[21]),     /**< Compare 21 event. */
    NRF_GRTC_EVENT_COMPARE_22      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[22]),     /**< Compare 22 event. */
    NRF_GRTC_EVENT_COMPARE_23      = offsetof(NRF_GRTC_Type, EVENTS_COMPARE[23]),     /**< Compare 23 event. */
    NRF_GRTC_EVENT_RTCOMPARE       = offsetof(NRF_GRTC_Type, EVENTS_RTCOMPARE),       /**< RTCOUNTER compare event. */
    NRF_GRTC_EVENT_RTCOMPARESYNC   = offsetof(NRF_GRTC_Type, EVENTS_RTCOMPARESYNC),   /**< RTCOUNTER synchronized compare event. */
    NRF_GRTC_EVENT_SYSCOUNTERVALID = offsetof(NRF_GRTC_Type, EVENTS_SYSCOUNTERVALID), /**< SYSCOUNTER value valid event. */
} nrf_grtc_event_t;

/** @brief Types of GRTC shortcuts. */
typedef enum
{
    NRF_GRTC_SHORT_RTCOMPARE_CLEAR_MASK = GRTC_SHORTS_RTCOMPARE_CLEAR_Msk, /**< Shortcut between RTCOMPARE event and CLEAR task. */
} nrf_grtc_short_mask_t;

/** @brief Types of GRTC CC references. */
typedef enum
{
    NRF_GRTC_CC_ADD_REFERENCE_SYSCOUNTER = GRTC_CC_CCADD_REFERENCE_SYSCOUNTER, /**< The SYSCOUNTER register's content will be used as the reference. */
    NRF_GRTC_CC_ADD_REFERENCE_CC         = GRTC_CC_CCADD_REFERENCE_CC          /**< The CC[n] register's content will be used as the reference. */
} nrf_grtc_cc_add_reference_t;

/** @brief GRTC interrupts. */
typedef enum
{
    NRF_GRTC_INT_COMPARE0_MASK         = GRTC_INTENSET0_COMPARE0_Msk,        /**< GRTC interrupt from compare event on channel 0. */
    NRF_GRTC_INT_COMPARE1_MASK         = GRTC_INTENSET0_COMPARE1_Msk,        /**< GRTC interrupt from compare event on channel 1. */
    NRF_GRTC_INT_COMPARE2_MASK         = GRTC_INTENSET0_COMPARE2_Msk,        /**< GRTC interrupt from compare event on channel 2. */
    NRF_GRTC_INT_COMPARE3_MASK         = GRTC_INTENSET0_COMPARE3_Msk,        /**< GRTC interrupt from compare event on channel 3. */
    NRF_GRTC_INT_COMPARE4_MASK         = GRTC_INTENSET0_COMPARE4_Msk,        /**< GRTC interrupt from compare event on channel 4. */
    NRF_GRTC_INT_COMPARE5_MASK         = GRTC_INTENSET0_COMPARE5_Msk,        /**< GRTC interrupt from compare event on channel 5. */
    NRF_GRTC_INT_COMPARE6_MASK         = GRTC_INTENSET0_COMPARE6_Msk,        /**< GRTC interrupt from compare event on channel 6. */
    NRF_GRTC_INT_COMPARE7_MASK         = GRTC_INTENSET0_COMPARE7_Msk,        /**< GRTC interrupt from compare event on channel 7. */
    NRF_GRTC_INT_COMPARE8_MASK         = GRTC_INTENSET0_COMPARE8_Msk,        /**< GRTC interrupt from compare event on channel 8. */
    NRF_GRTC_INT_COMPARE9_MASK         = GRTC_INTENSET0_COMPARE9_Msk,        /**< GRTC interrupt from compare event on channel 9. */
    NRF_GRTC_INT_COMPARE10_MASK        = GRTC_INTENSET0_COMPARE10_Msk,       /**< GRTC interrupt from compare event on channel 10. */
    NRF_GRTC_INT_COMPARE11_MASK        = GRTC_INTENSET0_COMPARE11_Msk,       /**< GRTC interrupt from compare event on channel 11. */
    NRF_GRTC_INT_COMPARE12_MASK        = GRTC_INTENSET0_COMPARE12_Msk,       /**< GRTC interrupt from compare event on channel 12. */
    NRF_GRTC_INT_COMPARE13_MASK        = GRTC_INTENSET0_COMPARE13_Msk,       /**< GRTC interrupt from compare event on channel 13. */
    NRF_GRTC_INT_COMPARE14_MASK        = GRTC_INTENSET0_COMPARE14_Msk,       /**< GRTC interrupt from compare event on channel 14. */
    NRF_GRTC_INT_COMPARE15_MASK        = GRTC_INTENSET0_COMPARE15_Msk,       /**< GRTC interrupt from compare event on channel 15. */
    NRF_GRTC_INT_COMPARE16_MASK        = GRTC_INTENSET0_COMPARE16_Msk,       /**< GRTC interrupt from compare event on channel 16. */
    NRF_GRTC_INT_COMPARE17_MASK        = GRTC_INTENSET0_COMPARE17_Msk,       /**< GRTC interrupt from compare event on channel 17. */
    NRF_GRTC_INT_COMPARE18_MASK        = GRTC_INTENSET0_COMPARE18_Msk,       /**< GRTC interrupt from compare event on channel 18. */
    NRF_GRTC_INT_COMPARE19_MASK        = GRTC_INTENSET0_COMPARE19_Msk,       /**< GRTC interrupt from compare event on channel 19. */
    NRF_GRTC_INT_COMPARE20_MASK        = GRTC_INTENSET0_COMPARE20_Msk,       /**< GRTC interrupt from compare event on channel 20. */
    NRF_GRTC_INT_COMPARE21_MASK        = GRTC_INTENSET0_COMPARE21_Msk,       /**< GRTC interrupt from compare event on channel 21. */
    NRF_GRTC_INT_COMPARE22_MASK        = GRTC_INTENSET0_COMPARE22_Msk,       /**< GRTC interrupt from compare event on channel 22. */
    NRF_GRTC_INT_COMPARE23_MASK        = GRTC_INTENSET0_COMPARE23_Msk,       /**< GRTC interrupt from compare event on channel 23. */
    NRF_GRTC_INT_RTCOMPARE_MASK        = GRTC_INTENSET0_RTCOMPARE_Msk,       /**< GRTC interrupt from RTCOUNTER compare event. */
    NRF_GRTC_INT_RTCOMPARESYNC_MASK    = GRTC_INTENSET0_RTCOMPARESYNC_Msk,   /**< GRTC interrupt from RTCOUNTER synchronized compare event. */
    NRF_GRTC_INT_RSYSCOUNTERVALID_MASK = GRTC_INTENSET0_SYSCOUNTERVALID_Msk, /**< GRTC interrupt from SYSCOUNTER valid event. */
} nrf_grtc_int_mask_t;

/**
 * @brief Function for setting a compare value of channel for the SYSCOUNTER.
 *
 * @note The corresponding event is automatically disabled by hardware during the operation.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel The specified capture/compare channel.
 * @param[in] cc_value   Compare value to be set in 1 MHz units.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_cc_set(NRF_GRTC_Type * p_reg,
                                                   uint8_t         cc_channel,
                                                   uint64_t        cc_value);

/**
 * @brief Function for getting the compare value of channel for the SYSCOUNTER.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel The specified capture/compare channel.
 *
 * @return Value from the specified capture/compare register in 1MHz units.
 */
NRF_STATIC_INLINE uint64_t nrf_grtc_sys_counter_cc_get(NRF_GRTC_Type const * p_reg,
                                                       uint8_t               cc_channel);

/**
 * @brief Function for setting the value to be added to capture/compare register for
 *        the SYSCOUNTER.
 *
 * @note There are two available configurations of adding operation:
 *       When @p reference value equals @ref NRF_GRTC_CC_ADD_REFERENCE_SYSCOUNTER then
 *       the final value of capture/compare register is a sum of SYSCOUNTER current value
 *       and @p value.
 *       When @p reference value equals @ref NRF_GRTC_CC_ADD_REFERENCE_CC then
 *       the final value of capture/compare register is a sum of current capture/compare
 *       value and @p value.
 *       If the capture/compare register overflows after this write, then the corresponding event
 *       is generated immediately.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel The specified capture/compare channel.
 * @param[in] value      Value to be added in 1 MHz units.
 * @param[in] reference  Configuration of adding mode.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_cc_add_set(NRF_GRTC_Type *             p_reg,
                                                       uint8_t                     cc_channel,
                                                       uint32_t                    value,
                                                       nrf_grtc_cc_add_reference_t reference);

/**
 * @brief Function for setting a compare value for the RTCOUNTER.
 *
 * @note The internal synchronization mechanism ensures that the desired value will be properly
 *       latched by the GRTC. However when @p sync parameter is true then the process of capturing
 *       the value lasts up to two 32 kHz cycles.
 *       If the @p sync parameter is false then the capturing the value will occur on the
 *       following rising edge of 32 kHz clock. In this case it is user's responsibility
 *       to execute the function between the 32 kHz rising edges.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] cc_value Compare value to be set in 32 kHz units.
 * @param[in] sync     True if the internal synchronization mechanism shall be used,
 *                     false otherwise.
 */
NRF_STATIC_INLINE void nrf_grtc_rt_counter_cc_set(NRF_GRTC_Type * p_reg,
                                                  uint64_t        cc_value,
                                                  bool            sync);

/**
 * @brief Function for returning the compare value for the RTCOUNTER.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Value from the capture/compare register in 32 kHz units.
 */
NRF_STATIC_INLINE uint64_t nrf_grtc_rt_counter_cc_get(NRF_GRTC_Type const * p_reg);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be enabled.
 * @param[in] mask      Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_grtc_int_enable(NRF_GRTC_Type * p_reg,
                                           uint8_t         group_idx,
                                           uint32_t        mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be disabled.
 * @param[in] mask      Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_grtc_int_disable(NRF_GRTC_Type * p_reg,
                                            uint8_t         group_idx,
                                            uint32_t        mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 * @param[in] mask      Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_int_enable_check(NRF_GRTC_Type const * p_reg,
                                                     uint8_t               group_idx,
                                                     uint32_t              mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * @note States of pending interrupt are saved as a bitmask.
 *       One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be retreived.
 *
 * @return Bitmask with information about pending interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_int_pending_get(NRF_GRTC_Type const * p_reg,
                                                    uint8_t               group_idx);

/**
 * @brief Function for enabling the specified shortcuts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Bitmask of shortcuts to be enabled.
 */
NRF_STATIC_INLINE void nrf_grtc_shorts_enable(NRF_GRTC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified shortcuts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Bitmask of shortcuts to be disabled.
 */
NRF_STATIC_INLINE void nrf_grtc_shorts_disable(NRF_GRTC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for setting the specified shortcuts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Bitmask of shortcuts to be set.
 */
NRF_STATIC_INLINE void nrf_grtc_shorts_set(NRF_GRTC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for setting the publish configuration for a given
 *        GRTC event.
 *
 * @note Not every event has its corresponding publish register.
 *       Refer to the Product Specification for more information.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] event   Event for which to set the configuration.
 * @param[in] channel Channel through which to publish the event.
 */
NRF_STATIC_INLINE void nrf_grtc_publish_set(NRF_GRTC_Type *  p_reg,
                                            nrf_grtc_event_t event,
                                            uint8_t          channel);

/**
 * @brief Function for clearing the publish configuration for a given
 *        GRTC event.
 *
 * @note Not every event has its corresponding publish register.
 *       Refer to the Product Specification for more information.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_grtc_publish_clear(NRF_GRTC_Type *  p_reg, nrf_grtc_event_t event);

/**
 * @brief Function for retrieving the state of the GRTC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_grtc_event_check(NRF_GRTC_Type const * p_reg, nrf_grtc_event_t event);

/**
 * @brief Function for clearing an event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_grtc_event_clear(NRF_GRTC_Type * p_reg, nrf_grtc_event_t event);

/**
 * @brief Function for returning the lower 32-bits of RTCOUNTER value.
 *
 * @note The whole RTCOUNTER value is latched when @ref nrf_grtc_rt_counter_low_get function
 *       is executed. Thus @ref nrf_grtc_rt_counter_low_get must be executed before calling
 *       @ref nrf_grtc_rt_counter_high_get.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Lower part of RTCOUNTER value.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_rt_counter_low_get(NRF_GRTC_Type const * p_reg);

/**
 * @brief Function for returning the higher 32-bits of RTCOUNTER value.
 *
 * @note The whole RTCOUNTER value is latched when @ref nrf_grtc_rt_counter_low_get function
 *       is executed. Thus @ref nrf_grtc_rt_counter_low_get must be executed before calling
 *       @ref nrf_grtc_rt_counter_high_get.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Higher part of RTCOUNTER value.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_rt_counter_high_get(NRF_GRTC_Type const * p_reg);

/**
 * @brief Function for returning the lower 32-bits of SYSCOUNTER value.
 *
 * @note @ref nrf_grtc_sys_counter_low_get must be executed before calling
 *       @ref nrf_grtc_rt_counter_high_get. In addition, after this,
 *       @ref nrf_grtc_sys_counter_overflow_check should be called. If it retuns true,
 *       whole procedure should be repeated.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Lower part of SYSCOUNTER value.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_sys_counter_low_get(NRF_GRTC_Type const * p_reg);

/**
 * @brief Function for returning the higher 32-bits of SYSCOUNTER value.
 *
 * @note @ref nrf_grtc_sys_counter_low_get must be executed before calling
 *       @ref nrf_grtc_rt_counter_high_get. In addition, after this,
 *       @ref nrf_grtc_sys_counter_overflow_check should be called. If it retuns true,
 *       whole procedure should be repeated.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Higher part SYSCOUNTER value.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_sys_counter_high_get(NRF_GRTC_Type const * p_reg);

/**
 * @brief Function for checking whether the lower 32-bits of SYSCOUNTER overflowed after
 *        last execution of @ref nrf_grtc_sys_counter_low_get.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval True if the lower 32-bits of SYSCOUNTER overflowed, false otherwise.
 */
NRF_STATIC_INLINE bool nrf_grtc_sys_counter_overflow_check(NRF_GRTC_Type const * p_reg);

/**
 * @brief Function for returning the address of an event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Requested event.
 *
 * @return Address of the requested event register.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_event_address_get(NRF_GRTC_Type const * p_reg,
                                                      nrf_grtc_event_t      event);

/**
 * @brief Function for returning the address of a task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Requested task.
 *
 * @return Address of the requested task register.
 */
NRF_STATIC_INLINE uint32_t nrf_grtc_task_address_get(NRF_GRTC_Type const * p_reg,
                                                     nrf_grtc_task_t       task);

/**
 * @brief Function for starting a task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Requested task.
 */
NRF_STATIC_INLINE void nrf_grtc_task_trigger(NRF_GRTC_Type * p_reg, nrf_grtc_task_t task);

/**
 * @brief Function for getting the 1 MHz SYSCOUNTER timer capture task associated with the
 *        specified channel.
 *
 * @param[in] cc_channel Capture channel.
 *
 * @return Capture task.
 */
NRF_STATIC_INLINE nrf_grtc_task_t nrf_grtc_capture_task_get(uint8_t cc_channel);

/**
 * @brief Function for enabling SYSCOUNTER compare event.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Channel number of compare event to be enabled.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_compare_event_enable(NRF_GRTC_Type * p_reg,
                                                                 uint8_t         cc_channel);

/**
 * @brief Function for disabling SYSCOUNTER compare event.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Channel number of compare event to be disabled.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_compare_event_disable(NRF_GRTC_Type * p_reg,
                                                                  uint8_t         cc_channel);

/**
 * @brief Function for getting the SYSCOUNTER compare event associated with the specified
 *        compare cc_channel.
 *
 * @param[in] cc_channel Compare channel number.
 *
 * @return Requested compare event.
 */
NRF_STATIC_INLINE nrf_grtc_event_t nrf_grtc_sys_counter_compare_event_get(uint8_t cc_channel);

/**
 * @brief Function for setting the SYSCOUNTER.
 *
 * @note When the SYSCOUNTER is disabled the GRTC uses RTCOUNTER by default.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if SYSCOUNTER is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_set(NRF_GRTC_Type * p_reg, bool enable);

/**
 * @brief Function for setting automatic mode for the SYSCOUNTER.
 *
 * @note When @p enable is false then the SYSCOUNTER remains active when KEEPRUNNING is set,
 *       or any task register, INT register or SYSCOUNTER register is being accessed.
 *       When @p enable is true then in addition the SYSCOUNTER remains active when
 *       any local CPU that is not sleeping keeps the SYSCOUNTER active.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the automatic mode is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_auto_mode_set(NRF_GRTC_Type * p_reg, bool enable);

/**
 * @brief Function for setting the request to keep the SYSCOUNTER active by given domain.
 *
 * @note This function modifies the KEEPRUNNING register, which possesses information
 *       whether any local CPU needs keeping the SYSCOUNTER active.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Domain identifier
 * @param[in] enable True if the automatic mode is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_active_state_request_set(NRF_GRTC_Type * p_reg,
                                                                     nrf_domain_t    domain,
                                                                     bool            enable);

/**
 * @brief Function for checking whether specified domain requested the SYSCOUNTER to remain
 *        active.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Domain identifier
 *
 * @retval True if given domain request for keeping the SYSCOUNTER is active, false otherwise.
 */
NRF_STATIC_INLINE
bool nrf_grtc_sys_counter_active_state_request_check(NRF_GRTC_Type const * p_reg,
                                                     nrf_domain_t          domain);

/**
 * @brief Function for getting the domains that requested the SYSCTOUNER to remain active.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] mask   Domains mask.
 *
 * @retval Bitmask of domains that keep the SYSCOUNTER active.
 */
NRF_STATIC_INLINE
uint32_t nrf_grtc_sys_counter_active_state_request_get(NRF_GRTC_Type const * p_reg,
                                                       uint32_t              mask);

/**
 * @brief Function for setting the periodic compare event for capture/compare channel 0.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] value Period value in 1 MHz units.
 */
NRF_STATIC_INLINE void nrf_grtc_sys_counter_interval_set(NRF_GRTC_Type * p_reg, uint16_t value);

/**
 * @brief Function for getting the value of interval for periodic capture/compare event
 *        for channel 0.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval Value of the interval in 1 MHz units.
 */
NRF_STATIC_INLINE uint16_t nrf_grtc_sys_counter_interval_get(NRF_GRTC_Type const * p_reg);

/**
 * @brief Function for setting the timeout value for GRTC.
 *
 * @note Timeout between all CPUs going to sleep and stopping the SYSCOUNTER.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] value Timeout value in 32 kHz units.
 */
NRF_STATIC_INLINE void nrf_grtc_timeout_set(NRF_GRTC_Type * p_reg, uint16_t value);

/**
 * @brief Function for getting the value of the timeout value for GRTC.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval Value of the timeout in 32 kHz units.
 */
NRF_STATIC_INLINE uint16_t nrf_grtc_timeout_get(NRF_GRTC_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_grtc_sys_counter_cc_set(NRF_GRTC_Type * p_reg,
                                                   uint8_t         cc_channel,
                                                   uint64_t        cc_value)
{
    NRFX_ASSERT(cc_channel < NRF_GRTC_SYSCOUNTER_CC_COUNT);
    uint32_t cc_h = (uint32_t)(cc_value >> 32);
    NRFX_ASSERT(cc_h <= NRF_GRTC_SYSCOUNTER_CCH_MASK);

    p_reg->CC[cc_channel].CCL = (uint32_t)cc_value;
    p_reg->CC[cc_channel].CCH = cc_h & NRF_GRTC_SYSCOUNTER_CCH_MASK;
}

NRF_STATIC_INLINE uint64_t nrf_grtc_sys_counter_cc_get(NRF_GRTC_Type const * p_reg,
                                                       uint8_t               cc_channel)
{
    NRFX_ASSERT(cc_channel < NRF_GRTC_SYSCOUNTER_CC_COUNT);
    uint32_t cc_h = p_reg->CC[cc_channel].CCH;

    return (uint64_t)p_reg->CC[cc_channel].CCL | ((uint64_t)cc_h << 32);
}

NRF_STATIC_INLINE void nrf_grtc_sys_counter_cc_add_set(NRF_GRTC_Type *             p_reg,
                                                       uint8_t                     cc_channel,
                                                       uint32_t                    value,
                                                       nrf_grtc_cc_add_reference_t reference)
{
    NRFX_ASSERT(cc_channel < NRF_GRTC_SYSCOUNTER_CC_COUNT);
    NRFX_ASSERT(value <= NRF_GRTC_SYSCOUNTER_CCADD_MASK);

    p_reg->CC[cc_channel].CCADD = ((uint32_t)reference << GRTC_CC_CCADD_REFERENCE_Pos) |
                               (value & NRF_GRTC_SYSCOUNTER_CCADD_MASK);
}

NRF_STATIC_INLINE void nrf_grtc_rt_counter_cc_set(NRF_GRTC_Type * p_reg,
                                                  uint64_t        cc_value,
                                                  bool            sync)
{
    uint32_t cc_h = (uint32_t)(cc_value >> 32);
    NRFX_ASSERT(cc_h <= NRF_GRTC_RTCOUNTER_CCH_MASK);

    if (sync)
    {
        p_reg->RTCOMPARESYNCL = (uint32_t)cc_value;
        p_reg->RTCOMPARESYNCH = cc_h & NRF_GRTC_RTCOUNTER_CCH_MASK;
    }
    else
    {
        p_reg->RTCOMPAREL = (uint32_t)cc_value;
        p_reg->RTCOMPAREH = cc_h & NRF_GRTC_RTCOUNTER_CCH_MASK;
    }
}

NRF_STATIC_INLINE uint64_t nrf_grtc_rt_counter_cc_get(NRF_GRTC_Type const * p_reg)
{
    uint32_t cc_h = p_reg->RTCOMPAREH;

    return (uint64_t)p_reg->RTCOMPAREL | ((uint64_t)cc_h << 32);
}

NRF_STATIC_INLINE void nrf_grtc_int_enable(NRF_GRTC_Type * p_reg,
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
        case 8:
            p_reg->INTENSET8 = mask;
            break;
        case 9:
            p_reg->INTENSET9 = mask;
            break;
        case 10:
            p_reg->INTENSET10 = mask;
            break;
        case 11:
            p_reg->INTENSET11 = mask;
            break;
        case 12:
            p_reg->INTENSET12 = mask;
            break;
        case 13:
            p_reg->INTENSET13 = mask;
            break;
        case 14:
            p_reg->INTENSET14 = mask;
            break;
        case 15:
            p_reg->INTENSET15 = mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_grtc_int_disable(NRF_GRTC_Type * p_reg,
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
        case 8:
            p_reg->INTENCLR8 = mask;
            break;
        case 9:
            p_reg->INTENCLR9 = mask;
            break;
        case 10:
            p_reg->INTENCLR10 = mask;
            break;
        case 11:
            p_reg->INTENCLR11 = mask;
            break;
        case 12:
            p_reg->INTENCLR12 = mask;
            break;
        case 13:
            p_reg->INTENCLR13 = mask;
            break;
        case 14:
            p_reg->INTENCLR14 = mask;
            break;
        case 15:
            p_reg->INTENCLR15 = mask;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_grtc_int_enable_check(NRF_GRTC_Type const * p_reg,
                                                     uint8_t               group_idx,
                                                     uint32_t              mask)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTENSET0 & mask;
            break;
        case 1:
            return p_reg->INTENSET1 & mask;
            break;
        case 2:
            return p_reg->INTENSET2 & mask;
            break;
        case 3:
            return p_reg->INTENSET3 & mask;
            break;
        case 4:
            return p_reg->INTENSET4 & mask;
            break;
        case 5:
            return p_reg->INTENSET5 & mask;
            break;
        case 6:
            return p_reg->INTENSET6 & mask;
            break;
        case 7:
            return p_reg->INTENSET7 & mask;
            break;
        case 8:
            return p_reg->INTENSET8 & mask;
            break;
        case 9:
            return p_reg->INTENSET9 & mask;
            break;
        case 10:
            return p_reg->INTENSET10 & mask;
            break;
        case 11:
            return p_reg->INTENSET11 & mask;
            break;
        case 12:
            return p_reg->INTENSET12 & mask;
            break;
        case 13:
            return p_reg->INTENSET13 & mask;
            break;
        case 14:
            return p_reg->INTENSET14 & mask;
            break;
        case 15:
            return p_reg->INTENSET15 & mask;
            break;
        default:
            NRFX_ASSERT(false);
            return 0;
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_grtc_int_pending_get(NRF_GRTC_Type const * p_reg,
                                                    uint8_t               group_idx)
{
    switch (group_idx)
    {
        case 0:
            return p_reg->INTPEND0;
            break;
        case 1:
            return p_reg->INTPEND1;
            break;
        case 2:
            return p_reg->INTPEND2;
            break;
        case 3:
            return p_reg->INTPEND3;
            break;
        case 4:
            return p_reg->INTPEND4;
            break;
        case 5:
            return p_reg->INTPEND5;
            break;
        case 6:
            return p_reg->INTPEND6;
            break;
        case 7:
            return p_reg->INTPEND7;
            break;
        case 8:
            return p_reg->INTPEND8;
            break;
        case 9:
            return p_reg->INTPEND9;
            break;
        case 10:
            return p_reg->INTPEND10;
            break;
        case 11:
            return p_reg->INTPEND11;
            break;
        case 12:
            return p_reg->INTPEND12;
            break;
        case 13:
            return p_reg->INTPEND13;
            break;
        case 14:
            return p_reg->INTPEND14;
            break;
        case 15:
            return p_reg->INTPEND15;
            break;
        default:
            NRFX_ASSERT(false);
            return 0;
            break;
    }
}

NRF_STATIC_INLINE void nrf_grtc_shorts_enable(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    p_reg->SHORTS |= mask;
}

NRF_STATIC_INLINE void nrf_grtc_shorts_disable(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    p_reg->SHORTS &= ~(mask);
}

NRF_STATIC_INLINE void nrf_grtc_shorts_set(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    p_reg->SHORTS = mask;
}

NRF_STATIC_INLINE void nrf_grtc_publish_set(NRF_GRTC_Type *  p_reg,
                                            nrf_grtc_event_t event,
                                            uint8_t          channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80UL)) =
            ((uint32_t)channel | NRF_SUBSCRIBE_PUBLISH_ENABLE);
}

NRF_STATIC_INLINE void nrf_grtc_publish_clear(NRF_GRTC_Type *  p_reg,
                                             nrf_grtc_event_t event)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80UL)) = 0x0UL;
}

NRF_STATIC_INLINE bool nrf_grtc_event_check(NRF_GRTC_Type const * p_reg, nrf_grtc_event_t event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_grtc_event_clear(NRF_GRTC_Type * p_reg, nrf_grtc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_grtc_rt_counter_low_get(NRF_GRTC_Type const * p_reg)
{
    return p_reg->RTCOUNTERL;
}

NRF_STATIC_INLINE uint32_t nrf_grtc_rt_counter_high_get(NRF_GRTC_Type const * p_reg)
{
    return p_reg->RTCOUNTERH;
}

NRF_STATIC_INLINE uint32_t nrf_grtc_sys_counter_low_get(NRF_GRTC_Type const * p_reg)
{
    return p_reg->SYSCOUNTERL;
}

NRF_STATIC_INLINE uint32_t nrf_grtc_sys_counter_high_get(NRF_GRTC_Type const * p_reg)
{
    return p_reg->SYSCOUNTERH;
}

NRF_STATIC_INLINE bool nrf_grtc_sys_counter_overflow_check(NRF_GRTC_Type const * p_reg)
{
    return (p_reg->SYSCOUNTERH & GRTC_SYSCOUNTERH_OVERFLOW_Msk) ? true : false;
}

NRF_STATIC_INLINE uint32_t nrf_grtc_event_address_get(NRF_GRTC_Type const * p_reg,
                                                      nrf_grtc_event_t      event)
{
    return (uint32_t)p_reg + (uint32_t)event;
}

NRF_STATIC_INLINE uint32_t nrf_grtc_task_address_get(NRF_GRTC_Type const * p_reg,
                                                     nrf_grtc_task_t       task)
{
    return (uint32_t)p_reg + (uint32_t)task;
}

NRF_STATIC_INLINE void nrf_grtc_task_trigger(NRF_GRTC_Type * p_reg, nrf_grtc_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE nrf_grtc_task_t nrf_grtc_capture_task_get(uint8_t cc_channel)
{
    return (nrf_grtc_task_t)NRFX_OFFSETOF(NRF_GRTC_Type, TASKS_CAPTURE[cc_channel]);
}

NRF_STATIC_INLINE void nrf_grtc_sys_counter_compare_event_enable(NRF_GRTC_Type * p_reg,
                                                                 uint8_t         cc_channel)
{
    p_reg->CC[cc_channel].CCEN = GRTC_CC_CCEN_ACTIVE_Enable;
}

NRF_STATIC_INLINE void nrf_grtc_sys_counter_compare_event_disable(NRF_GRTC_Type * p_reg,
                                                                  uint8_t         cc_channel)
{
    p_reg->CC[cc_channel].CCEN = GRTC_CC_CCEN_ACTIVE_Disable;
}

NRF_STATIC_INLINE nrf_grtc_event_t nrf_grtc_sys_counter_compare_event_get(uint8_t cc_channel)
{
    return (nrf_grtc_event_t)NRFX_OFFSETOF(NRF_GRTC_Type, EVENTS_COMPARE[cc_channel]);
}

NRF_STATIC_INLINE void nrf_grtc_sys_counter_set(NRF_GRTC_Type * p_reg, bool enable)
{
    p_reg->MODE = ((p_reg->MODE & ~GRTC_MODE_SYSCOUNTEREN_Msk) |
                  ((enable ? GRTC_MODE_SYSCOUNTEREN_Enabled :
                  GRTC_MODE_SYSCOUNTEREN_Disabled) << GRTC_MODE_SYSCOUNTEREN_Pos));
}

NRF_STATIC_INLINE void nrf_grtc_sys_counter_auto_mode_set(NRF_GRTC_Type * p_reg, bool enable)
{
    p_reg->MODE = ((p_reg->MODE & ~GRTC_MODE_AUTOEN_Msk) |
                  ((enable ? GRTC_MODE_AUTOEN_CpuActive :
                  GRTC_MODE_AUTOEN_Default) << GRTC_MODE_AUTOEN_Pos));
}

NRF_STATIC_INLINE void nrf_grtc_sys_counter_active_state_request_set(NRF_GRTC_Type * p_reg,
                                                                     nrf_domain_t    domain,
                                                                     bool            enable)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    p_reg->KEEPRUNNING = ((p_reg->KEEPRUNNING & ~(GRTC_KEEPRUNNING_DOMAIN0_Active  << domain)) |
                         ((enable ? GRTC_KEEPRUNNING_DOMAIN0_Active :
                         GRTC_KEEPRUNNING_DOMAIN0_NotActive) << domain));
}

NRF_STATIC_INLINE
bool nrf_grtc_sys_counter_active_state_request_check(NRF_GRTC_Type const * p_reg,
                                                     nrf_domain_t          domain)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    return (p_reg->KEEPRUNNING & (GRTC_KEEPRUNNING_DOMAIN0_Active << domain)) ? true : false;
}

NRF_STATIC_INLINE
uint32_t nrf_grtc_sys_counter_active_state_request_get(NRF_GRTC_Type const * p_reg,
                                                       uint32_t              mask)
{
    return p_reg->KEEPRUNNING & mask;
}

NRF_STATIC_INLINE void nrf_grtc_sys_counter_interval_set(NRF_GRTC_Type * p_reg, uint16_t value)
{
    p_reg->INTERVAL = value;
}

NRF_STATIC_INLINE uint16_t nrf_grtc_sys_counter_interval_get(NRF_GRTC_Type const * p_reg)
{
    return (uint16_t)p_reg->INTERVAL;
}

NRF_STATIC_INLINE void nrf_grtc_timeout_set(NRF_GRTC_Type * p_reg, uint16_t value)
{
    p_reg->TIMEOUT = value;
}

NRF_STATIC_INLINE uint16_t nrf_grtc_timeout_get(NRF_GRTC_Type const * p_reg)
{
    return (uint16_t)p_reg->TIMEOUT;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif  /* NRF_GRTC_H */
