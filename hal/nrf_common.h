/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_COMMON_H__
#define NRF_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NRFX_EVENT_READBACK_ENABLED
#define NRFX_EVENT_READBACK_ENABLED 1
#endif

#if !defined(NRFX_CONFIG_API_VER_2_9)  && \
    !defined(NRFX_CONFIG_API_VER_2_10) && \
    !defined(NRFX_CONFIG_API_VER_2_11)
#define NRFX_CONFIG_API_VER_2_9 1
#endif

#if defined(__CM33_REV) || defined(__CM4_REV) || defined(__CM0_REV)
#define ISA_ARM 1
#elif defined(__VPR_REV)
#define ISA_RISCV 1
#else
#error "Unsupported ISA"
#endif

#if defined(ISA_RISCV)
#define RISCV_FENCE(p, s) __asm__ __volatile__ ("fence " #p "," #s : : : "memory")
#endif

#if defined(HALTIUM_XXAA)
typedef NRF_DOMAINS_t nrf_domain_t;

/* TODO: This should be in MDK */
typedef enum {
    NRF_OWNER_NONE        = 0,
    NRF_OWNER_SECURE      = 1,
    NRF_OWNER_APPLICATION = 2,
    NRF_OWNER_RADIOCORE   = 3,
    NRF_OWNER_CELLCORE    = 4,
    NRF_OWNER_ISIMCORE    = 5,
    NRF_OWNER_SYSCTRL     = 8,
} nrf_owner_t;
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

NRF_STATIC_INLINE void nrf_barrier_w(void)
{
#if defined(ISA_RISCV)
    RISCV_FENCE(ow, ow);
#endif
}

NRF_STATIC_INLINE void nrf_barrier_r(void)
{
#if defined(ISA_RISCV)
    RISCV_FENCE(ir, ir);
#endif
}

NRF_STATIC_INLINE void nrf_barrier_rw(void)
{
#if defined(ISA_RISCV)
    RISCV_FENCE(iorw, iorw);
#endif
}

#endif // NRF_DECLARE_ONLY

#ifdef __cplusplus
}
#endif

#endif // NRF_COMMON_H__
