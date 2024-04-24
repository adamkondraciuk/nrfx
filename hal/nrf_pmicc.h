/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_PMICC_H__
#define NRF_PMICC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_pmicc_hal PMICC HAL
 * @{
 * @ingroup nrf_pmicc
 * @brief   Hardware access layer for managing Power Management Integrated Circuit Controller (PMICC).
 */

#if defined(PMICC_ITHRESHOLD_MaxCount) || defined(__NRFX_DOXYGEN__)
/** @brief Symbol indicating whether ITHRESHOLD register is treated as an array. */
#define NRF_PMICC_HAS_ITHRESHOLD_ARRAY 1
#else
#define NRF_PMICC_HAS_ITHRESHOLD_ARRAY 0
#endif

/** @brief Symbol specifying the number of available sources. */
#define NRF_PMICC_SOURCES_COUNT PMICC_EVENTS_CURRABOVE_MaxCount

/** @brief PMICC events. */
typedef enum
{
    NRF_PMICC_EVENT_FPWMRDYHI   = offsetof(NRF_PMICC_Type, EVENTS_FPWMRDYHI),    ///< PMICC FPWMRDYHI event generated. */
    NRF_PMICC_EVENT_FPWMRDYLO   = offsetof(NRF_PMICC_Type, EVENTS_FPWMRDYLO),    ///< PMICC FPWMRDYLO event generated. */
    NRF_PMICC_EVENT_CURRABOVE_0 = offsetof(NRF_PMICC_Type, EVENTS_CURRABOVE[0]), ///< PMICC CURRABOVE[0] event generated. */
    NRF_PMICC_EVENT_CURRABOVE_1 = offsetof(NRF_PMICC_Type, EVENTS_CURRABOVE[1]), ///< PMICC CURRABOVE[0] event generated. */
    NRF_PMICC_EVENT_CURRABOVE_2 = offsetof(NRF_PMICC_Type, EVENTS_CURRABOVE[2]), ///< PMICC CURRABOVE[0] event generated. */
    NRF_PMICC_EVENT_CURRBELOW_0 = offsetof(NRF_PMICC_Type, EVENTS_CURRBELOW[0]), ///< PMICC CURRBELOW[0] event generated. */
    NRF_PMICC_EVENT_CURRBELOW_1 = offsetof(NRF_PMICC_Type, EVENTS_CURRBELOW[1]), ///< PMICC CURRBELOW[0] event generated. */
    NRF_PMICC_EVENT_CURRBELOW_2 = offsetof(NRF_PMICC_Type, EVENTS_CURRBELOW[2]), ///< PMICC CURRBELOW[0] event generated. */
} nrf_pmicc_event_t;

/** @brief PMICC Pulse-width modulation mode signal (fPwmRdy) states. */
typedef enum
{
    NRF_PMICC_FPWMRDY_LOW  = PMICC_STATUS_FPWMRDY_ZERO, /**< fPwmRdy low state. */
    NRF_PMICC_FPWMRDY_HIGH = PMICC_STATUS_FPWMRDY_ONE,  /**< fPwmRdy high state. */
} nrf_pmicc_fpwmrdy_t;

/** @brief PMICC state machine states. */
typedef enum
{
    NRF_PMICC_FSMSTATE_DISABLED  = PMICC_STATUS_FSMSTATE_DISABLED,  /**< PMICC has been disabled. */
    NRF_PMICC_FSMSTATE_ULP       = PMICC_STATUS_FSMSTATE_ULP,       /**< ULP or HV_REQ state. */
    NRF_PMICC_FSMSTATE_PGDREQ    = PMICC_STATUS_FSMSTATE_PGDREQ,    /**< PGD_REQ state. */
    NRF_PMICC_FSMSTATE_BODHPREQ  = PMICC_STATUS_FSMSTATE_BODHPREQ,  /**< BOD_HP_REQ state. */
    NRF_PMICC_FSMSTATE_HV        = PMICC_STATUS_FSMSTATE_HV,        /**< HV state. */
    NRF_PMICC_FSMSTATE_PWMREQ    = PMICC_STATUS_FSMSTATE_PWMREQ,    /**< PWM_REQ state. */
    NRF_PMICC_FSMSTATE_PWM       = PMICC_STATUS_FSMSTATE_PWM,       /**< PWM state. */
    NRF_PMICC_FSMSTATE_BODULPREQ = PMICC_STATUS_FSMSTATE_BODULPREQ, /**< BOD_ULP_REQ state. */
} nrf_pmicc_fsmstate_t;

/** @brief PMICC status. */
typedef struct
{
    nrf_pmicc_fpwmrdy_t  fpwmrdy;  /**< fPwmRdy state. */
    nrf_pmicc_fsmstate_t fsmstate; /**< State machine state. */
} nrf_pmicc_status_t;

/**
 * @brief Function for getting the address of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event PMICC event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_pmicc_event_address_get(NRF_PMICC_Type const * p_reg,
                                                       nrf_pmicc_event_t      event);

/**
 * @brief Function for getting the event associated with current consumption being above the
 *        threshold for the specified source.
 *
 * @param[in] source Source of the event.
 *
 * @return Retrieved current consumption above threshold event.
 */
NRF_STATIC_INLINE nrf_pmicc_event_t nrf_pmicc_currabove_event_get(uint8_t source);

/**
 * @brief Function for getting the event associated with current consumption being below the
 *        threshold for the specified source.
 *
 * @param[in] source Source of the event.
 *
 * @return Retrieved current consumption below threshold event.
 */
NRF_STATIC_INLINE nrf_pmicc_event_t nrf_pmicc_currbelow_event_get(uint8_t source);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_pmicc_event_clear(NRF_PMICC_Type * p_reg, nrf_pmicc_event_t event);

/**
 * @brief Function for checking the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_pmicc_event_check(NRF_PMICC_Type const * p_reg, nrf_pmicc_event_t event);

/**
 * @brief Function for getting PMICC status.
 *
 * @param[in]  p_reg    Pointer to the structure of registers of the peripheral.
 * @param[out] p_status Pointer to the structure to be filled with PMICC status.
 */
NRF_STATIC_INLINE void nrf_pmicc_status_get(NRF_PMICC_Type const * p_reg,
                                            nrf_pmicc_status_t *   p_status);

/**
 * @brief Function for getting the PMICC current threshold.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Current threshold.
 */
NRF_STATIC_INLINE uint8_t nrf_pmicc_ithreshold_get(NRF_PMICC_Type const * p_reg);

/**
 * @brief Function for setting the PMICC current threshold.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] value Value to set as current threshold.
 */
NRF_STATIC_INLINE void nrf_pmicc_ithreshold_set(NRF_PMICC_Type * p_reg, uint8_t value);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE uint32_t nrf_pmicc_event_address_get(NRF_PMICC_Type const * p_reg,
                                                       nrf_pmicc_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE nrf_pmicc_event_t nrf_pmicc_currabove_event_get(uint8_t source)
{
    NRFX_ASSERT(source < NRF_PMICC_SOURCES_COUNT);
    return (nrf_pmicc_event_t)NRFX_OFFSETOF(NRF_PMICC_Type, EVENTS_CURRABOVE[source]);
}

NRF_STATIC_INLINE nrf_pmicc_event_t nrf_pmicc_currbelow_event_get(uint8_t source)
{
    NRFX_ASSERT(source < NRF_PMICC_SOURCES_COUNT);
    return (nrf_pmicc_event_t)NRFX_OFFSETOF(NRF_PMICC_Type, EVENTS_CURRBELOW[source]);
}

NRF_STATIC_INLINE void nrf_pmicc_event_clear(NRF_PMICC_Type * p_reg, nrf_pmicc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_pmicc_event_check(NRF_PMICC_Type const * p_reg, nrf_pmicc_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE void nrf_pmicc_status_get(NRF_PMICC_Type const * p_reg,
                                            nrf_pmicc_status_t *   p_status)
{
    NRFX_ASSERT(p_status);
    p_status->fpwmrdy  = (p_reg->STATUS & PMICC_STATUS_FPWMRDY_Msk)  >> PMICC_STATUS_FPWMRDY_Pos;
    p_status->fsmstate = (p_reg->STATUS & PMICC_STATUS_FSMSTATE_Msk) >> PMICC_STATUS_FSMSTATE_Pos;
}

NRF_STATIC_INLINE uint8_t nrf_pmicc_ithreshold_get(NRF_PMICC_Type const * p_reg)
{
#if NRF_PMICC_HAS_ITHRESHOLD_ARRAY
    return (p_reg->ITHRESHOLD[0] & PMICC_ITHRESHOLD_THRES_Msk) >> PMICC_ITHRESHOLD_THRES_Pos;
#else
    return (p_reg->ITHRESHOLD & PMICC_ITHRESHOLD_THRES_Msk) >> PMICC_ITHRESHOLD_THRES_Pos;
#endif
}

NRF_STATIC_INLINE void nrf_pmicc_ithreshold_set(NRF_PMICC_Type * p_reg, uint8_t value)
{
#if NRF_PMICC_HAS_ITHRESHOLD_ARRAY
    p_reg->ITHRESHOLD[0] = ((uint32_t)value << PMICC_ITHRESHOLD_THRES_Pos) &
                                               PMICC_ITHRESHOLD_THRES_Msk;
#else
    p_reg->ITHRESHOLD = ((uint32_t)value << PMICC_ITHRESHOLD_THRES_Pos) &
                                            PMICC_ITHRESHOLD_THRES_Msk;
#endif
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_PMICC_H__
