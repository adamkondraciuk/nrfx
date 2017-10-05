/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_SWI_ENABLED)

#include <nrfx_swi.h>

#define NRFX_LOG_MODULE SWI
#include <nrfx_log.h>


#if NRFX_CHECK(NRFX_PWM_NRF52_ANOMALY_109_WORKAROUND_ENABLED)
#define NRFX_SWI_RESERVED_MASK  ((NRFX_SWI_USED) | \
                                 (1u << NRFX_PWM_NRF52_ANOMALY_109_EGU_INSTANCE))
#else
#define NRFX_SWI_RESERVED_MASK  (NRFX_SWI_USED)
#endif

#if NRFX_CHECK(NRFX_SWI0_DISABLED)
#define NRFX_SWI_DISABLE_0  1u
#else
#define NRFX_SWI_DISABLE_0  0u
#endif
#if NRFX_CHECK(NRFX_SWI1_DISABLED)
#define NRFX_SWI_DISABLE_1  1u
#else
#define NRFX_SWI_DISABLE_1  0u
#endif
#if NRFX_CHECK(NRFX_SWI2_DISABLED)
#define NRFX_SWI_DISABLE_2  1u
#else
#define NRFX_SWI_DISABLE_2  0u
#endif
#if NRFX_CHECK(NRFX_SWI3_DISABLED)
#define NRFX_SWI_DISABLE_3  1u
#else
#define NRFX_SWI_DISABLE_3  0u
#endif
#if NRFX_CHECK(NRFX_SWI4_DISABLED)
#define NRFX_SWI_DISABLE_4  1u
#else
#define NRFX_SWI_DISABLE_4  0u
#endif
#if NRFX_CHECK(NRFX_SWI5_DISABLED)
#define NRFX_SWI_DISABLE_5  1u
#else
#define NRFX_SWI_DISABLE_5  0u
#endif
#define NRFX_SWI_DISABLED_MASK  ((NRFX_SWI_DISABLE_0 << 0) | \
                                 (NRFX_SWI_DISABLE_1 << 1) | \
                                 (NRFX_SWI_DISABLE_2 << 2) | \
                                 (NRFX_SWI_DISABLE_3 << 3) | \
                                 (NRFX_SWI_DISABLE_4 << 4) | \
                                 (NRFX_SWI_DISABLE_5 << 5))

#if (NRFX_SWI_RESERVED_MASK & NRFX_SWI_DISABLED_MASK)
#error "A reserved SWI configured to be disabled. Check <nrfx_config.h> and NRFX_SWI_USED."
#endif

#define NRFX_SWI_PRESENT_MASK   ((1u << SWI_COUNT) - 1)
#define NRFX_SWI_AVAILABLE_MASK (NRFX_SWI_PRESENT_MASK & \
                                 ~NRFX_SWI_RESERVED_MASK & \
                                 ~NRFX_SWI_DISABLED_MASK)

#if (NRFX_SWI_AVAILABLE_MASK == 0)
#error "No available SWI instances. Check <nrfx_config.h> and NRFX_SWI_USED."
#endif

static nrfx_swi_handler_t m_swi_handlers[SWI_COUNT];
#if !NRFX_CHECK(NRFX_EGU_ENABLED)
static nrfx_swi_flags_t   m_swi_flags[SWI_COUNT];
#elif (EGU_COUNT < SWI_COUNT)
// When EGU support is enabled user flags are needed only for SWIs that have
// no corresponding EGU unit.
static nrfx_swi_flags_t   m_swi_flags[SWI_COUNT - EGU_COUNT];
#endif
static uint8_t            m_swi_allocated_mask;


static void swi_mark_allocated(nrfx_swi_t swi)
{
    m_swi_allocated_mask |=  (1u << swi);
}

static void swi_mark_unallocated(nrfx_swi_t swi)
{
    m_swi_allocated_mask &= ~(1u << swi);
}

static bool swi_is_allocated(nrfx_swi_t swi)
{
    return (m_swi_allocated_mask & (1u << swi));
}

static bool swi_is_available(nrfx_swi_t swi)
{
    return (NRFX_SWI_AVAILABLE_MASK & (1u << swi));
}

static IRQn_Type swi_irq_number_get(nrfx_swi_t swi)
{
    return (IRQn_Type)((uint32_t)SWI0_IRQn + (uint32_t)swi);
}

