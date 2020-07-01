/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_LRC_H__
#define NRF_LRC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_lrc_hal LRC HAL
 * @{
 * @ingroup nrf_lrc
 * @brief   Hardware access layer for managing the Local Resource Controller (LRC) peripheral.
 */

/** @brief Interrupts. */
typedef enum
{
    NRF_LRC_INT_CLKSTARTED0_MASK = LRC_INTEN_CLKSTARTED0_Msk, /**< Interrupt on CLKSTARTED[0] event. */
    NRF_LRC_INT_CLKSTARTED1_MASK = LRC_INTEN_CLKSTARTED1_Msk, /**< Interrupt on CLKSTARTED[1] event. */
    NRF_LRC_INT_CLKSTARTED2_MASK = LRC_INTEN_CLKSTARTED2_Msk, /**< Interrupt on CLKSTARTED[2] event. */
    NRF_LRC_INT_CLKSTARTED3_MASK = LRC_INTEN_CLKSTARTED3_Msk, /**< Interrupt on CLKSTARTED[3] event. */
    NRF_LRC_INT_CLKSTARTED4_MASK = LRC_INTEN_CLKSTARTED4_Msk, /**< Interrupt on CLKSTARTED[4] event. */
    NRF_LRC_INT_CLKSTARTED5_MASK = LRC_INTEN_CLKSTARTED5_Msk, /**< Interrupt on CLKSTARTED[5] event. */
    NRF_LRC_INT_CLKSTARTED6_MASK = LRC_INTEN_CLKSTARTED6_Msk, /**< Interrupt on CLKSTARTED[6] event. */
    NRF_LRC_INT_CLKSTARTED7_MASK = LRC_INTEN_CLKSTARTED7_Msk, /**< Interrupt on CLKSTARTED[7] event. */
} nrf_lrc_int_mask_t;

/** @brief Tasks. */
typedef enum
{
    NRF_LRC_TASK_CLKSTART0 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[0]), /**< Start the clock source 0. */
    NRF_LRC_TASK_CLKSTART1 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[1]), /**< Start the clock source 1. */
    NRF_LRC_TASK_CLKSTART2 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[2]), /**< Start the clock source 2. */
    NRF_LRC_TASK_CLKSTART3 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[3]), /**< Start the clock source 3. */
    NRF_LRC_TASK_CLKSTART4 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[4]), /**< Start the clock source 4. */
    NRF_LRC_TASK_CLKSTART5 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[5]), /**< Start the clock source 5. */
    NRF_LRC_TASK_CLKSTART6 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[6]), /**< Start the clock source 6. */
    NRF_LRC_TASK_CLKSTART7 = offsetof(NRF_LRC_Type, TASKS_CLKSTART[7]), /**< Start the clock source 7. */
    NRF_LRC_TASK_CLKSTOP0  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[0]),  /**< Clear the TASKS_CLKSTART[0] request. */
    NRF_LRC_TASK_CLKSTOP1  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[1]),  /**< Clear the TASKS_CLKSTART[1] request. */
    NRF_LRC_TASK_CLKSTOP2  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[2]),  /**< Clear the TASKS_CLKSTART[2] request. */
    NRF_LRC_TASK_CLKSTOP3  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[3]),  /**< Clear the TASKS_CLKSTART[3] request. */
    NRF_LRC_TASK_CLKSTOP4  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[4]),  /**< Clear the TASKS_CLKSTART[4] request. */
    NRF_LRC_TASK_CLKSTOP5  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[5]),  /**< Clear the TASKS_CLKSTART[5] request. */
    NRF_LRC_TASK_CLKSTOP6  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[6]),  /**< Clear the TASKS_CLKSTART[6] request. */
    NRF_LRC_TASK_CLKSTOP7  = offsetof(NRF_LRC_Type, TASKS_CLKSTOP[7]),  /**< Clear the TASKS_CLKSTART[7] request. */
    NRF_LRC_TASK_CONSTLAT  = offsetof(NRF_LRC_Type, TASKS_CONSTLAT),    /**< Enable constant latency mode. */
    NRF_LRC_TASK_LOWPWR    = offsetof(NRF_LRC_Type, TASKS_LOWPWR),      /**< Disable constant latency mode, enable low power mode. */
} nrf_lrc_task_t;

