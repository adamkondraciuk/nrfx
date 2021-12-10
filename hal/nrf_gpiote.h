/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#ifndef NRF_GPIOTE_H__
#define NRF_GPIOTE_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
* @defgroup nrf_gpiote_hal GPIOTE HAL
* @{
* @ingroup nrf_gpiote
* @brief   Hardware access layer (HAL) for managing the GPIOTE peripheral.
*/

#if defined(GPIOTE_CONFIG_PORT_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Mask for covering port and pin bits in registers. */
#define GPIOTE_CONFIG_PORT_PIN_Msk (GPIOTE_CONFIG_PORT_Msk | GPIOTE_CONFIG_PSEL_Msk)
#else
#define GPIOTE_CONFIG_PORT_PIN_Msk GPIOTE_CONFIG_PSEL_Msk
#endif

#if defined(GPIOTE_LATENCY_LATENCY_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Presence of the latency setting. */
#define NRF_GPIOTE_HAS_LATENCY 1
#else
#define NRF_GPIOTE_HAS_LATENCY 0
#endif

#if defined(GPIOTE_INTEN0_IN0_Msk) || defined(__NRFX_DOXYGEN__)
/** @brief Presence of multiple interrupt registers. */
#define NRF_GPIOTE_HAS_MULTIPLE_INT 1
#else
#define NRF_GPIOTE_HAS_MULTIPLE_INT 0
#endif

#if NRF_GPIOTE_HAS_MULTIPLE_INT
/** @brief Number of interrupt registers. */
/* TODO: This magic number should come from MDK. */
#define NRF_GPIOTE_INT_COUNT 7
#endif

#if defined(HALTIUM_XXAA)
/* TODO: Remove once haltium has peripheral.h support. */
#define GPIOTE_CH_NUM   GPIOTE_EVENTS_IN_MaxCount
#define GPIOTE_PORT_NUM GPIOTE_EVENTS_PORT_MaxCount
#endif

/** @brief Polarity for the GPIOTE channel. */
typedef enum
{
    NRF_GPIOTE_POLARITY_NONE   = GPIOTE_CONFIG_POLARITY_None,   /**< None. */
    NRF_GPIOTE_POLARITY_LOTOHI = GPIOTE_CONFIG_POLARITY_LoToHi, /**< Low to high. */
    NRF_GPIOTE_POLARITY_HITOLO = GPIOTE_CONFIG_POLARITY_HiToLo, /**< High to low. */
    NRF_GPIOTE_POLARITY_TOGGLE = GPIOTE_CONFIG_POLARITY_Toggle, /**< Toggle. */
} nrf_gpiote_polarity_t;

/** @brief Initial output value for the GPIOTE channel. */
typedef enum
{
    NRF_GPIOTE_INITIAL_VALUE_LOW  = GPIOTE_CONFIG_OUTINIT_Low,  /**< Low to high. */
    NRF_GPIOTE_INITIAL_VALUE_HIGH = GPIOTE_CONFIG_OUTINIT_High, /**< High to low. */
} nrf_gpiote_outinit_t;

#if NRF_GPIOTE_HAS_LATENCY
/** @brief Latency setting. */
typedef enum
{
    NRF_GPIOTE_LATENCY_LOWPOWER   = GPIOTE_LATENCY_LATENCY_LowPower,   /**< Low Power. */
    NRF_GPIOTE_LATENCY_LOWLATENCY = GPIOTE_LATENCY_LATENCY_LowLatency, /**< Low Latency. */
} nrf_gpiote_latency_t;
#endif

/** @brief GPIOTE tasks. */
typedef enum
{
    NRF_GPIOTE_TASK_OUT_0     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[0]), /**< Out task 0. */
    NRF_GPIOTE_TASK_OUT_1     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[1]), /**< Out task 1. */
    NRF_GPIOTE_TASK_OUT_2     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[2]), /**< Out task 2. */
    NRF_GPIOTE_TASK_OUT_3     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[3]), /**< Out task 3. */
#if (GPIOTE_CH_NUM > 4) || defined(__NRFX_DOXYGEN__)
    NRF_GPIOTE_TASK_OUT_4     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[4]), /**< Out task 4. */
    NRF_GPIOTE_TASK_OUT_5     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[5]), /**< Out task 5. */
    NRF_GPIOTE_TASK_OUT_6     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[6]), /**< Out task 6. */
    NRF_GPIOTE_TASK_OUT_7     = offsetof(NRF_GPIOTE_Type, TASKS_OUT[7]), /**< Out task 7. */