static void swi_handler_setup(nrfx_swi_t         swi,
                              nrfx_swi_handler_t event_handler,
                              uint32_t           irq_priority)
{
    m_swi_handlers[swi] = event_handler;

 #if NRFX_CHECK(NRFX_EGU_ENABLED)
    if ((event_handler == NULL) || (swi >= EGU_COUNT))
    {
        return;
    }

    NRF_EGU_Type * p_egu = nrfx_swi_egu_instance_get(swi);
    NRFX_ASSERT(p_egu != NULL);
    nrf_egu_int_enable(p_egu, NRF_EGU_INT_ALL);
#else
    NRFX_ASSERT(event_handler != NULL);
#endif

    NRFX_IRQ_PRIORITY_SET(swi_irq_number_get(swi), irq_priority);
    NRFX_IRQ_ENABLE(swi_irq_number_get(swi));
}

ret_code_t nrfx_swi_alloc(nrfx_swi_t *       p_swi,
                          nrfx_swi_handler_t event_handler,
                          uint32_t           irq_priority)
{
    uint32_t err_code;

    for (nrfx_swi_t swi = 0; swi < SWI_COUNT; ++swi)
    {
        if (swi_is_available(swi))
        {
            bool allocated = false;
            NRFX_CRITICAL_SECTION_ENTER();
            if (!swi_is_allocated(swi))
            {
                swi_mark_allocated(swi);
                allocated = true;
            }
            NRFX_CRITICAL_SECTION_EXIT();

            if (allocated)
            {
                swi_handler_setup(swi, event_handler, irq_priority);

                *p_swi = swi;
                NRFX_LOG_INFO("SWI channel allocated: %d.", (*p_swi));
                return NRFX_SUCCESS;
            }
        }
    }

    err_code = NRFX_ERROR_NO_MEM;
    NRFX_LOG_INFO("Function: %s, error code: %s.",
                  (uint32_t)__func__,
                  (uint32_t)NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}

void nrfx_swi_all_free(void)
{
    for (nrfx_swi_t swi = 0; swi < SWI_COUNT; ++swi)
    {
        if (swi_is_allocated(swi))
        {
            NRFX_IRQ_DISABLE(swi_irq_number_get(swi));
            m_swi_handlers[swi] = NULL;
        }
#if NRFX_CHECK(NRFX_EGU_ENABLED)
        if (swi < EGU_COUNT)
        {
            nrf_egu_int_disable(nrfx_swi_egu_instance_get(swi),
                                NRF_EGU_INT_ALL);
        }
#endif
    }

    m_swi_allocated_mask = 0;
}

void nrfx_swi_free(nrfx_swi_t * p_swi)
{
    nrfx_swi_t swi = *p_swi;

    NRFX_ASSERT(swi_is_allocated(swi));
    NRFX_IRQ_DISABLE(swi_irq_number_get(swi));
    m_swi_handlers[swi] = NULL;

    swi_mark_unallocated(swi);
    *p_swi = NRFX_SWI_UNALLOCATED;
}

void nrfx_swi_trigger(nrfx_swi_t swi, uint8_t flag_number)
{
    NRFX_ASSERT(swi_is_allocated(swi));

#if NRFX_CHECK(NRFX_EGU_ENABLED)

    NRF_EGU_Type * p_egu = nrfx_swi_egu_instance_get(swi);
#if (EGU_COUNT < SWI_COUNT)
    if (p_egu == NULL)
    {
        m_swi_flags[swi - EGU_COUNT] |= (1 << flag_number);
        NVIC_SetPendingIRQ(swi_irq_number_get(swi));
    }
    else
#endif // (EGU_COUNT < SWI_COUNT)
    {
        nrf_egu_task_trigger(p_egu,
            nrf_egu_task_trigger_get(p_egu, flag_number));
    }

#else // !NRFX_CHECK(NRFX_EGU_ENABLED)

    m_swi_flags[swi] |= (1 << flag_number);
    NVIC_SetPendingIRQ(swi_irq_number_get(swi));

#endif
}

#if NRFX_CHECK(NRFX_EGU_ENABLED)
static void egu_irq_handler(nrfx_swi_t swi, uint8_t egu_channel_count)
{
    NRFX_ASSERT(swi < SWI_COUNT);
    nrfx_swi_handler_t handler = m_swi_handlers[swi];
    NRFX_ASSERT(handler != NULL);

    NRF_EGU_Type * p_egu = nrfx_swi_egu_instance_get(swi);
    NRFX_ASSERT(p_egu != NULL);

    nrfx_swi_flags_t flags = 0;
    for (uint8_t i = 0; i < egu_channel_count; ++i)
    {
        nrf_egu_event_t egu_event = nrf_egu_event_triggered_get(p_egu, i);
        if (nrf_egu_event_check(p_egu, egu_event))
        {
            flags |= (1u << i);
            nrf_egu_event_clear(p_egu, egu_event);
        }
    }

    handler(swi, flags);
}
#endif // NRFX_CHECK(NRFX_EGU_ENABLED)

#if !NRFX_CHECK(NRFX_EGU_ENABLED) || (EGU_COUNT < SWI_COUNT)
static void swi_irq_handler(nrfx_swi_t swi)
{
    NRFX_ASSERT(swi < SWI_COUNT);
    nrfx_swi_handler_t handler = m_swi_handlers[swi];
    NRFX_ASSERT(handler != NULL);

    nrfx_swi_flags_t flags = m_swi_flags[swi];
    m_swi_flags[swi] &= ~flags;

    handler(swi, flags);
}
#endif // !NRFX_CHECK(NRFX_EGU_ENABLED) || (EGU_COUNT < SWI_COUNT)


#if (NRFX_SWI_AVAILABLE_MASK & (1u << 0))
void nrfx_swi_0_irq_handler(void)
{
#if NRFX_CHECK(NRFX_EGU_ENABLED) && (EGU_COUNT > 0)
    egu_irq_handler(0, EGU0_CH_NUM);
#else
    swi_irq_handler(0);
#endif
}
#endif // (NRFX_SWI_AVAILABLE_MASK & (1u << 0))

#if (NRFX_SWI_AVAILABLE_MASK & (1u << 1))
void nrfx_swi_1_irq_handler(void)
{
#if NRFX_CHECK(NRFX_EGU_ENABLED) && (EGU_COUNT > 1)
    egu_irq_handler(1, EGU1_CH_NUM);
#else
    swi_irq_handler(1);
#endif
}
#endif // (NRFX_SWI_AVAILABLE_MASK & (1u << 1))

#if (NRFX_SWI_AVAILABLE_MASK & (1u << 2))
void nrfx_swi_2_irq_handler(void)
{
#if NRFX_CHECK(NRFX_EGU_ENABLED) && (EGU_COUNT > 2)
    egu_irq_handler(2, EGU2_CH_NUM);
#else
    swi_irq_handler(2);
#endif
}
#endif // (NRFX_SWI_AVAILABLE_MASK & (1u << 2))

#if (NRFX_SWI_AVAILABLE_MASK & (1u << 3))
void nrfx_swi_3_irq_handler(void)
{
#if NRFX_CHECK(NRFX_EGU_ENABLED) && (EGU_COUNT > 3)
    egu_irq_handler(3, EGU3_CH_NUM);
#else
    swi_irq_handler(3);
#endif
}
#endif // (NRFX_SWI_AVAILABLE_MASK & (1u << 3))

#if (NRFX_SWI_AVAILABLE_MASK & (1u << 4))
void nrfx_swi_4_irq_handler(void)
{
#if NRFX_CHECK(NRFX_EGU_ENABLED) && (EGU_COUNT > 4)
    egu_irq_handler(4, EGU4_CH_NUM);
#else
    swi_irq_handler(4);
#endif
}
#endif // (NRFX_SWI_AVAILABLE_MASK & (1u << 4))

#if (NRFX_SWI_AVAILABLE_MASK & (1u << 5))
void nrfx_swi_5_irq_handler(void)
{
#if NRFX_CHECK(NRFX_EGU_ENABLED) && (EGU_COUNT > 5)
    egu_irq_handler(5, EGU5_CH_NUM);
#else
    swi_irq_handler(5);
#endif
}
#endif // (NRFX_SWI_AVAILABLE_MASK & (1u << 5))

#endif // NRFX_CHECK(NRFX_SWI_ENABLED)