/** @brief Events. */
typedef enum
{
    NRF_LRC_EVENT_CLKSTARTED0 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[0]), /**< Clock 0 started. */
    NRF_LRC_EVENT_CLKSTARTED1 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[1]), /**< Clock 1 started. */
    NRF_LRC_EVENT_CLKSTARTED2 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[2]), /**< Clock 2 started. */
    NRF_LRC_EVENT_CLKSTARTED3 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[3]), /**< Clock 3 started. */
    NRF_LRC_EVENT_CLKSTARTED4 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[4]), /**< Clock 4 started. */
    NRF_LRC_EVENT_CLKSTARTED5 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[5]), /**< Clock 5 started. */
    NRF_LRC_EVENT_CLKSTARTED6 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[6]), /**< Clock 6 started. */
    NRF_LRC_EVENT_CLKSTARTED7 = offsetof(NRF_LRC_Type, EVENTS_CLKSTARTED[7]), /**< Clock 7 started. */
} nrf_lrc_event_t;

/** @brief Clock source. */
typedef enum
{
    NRF_LRC_CLK_SRC_0 = LRC_CLKSTAT_SRC_SRC0_Msk, /**< Clock source 0. */
    NRF_LRC_CLK_SRC_1 = LRC_CLKSTAT_SRC_SRC1_Msk, /**< Clock source 1. */
} nrf_lrc_clk_src_t;


/** @brief Domain mask. */
typedef enum
{
    NRF_LRC_DOMAIN_0 = LRC_POWERON_FORCE0_Msk, /**< Mask for domain 0. */
    NRF_LRC_DOMAIN_1 = LRC_POWERON_FORCE1_Msk, /**< Mask for domain 1. */
    NRF_LRC_DOMAIN_2 = LRC_POWERON_FORCE2_Msk, /**< Mask for domain 2. */
    NRF_LRC_DOMAIN_3 = LRC_POWERON_FORCE3_Msk, /**< Mask for domain 3. */
    NRF_LRC_DOMAIN_4 = LRC_POWERON_FORCE4_Msk, /**< Mask for domain 4. */
    NRF_LRC_DOMAIN_5 = LRC_POWERON_FORCE5_Msk, /**< Mask for domain 5. */
    NRF_LRC_DOMAIN_6 = LRC_POWERON_FORCE6_Msk, /**< Mask for domain 6. */
    NRF_LRC_DOMAIN_7 = LRC_POWERON_FORCE7_Msk, /**< Mask for domain 7. */
} nrf_lrc_domain_mask_t;

/**
 * @brief Function for enabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_lrc_int_enable(NRF_LRC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling the specified interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_lrc_int_disable(NRF_LRC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_lrc_int_enable_check(NRF_LRC_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for activating the specified LRC task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_lrc_task_trigger(NRF_LRC_Type * p_reg, nrf_lrc_task_t task);

/**
 * @brief Function for retrieving the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event LRC event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_lrc_event_address_get(NRF_LRC_Type const * p_reg,
                                                     nrf_lrc_event_t      event);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_lrc_event_clear(NRF_LRC_Type * p_reg, nrf_lrc_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_lrc_event_check(NRF_LRC_Type const * p_reg, nrf_lrc_event_t event);

/**
 * @brief Function for getting CLKSTART task by its index.
 *
 * @param[in] index Index of the CLKSTART task.
 *
 * @return CLKSTART task.
 */
NRF_STATIC_INLINE nrf_lrc_task_t nrf_lrc_clkstart_task_get(uint8_t index);

/**
 * @brief Function for getting CLKSTOP task by its index.
 *
 * @param[in] index Index of the CLKSTOP task.
 *
 * @return CLKSTOP task.
 */
NRF_STATIC_INLINE nrf_lrc_task_t nrf_lrc_clkstop_task_get(uint8_t index);

/**
 * @brief Function for getting CLKSTARTED event by its index.
 *
 * @param[in] index Index of the CLKSTARTED event.
 *
 * @return CLKSTARTED event.
 */
NRF_STATIC_INLINE nrf_lrc_event_t nrf_lrc_clkstarted_event_get(uint8_t index);

/**
 * @brief Function for getting domain mask by its index.
 *
 * @param[in] index Index of the domain.
 *
 * @return Enum value for domain.
 */
NRF_STATIC_INLINE nrf_lrc_domain_mask_t nrf_lrc_domain_get(uint8_t index);

/**
 * @brief Function for changing the status indicating that TASK_START task has been triggered.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] clock  Clock index.
 * @param[in] status New status to be set.
 */
NRF_STATIC_INLINE void nrf_lrc_clkstat_run_status_set(NRF_LRC_Type * p_reg,
                                                      uint8_t        clock,
                                                      bool           status);