#endif
#if defined(GPIOTE_FEATURE_SET_PRESENT) || defined(__NRFX_DOXYGEN__)
    NRF_GPIOTE_TASK_SET_0     = offsetof(NRF_GPIOTE_Type, TASKS_SET[0]), /**< Set task 0. */
    NRF_GPIOTE_TASK_SET_1     = offsetof(NRF_GPIOTE_Type, TASKS_SET[1]), /**< Set task 1. */
    NRF_GPIOTE_TASK_SET_2     = offsetof(NRF_GPIOTE_Type, TASKS_SET[2]), /**< Set task 2. */
    NRF_GPIOTE_TASK_SET_3     = offsetof(NRF_GPIOTE_Type, TASKS_SET[3]), /**< Set task 3. */
    NRF_GPIOTE_TASK_SET_4     = offsetof(NRF_GPIOTE_Type, TASKS_SET[4]), /**< Set task 4. */
    NRF_GPIOTE_TASK_SET_5     = offsetof(NRF_GPIOTE_Type, TASKS_SET[5]), /**< Set task 5. */
    NRF_GPIOTE_TASK_SET_6     = offsetof(NRF_GPIOTE_Type, TASKS_SET[6]), /**< Set task 6. */
    NRF_GPIOTE_TASK_SET_7     = offsetof(NRF_GPIOTE_Type, TASKS_SET[7]), /**< Set task 7. */
#endif
#if defined(GPIOTE_FEATURE_CLR_PRESENT) || defined(__NRFX_DOXYGEN__)
    NRF_GPIOTE_TASK_CLR_0     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[0]), /**< Clear task 0. */
    NRF_GPIOTE_TASK_CLR_1     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[1]), /**< Clear task 1. */
    NRF_GPIOTE_TASK_CLR_2     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[2]), /**< Clear task 2. */
    NRF_GPIOTE_TASK_CLR_3     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[3]), /**< Clear task 3. */
    NRF_GPIOTE_TASK_CLR_4     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[4]), /**< Clear task 4. */
    NRF_GPIOTE_TASK_CLR_5     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[5]), /**< Clear task 5. */
    NRF_GPIOTE_TASK_CLR_6     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[6]), /**< Clear task 6. */
    NRF_GPIOTE_TASK_CLR_7     = offsetof(NRF_GPIOTE_Type, TASKS_CLR[7]), /**< Clear task 7. */
#endif
} nrf_gpiote_task_t;

/** @brief GPIOTE events. */
typedef enum
{
    NRF_GPIOTE_EVENT_IN_0     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[0]), /**< In event 0. */
    NRF_GPIOTE_EVENT_IN_1     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[1]), /**< In event 1. */
    NRF_GPIOTE_EVENT_IN_2     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[2]), /**< In event 2. */
    NRF_GPIOTE_EVENT_IN_3     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[3]), /**< In event 3. */
#if (GPIOTE_CH_NUM > 4) || defined(__NRFX_DOXYGEN__)
    NRF_GPIOTE_EVENT_IN_4     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[4]), /**< In event 4. */
    NRF_GPIOTE_EVENT_IN_5     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[5]), /**< In event 5. */
    NRF_GPIOTE_EVENT_IN_6     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[6]), /**< In event 6. */
    NRF_GPIOTE_EVENT_IN_7     = offsetof(NRF_GPIOTE_Type, EVENTS_IN[7]), /**< In event 7. */
#endif
#if !defined(GPIOTE_PORT_NUM)
    NRF_GPIOTE_EVENT_PORT     = offsetof(NRF_GPIOTE_Type, EVENTS_PORT),  /**<  Port event. */
#endif
#if defined(GPIOTE_PORT_NUM) || defined(__NRFX_DOXYGEN__)
    NRF_GPIOTE_EVENT_PORT_0   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[0]),  /**<  Port event 0. */
    NRF_GPIOTE_EVENT_PORT_1   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[1]),  /**<  Port event 1. */
    NRF_GPIOTE_EVENT_PORT_2   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[2]),  /**<  Port event 2. */
    NRF_GPIOTE_EVENT_PORT_3   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[3]),  /**<  Port event 3. */
    NRF_GPIOTE_EVENT_PORT_4   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[4]),  /**<  Port event 4. */
    NRF_GPIOTE_EVENT_PORT_5   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[5]),  /**<  Port event 5. */
    NRF_GPIOTE_EVENT_PORT_6   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[6]),  /**<  Port event 6. */
    NRF_GPIOTE_EVENT_PORT_7   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[7]),  /**<  Port event 7. */
    NRF_GPIOTE_EVENT_PORT_8   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[8]),  /**<  Port event 8. */
    NRF_GPIOTE_EVENT_PORT_9   = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[9]),  /**<  Port event 9. */
    NRF_GPIOTE_EVENT_PORT_10  = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[10]), /**<  Port event 10. */
    NRF_GPIOTE_EVENT_PORT_11  = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[11]), /**<  Port event 11. */
    NRF_GPIOTE_EVENT_PORT_12  = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[12]), /**<  Port event 12. */
    NRF_GPIOTE_EVENT_PORT_13  = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[13]), /**<  Port event 13. */
    NRF_GPIOTE_EVENT_PORT_14  = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[14]), /**<  Port event 14. */
    NRF_GPIOTE_EVENT_PORT_15  = offsetof(NRF_GPIOTE_Type, EVENTS_PORT[15]), /**<  Port event 15. */
