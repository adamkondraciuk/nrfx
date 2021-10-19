/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_GPIO_H__
#define NRFY_GPIO_H__

#include <nrfx.h>
#include <hal/nrf_gpio.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfy_gpio GPIO HALY
 * @{
 * @ingroup nrf_gpio
 * @brief   Hardware access layer with cache and barrier support for managing the GPIO peripheral.
 */

/** @refhal{nrf_gpio_range_cfg_output} */
NRFY_STATIC_INLINE void nrfy_gpio_range_cfg_output(uint32_t pin_range_start,
                                                   uint32_t pin_range_end)
{
    nrf_gpio_range_cfg_output(pin_range_start, pin_range_end);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_range_cfg_input} */
NRFY_STATIC_INLINE void nrfy_gpio_range_cfg_input(uint32_t            pin_range_start,
                                                  uint32_t            pin_range_end,
                                                  nrf_gpio_pin_pull_t pull_config)
{
    nrf_gpio_range_cfg_input(pin_range_start, pin_range_end, pull_config);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_cfg} */
NRFY_STATIC_INLINE void nrfy_gpio_cfg(uint32_t             pin_number,
                                      nrf_gpio_pin_dir_t   dir,
                                      nrf_gpio_pin_input_t input,
                                      nrf_gpio_pin_pull_t  pull,
                                      nrf_gpio_pin_drive_t drive,
                                      nrf_gpio_pin_sense_t sense)
{
    nrf_gpio_cfg(pin_number, dir, input, pull, drive, sense);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_cfg_output} */
NRFY_STATIC_INLINE void nrfy_gpio_cfg_output(uint32_t pin_number)
{
    nrf_gpio_cfg_output(pin_number);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_cfg_input} */
NRFY_STATIC_INLINE void nrfy_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config)
{
    nrf_gpio_cfg_input(pin_number, pull_config);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_cfg_default} */
NRFY_STATIC_INLINE void nrfy_gpio_cfg_default(uint32_t pin_number)
{
    nrf_gpio_cfg_default(pin_number);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_cfg_watcher} */
NRFY_STATIC_INLINE void nrfy_gpio_cfg_watcher(uint32_t pin_number)
{
    nrf_barrier_r();
    nrf_gpio_cfg_watcher(pin_number);
    nrf_barrier_rw();
}

/** @refhal{nrf_gpio_input_disconnect} */
NRFY_STATIC_INLINE void nrfy_gpio_input_disconnect(uint32_t pin_number)
{
    nrf_barrier_r();
    nrf_gpio_input_disconnect(pin_number);
    nrf_barrier_rw();
}

/** @refhal{nrf_gpio_cfg_sense_input} */
NRFY_STATIC_INLINE void nrfy_gpio_cfg_sense_input(uint32_t             pin_number,
                                                  nrf_gpio_pin_pull_t  pull_config,
                                                  nrf_gpio_pin_sense_t sense_config)
{
    nrf_gpio_cfg_sense_input(pin_number, pull_config, sense_config);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_cfg_sense_set} */
NRFY_STATIC_INLINE void nrfy_gpio_cfg_sense_set(uint32_t             pin_number,
                                                nrf_gpio_pin_sense_t sense_config)
{
    nrf_barrier_r();
    nrf_gpio_cfg_sense_set(pin_number, sense_config);
    nrf_barrier_rw();
}

/** @refhal{nrf_gpio_pin_dir_set} */
NRFY_STATIC_INLINE void nrfy_gpio_pin_dir_set(uint32_t pin_number, nrf_gpio_pin_dir_t direction)
{
    nrf_gpio_pin_dir_set(pin_number, direction);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_pin_set} */
NRFY_STATIC_INLINE void nrfy_gpio_pin_set(uint32_t pin_number)
{
    nrf_gpio_pin_set(pin_number);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_pin_clear} */
NRFY_STATIC_INLINE void nrfy_gpio_pin_clear(uint32_t pin_number)
{
    nrf_gpio_pin_clear(pin_number);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_pin_toggle} */
