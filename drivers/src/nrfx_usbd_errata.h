/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/

#ifndef NRFX_USBD_ERRATA_H__
#define NRFX_USBD_ERRATA_H__

#include <stdbool.h>

#ifndef NRFX_USBD_ERRATA_ENABLE
/**
 * @brief The constant that informs if errata should be enabled at all.
 *
 * If this constant is set to 0, all the Errata bug fixes will be automatically disabled.
 */
#define NRFX_USBD_ERRATA_ENABLE 1
#endif

static inline bool nrfx_usbd_errata_type_52840(void)
{
    return (*(uint32_t *)0x10000130UL == 0x8UL);
}

static inline bool nrfx_usbd_errata_type_52840_eng_a(void)
{
    return nrfx_usbd_errata_type_52840();
}

static inline bool nrfx_usbd_errata_type_52840_eng_b(void)
{
    return (nrfx_usbd_errata_type_52840() && (*(uint32_t *)0x10000134UL >= 0x1UL));
}

static inline bool nrfx_usbd_errata_type_52840_eng_c(void)
{
    return (nrfx_usbd_errata_type_52840() && (*(uint32_t *)0x10000134UL >= 0x2UL));
}

static inline bool nrfx_usbd_errata_type_52840_eng_d(void)
{
    return (nrfx_usbd_errata_type_52840() && (*(uint32_t *)0x10000134UL >= 0x3UL));
}

/* Errata: USBD: EPDATA event is not always generated. */
static inline bool nrfx_usbd_errata_104(void)
{
    return (NRFX_USBD_ERRATA_ENABLE && (!nrfx_usbd_errata_type_52840_eng_b()));
}

/* Errata: During setup read/write transfer USBD acknowledges setup stage without SETUP task. */
static inline bool nrfx_usbd_errata_154(void)
{
    return (NRFX_USBD_ERRATA_ENABLE && (!nrfx_usbd_errata_type_52840_eng_b()));
}

/* Errata: ISO double buffering not functional. */
static inline bool nrfx_usbd_errata_166(void)
{
    return (NRFX_USBD_ERRATA_ENABLE && true);
}

/* Errata: USBD might not reach its active state. */
static inline bool nrfx_usbd_errata_171(void)
{
    return (NRFX_USBD_ERRATA_ENABLE && true);
}

/* Errata: USB cannot be enabled. */
static inline bool nrfx_usbd_errata_187(void)
{
    return (NRFX_USBD_ERRATA_ENABLE && nrfx_usbd_errata_type_52840_eng_b());
}

/* Errata: USBD cannot receive tasks during DMA. */
static inline bool nrfx_usbd_errata_199(void)
{
    return (NRFX_USBD_ERRATA_ENABLE && true);
}

/* Errata: SIZE.EPOUT not writable. */
static inline bool nrfx_usbd_errata_200(void)
{
    return (NRFX_USBD_ERRATA_ENABLE && (!nrfx_usbd_errata_type_52840_eng_b()));
}

#endif // NRFX_USBD_ERRATA_H__