/**
 * @brief Function for retrieving the status indicating that TASK_START task has been triggered.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] clock Clock index.
 *
 * @retval true  Clock start task has been triggered.
 * @retval false Clock start task has not been triggered.
 */
NRF_STATIC_INLINE bool nrf_lrc_clkstat_run_status_check(NRF_LRC_Type const * p_reg, uint8_t clock);

/**
 * @brief Function for changing the status indicating which clock source is running for clock.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] clock  Clock index.
 * @param[in] source New clock source to be set.
 */
NRF_STATIC_INLINE void nrf_lrc_clkstat_src_set(NRF_LRC_Type *    p_reg,
                                               uint8_t           clock,
                                               nrf_lrc_clk_src_t source);

/**
 * @brief Function for retrieving the source of the specified clock.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] clock Clock index.
 *
 * @return Clock source.
 */
NRF_STATIC_INLINE nrf_lrc_clk_src_t nrf_lrc_clkstat_src_get(NRF_LRC_Type const * p_reg,
                                                            uint8_t              clock);

/**
 * @brief Function for setting the clock to always run.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] clock     Clock index.
 * @param[in] alwaysrun True if forcing the clock to always run is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_lrc_clkctrl_alwaysrun_set(NRF_LRC_Type * p_reg,
                                                     uint8_t        clock,
                                                     bool           alwaysrun);

/**
 * @brief Function for checking if the clock is configured to always run.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] clock  Clock index.
 *
 * @retval true  The clock is configured to always run.
 * @retval false The clock is not configured to always run.
 */
NRF_STATIC_INLINE bool nrf_lrc_clkctrl_alwaysrun_check(NRF_LRC_Type const * p_reg, uint8_t clock);

/**
 * @brief Function for setting the source of the specified clock.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] clock  Clock index.
 * @param[in] source New clock source to be set.
 */
NRF_STATIC_INLINE void nrf_lrc_clkctrl_src_set(NRF_LRC_Type *    p_reg,
                                               uint8_t           clock,
                                               nrf_lrc_clk_src_t source);

/**
 * @brief Function for getting the source of the specified clock.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] clock Clock index.
 *
 * @return Clock source.
 */
NRF_STATIC_INLINE nrf_lrc_clk_src_t nrf_lrc_clkctrl_src_get(NRF_LRC_Type const * p_reg,
                                                            uint8_t              clock);

/**
 * @brief Function for setting the status of constant latency.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable Enable constant latency.
 */
NRF_STATIC_INLINE void nrf_lrc_constlatstat_set(NRF_LRC_Type * p_reg, bool enable);

/**
 * @brief Function for checking the status of constant latency.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  Constant latency enabled.
 * @retval false Low power enabled.
 */
NRF_STATIC_INLINE bool nrf_lrc_constlatstat_check(NRF_LRC_Type const * p_reg);

/**
 * @brief Function for setting the power domain to remain on.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] domain_mask Mask of power domains to remain on.
 * @param[in] alwayson    True if forcing the power domain to remain on is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_lrc_poweron_force_set(NRF_LRC_Type *        p_reg,
                                                 nrf_lrc_domain_mask_t domain_mask,
                                                 bool                  alwayson);

/**
 * @brief Function for checking if the power domain is configured to remain on.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Power domain to be checked.
 *
 * @retval true  The domain is configured to remain on.
 * @retval false The domain is not configured to remain on.
 */
NRF_STATIC_INLINE bool nrf_lrc_poweron_force_check(NRF_LRC_Type const *  p_reg,
                                                   nrf_lrc_domain_mask_t domain);

/**
 * @brief Function for setting the power domain to be retained in System ON idle.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] domain_mask Mask of power domains to be retained.
 * @param[in] retain      True if power domain retention is to be enabled, flase otherwise.
 */
NRF_STATIC_INLINE void nrf_lrc_retain_enable_set(NRF_LRC_Type *        p_reg,
                                                 nrf_lrc_domain_mask_t domain_mask,
                                                 bool                  retain);

/**
 * @brief Function for checking if the power domain is configured to be retained in System ON idle.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Power domain to be checked.
 *
 * @retval true  The domain is configured to be retained.
 * @retval false The domain is not configured to be retained.
 */
NRF_STATIC_INLINE bool nrf_lrc_retain_enable_check(NRF_LRC_Type const *  p_reg,
                                                   nrf_lrc_domain_mask_t domain);