NRFY_STATIC_INLINE void nrfy_gpio_pin_toggle(uint32_t pin_number)
{
    nrf_gpio_pin_toggle(pin_number);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_pin_write} */
NRFY_STATIC_INLINE void nrfy_gpio_pin_write(uint32_t pin_number, uint32_t value)
{
    nrf_gpio_pin_write(pin_number, value);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_pin_read} */
NRFY_STATIC_INLINE uint32_t nrfy_gpio_pin_read(uint32_t pin_number)
{
    nrf_barrier_r();
    uint32_t pin = nrf_gpio_pin_read(pin_number);
    nrf_barrier_r();
    return pin;
}

/** @refhal{nrf_gpio_pin_out_read} */
NRFY_STATIC_INLINE uint32_t nrfy_gpio_pin_out_read(uint32_t pin_number)
{
    nrf_barrier_rw();
    uint32_t pin = nrf_gpio_pin_out_read(pin_number);
    nrf_barrier_r();
    return pin;
}

/** @refhal{nrf_gpio_pin_sense_get} */
NRFY_STATIC_INLINE nrf_gpio_pin_sense_t nrfy_gpio_pin_sense_get(uint32_t pin_number)
{
    nrf_barrier_rw();
    nrf_gpio_pin_sense_t pin_sense = nrf_gpio_pin_sense_get(pin_number);
    nrf_barrier_r();
    return pin_sense;
}

/** @refhal{nrf_gpio_pin_dir_get} */
NRFY_STATIC_INLINE nrf_gpio_pin_dir_t nrfy_gpio_pin_dir_get(uint32_t pin_number)
{
    nrf_barrier_rw();
    nrf_gpio_pin_dir_t pin_dir = nrf_gpio_pin_dir_get(pin_number);
    nrf_barrier_r();
    return pin_dir;
}

/** @refhal{nrf_gpio_pin_input_get} */
NRFY_STATIC_INLINE nrf_gpio_pin_input_t nrfy_gpio_pin_input_get(uint32_t pin_number)
{
    nrf_barrier_rw();
    nrf_gpio_pin_input_t pin_input = nrf_gpio_pin_input_get(pin_number);
    nrf_barrier_r();
    return pin_input;
}

/** @refhal{nrf_gpio_pin_pull_get} */
NRFY_STATIC_INLINE nrf_gpio_pin_pull_t nrfy_gpio_pin_pull_get(uint32_t pin_number)
{
    nrf_barrier_rw();
    nrf_gpio_pin_pull_t pin_pull = nrf_gpio_pin_pull_get(pin_number);
    nrf_barrier_r();
    return pin_pull;
}

/** @refhal{nrf_gpio_port_dir_output_set} */
NRFY_STATIC_INLINE void nrfy_gpio_port_dir_output_set(NRF_GPIO_Type * p_reg, uint32_t out_mask)
{
    nrf_gpio_port_dir_output_set(p_reg, out_mask);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_port_dir_input_set} */
NRFY_STATIC_INLINE void nrfy_gpio_port_dir_input_set(NRF_GPIO_Type * p_reg, uint32_t in_mask)
{
    nrf_gpio_port_dir_input_set(p_reg, in_mask);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_port_dir_write} */
NRFY_STATIC_INLINE void nrfy_gpio_port_dir_write(NRF_GPIO_Type * p_reg, uint32_t dir_mask)
{
    nrf_gpio_port_dir_write(p_reg, dir_mask);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_port_dir_read} */
NRFY_STATIC_INLINE uint32_t nrfy_gpio_port_dir_read(NRF_GPIO_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t port_dir = nrf_gpio_port_dir_read(p_reg);
    nrf_barrier_r();
    return port_dir;
}

/** @refhal{nrf_gpio_port_in_read} */
NRFY_STATIC_INLINE uint32_t nrfy_gpio_port_in_read(NRF_GPIO_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t port_in = nrf_gpio_port_in_read(p_reg);
    nrf_barrier_r();
    return port_in;
}

