/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/
/**
 * @file
 * @brief SAADC HAL implementation
 */

#include <nrfx.h>

#if SAADC_ENABLED
#include <nrf_saadc.h>

void nrf_saadc_channel_init(uint8_t channel, nrf_saadc_channel_config_t const * const config)
{
    NRF_SAADC->CH[channel].CONFIG =
            ((config->resistor_p   << SAADC_CH_CONFIG_RESP_Pos)   & SAADC_CH_CONFIG_RESP_Msk)
            | ((config->resistor_n << SAADC_CH_CONFIG_RESN_Pos)   & SAADC_CH_CONFIG_RESN_Msk)
            | ((config->gain       << SAADC_CH_CONFIG_GAIN_Pos)   & SAADC_CH_CONFIG_GAIN_Msk)
            | ((config->reference  << SAADC_CH_CONFIG_REFSEL_Pos) & SAADC_CH_CONFIG_REFSEL_Msk)
            | ((config->acq_time   << SAADC_CH_CONFIG_TACQ_Pos)   & SAADC_CH_CONFIG_TACQ_Msk)
            | ((config->mode       << SAADC_CH_CONFIG_MODE_Pos)   & SAADC_CH_CONFIG_MODE_Msk)
            | ((config->burst      << SAADC_CH_CONFIG_BURST_Pos)  & SAADC_CH_CONFIG_BURST_Msk);
    nrf_saadc_channel_input_set(channel, config->pin_p, config->pin_n);
    return;
}
#endif //SAADC_ENABLED