/**
 * @brief Function for setting the other power domain to remain on.
 *
 * @param[in] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in] domain_mask Mask of power domains to remain on.
 * @param[in] alwayson    True if forcing the power domain to remain on is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_lrc_otheron_force_set(NRF_LRC_Type *        p_reg,
                                                 nrf_lrc_domain_mask_t domain_mask,
                                                 bool                  alwayson);

/**
 * @brief Function for checking if the other power domain is configured to remain on.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Power domain to be checked.
 *
 * @retval true  The domain is configured to remain on.
 * @retval false The domain is not configured to remain on.
 */
NRF_STATIC_INLINE bool nrf_lrc_otheron_force_check(NRF_LRC_Type const *  p_reg,
                                                   nrf_lrc_domain_mask_t domain);
#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_lrc_int_enable(NRF_LRC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_lrc_int_disable(NRF_LRC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_lrc_int_enable_check(NRF_LRC_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE void nrf_lrc_task_trigger(NRF_LRC_Type * p_reg, nrf_lrc_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_lrc_event_address_get(NRF_LRC_Type const * p_reg,
                                                     nrf_lrc_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_lrc_event_clear(NRF_LRC_Type * p_reg, nrf_lrc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
#if __CORTEX_M == 0x04
    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;
#endif
}

NRF_STATIC_INLINE bool nrf_lrc_event_check(NRF_LRC_Type const * p_reg, nrf_lrc_event_t event)
{
    return (bool)*((volatile uint32_t *)((uint8_t *)p_reg + event));
}

NRF_STATIC_INLINE nrf_lrc_task_t nrf_lrc_clkstart_task_get(uint8_t index)
{
    /* TODO: When MDK adds a define for number of clocks and domains, replace magic numbers
     *       in assertions below. */
    NRFX_ASSERT(index < 8);
    return (nrf_lrc_task_t)(NRFX_OFFSETOF(NRF_LRC_Type, TASKS_CLKSTART[index]));
}

NRF_STATIC_INLINE nrf_lrc_task_t nrf_lrc_clkstop_task_get(uint8_t index)
{
    NRFX_ASSERT(index < 8);
    return (nrf_lrc_task_t)(NRFX_OFFSETOF(NRF_LRC_Type, TASKS_CLKSTOP[index]));
}

NRF_STATIC_INLINE nrf_lrc_event_t nrf_lrc_clkstarted_event_get(uint8_t index)
{
    NRFX_ASSERT(index < 8);
    return (nrf_lrc_event_t)(NRFX_OFFSETOF(NRF_LRC_Type, EVENTS_CLKSTARTED[index]));
}

NRF_STATIC_INLINE nrf_lrc_domain_mask_t nrf_lrc_domain_get(uint8_t index)
{
    NRFX_ASSERT(index < 16);
    return (nrf_lrc_domain_mask_t)(1UL << index);
}

NRF_STATIC_INLINE void nrf_lrc_clkstat_run_status_set(NRF_LRC_Type * p_reg,
                                                      uint8_t        clock,
                                                      bool           status)
{
    NRFX_ASSERT(clock < 8);
    p_reg->CLKSTAT[clock].RUN = (status ? LRC_CLKSTAT_RUN_STATUS_Triggered << LRC_CLKSTAT_RUN_STATUS_Pos
                                        : LRC_CLKSTAT_RUN_STATUS_NotTriggered << LRC_CLKSTAT_RUN_STATUS_Pos);
}

NRF_STATIC_INLINE bool nrf_lrc_clkstat_run_status_check(NRF_LRC_Type const * p_reg, uint8_t clock)
{
    NRFX_ASSERT(clock < 8);
    return ((p_reg->CLKSTAT[clock].RUN & LRC_CLKSTAT_RUN_STATUS_Msk)
            >> LRC_CLKSTAT_RUN_STATUS_Pos);
}

NRF_STATIC_INLINE void nrf_lrc_clkstat_src_set(NRF_LRC_Type *    p_reg,
                                               uint8_t           clock,
                                               nrf_lrc_clk_src_t source)
{
    NRFX_ASSERT(clock < 8);
    p_reg->CLKSTAT[clock].SRC = source;
}

NRF_STATIC_INLINE nrf_lrc_clk_src_t nrf_lrc_clkstat_src_get(NRF_LRC_Type const * p_reg, uint8_t clock)
{
    NRFX_ASSERT(clock < 8);
    return (nrf_lrc_clk_src_t)(p_reg->CLKSTAT[clock].SRC);
}

