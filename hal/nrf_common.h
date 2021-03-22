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

#if defined(ISA_RISCV)
#define RISCV_FENCE(p, s) __asm__ __volatile__ ("fence " #p "," #s : : : "memory")
#endif

#if defined(HALTIUM_XXAA)
typedef NRF_DOMAINS_t nrf_domain_t;

/* TODO: This should be in MDK (MDK-2070) */
typedef enum
{
    NRF_OWNER_NONE        = 0,
    NRF_OWNER_SECURE      = 1,
    NRF_OWNER_APPLICATION = 2,
    NRF_OWNER_RADIOCORE   = 3,
    NRF_OWNER_CELLCORE    = 4,
    NRF_OWNER_ISIMCORE    = 5,
    NRF_OWNER_SYSCTRL     = 8,
} nrf_owner_t;

/* TODO: Those should be in MDK (MDK-2059) */
#define ADDRESS_REGION_Pos   (29UL)
#define ADDRESS_REGION_Msk   (0xE0000000UL)
#define ADDRESS_SECURITY_Pos (28UL)
#define ADDRESS_SECURITY_Msk (0x10000000UL)
#define ADDRESS_DOMAIN_Pos   (24UL)
#define ADDRESS_DOMAIN_Msk   (0x0F000000UL)
#define ADDRESS_BUS_Pos      (16UL)
#define ADDRESS_BUS_Msk      (0x00FF0000UL)
#define ADDRESS_SLAVE_Pos    (12UL)
#define ADDRESS_SLAVE_Msk    (0x0000F000UL)

typedef enum
{
    NRF_REGION_PROGRAM      = 0,
    NRF_REGION_DATA         = 1,
    NRF_REGION_PERIPHERALS  = 2,
    NRF_REGION_EXTMEM       = 3,
    NRF_REGION_EXTMEM_ENC   = 4,
    NRF_REGION_STM          = 5,
    NRF_REGION_CPU_INTERNAL = 7,
} nrf_region_t;

#endif // defined(HALTIUM_XXAA)

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

#if defined(HALTIUM_XXAA)
NRF_STATIC_INLINE nrf_region_t nrf_address_region_get(uint32_t addr)
{
    return (nrf_region_t)((addr & ADDRESS_REGION_Msk) >> ADDRESS_REGION_Pos);
}

NRF_STATIC_INLINE bool nrf_address_security_get(uint32_t addr)
{
    return ((addr & ADDRESS_SECURITY_Msk) >> ADDRESS_SECURITY_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_address_domain_get(uint32_t addr)
{
    return (uint8_t)((addr & ADDRESS_DOMAIN_Msk) >> ADDRESS_DOMAIN_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_address_bus_get(uint32_t addr)
{
    return (uint8_t)((addr & ADDRESS_BUS_Msk) >> ADDRESS_BUS_Pos);
}

NRF_STATIC_INLINE uint8_t nrf_address_slave_get(uint32_t addr)
{
    return (uint8_t)((addr & ADDRESS_SLAVE_Msk) >> ADDRESS_SLAVE_Pos);
}
#endif // defined(HALTIUM_XXAA)

#endif // NRF_DECLARE_ONLY

#ifdef __cplusplus
}
#endif

#endif // NRF_COMMON_H__
