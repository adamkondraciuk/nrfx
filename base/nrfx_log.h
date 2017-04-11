/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_LOG_H__
#define NRFX_LOG_H__

#ifdef __cplusplus
extern "C" {
#endif


#if NRFX_MODULE_ENABLED(LOG)

#include <nrf_log.h>
#include <nrf_log_ctrl.h>
#define NRFX_LOG_MODULE_NAME    NRF_LOG_MODULE_NAME

#define NRFX_LOG_ERROR(...)     NRF_LOG_ERROR(__VA_ARGS__)
#define NRFX_LOG_WARNING(...)   NRF_LOG_WARNING( __VA_ARGS__)
#define NRFX_LOG_INFO(...)      NRF_LOG_INFO( __VA_ARGS__)
#define NRFX_LOG_DEBUG(...)     NRF_LOG_DEBUG( __VA_ARGS__)

#else // !NRFX_MODULE_ENABLED(LOG)

#define NRFX_LOG_ERROR(...)
#define NRFX_LOG_WARNING(...)
#define NRFX_LOG_INFO(...)
#define NRFX_LOG_DEBUG(...)

#endif


#ifdef __cplusplus
}
#endif

#endif // NRFX_LOG_H__
