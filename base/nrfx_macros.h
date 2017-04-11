/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_MACROS_H__
#define NRFX_MACROS_H__

#ifdef __cplusplus
extern "C" {
#endif


#define NRFX_MODULE_ENABLED(module) \
    ((defined(module ## _ENABLED) && (module ## _ENABLED)) ? 1 : 0)


#ifdef __cplusplus
}
#endif

#endif // NRFX_MACROS_H__