#endif
} nrf_gpiote_event_t;

/** @brief GPIOTE interrupts. */
typedef enum
{
#if NRF_GPIOTE_HAS_MULTIPLE_INT
    NRF_GPIOTE_INT_IN0_MASK    = GPIOTE_INTENSET0_IN0_Msk,    /**< GPIOTE interrupt from IN0. */
    NRF_GPIOTE_INT_IN1_MASK    = GPIOTE_INTENSET0_IN1_Msk,    /**< GPIOTE interrupt from IN1. */
    NRF_GPIOTE_INT_IN2_MASK    = GPIOTE_INTENSET0_IN2_Msk,    /**< GPIOTE interrupt from IN2. */
    NRF_GPIOTE_INT_IN3_MASK    = GPIOTE_INTENSET0_IN3_Msk,    /**< GPIOTE interrupt from IN3. */
    NRF_GPIOTE_INT_IN4_MASK    = GPIOTE_INTENSET0_IN4_Msk,    /**< GPIOTE interrupt from IN4. */
    NRF_GPIOTE_INT_IN5_MASK    = GPIOTE_INTENSET0_IN5_Msk,    /**< GPIOTE interrupt from IN5. */
    NRF_GPIOTE_INT_IN6_MASK    = GPIOTE_INTENSET0_IN6_Msk,    /**< GPIOTE interrupt from IN6. */
    NRF_GPIOTE_INT_IN7_MASK    = GPIOTE_INTENSET0_IN7_Msk,    /**< GPIOTE interrupt from IN7. */
    NRF_GPIOTE_INT_PORT0_MASK  = GPIOTE_INTENSET0_PORT0_Msk,  /**< GPIOTE interrupt from PORT0 event. */
    NRF_GPIOTE_INT_PORT1_MASK  = GPIOTE_INTENSET0_PORT1_Msk,  /**< GPIOTE interrupt from PORT1 event. */
    NRF_GPIOTE_INT_PORT2_MASK  = GPIOTE_INTENSET0_PORT2_Msk,  /**< GPIOTE interrupt from PORT2 event. */
    NRF_GPIOTE_INT_PORT3_MASK  = GPIOTE_INTENSET0_PORT3_Msk,  /**< GPIOTE interrupt from PORT3 event. */
    NRF_GPIOTE_INT_PORT4_MASK  = GPIOTE_INTENSET0_PORT4_Msk,  /**< GPIOTE interrupt from PORT4 event. */
    NRF_GPIOTE_INT_PORT5_MASK  = GPIOTE_INTENSET0_PORT5_Msk,  /**< GPIOTE interrupt from PORT5 event. */
    NRF_GPIOTE_INT_PORT6_MASK  = GPIOTE_INTENSET0_PORT6_Msk,  /**< GPIOTE interrupt from PORT6 event. */
    NRF_GPIOTE_INT_PORT7_MASK  = GPIOTE_INTENSET0_PORT7_Msk,  /**< GPIOTE interrupt from PORT7 event. */
    NRF_GPIOTE_INT_PORT8_MASK  = GPIOTE_INTENSET0_PORT8_Msk,  /**< GPIOTE interrupt from PORT8 event. */
    NRF_GPIOTE_INT_PORT9_MASK  = GPIOTE_INTENSET0_PORT9_Msk,  /**< GPIOTE interrupt from PORT9 event. */
    NRF_GPIOTE_INT_PORT10_MASK = GPIOTE_INTENSET0_PORT10_Msk, /**< GPIOTE interrupt from PORT10 event. */
    NRF_GPIOTE_INT_PORT11_MASK = GPIOTE_INTENSET0_PORT11_Msk, /**< GPIOTE interrupt from PORT11 event. */
    NRF_GPIOTE_INT_PORT12_MASK = GPIOTE_INTENSET0_PORT12_Msk, /**< GPIOTE interrupt from PORT12 event. */
    NRF_GPIOTE_INT_PORT13_MASK = GPIOTE_INTENSET0_PORT13_Msk, /**< GPIOTE interrupt from PORT13 event. */
    NRF_GPIOTE_INT_PORT14_MASK = GPIOTE_INTENSET0_PORT14_Msk, /**< GPIOTE interrupt from PORT14 event. */
    NRF_GPIOTE_INT_PORT15_MASK = GPIOTE_INTENSET0_PORT15_Msk, /**< GPIOTE interrupt from PORT15 event. */
#else
    NRF_GPIOTE_INT_IN0_MASK  = GPIOTE_INTENSET_IN0_Msk,  /**< GPIOTE interrupt from IN0. */
    NRF_GPIOTE_INT_IN1_MASK  = GPIOTE_INTENSET_IN1_Msk,  /**< GPIOTE interrupt from IN1. */
    NRF_GPIOTE_INT_IN2_MASK  = GPIOTE_INTENSET_IN2_Msk,  /**< GPIOTE interrupt from IN2. */
    NRF_GPIOTE_INT_IN3_MASK  = GPIOTE_INTENSET_IN3_Msk,  /**< GPIOTE interrupt from IN3. */
#if (GPIOTE_CH_NUM > 4) || defined(__NRFX_DOXYGEN__)
    NRF_GPIOTE_INT_IN4_MASK  = GPIOTE_INTENSET_IN4_Msk,  /**< GPIOTE interrupt from IN4. */
    NRF_GPIOTE_INT_IN5_MASK  = GPIOTE_INTENSET_IN5_Msk,  /**< GPIOTE interrupt from IN5. */
    NRF_GPIOTE_INT_IN6_MASK  = GPIOTE_INTENSET_IN6_Msk,  /**< GPIOTE interrupt from IN6. */
    NRF_GPIOTE_INT_IN7_MASK  = GPIOTE_INTENSET_IN7_Msk,  /**< GPIOTE interrupt from IN7. */
#endif
    NRF_GPIOTE_INT_PORT_MASK = (int)GPIOTE_INTENSET_PORT_Msk, /**< GPIOTE interrupt from PORT event. */
#endif // NRF_GPIOTE_HAS_MULTIPLE_INT
} nrf_gpiote_int_t;

