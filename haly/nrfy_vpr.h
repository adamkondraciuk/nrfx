/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_VPR_H__
#define NRFY_VPR_H__

#include <nrfx.h>
#include <hal/nrf_vpr.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfy_vpr VPR HALY
 * @{
 * @ingroup nrf_vpr
 * @brief   Hardware access layer with cache and barrier support for managing the VPR peripheral.
 */
#if defined(ISA_RISCV)
/**
 * @brief Function for initializing the specified VPR interupts.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] mask         Mask of interrupts to be initialized.
 * @param[in] irq_priority Interrupt priority.
 * @param[in] enable       True if the interrupts are to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_vpr_int_init(NRF_VPR_Type * p_reg,
                                          uint32_t       mask,
                                          uint8_t        irq_priority,
                                          bool           enable)
{
    nrf_vpr_machine_mode_enable_global_interrupt(p_reg, true);
    nrf_vpr_rtperiph_enable_set(p_reg, true);
    nrf_vpr_csr_task_trigger_clear(p_reg,NRF_VPR_TASK_TRIGGER_ALL_MASK);

    for (uint32_t i = 0; i < NRF_VPR_EVENTS_TRIGGERED_COUNT; i++)
    {
        NRFX_IRQ_PRIORITY_SET((VPR_0_IRQn + i), irq_priority);

        if (enable)
        {
            NRFX_IRQ_ENABLE(VPR_0_IRQn + i);
        }
    }

    nrf_barrier_w();
}

/**
 * @brief Function for disabling VPR interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRFY_STATIC_INLINE void nrfy_vpr_int_uninit(NRF_VPR_Type * p_reg)
{
    (void)p_reg;
    for (uint32_t i = 0; i < NRF_VPR_EVENTS_TRIGGERED_COUNT; i++)
    {
        NRFX_IRQ_DISABLE(VPR_0_IRQn + i);
    }

    nrf_barrier_w();
}
#endif // defined(ISA_RISCV)

/** @refhal{nrf_vpr_int_enable} */
NRFY_STATIC_INLINE void nrfy_vpr_int_enable(NRF_VPR_Type * p_reg,
                                            uint32_t       mask)
{
#if defined(ISA_ARM)
    (void)p_reg;
    (void)mask;
#else
    (void)p_reg;
    NRFX_IRQ_ENABLE(VPR_0_IRQn + mask);
    nrf_barrier_w();
#endif // defined(ISA_ARM)
}

/** @refhal{nrf_vpr_int_disable} */
NRFY_STATIC_INLINE void nrfy_vpr_int_disable(NRF_VPR_Type * p_reg,
                                             uint32_t       mask)
{
#if defined(ISA_ARM)
    (void)p_reg;
    (void)mask;
#else
    (void)p_reg;
    NRFX_IRQ_DISABLE(VPR_0_IRQn + mask);
    nrf_barrier_w();
#endif // defined(ISA_ARM)
}

/** @refhal{nrf_vpr_task_trigger} */
NRF_STATIC_INLINE void nrfy_vpr_task_trigger(NRF_VPR_Type * p_reg, nrf_vpr_task_t task)
{
    nrf_vpr_task_trigger(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_vpr_task_address_get} */
NRF_STATIC_INLINE uint32_t nrfy_vpr_task_address_get(NRF_VPR_Type const * p_reg,
                                                    nrf_vpr_task_t       task)
{
    return nrf_vpr_task_address_get(p_reg, task);
}

/** @refhal{nrf_vpr_event_clear} */
NRF_STATIC_INLINE void nrfy_vpr_event_clear(NRF_VPR_Type * p_reg, nrf_vpr_event_t event)
{
    nrf_vpr_event_clear(p_reg, event);
    nrf_barrier_w();
}

/** @refhal{nrf_vpr_event_check} */
NRF_STATIC_INLINE bool nrfy_vpr_event_check(NRF_VPR_Type const * p_reg, nrf_vpr_event_t event)
{
    nrf_barrier_r();
    bool ret = nrf_vpr_event_check(p_reg, event);
    nrf_barrier_r();

    return ret;
}

/** @refhal{nrf_vpr_event_address_get} */
NRF_STATIC_INLINE uint32_t nrfy_vpr_event_address_get(NRF_VPR_Type const * p_reg,
                                                      nrf_vpr_event_t      event)
{
    return nrf_vpr_event_address_get(p_reg, event);
}

/** @refhal{nrf_vpr_int_enable_check} */
NRF_STATIC_INLINE uint32_t nrfy_vpr_int_enable_check(NRF_VPR_Type const * p_reg,
                                                     uint32_t             mask)
{
    nrf_barrier_rw();
    uint32_t ret = nrf_vpr_int_enable_check(p_reg, mask);
    nrf_barrier_r();

    return ret;
}

/** @refhal{nrf_vpr_cpurun_set} */
NRF_STATIC_INLINE void nrfy_vpr_cpurun_set(NRF_VPR_Type * p_reg,
                                           bool           enable)
{
    nrf_vpr_cpurun_set(p_reg, enable);
    nrf_barrier_w();
}

/** @refhal{nrf_vpr_cpurun_get} */
NRF_STATIC_INLINE bool nrfy_vpr_cpurun_get(NRF_VPR_Type const * p_reg)
{
    nrf_barrier_rw();
    bool ret = nrf_vpr_cpurun_get(p_reg);
    nrf_barrier_r();

    return ret;
}

/** @refhal{nrf_vpr_initpc_set} */
NRF_STATIC_INLINE void nrfy_vpr_initpc_set(NRF_VPR_Type * p_reg,
                                           uint32_t       pc)
{
    nrf_vpr_initpc_set(p_reg, pc);
    nrf_barrier_w();
}

/** @refhal{nrf_vpr_initpc_get} */
NRF_STATIC_INLINE uint32_t nrfy_vpr_initpc_get(NRF_VPR_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t ret = nrf_vpr_initpc_get(p_reg);
    nrf_barrier_r();

    return ret;
}

/** @refhal{nrf_vpr_debugif_dmcontrol_set} */
NRF_STATIC_INLINE void nrfy_vpr_debugif_dmcontrol_set(NRF_VPR_Type *      p_reg,
                                                      nrf_vpr_dmcontrol_t signal,
                                                      bool                enable)
{
    nrf_vpr_debugif_dmcontrol_set(p_reg, signal, enable);
    nrf_barrier_w();
}

/** @refhal{nrf_vpr_debugif_dmcontrol_get} */
NRF_STATIC_INLINE bool nrfy_vpr_debugif_dmcontrol_get(NRF_VPR_Type const * p_reg,
                                                      nrf_vpr_dmcontrol_t  signal)
{
    nrf_barrier_rw();
    bool ret = nrf_vpr_debugif_dmcontrol_get(p_reg, signal);
    nrf_barrier_r();

    return ret;
}

/** @} */

#ifdef __cplusplus
}
#endif
#endif // NRFY_VPR_H__
