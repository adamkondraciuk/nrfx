/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_COMMON_H__
#define NRF_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NRFX_EVENT_READBACK_ENABLED
#define NRFX_EVENT_READBACK_ENABLED 1
#endif

#if !defined(NRFX_CONFIG_API_VER_2_9) && !defined(NRFX_CONFIG_API_VER_2_10)
#define NRFX_CONFIG_API_VER_2_9 1
#endif

#if defined(NRFX_CLZ)
#define NRF_CLZ(value) NRFX_CLZ(value)
#else
#define NRF_CLZ(value) __CLZ(value)
#endif

#if defined(NRFX_CTZ)
#define NRF_CTZ(value) NRFX_CTZ(value)
#else
#define NRF_CTZ(value) __CLZ(__RBIT(value))
#endif

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_event_readback(void * p_event_reg)
{
#if NRFX_CHECK(NRFX_EVENT_READBACK_ENABLED) && !defined(NRF51)
    (void)*((volatile uint32_t *)(p_event_reg));
#else
    (void)p_event_reg;
#endif
}

#endif // NRF_DECLARE_ONLY

#ifdef __cplusplus
}
#endif

#endif // NRF_COMMON_H__