#if (GPIOTE_CH_NUM == 4) || defined(__NRFX_DOXYGEN__)
/** @brief Mask holding positions of available GPIOTE input interrupts. */
#define NRF_GPIOTE_INT_IN_MASK (NRF_GPIOTE_INT_IN0_MASK | NRF_GPIOTE_INT_IN1_MASK |\
                                NRF_GPIOTE_INT_IN2_MASK | NRF_GPIOTE_INT_IN3_MASK)
#else
#define NRF_GPIOTE_INT_IN_MASK (NRF_GPIOTE_INT_IN0_MASK | NRF_GPIOTE_INT_IN1_MASK |\
                                NRF_GPIOTE_INT_IN2_MASK | NRF_GPIOTE_INT_IN3_MASK |\
                                NRF_GPIOTE_INT_IN4_MASK | NRF_GPIOTE_INT_IN5_MASK |\
                                NRF_GPIOTE_INT_IN6_MASK | NRF_GPIOTE_INT_IN7_MASK)
#endif
#if (NRF_GPIOTE_HAS_MULTIPLE_INT)
/** @brief Mask holding positions of available GPIOTE port interrupts. */
#define NRF_GPIOTE_INT_PORT_MASK (NRF_GPIOTE_INT_PORT0_MASK  | NRF_GPIOTE_INT_PORT1_MASK  |\
                                  NRF_GPIOTE_INT_PORT2_MASK  | NRF_GPIOTE_INT_PORT3_MASK  |\
                                  NRF_GPIOTE_INT_PORT4_MASK  | NRF_GPIOTE_INT_PORT5_MASK  |\
                                  NRF_GPIOTE_INT_PORT6_MASK  | NRF_GPIOTE_INT_PORT7_MASK  |\
                                  NRF_GPIOTE_INT_PORT6_MASK  | NRF_GPIOTE_INT_PORT9_MASK  |\
                                  NRF_GPIOTE_INT_PORT10_MASK | NRF_GPIOTE_INT_PORT11_MASK |\
                                  NRF_GPIOTE_INT_PORT12_MASK | NRF_GPIOTE_INT_PORT13_MASK |\
                                  NRF_GPIOTE_INT_PORT14_MASK | NRF_GPIOTE_INT_PORT15_MASK)
#endif

/**
 * @brief Function for activating the specified GPIOTE task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task.
 */
NRF_STATIC_INLINE void nrf_gpiote_task_trigger(NRF_GPIOTE_Type * p_reg, nrf_gpiote_task_t task);

/**
 * @brief Function for getting the address of the specified GPIOTE task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task.
 *
 * @return Address of the specified task.
 */
NRF_STATIC_INLINE uint32_t nrf_gpiote_task_address_get(NRF_GPIOTE_Type const * p_reg,
                                                       nrf_gpiote_task_t       task);

/**
 * @brief Function for getting the state of the specified GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event.
 *
 * @retval true  The event is set.
 * @retval false The event is not set.
 */
NRF_STATIC_INLINE bool nrf_gpiote_event_check(NRF_GPIOTE_Type const * p_reg,
                                              nrf_gpiote_event_t      event);

/**
 * @brief Function for clearing the specified GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event.
 */
NRF_STATIC_INLINE void nrf_gpiote_event_clear(NRF_GPIOTE_Type * p_reg, nrf_gpiote_event_t event);

/**
 * @brief Function for getting the address of the specified GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event.
 *
 * @return Address of the specified event.
 */
NRF_STATIC_INLINE uint32_t nrf_gpiote_event_address_get(NRF_GPIOTE_Type const * p_reg,
                                                        nrf_gpiote_event_t      event);

