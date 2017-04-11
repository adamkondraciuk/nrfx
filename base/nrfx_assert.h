/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_ASSERT_H__
#define NRFX_ASSERT_H__

#ifdef __cplusplus
extern "C" {
#endif


#if !defined(ASSERT)

void assert_nrf_callback(uint16_t line_num, const uint8_t * file_name);

#define ASSERT(expr) \
    do { \
        if (!expr) \
        { \
            assert_nrf_callback((uint16_t)__LINE__, \
                                (const uint8_t *)__FILE__); \
        } \
    } while (0)

#endif // !defined(ASSERT)


#ifdef __cplusplus
}
#endif

#endif // NRFX_ASSERT_H__
