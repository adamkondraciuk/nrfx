/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_IRQMAP_H_
#define NRF_IRQMAP_H_

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_irqmap_hal IRQMAP HAL
 * @{
 * @ingroup nrf_irqmap
 * @brief   Hardware access layer for managing the Interrupt Mapper peripheral (IRQMAP).
 */

/** @brief Number of interrupts. */
#define NRF_IRQMAP_IRQ_COUNT IRQMAP_IRQ_MaxCount

/**
 * @brief Function for setting the interrupt sink configuration for given interrupt.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] index     Interrupt index.
 * @param[in] processor Processor indentifier to be set.
 */
NRF_STATIC_INLINE void nrf_irqmap_sink_set(NRF_IRQMAP_Type *  p_reg,
                                           uint32_t           index,
                                           nrf_processor_id_t processor);

/**
 * @brief Function for getting the interrupt sink configuration for given interrupt.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] index Interrupt index.
 *
 * @return Processor identifier.
 */
NRF_STATIC_INLINE nrf_processor_id_t nrf_irqmap_sink_get(NRF_IRQMAP_Type const * p_reg,
                                                         uint32_t                index);


#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE void nrf_irqmap_sink_set(NRF_IRQMAP_Type *  p_reg,
                                           uint32_t           index,
                                           nrf_processor_id_t processor)
{
    NRFX_ASSERT(index < NRF_IRQMAP_IRQ_COUNT);
    NRFX_ASSERT(processor > 0);
    NRFX_ASSERT(processor < NRF_PROCESSOR_ID_COUNT);

    p_reg->IRQ[index].SINK = (processor << IRQMAP_IRQ_SINK_DOMAIN_Pos) 
                             & IRQMAP_IRQ_SINK_DOMAIN_Msk;
}

NRF_STATIC_INLINE nrf_processor_id_t nrf_irqmap_sink_get(NRF_IRQMAP_Type const * p_reg,
                                                         uint32_t                index)
{
    NRFX_ASSERT(index < NRF_IRQMAP_IRQ_COUNT);
    return (nrf_processor_id_t)((p_reg->IRQ[index].SINK & IRQMAP_IRQ_SINK_DOMAIN_Msk)
                                >> IRQMAP_IRQ_SINK_DOMAIN_Pos);
}
#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* NRF_IRQMAP_H_ */