#if NRF_GPIOTE_HAS_MULTIPLE_INT
/**
 * @brief Function for enabling interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be enabled.
 * @param[in] mask      Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_gpiote_int_group_enable(NRF_GPIOTE_Type * p_reg,
                                                   uint8_t           group_idx,
                                                   uint32_t          mask);

/**
 * @brief Function for disabling interrupts.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be disabled.
 * @param[in] mask      Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_gpiote_int_group_disable(NRF_GPIOTE_Type * p_reg,
                                                    uint8_t           group_idx,
                                                    uint32_t          mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] group_idx Index of interrupt group to be checked.
 * @param[in] mask      Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_gpiote_int_group_enable_check(NRF_GPIOTE_Type const * p_reg,
                                                             uint8_t                 group_idx,
                                                             uint32_t                mask);
#else
/**
 * @brief Function for enabling interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_gpiote_int_enable(NRF_GPIOTE_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_gpiote_int_disable(NRF_GPIOTE_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_gpiote_int_enable_check(NRF_GPIOTE_Type const * p_reg,
                                                       uint32_t                mask);
#endif // NRF_GPIOTE_HAS_MULTIPLE_INT

#if defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for setting the subscribe configuration for a given
 *        GPIOTE task.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] task    Task for which to set the configuration.
 * @param[in] channel Channel through which to subscribe events.
 */
NRF_STATIC_INLINE void nrf_gpiote_subscribe_set(NRF_GPIOTE_Type * p_reg,
                                                nrf_gpiote_task_t task,
                                                uint8_t           channel);

/**
 * @brief Function for clearing the subscribe configuration for a given
 *        GPIOTE task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_gpiote_subscribe_clear(NRF_GPIOTE_Type * p_reg, nrf_gpiote_task_t task);

/**
 * @brief Function for setting the publish configuration for a given
 *        GPIOTE event.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] event   Event for which to set the configuration.
 * @param[in] channel Channel through which to publish the event.
 */
NRF_STATIC_INLINE void nrf_gpiote_publish_set(NRF_GPIOTE_Type *  p_reg,
                                              nrf_gpiote_event_t event,
                                              uint8_t            channel);

/**
 * @brief Function for clearing the publish configuration for a given
 *        GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event for which to clear the configuration.
 */
NRF_STATIC_INLINE void nrf_gpiote_publish_clear(NRF_GPIOTE_Type * p_reg, nrf_gpiote_event_t event);
#endif // defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for enabling a GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 */
NRF_STATIC_INLINE void nrf_gpiote_event_enable(NRF_GPIOTE_Type * p_reg, uint32_t idx);

/**
 * @brief Function for disabling a GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 */
NRF_STATIC_INLINE void nrf_gpiote_event_disable(NRF_GPIOTE_Type * p_reg, uint32_t idx);

/**
 * @brief Function for configuring a GPIOTE event.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] idx      Task-Event index.
 * @param[in] pin      Pin associated with event.
 * @param[in] polarity Transition that should generate an event.
 */
NRF_STATIC_INLINE void nrf_gpiote_event_configure(NRF_GPIOTE_Type *     p_reg,
                                                  uint32_t              idx,
                                                  uint32_t              pin,
                                                  nrf_gpiote_polarity_t polarity);

/**
 * @brief Function for getting the pin associated with a GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 *
 * @return Pin number.
 */
NRF_STATIC_INLINE uint32_t nrf_gpiote_event_pin_get(NRF_GPIOTE_Type const * p_reg, uint32_t idx);

/**
 * @brief Function for getting the polarity associated with a GPIOTE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 *
 * @return Polarity.
 */
NRF_STATIC_INLINE nrf_gpiote_polarity_t nrf_gpiote_event_polarity_get(NRF_GPIOTE_Type const * p_reg,
                                                                      uint32_t                idx);

/**
 * @brief Function for enabling a GPIOTE task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 */
NRF_STATIC_INLINE void nrf_gpiote_task_enable(NRF_GPIOTE_Type * p_reg, uint32_t idx);

/**
 * @brief Function for disabling a GPIOTE task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 */
NRF_STATIC_INLINE void nrf_gpiote_task_disable(NRF_GPIOTE_Type * p_reg, uint32_t idx);

/**
 * @brief Function for configuring a GPIOTE task.
 *
 * @note  Function is not configuring mode field so task is disabled after this function is called.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] idx      Task-Event index.
 * @param[in] pin      Pin associated with event.
 * @param[in] polarity Transition that should generate an event.
 * @param[in] init_val Initial value of the pin.
 */
NRF_STATIC_INLINE void nrf_gpiote_task_configure(NRF_GPIOTE_Type *     p_reg,
                                                 uint32_t              idx,
                                                 uint32_t              pin,
                                                 nrf_gpiote_polarity_t polarity,
                                                 nrf_gpiote_outinit_t  init_val);

