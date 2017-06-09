/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_MACROS_H__
#define NRFX_MACROS_H__

#ifdef __cplusplus
extern "C" {
#endif


#define NRFX_CHECK(module_enabled)  (module_enabled)

#define NRFX_CONCAT_2(p1, p2)       NRFX_CONCAT_2_(p1, p2)
#define NRFX_CONCAT_2_(p1, p2)      p1 ## p2

#define NRFX_CONCAT_3(p1, p2, p3)   NRFX_CONCAT_3_(p1, p2, p3)
#define NRFX_CONCAT_3_(p1, p2, p3)  p1 ## p2 ## p3

#define NRFX_ROUNDED_DIV(a, b)  (((a) + ((b) / 2)) / (b))


#ifdef __cplusplus
}
#endif

#endif // NRFX_MACROS_H__
