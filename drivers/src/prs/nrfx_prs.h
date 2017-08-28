/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_PRS_H__
#define NRFX_PRS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif


#if defined(NRF51)
    // SPI0, TWI0
    #define NRFX_PRS_BOX_0_ADDR     NRF_SPI0
    // SPI1, SPIS1, TWI1
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPI1
#elif defined(NRF52810_XXAA)
    // TWIM0, TWIS0
    #define NRFX_PRS_BOX_0_ADDR     NRF_TWIM0
    // SPIM0, SPIS0
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM0
#elif defined(NRF52832_XXAA) || defined (NRF52832_XXAB)
    // SPIM0, SPIS0, TWIM0, TWIS0, SPI0, TWI0
    #define NRFX_PRS_BOX_0_ADDR     NRF_SPIM0
    // SPIM1, SPIS1, TWIM1, TWIS1, SPI1, TWI1
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM1
    // SPIM2, SPIS2, SPI2
    #define NRFX_PRS_BOX_2_ADDR     NRF_SPIM2
    // COMP, LPCOMP
    #define NRFX_PRS_BOX_3_ADDR     NRF_COMP
    // UARTE0, UART0
    #define NRFX_PRS_BOX_4_ADDR     NRF_UARTE0
#elif defined(NRF52840_XXAA)
    // SPIM0, SPIS0, TWIM0, TWIS0, SPI0, TWI0
    #define NRFX_PRS_BOX_0_ADDR     NRF_SPIM0
    // SPIM1, SPIS1, TWIM1, TWIS1, SPI1, TWI1
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM1
    // SPIM2, SPIS2, SPI2
    #define NRFX_PRS_BOX_2_ADDR     NRF_SPIM2
    // COMP, LPCOMP
    #define NRFX_PRS_BOX_3_ADDR     NRF_COMP
    // UARTE0, UART0
    #define NRFX_PRS_BOX_4_ADDR     NRF_UARTE0
    // UARTE1, UART1
    #define NRFX_PRS_BOX_5_ADDR     NRF_UARTE1
#else
    #error "Unknown device."
#endif


ret_code_t nrfx_prs_acquire(void       const * p_base_addr,
                            nrfx_irq_handler_t irq_handler);

void nrfx_prs_release(void const * p_base_addr);


void nrfx_prs_box_0_irq_handler(void);
void nrfx_prs_box_1_irq_handler(void);
void nrfx_prs_box_2_irq_handler(void);
void nrfx_prs_box_3_irq_handler(void);
void nrfx_prs_box_4_irq_handler(void);
void nrfx_prs_box_5_irq_handler(void);


#ifdef __cplusplus
}
#endif

#endif // NRFX_PRS_H__