/**
 * @brief Function for forcing the specified state on the pin connected to GPIOTE.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] idx      Task-Event index.
 * @param[in] init_val Pin state.
 */
NRF_STATIC_INLINE void nrf_gpiote_task_force(NRF_GPIOTE_Type *    p_reg,
                                             uint32_t             idx,
                                             nrf_gpiote_outinit_t init_val);

/**
 * @brief Function for resetting a GPIOTE task event configuration to the default state.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 */
NRF_STATIC_INLINE void nrf_gpiote_te_default(NRF_GPIOTE_Type * p_reg, uint32_t idx);

/**@brief Function for checking if particular Task-Event is enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] idx   Task-Event index.
 *
 * @retval true  The Task-Event mode is set to Task or Event.
 * @retval false The Task-Event mode is set to Disabled.
 */
NRF_STATIC_INLINE bool nrf_gpiote_te_is_enabled(NRF_GPIOTE_Type const * p_reg, uint32_t idx);

/**
 * @brief Function for getting the OUT task associated with the specified GPIOTE channel.
 *
 * @param[in] index Channel index.
 *
 * @return Requested OUT task.
 */
NRF_STATIC_INLINE nrf_gpiote_task_t nrf_gpiote_out_task_get(uint8_t index);

#if defined(GPIOTE_FEATURE_SET_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting the SET task associated with the specified GPIOTE channel.
 *
 * @param[in] index Channel index.
 *
 * @return Requested SET task.
 */
NRF_STATIC_INLINE nrf_gpiote_task_t nrf_gpiote_set_task_get(uint8_t index);
#endif

#if defined(GPIOTE_FEATURE_CLR_PRESENT) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting the CLR task associated with the specified GPIOTE channel.
 *
 * @param[in] index Channel index.
 *
 * @return Requested CLR task.
 */
NRF_STATIC_INLINE nrf_gpiote_task_t nrf_gpiote_clr_task_get(uint8_t index);
#endif

/**
 * @brief Function for getting the IN event associated with the specified GPIOTE channel.
 *
 * @param[in] index Channel index.
 *
 * @return Requested IN event.
 */
NRF_STATIC_INLINE nrf_gpiote_event_t nrf_gpiote_in_event_get(uint8_t index);

#if defined(GPIOTE_PORT_NUM) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for getting the PORT event associated with the specified GPIOTE port.
 *
 * @param[in] index Port index.
 *
 * @return Requested PORT event.
 */
NRF_STATIC_INLINE nrf_gpiote_event_t nrf_gpiote_port_event_get(uint8_t index);
#endif

#if NRF_GPIOTE_HAS_LATENCY
/**
 * @brief Function for setting the latency setting.
 *
 * @note Available for event mode with rising or falling edge detection on the pin.
 *       Toggle task mode can only be used with low latency setting.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] latency Latency setting to be set.
 */
NRF_STATIC_INLINE void nrf_gpiote_latency_set(NRF_GPIOTE_Type *    p_reg,
                                              nrf_gpiote_latency_t latency);

/**
 * @brief Function for retrieving the latency setting.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Latency setting.
 */
NRF_STATIC_INLINE nrf_gpiote_latency_t nrf_gpiote_latency_get(NRF_GPIOTE_Type const * p_reg);
#endif

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_gpiote_task_trigger(NRF_GPIOTE_Type * p_reg, nrf_gpiote_task_t task)
{
    *(volatile uint32_t *)((uint32_t)p_reg + task) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_gpiote_task_address_get(NRF_GPIOTE_Type const * p_reg,
                                                       nrf_gpiote_task_t       task)
{
    return ((uint32_t)p_reg + task);
}

NRF_STATIC_INLINE bool nrf_gpiote_event_check(NRF_GPIOTE_Type const * p_reg,
                                              nrf_gpiote_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_gpiote_event_clear(NRF_GPIOTE_Type * p_reg, nrf_gpiote_event_t event)
{
    *((volatile uint32_t *)nrf_gpiote_event_address_get(p_reg, event)) = 0;
    nrf_event_readback((void *)nrf_gpiote_event_address_get(p_reg, event));
}

NRF_STATIC_INLINE uint32_t nrf_gpiote_event_address_get(NRF_GPIOTE_Type const * p_reg,
                                                        nrf_gpiote_event_t      event)
{
    return ((uint32_t)p_reg + event);
}

#if NRF_GPIOTE_HAS_MULTIPLE_INT
NRF_STATIC_INLINE void nrf_gpiote_int_group_enable(NRF_GPIOTE_Type * p_reg,
                                                   uint8_t           group_idx,
                                                   uint32_t          mask)
{
    NRFX_ASSERT(group_idx < NRF_GPIOTE_INT_COUNT);
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
        default:
            NRFX_ASSERT(false);
            break;
    }

}

NRF_STATIC_INLINE void nrf_gpiote_int_group_disable(NRF_GPIOTE_Type * p_reg,
                                                    uint8_t           group_idx,
                                                    uint32_t          mask)
{
    NRFX_ASSERT(group_idx < NRF_GPIOTE_INT_COUNT);
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
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE uint32_t nrf_gpiote_int_group_enable_check(NRF_GPIOTE_Type const * p_reg,
                                                             uint8_t                 group_idx,
                                                             uint32_t                mask)
{
    NRFX_ASSERT(group_idx < NRF_GPIOTE_INT_COUNT);
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
        default:
            NRFX_ASSERT(false);
            return 0;
    }
}
#else

NRF_STATIC_INLINE void nrf_gpiote_int_enable(NRF_GPIOTE_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_gpiote_int_disable(NRF_GPIOTE_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_gpiote_int_enable_check(NRF_GPIOTE_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}
#endif // NRF_GPIOTE_HAS_MULTIPLE_INT

#if defined(DPPI_PRESENT)
NRF_STATIC_INLINE void nrf_gpiote_subscribe_set(NRF_GPIOTE_Type * p_reg,
                                                nrf_gpiote_task_t task,
                                                uint8_t           channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) =
            ((uint32_t)channel | GPIOTE_SUBSCRIBE_OUT_EN_Msk);
}

NRF_STATIC_INLINE void nrf_gpiote_subscribe_clear(NRF_GPIOTE_Type * p_reg, nrf_gpiote_task_t task)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) = 0;
}

