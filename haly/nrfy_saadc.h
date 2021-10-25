/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_SAADC_H__
#define NRFY_SAADC_H__

#include <nrfx.h>
#include <hal/nrf_saadc.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NRFY_BARRIER_WRITE()

#define NRFY_EVENT_TO_BITMASK(event) (1 << ((((uint32_t)event) - 0x100) >> 2))

#define NRFY_EVENT_CHECK(mask, event) ((mask) & NRFY_EVENT_TO_BITMASK(event))

typedef enum
{
    NRFY_SAADC_SAMPLE_EVENT_NONE       = 0,
    NRFY_SAADC_SAMPLE_EVENT_DONE       = NRF_SAADC_EVENT_DONE,
    NRFY_SAADC_SAMPLE_EVENT_RESULTDONE = NRF_SAADC_EVENT_RESULTDONE,
    NRFY_SAADC_SAMPLE_EVENT_END        = NRF_SAADC_EVENT_END,
} nrfy_saadc_sample_event_t;

typedef struct
{
    nrf_saadc_resolution_t resolution;
    nrf_saadc_oversample_t oversampling;
} nrfy_saadc_config_t;

typedef struct
{
    NRF_SAADC_Type *    p_reg;
    nrf_saadc_value_t * p_buffer_primary;
    nrf_saadc_value_t * p_buffer_secondary;
    uint16_t            size_primary;
    uint16_t            size_secondary;
} nrfy_saadc_cb_t;

NRFX_STATIC_INLINE void nrfy_saadc_configure(nrfy_saadc_cb_t const *     p_cb,
                                             nrfy_saadc_config_t const * p_config)
{
    nrf_saadc_resolution_set(p_cb->p_reg, p_config->resolution);
    nrf_saadc_oversample_set(p_cb->p_reg, p_config->oversampling);
}

NRFX_STATIC_INLINE void nrfy_saadc_channel_configure(nrfy_saadc_cb_t const *            p_cb,
                                                     uint8_t                            channel,
                                                     nrf_saadc_input_t                  pin_p,
                                                     nrf_saadc_input_t                  pin_n,
                                                     nrf_saadc_channel_config_t const * p_config)
{
    if (p_config)
    {
        nrf_saadc_channel_init(p_cb->p_reg, channel, p_config);
    }
    nrf_saadc_channel_input_set(p_cb->p_reg, channel, pin_p, pin_n);
    NRFY_BARRIER_WRITE();
}

NRFX_STATIC_INLINE void nrfy_saadc_int_uninit(nrfy_saadc_cb_t const * p_cb)
{
    NRFX_IRQ_DISABLE(nrfx_get_irq_number((void *)p_cb->p_reg));
}

NRFX_STATIC_INLINE void nrfy_saadc_enable(nrfy_saadc_cb_t const * p_cb)
{
    nrf_saadc_enable(p_cb->p_reg);
    NRFY_BARRIER_WRITE();
}

NRFX_STATIC_INLINE void nrfy_saadc_disable(nrfy_saadc_cb_t const * p_cb)
{
    nrf_saadc_disable(p_cb->p_reg);
}

NRFX_STATIC_INLINE void nrfy_saadc_stop(nrfy_saadc_cb_t const * p_cb, bool wait)
{
    nrf_saadc_task_trigger(p_cb->p_reg, NRF_SAADC_TASK_STOP);
    if (wait)
    {
        while (!nrf_saadc_event_check(p_cb->p_reg, NRF_SAADC_EVENT_STOPPED))
        {}
        nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_STOPPED);
    }
}

NRFX_STATIC_INLINE void nrfy_saadc_sample(nrfy_saadc_cb_t const *   p_cb,
                                          nrfy_saadc_sample_event_t event)
{
    nrf_saadc_task_trigger(p_cb->p_reg, NRF_SAADC_TASK_SAMPLE);
    if (event != NRFY_SAADC_SAMPLE_EVENT_NONE)
    {
        nrf_saadc_event_clear(p_cb->p_reg, (nrf_saadc_event_t)event);
        while (!nrf_saadc_event_check(p_cb->p_reg, (nrf_saadc_event_t)event))
        {}
        nrf_saadc_event_clear(p_cb->p_reg, (nrf_saadc_event_t)event);
    }
}