/** @refhal{nrf_gpio_port_out_read} */
NRFY_STATIC_INLINE uint32_t nrfy_gpio_port_out_read(NRF_GPIO_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t port_out = nrf_gpio_port_out_read(p_reg);
    nrf_barrier_r();
    return port_out;
}

/** @refhal{nrf_gpio_port_out_write} */
NRFY_STATIC_INLINE void nrfy_gpio_port_out_write(NRF_GPIO_Type * p_reg, uint32_t value)
{
    nrf_gpio_port_out_write(p_reg, value);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_port_out_set} */
NRFY_STATIC_INLINE void nrfy_gpio_port_out_set(NRF_GPIO_Type * p_reg, uint32_t set_mask)
{
    nrf_gpio_port_out_set(p_reg, set_mask);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_port_out_clear} */
NRFY_STATIC_INLINE void nrfy_gpio_port_out_clear(NRF_GPIO_Type * p_reg, uint32_t clr_mask)
{
    nrf_gpio_port_out_clear(p_reg, clr_mask);
    nrf_barrier_w();
}

/** @refhal{nrf_gpio_ports_read} */
NRFY_STATIC_INLINE void nrfy_gpio_ports_read(uint32_t   start_port,
                                             uint32_t   length,
                                             uint32_t * p_masks)
{
    nrf_barrier_r();
    nrf_gpio_ports_read(start_port, length, p_masks);
    nrf_barrier_r();
}

#if defined(NRF_GPIO_LATCH_PRESENT)
/** @refhal{nrf_gpio_latches_read} */
NRFY_STATIC_INLINE void nrfy_gpio_latches_read(uint32_t   start_port,
                                               uint32_t   length,
                                               uint32_t * p_masks)
{
    nrf_barrier_r();
    nrf_gpio_latches_read(start_port, length, p_masks);
    nrf_barrier_r();
}

/** @refhal{nrf_gpio_latches_read_and_clear} */
NRFY_STATIC_INLINE void nrfy_gpio_latches_read_and_clear(uint32_t   start_port,
                                                         uint32_t   length,
                                                         uint32_t * p_masks)
{
    nrf_barrier_r();
    nrf_gpio_latches_read_and_clear(start_port, length, p_masks);
    nrf_barrier_rw();
}

/** @refhal{nrf_gpio_pin_latch_get} */
NRFY_STATIC_INLINE uint32_t nrfy_gpio_pin_latch_get(uint32_t pin_number)
{
    nrf_barrier_r();
    uint32_t pin_latch = nrf_gpio_pin_latch_get(pin_number);
    nrf_barrier_r();
    return pin_latch;
}

/** @refhal{nrf_gpio_pin_latch_clear} */
NRFY_STATIC_INLINE void nrfy_gpio_pin_latch_clear(uint32_t pin_number)
{
    nrf_gpio_pin_latch_clear(pin_number);
    nrf_barrier_w();
}
#endif // defined(NRF_GPIO_LATCH_PRESENT)

#if NRF_GPIO_HAS_SEL
/** @refhal{nrf_gpio_pin_control_select} */
NRFY_STATIC_INLINE void nrfy_gpio_pin_control_select(uint32_t pin_number, nrf_gpio_pin_sel_t ctrl)
{
    nrf_barrier_r();
    nrf_gpio_pin_control_select(pin_number, ctrl);
    nrf_barrier_rw();
}
#endif

/** @refhal{nrf_gpio_pin_present_check} */
NRFY_STATIC_INLINE bool nrfy_gpio_pin_present_check(uint32_t pin_number)
{
    return nrf_gpio_pin_present_check(pin_number);
}

/** @refhal{nrf_gpio_pin_port_number_extract} */
NRFY_STATIC_INLINE uint32_t nrfy_gpio_pin_port_number_extract(uint32_t * p_pin)
{
    return nrf_gpio_pin_port_number_extract(p_pin);
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFY_GPIO_H__