NRF_STATIC_INLINE void nrf_gpiote_publish_set(NRF_GPIOTE_Type *  p_reg,
                                              nrf_gpiote_event_t event,
                                              uint8_t            channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80uL)) =
            ((uint32_t)channel | GPIOTE_PUBLISH_IN_EN_Msk);
}

NRF_STATIC_INLINE void nrf_gpiote_publish_clear(NRF_GPIOTE_Type * p_reg, nrf_gpiote_event_t event)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) event + 0x80uL)) = 0;
}
#endif // defined(DPPI_PRESENT)

NRF_STATIC_INLINE void nrf_gpiote_event_enable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
   p_reg->CONFIG[idx] |= GPIOTE_CONFIG_MODE_Event;
}

NRF_STATIC_INLINE void nrf_gpiote_event_disable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
   p_reg->CONFIG[idx] &= ~GPIOTE_CONFIG_MODE_Msk;
}

NRF_STATIC_INLINE void nrf_gpiote_event_configure(NRF_GPIOTE_Type *     p_reg,
                                                  uint32_t              idx,
                                                  uint32_t              pin,
                                                  nrf_gpiote_polarity_t polarity)
{
  p_reg->CONFIG[idx] &= ~(GPIOTE_CONFIG_PORT_PIN_Msk | GPIOTE_CONFIG_POLARITY_Msk);
  p_reg->CONFIG[idx] |= ((pin << GPIOTE_CONFIG_PSEL_Pos) & GPIOTE_CONFIG_PORT_PIN_Msk) |
                        ((polarity << GPIOTE_CONFIG_POLARITY_Pos) & GPIOTE_CONFIG_POLARITY_Msk);
}

NRF_STATIC_INLINE uint32_t nrf_gpiote_event_pin_get(NRF_GPIOTE_Type const * p_reg, uint32_t idx)
{
    return ((p_reg->CONFIG[idx] & GPIOTE_CONFIG_PORT_PIN_Msk) >> GPIOTE_CONFIG_PSEL_Pos);
}

NRF_STATIC_INLINE nrf_gpiote_polarity_t nrf_gpiote_event_polarity_get(NRF_GPIOTE_Type const * p_reg,
                                                                      uint32_t                idx)
{
    return (nrf_gpiote_polarity_t)((p_reg->CONFIG[idx] & GPIOTE_CONFIG_POLARITY_Msk) >>
                                   GPIOTE_CONFIG_POLARITY_Pos);
}

NRF_STATIC_INLINE void nrf_gpiote_task_enable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    uint32_t final_config = p_reg->CONFIG[idx] | GPIOTE_CONFIG_MODE_Task;
#ifdef NRF51
    /* Workaround for the OUTINIT PAN. When nrf_gpiote_task_config() is called a glitch happens
    on the GPIO if the GPIO in question is already assigned to GPIOTE and the pin is in the
    correct state in GPIOTE, but not in the OUT register.
    Configure channel to not existing, not connected to the pin,
    and configure as a tasks that will set it to proper level */
    p_reg->CONFIG[idx] = final_config |
                         (((31) << GPIOTE_CONFIG_PSEL_Pos) & GPIOTE_CONFIG_PORT_PIN_Msk);
    __NOP();
    __NOP();
    __NOP();
#endif
    p_reg->CONFIG[idx] = final_config;
}

NRF_STATIC_INLINE void nrf_gpiote_task_disable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    p_reg->CONFIG[idx] &= ~GPIOTE_CONFIG_MODE_Msk;
}

