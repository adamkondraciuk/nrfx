/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/

#ifndef NRFX_USBD_ERRATA_H__
#define NRFX_USBD_ERRATA_H__

#include <stdbool.h>
#include <nrfx.h>
#include <nrf_erratas.h>

#ifndef NRFX_USBD_ERRATA_ENABLE
/**
 * @brief The constant that informs if errata should be enabled at all.
 *
 * If this constant is set to 0, all the Errata bug fixes will be automatically disabled.
 */
#define NRFX_USBD_ERRATA_ENABLE 1
#endif

/* Errata: USBD: EPDATA event is not always generated. **/
static inline bool nrfx_usbd_errata_104(void)
{
#if defined(NRF52_SERIES) && NRFX_USBD_ERRATA_ENABLE
    return errata_104();
#else
    return false;
#endif
}

/* Errata: During setup read/write transfer USBD acknowledges setup stage without SETUP task. **/
static inline bool nrfx_usbd_errata_154(void)
{
#if defined(NRF52_SERIES) && NRFX_USBD_ERRATA_ENABLE
    return errata_154();
#else
    return false;
#endif
}

/* Errata: ISO double buffering not functional. **/
static inline bool nrfx_usbd_errata_166(void)
{
#if defined(NRF52_SERIES) && NRFX_USBD_ERRATA_ENABLE
    return errata_166();
#else
    return false;
#endif
}

/* Errata: USBD might not reach its active state. **/
static inline bool nrfx_usbd_errata_171(void)
{
#if defined(NRF52_SERIES) && NRFX_USBD_ERRATA_ENABLE
    return errata_171();
#else
    return false;
#endif
}

/* Errata: USB cannot be enabled. **/
static inline bool nrfx_usbd_errata_187(void)
{
#if defined(NRF52_SERIES) && NRFX_USBD_ERRATA_ENABLE
    return errata_187();
#else
    return false;
#endif
}

/* Errata: USBD cannot receive tasks during DMA. **/
static inline bool nrfx_usbd_errata_199(void)
{
#if defined(NRF52_SERIES) && NRFX_USBD_ERRATA_ENABLE
    return errata_199();
#else
    return false;
#endif
}

/* Errata: SIZE.EPOUT not writable. **/
static inline bool nrfx_usbd_errata_200(void)
{
#if defined(NRF52_SERIES) && NRFX_USBD_ERRATA_ENABLE
    return errata_200();
#else
    return false;
#endif
}

#endif // NRFX_USBD_ERRATA_H__