NRFX_STATIC_INLINE void nrfy_saadc_oversample(nrfy_saadc_cb_t const * p_cb)
{
    uint32_t samples_to_take =
        nrf_saadc_oversample_sample_count_get(nrf_saadc_oversample_get(p_cb->p_reg));

    for (uint32_t sample_idx = 0; sample_idx < samples_to_take - 1; sample_idx++)
    {
        // NRFY: nrfy_saadc_oversample_sample(wait = true) - uses DONE event
        // NRFY: on last sample use nrfy_saadc_sample(wait = true) to wait on END event
        nrfy_saadc_sample(p_cb, NRFY_SAADC_SAMPLE_EVENT_DONE);
    }
    nrfy_saadc_sample(p_cb, NRFY_SAADC_SAMPLE_EVENT_END);
}

NRFX_STATIC_INLINE void nrfy_saadc_calibrate(nrfy_saadc_cb_t const * p_cb, bool wait)
{
    nrf_saadc_task_trigger(p_cb->p_reg, NRF_SAADC_TASK_CALIBRATEOFFSET);
    if (wait)
    {
        while (!nrf_saadc_event_check(p_cb->p_reg, NRF_SAADC_EVENT_CALIBRATEDONE))
        {}
        nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_CALIBRATEDONE);
        nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_END);
    }
}

NRFX_STATIC_INLINE bool nrfy_saadc_event_check_and_clear(nrfy_saadc_cb_t const * p_cb,
                                                         nrf_saadc_event_t       event)
{
    if (nrf_saadc_event_check(p_cb->p_reg, event))
    {
        nrf_saadc_event_clear(p_cb->p_reg, event);
        return true;
    }
    return false;
}

NRFX_STATIC_INLINE void nrfy_saadc_int_init(nrfy_saadc_cb_t const * p_cb,
                                            uint8_t                 interrupt_priority)
{
    nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_STARTED);
    nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_STOPPED);
    nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_END);
    nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_CALIBRATEDONE);
    nrf_saadc_int_set(p_cb->p_reg, 0);
    NRFX_IRQ_ENABLE(nrfx_get_irq_number((void *)p_cb->p_reg));
    NRFX_IRQ_PRIORITY_SET(nrfx_get_irq_number((void *)p_cb->p_reg), interrupt_priority);
}

NRFX_STATIC_INLINE void nrfy_saadc_buffer_latch(nrfy_saadc_cb_t const * p_cb,
                                                bool                    wait)
{
    nrf_saadc_task_trigger(p_cb->p_reg, NRF_SAADC_TASK_START);
    if (wait)
    {
        while (!nrf_saadc_event_check(p_cb->p_reg, NRF_SAADC_EVENT_STARTED))
        {}
        nrf_saadc_event_clear(p_cb->p_reg, NRF_SAADC_EVENT_STARTED);
    }
}

NRFX_STATIC_INLINE void nrfy_saadc_buffer_set(nrfy_saadc_cb_t const * p_cb,
                                              nrf_saadc_value_t *     p_buffer,
                                              uint32_t                size,
                                              bool                    latch,
                                              bool                    wait)
{
    nrf_saadc_buffer_init(p_cb->p_reg, p_buffer, size);
    if (latch)
    {
        NRFY_BARRIER_WRITE();
        nrfy_saadc_buffer_latch(p_cb, wait);
    }
}

NRFX_STATIC_INLINE void nrfy_saadc_irq_handler(nrfy_saadc_cb_t const * p_cb)
{
    bool stopped = false;
    if (nrf_saadc_event_check(p_cb->p_reg, NRF_SAADC_EVENT_STOPPED))
    {
        // If there was ongoing conversion the STOP task also triggers the END event
        stopped = true;
    }

    if (nrf_saadc_event_check(p_cb->p_reg, NRF_SAADC_EVENT_END))
    {
        size_t size = stopped ? nrf_saadc_amount_get(p_cb->p_reg) : p_cb->size_primary;
        NRFY_CACHE_INVALIDATE(p_cb->p_buffer_primary, size);
    }
}

#ifdef __cplusplus
}
#endif

#endif // NRFY_SAADC_H__