NRF_STATIC_INLINE void nrf_gpiote_task_configure(NRF_GPIOTE_Type *     p_reg,
                                                 uint32_t              idx,
                                                 uint32_t              pin,
                                                 nrf_gpiote_polarity_t polarity,
                                                 nrf_gpiote_outinit_t  init_val)
{
  p_reg->CONFIG[idx] &= ~(GPIOTE_CONFIG_PORT_PIN_Msk |
                          GPIOTE_CONFIG_POLARITY_Msk |
                          GPIOTE_CONFIG_OUTINIT_Msk);

  p_reg->CONFIG[idx] |= ((pin << GPIOTE_CONFIG_PSEL_Pos) & GPIOTE_CONFIG_PORT_PIN_Msk) |
                        ((polarity << GPIOTE_CONFIG_POLARITY_Pos) & GPIOTE_CONFIG_POLARITY_Msk) |
                        ((init_val << GPIOTE_CONFIG_OUTINIT_Pos) & GPIOTE_CONFIG_OUTINIT_Msk);
}

NRF_STATIC_INLINE void nrf_gpiote_task_force(NRF_GPIOTE_Type *    p_reg,
                                             uint32_t             idx,
                                             nrf_gpiote_outinit_t init_val)
{
    p_reg->CONFIG[idx] = (p_reg->CONFIG[idx] & ~GPIOTE_CONFIG_OUTINIT_Msk) |
                         ((init_val << GPIOTE_CONFIG_OUTINIT_Pos) & GPIOTE_CONFIG_OUTINIT_Msk);
}

NRF_STATIC_INLINE void nrf_gpiote_te_default(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    p_reg->CONFIG[idx] = 0;
#if defined(NRF53_SERIES) || defined(NRF91_SERIES)
    p_reg->CONFIG[idx] = 0;
#endif
}

NRF_STATIC_INLINE bool nrf_gpiote_te_is_enabled(NRF_GPIOTE_Type const * p_reg, uint32_t idx)
{
    return (p_reg->CONFIG[idx] & GPIOTE_CONFIG_MODE_Msk) != GPIOTE_CONFIG_MODE_Disabled;
}

NRF_STATIC_INLINE nrf_gpiote_task_t nrf_gpiote_out_task_get(uint8_t index)
{
    NRFX_ASSERT(index < GPIOTE_CH_NUM);
    return (nrf_gpiote_task_t)NRFX_OFFSETOF(NRF_GPIOTE_Type, TASKS_OUT[index]);
}

#if defined(GPIOTE_FEATURE_SET_PRESENT)
NRF_STATIC_INLINE nrf_gpiote_task_t nrf_gpiote_set_task_get(uint8_t index)
{
    NRFX_ASSERT(index < GPIOTE_CH_NUM);
    return (nrf_gpiote_task_t)NRFX_OFFSETOF(NRF_GPIOTE_Type, TASKS_SET[index]);
}
#endif

#if defined(GPIOTE_FEATURE_CLR_PRESENT)
NRF_STATIC_INLINE nrf_gpiote_task_t nrf_gpiote_clr_task_get(uint8_t index)
{
    NRFX_ASSERT(index < GPIOTE_CH_NUM);
    return (nrf_gpiote_task_t)NRFX_OFFSETOF(NRF_GPIOTE_Type, TASKS_CLR[index]);
}
#endif

NRF_STATIC_INLINE nrf_gpiote_event_t nrf_gpiote_in_event_get(uint8_t index)
{
    NRFX_ASSERT(index < GPIOTE_CH_NUM);
    return (nrf_gpiote_event_t)NRFX_OFFSETOF(NRF_GPIOTE_Type, EVENTS_IN[index]);
}

#if defined(GPIOTE_PORT_NUM)
NRF_STATIC_INLINE nrf_gpiote_event_t nrf_gpiote_port_event_get(uint8_t index)
{
    NRFX_ASSERT(index < GPIOTE_PORT_NUM);
    return (nrf_gpiote_event_t)NRFX_OFFSETOF(NRF_GPIOTE_Type, EVENTS_PORT[index]);
}
#endif

#if NRF_GPIOTE_HAS_LATENCY
NRF_STATIC_INLINE void nrf_gpiote_latency_set(NRF_GPIOTE_Type *    p_reg,
                                              nrf_gpiote_latency_t latency)
{
    p_reg->LATENCY = (latency << GPIOTE_LATENCY_LATENCY_Pos) & GPIOTE_LATENCY_LATENCY_Msk;
}

NRF_STATIC_INLINE nrf_gpiote_latency_t nrf_gpiote_latency_get(NRF_GPIOTE_Type const * p_reg)
{
    return (nrf_gpiote_latency_t)((p_reg->LATENCY & GPIOTE_LATENCY_LATENCY_Msk) >>
                                  GPIOTE_LATENCY_LATENCY_Pos);
}
#endif // NRF_GPIOTE_HAS_LATENCY
#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif
