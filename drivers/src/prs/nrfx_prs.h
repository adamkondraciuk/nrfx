/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_PRS_H__
#define NRFX_PRS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef void (* nrfx_prs_irq_handler_t)(void);

ret_code_t nrfx_prs_acquire(void const * p_base_addr,
                            nrfx_prs_irq_handler_t irq_handler);

void nrfx_prs_release(void const * p_base_addr);


#ifdef __cplusplus
}
#endif

#endif // NRFX_PRS_H__