NRF_STATIC_INLINE void nrf_lrc_clkctrl_alwaysrun_set(NRF_LRC_Type * p_reg,
                                                     uint8_t        clock,
                                                     bool           alwaysrun)
{
    NRFX_ASSERT(clock < 8);
    p_reg->CLKCTRL[clock].ALWAYSRUN = (alwaysrun ? LRC_CLKCTRL_ALWAYSRUN_FORCE_AlwaysRun << LRC_CLKCTRL_ALWAYSRUN_FORCE_Pos
                                                 : LRC_CLKCTRL_ALWAYSRUN_FORCE_Automatic << LRC_CLKCTRL_ALWAYSRUN_FORCE_Pos);
}

NRF_STATIC_INLINE bool nrf_lrc_clkctrl_alwaysrun_check(NRF_LRC_Type const * p_reg, uint8_t clock)
{
    NRFX_ASSERT(clock < 8);
    return ((p_reg->CLKCTRL[clock].ALWAYSRUN & LRC_CLKCTRL_ALWAYSRUN_FORCE_Msk)
            >> LRC_CLKCTRL_ALWAYSRUN_FORCE_Pos);
}

NRF_STATIC_INLINE void nrf_lrc_clkctrl_src_set(NRF_LRC_Type *    p_reg,
                                               uint8_t           clock,
                                               nrf_lrc_clk_src_t source)
{
    NRFX_ASSERT(clock < 8);
    p_reg->CLKCTRL[clock].SRC = source;
}

NRF_STATIC_INLINE nrf_lrc_clk_src_t nrf_lrc_clkctrl_src_get(NRF_LRC_Type const * p_reg, uint8_t clock)
{
    NRFX_ASSERT(clock < 8);
    return (nrf_lrc_clk_src_t)(p_reg->CLKCTRL[clock].SRC);
}

NRF_STATIC_INLINE void nrf_lrc_constlatstat_set(NRF_LRC_Type * p_reg, bool enable)
{
    p_reg->CONSTLATSTAT = (enable ? LRC_CONSTLATSTAT_STATUS_ConstLat << LRC_CONSTLATSTAT_STATUS_Pos
                                  : LRC_CONSTLATSTAT_STATUS_LowPower << LRC_CONSTLATSTAT_STATUS_Pos);
}

NRF_STATIC_INLINE bool nrf_lrc_constlatstat_check(NRF_LRC_Type const * p_reg)
{
    return ((p_reg->CONSTLATSTAT & LRC_CONSTLATSTAT_STATUS_Msk) >> LRC_CONSTLATSTAT_STATUS_Pos);
}

NRF_STATIC_INLINE void nrf_lrc_poweron_force_set(NRF_LRC_Type *        p_reg,
                                                 nrf_lrc_domain_mask_t domain_mask,
                                                 bool                  alwayson)
{
    p_reg->POWERON = ((p_reg->POWERON & ~domain_mask) | (alwayson ? domain_mask : 0));
}

NRF_STATIC_INLINE bool nrf_lrc_poweron_force_check(NRF_LRC_Type const *  p_reg,
                                                   nrf_lrc_domain_mask_t domain)
{
    return (p_reg->POWERON & domain);
}

NRF_STATIC_INLINE void nrf_lrc_retain_enable_set(NRF_LRC_Type *        p_reg,
                                                 nrf_lrc_domain_mask_t domain_mask,
                                                 bool                  retain)
{
    p_reg->RETAIN = ((p_reg->RETAIN & ~domain_mask) | (retain ? domain_mask : 0));
}

NRF_STATIC_INLINE bool nrf_lrc_retain_enable_check(NRF_LRC_Type const *  p_reg,
                                                   nrf_lrc_domain_mask_t domain)
{
    return (p_reg->RETAIN & domain);
}

NRF_STATIC_INLINE void nrf_lrc_otheron_force_set(NRF_LRC_Type *        p_reg,
                                                 nrf_lrc_domain_mask_t domain_mask,
                                                 bool                  alwayson)
{
    p_reg->OTHERON = ((p_reg->OTHERON & ~domain_mask) | (alwayson ? domain_mask : 0));
}

NRF_STATIC_INLINE bool nrf_lrc_otheron_force_check(NRF_LRC_Type const *  p_reg,
                                                   nrf_lrc_domain_mask_t domain)
{
    return (p_reg->OTHERON & domain);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_LRC_H__
