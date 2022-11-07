/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VREGMAIN_H__
#define NRF_VREGMAIN_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vregmain_hal Main Voltage Regulator HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the Main Voltage Regulator (VREGMAIN).
 */

/** @brief VREGMAIN events. */
typedef enum
{
    NRF_VREGMAIN_EVENT_READY       = offsetof(NRF_VREGMAIN_Type, EVENTS_READY),      /**< Power up done. */
    NRF_VREGMAIN_EVENT_SETTLED     = offsetof(NRF_VREGMAIN_Type, EVENTS_SETTLED),    /**< Settled flag for MODE handshake. */
    NRF_VREGMAIN_EVENT_SETTLED_CH1 = offsetof(NRF_VREGMAIN_Type, EVENTS_SETTLEDCH1), /**< Settled flag for CH1 enable. */
    NRF_VREGMAIN_EVENT_SETTLED_CH2 = offsetof(NRF_VREGMAIN_Type, EVENTS_SETTLEDCH2), /**< Settled flag for CH2 enable. */
    NRF_VREGMAIN_EVENT_SETTLED_CH3 = offsetof(NRF_VREGMAIN_Type, EVENTS_SETTLEDCH3), /**< Settled flag for CH3 enable. */
    NRF_VREGMAIN_EVENT_IOUTCMP     = offsetof(NRF_VREGMAIN_Type, EVENTS_IOUTCMP),    /**< Analog current comparator. */
    NRF_VREGMAIN_EVENT_LP2HP       = offsetof(NRF_VREGMAIN_Type, EVENTS_LP2HP),      /**< Current consumption above threshold. */
    NRF_VREGMAIN_EVENT_HP2LP       = offsetof(NRF_VREGMAIN_Type, EVENTS_HP2LP),      /**< Current consumption below threshold. */
} nrf_vregmain_event_t;

/** @brief VREGMAIN interrupts. */
typedef enum
{
    NRF_VREGMAIN_INT_READY_MASK       = VREGMAIN_INTEN_READY_Msk,      /**< Interrupt on READY. */
    NRF_VREGMAIN_INT_SETTLED_MASK     = VREGMAIN_INTEN_SETTLED_Msk,    /**< Interrupt on SETTLED. */
    NRF_VREGMAIN_INT_SETTLED_CH1_MASK = VREGMAIN_INTEN_SETTLEDCH1_Msk, /**< Interrupt on SETTLEDCH1. */
    NRF_VREGMAIN_INT_SETTLED_CH2_MASK = VREGMAIN_INTEN_SETTLEDCH2_Msk, /**< Interrupt on SETTLEDCH2. */
    NRF_VREGMAIN_INT_SETTLED_CH3_MASK = VREGMAIN_INTEN_SETTLEDCH3_Msk, /**< Interrupt on SETTLEDCH3. */
    NRF_VREGMAIN_INT_IOUTCMP_MASK     = VREGMAIN_INTEN_IOUTCMP_Msk,    /**< Interrupt on IOUTCMP. */
    NRF_VREGMAIN_INT_LP2HP_MASK       = VREGMAIN_INTEN_LP2HP_Msk,      /**< Interrupt on LP2HP. */
    NRF_VREGMAIN_INT_HP2LP_MASK       = VREGMAIN_INTEN_HP2LP_Msk,      /**< Interrupt on HP2LP. */
} nrf_vregmain_int_mask_t;

/** @brief STATUS register states. */
typedef enum
{
    NRF_VREGMAIN_STATUS_HIGH_POWER  = VREGMAIN_STATUS_MODE_HP,  /**< High power hysteretic mode. */
    NRF_VREGMAIN_STATUS_LOW_POWER   = VREGMAIN_STATUS_MODE_LP,  /**< Autonomous hysteretic low power mode. */
    NRF_VREGMAIN_STATUS_ULP_REFRESH = VREGMAIN_STATUS_MODE_ULP, /**< Refresh based ultra-Low power mode. */
    NRF_VREGMAIN_STATUS_PWM         = VREGMAIN_STATUS_MODE_PWM, /**< Refresh based ultra-Low power mode. */
} nrf_vregmain_status_t;

/** @brief STATUSANA register bit masks. */
typedef enum
{
    NRF_VREGMAIN_STATUSANA_READY_MASK        = VREGMAIN_STATUSANA_READY_Msk,       /**< Current value of READY signal. */
    NRF_VREGMAIN_STATUSANA_SETTLED_MODE_MASK = VREGMAIN_STATUSANA_SETTLEDMODE_Msk, /**< Current value of SETTLED_CH1 signal. */
    NRF_VREGMAIN_STATUSANA_SETTLED_CH1_MASK  = VREGMAIN_STATUSANA_SETTLEDCH1_Msk,  /**< Current value of CH1 SETTLED signal. */
    NRF_VREGMAIN_STATUSANA_SETTLED_CH2_MASK  = VREGMAIN_STATUSANA_SETTLEDCH2_Msk,  /**< Current value of CH2 SETTLED signal. */
    NRF_VREGMAIN_STATUSANA_SETTLED_CH3_MASK  = VREGMAIN_STATUSANA_SETTLEDCH3_Msk,  /**< Current value of CH3 SETTLED signal. */
    NRF_VREGMAIN_STATUSANA_CHRG_CH1_MASK     = VREGMAIN_STATUSANA_CHRGCH1_Msk,     /**< Current value of CH1 CHRG signal. */
    NRF_VREGMAIN_STATUSANA_CHRG_CH2_MASK     = VREGMAIN_STATUSANA_CHRGCH2_Msk,     /**< Current value of CH2 CHRG signal. */
    NRF_VREGMAIN_STATUSANA_CHRG_CH3_MASK     = VREGMAIN_STATUSANA_CHRGCH3_Msk,     /**< Current value of CH3 CHRG signal. */
    NRF_VREGMAIN_STATUSANA_ICMP_MASK         = VREGMAIN_STATUSANA_ICMP_Msk,        /**< Current value of ICMP signal.. */
} nrf_vregmain_statusana_mask_t;

/** @brief STATUSDIG register bit masks. */
typedef enum
{
    NRF_VREGMAIN_STATUSDIG_FSM_MASTER_MASK = VREGMAIN_STATUSDIG_FSMMASTER_Msk, /**< State of MMI master FSM. */
    NRF_VREGMAIN_STATUSDIG_FSM_1V8_MASK    = VREGMAIN_STATUSDIG_FSM1V8_Msk,    /**< State of MMI 1V8 FSM. */
    NRF_VREGMAIN_STATUSDIG_FSM_0V8_MASK    = VREGMAIN_STATUSDIG_FSM0V8_Msk,    /**< State of MMI 0V8 FSM. */
} nrf_vregmain_statusdig_mask_t;

/** @brief Available amounts of hysteresis for HYSTCTRL field in CONFIG.CFGSTATIC register. */
typedef enum
{
    NRF_VREGMMAIN_HYST_CTRL_4MV = VREGMAIN_CONFIG_CFGSTATIC_HYSTCTRL_Hyst4mV, /**< 4mV Hysteresis. */
    NRF_VREGMMAIN_HYST_CTRL_8MV = VREGMAIN_CONFIG_CFGSTATIC_HYSTCTRL_Hyst8mV, /**< 8mV hysteresis. */
} nrf_vregmain_hyst_ctrl_t;

/** @brief Available hysteresis feedback control sources for HYSTRUNCTRL field in CONFIG.CFGSTATIC register. */
typedef enum
{
    NRF_VREGMMAIN_HYST_RUN_CTRL_VOUT_CMP   = VREGMAIN_CONFIG_CFGSTATIC_HYSTRUNCTRL_HystVoutCmp,   /**< Hysteresis feedback from VOUTCMP. */
    NRF_VREGMMAIN_HYST_RUN_CTRL_MBIAS_CORE = VREGMAIN_CONFIG_CFGSTATIC_HYSTRUNCTRL_HystMbiasCore, /**< Hysteresis feedback on MBIAS_CORE pwrup. */
} nrf_vregmain_hyst_run_ctrl_t;

/** @brief Static configuration structure. */
typedef struct
{
    bool                         icmp_3ma_enable;  /**< Enables DCDC current comparator. */
    bool                         hsilim_manual;    /**< Overrides coil current limit to prog value. */
    bool                         vrefv_gnd_ready;  /**< Vref gnd ready, alternative configuration. */
    bool                         middle_mode_bias; /**< Additional bias for enhanced response and ripple in LP. */
    bool                         auto_zero_cmp;    /**< Enbles auto-zero function for P_DCCHV zero cross comparator. */
    bool                         pwm_cc;           /**< Enables clamp function in PWM mode. */
    bool                         hyst_cc;          /**< Enables clamp function in HYST mode. */
    nrf_vregmain_hyst_ctrl_t     hyst_ctrl;        /**< Controls amount of hysteresis. */
    nrf_vregmain_hyst_run_ctrl_t hyst_run_ctrl;    /**< Hysteresis feedback control. */
    bool                         bias_t_sample;    /**< Elongates sample time for VREFs. */
    bool                         dis_ulp_od;       /**< Keep nominal hysteresis in ULP mode. Will scale up with this configuration Disabled. */
    bool                         ana_osc_div_by_2; /**< Divides OSC_ANA_RFR clock by 2. */
} nrf_vregmain_config_static_t;

/** @brief Channel configuration structure. */
typedef struct
{
    bool duty_lim_enable; /**< Enables maximum duty cycle limitation. */
    bool fast_pwm;        /**< Enables faster loop for PWM modulator. */
    bool biast_boost_lp;  /**< Enables doubles bias current for VOUTCMP */
    bool dis_vout_cmp_lp; /**< Disables VOUT comparator in LP mode. It is not be applicable for the channel 1.*/
} nrf_vregmain_config_channel_t;

/** @brief Enum for selecting CFG channel to be configured. */
typedef enum
{
    NRF_VREGMAIN_CHANNEL_1, /**< Channel 1. */
    NRF_VREGMAIN_CHANNEL_2, /**< Channel 2. */
    NRF_VREGMAIN_CHANNEL_3, /**< Channel 3. */
} nrf_vregmain_channel_t;

/** @brief IBPP current trimming values. */
typedef enum
{
    NRF_VREGMAIN_TRIM_BIASIBPP_NORMAL = VREGMAIN_TRIM_BIASIBPP_VAL_Normal,   /**< Normal trim value. */
    NRF_VREGMAIN_TRIM_BIASIBPP_23     = VREGMAIN_TRIM_BIASIBPP_VAL_Val23,    /**< The trim value is 23%. */
    NRF_VREGMAIN_TRIM_BIASIBPP_54     = VREGMAIN_TRIM_BIASIBPP_VAL_Val54,    /**< The trim value is 54%. */
    NRF_VREGMAIN_TRIM_BIASIBPP_98     = VREGMAIN_TRIM_BIASIBPP_VAL_Val98,    /**< The trim value is 98%. */
    NRF_VREGMAIN_TRIM_BIASIBPP_NEG_51 = VREGMAIN_TRIM_BIASIBPP_VAL_ValNeg51, /**< The trim value is -51%. */
    NRF_VREGMAIN_TRIM_BIASIBPP_NEG_42 = VREGMAIN_TRIM_BIASIBPP_VAL_ValNeg42, /**< The trim value is -42%. */
    NRF_VREGMAIN_TRIM_BIASIBPP_NEG_31 = VREGMAIN_TRIM_BIASIBPP_VAL_ValNeg31, /**< The trim value is -31%. */
    NRF_VREGMAIN_TRIM_BIASIBPP_NEG_18 = VREGMAIN_TRIM_BIASIBPP_VAL_ValNeg18, /**< The trim value is -18%. */
} nrf_vregmain_trim_biasibpp_t;

/** @brief DCDC output current comparator trimming values. */
typedef enum
{
    NRF_VREGMAIN_TRIM_ICMP_0      = VREGMAIN_TRIM_ICMP_VAL_Val0,     /**< DCDC output current comparator trim 0%. */
    NRF_VREGMAIN_TRIM_ICMP_25     = VREGMAIN_TRIM_ICMP_VAL_Val25,    /**< DCDC output current comparator trim 25%. */
    NRF_VREGMAIN_TRIM_ICMP_NEG_50 = VREGMAIN_TRIM_ICMP_VAL_ValNeg50, /**< DCDC output current comparator trim -50%. */
    NRF_VREGMAIN_TRIM_ICMP_NEG_25 = VREGMAIN_TRIM_ICMP_VAL_ValNeg25, /**< DCDC output current comparator trim -25%. */
} nrf_vregmain_trim_icmp_t;

/** @brief PWRUPCTRL register modes. */
typedef enum
{
    NRF_VREGMAIN_PWRUPCTRL_AUTO       = VREGMAIN_PWRUPCTRL_CTRL_Auto,      /**< Automatically handled by the peripheral. */
    NRF_VREGMAIN_PWRUPCTRL_POWER_UP   = VREGMAIN_PWRUPCTRL_CTRL_PowerUp,   /**< Power up. */
    NRF_VREGMAIN_PWRUPCTRL_POWER_DOWN = VREGMAIN_PWRUPCTRL_CTRL_PowerDown, /**< Power down. */ 
} nrf_vregmain_pwrupctrl_t;

/** @brief Voltage regulator mode. */
typedef enum
{
    NRF_VREGMAIN_MODE_AUTO        = VREGMAIN_MODE_MODE_Auto, /**< Automatically handled by the peripheral. */
    NRF_VREGMAIN_MODE_HIGH_POWER  = VREGMAIN_MODE_MODE_HP,   /**< High power hysteretic mode. */
    NRF_VREGMAIN_MODE_LOW_POWER   = VREGMAIN_MODE_MODE_LP,   /**< Autonomous hysteretic low power mode. */
    NRF_VREGMAIN_MODE_ULP_REFRESH = VREGMAIN_MODE_MODE_ULP,  /**< Refresh based ultra-Low power mode. */
    NRF_VREGMAIN_MODE_PWM         = VREGMAIN_MODE_MODE_PWM,  /**< PWM mode is fixed frequency DCDC operation mode. */
} nrf_vregmain_mode_t;

/** @brief Voltage regulator mode configuration structure. */
typedef struct
{
    nrf_vregmain_mode_t mode;           /**< Mode. */
    bool                hp_block;       /**< Block HP mode while in MODE = Auto. */
    bool                lp_block;       /**< Block LP mode while in MODE = Auto. */
    bool                ulp_block;      /**< Block ULP mode while in MODE = Auto. */
    bool                pwm_block;      /**< Block PWM mode while in MODE = Auto. */
    bool                hp_radio_block; /**< Block HP RADIO mode while in MODE = Auto. */
    bool                lp_radio_block; /**< Block LP RADIO mode while in MODE = Auto. */
    bool                ulv_block;      /**< Block ULV mode while in MODE = Auto. */
    bool                ldo1v8_block;   /**< Block VREGAO1V8 full mode request in MODE = Auto. */
    bool                vs0v8_block;    /**< Block VREGVS0V8 full mode request in MODE = Auto. */
} nrf_vregmain_mode_config_t;

/** @brief Enum for selecting VDD_AO_1V8 voltage output target. */
typedef enum
{
    NRF_VREGMAIN_VDD_AO_1V8_OUTPUT_NORMAL, /**< VDD_AO_1V8 output voltage. */
    NRF_VREGMAIN_VDD_AO_1V8_OUTPUT_LP,     /**< VDD_AO_1V8 Low Power output voltage. */
} nrf_vregmain_vdd_ao_1v8_output_t;

/** @brief Enum for selecting VDD_1V0 voltage output target. */
typedef enum
{
    NRF_VREGMAIN_VDD_1V0_OUTPUT_NORMAL,   /**< VDD_1V0 output voltage. */
    NRF_VREGMAIN_VDD_1V0_OUTPUT_RADIO,    /**< VDD_1V0 output voltage, radio upscaling. */
    NRF_VREGMAIN_VDD_1V0_OUTPUT_LP,       /**< VDD_1V0 LP output voltage. */
    NRF_VREGMAIN_VDD_1V0_OUTPUT_LP_RADIO, /**< VDD_1V0 LP output voltage, radio upscaling. */
    NRF_VREGMAIN_VDD_1V0_OUTPUT_ULP,      /**< VDD_1V0 ULP output voltage. */
} nrf_vregmain_vdd_1v0_output_t;

/** @brief HS current limiter values. */
typedef enum
{
    NRF_VREGMAIN_HSILIMPROG_150MA = VREGMAIN_HSILIMPROG_VAL_Val150mA, /**< Current limit to 150mA. */
    NRF_VREGMAIN_HSILIMPROG_250MA = VREGMAIN_HSILIMPROG_VAL_Val250mA, /**< Current limit to 250mA. */
    NRF_VREGMAIN_HSILIMPROG_350MA = VREGMAIN_HSILIMPROG_VAL_Val350mA, /**< Current limit to 350mA. */ 
    NRF_VREGMAIN_HSILIMPROG_450MA = VREGMAIN_HSILIMPROG_VAL_Val450mA, /**< Current limit to 450mA (PWM mode only). */ 
} nrf_vregmain_hsilimprog_t;

/** @brief PWM program values. */
typedef enum
{
    NRF_VREGMAIN_PWMPROG_VAL0 = VREGMAIN_PWMPROG_VAL_PWMVal0, /**< VDD_AO_1V8 = 1/3, VDD_1V0 = 1/3, VDD_VS_0V8 = 1/3. */
    NRF_VREGMAIN_PWMPROG_VAL1 = VREGMAIN_PWMPROG_VAL_PWMVal1, /**< VDD_AO_1V8 = 2/4, VDD_1V0 = 1/4, VDD_VS_0V8 = 1/4. */
    NRF_VREGMAIN_PWMPROG_VAL2 = VREGMAIN_PWMPROG_VAL_PWMVal2, /**< VDD_AO_1V8 = 1/4, VDD_1V0 = 2/4, VDD_VS_0V8 = 1/4. */ 
    NRF_VREGMAIN_PWMPROG_VAL3 = VREGMAIN_PWMPROG_VAL_PWMVal3, /**< VDD_AO_1V8 = 1/4, VDD_1V0 = 1/4, VDD_VS_0V8 = 2/4. */ 
} nrf_vregmain_pwmprog_t;

/** @brief DD_1V8 feedback configurations. */
typedef enum
{
    NRF_VREGMAIN_FBCTRL_VDD1V8_VDD_1V8     = VREGMAIN_FBCTRL_VDD1V8_VDD1V8FB,    /**< VDD_1V8 feedback. */
    NRF_VREGMAIN_FBCTRL_VDD1V8_SEC_1V8     = VREGMAIN_FBCTRL_VDD1V8_SEC1V8FB,    /**< SEC_1V8 feedback. */
    NRF_VREGMAIN_FBCTRL_VDD1V8_VDD_SEC_1V8 = VREGMAIN_FBCTRL_VDD1V8_VDDSEC1V8FB, /**< VDD_1V8 and SEC_1V8 feedback. */ 
} nrf_vregmain_fbctrl_vdd1v8_t;

/** @brief DD_1V0 feedback configurations. */
typedef enum
{
    NRF_VREGMAIN_FBCTRL_VDD1V0_VDD_1V0           = VREGMAIN_FBCTRL_VDD1V0_VDD1V0FB,      /**< VDD_1V0 feedback. */
    NRF_VREGMAIN_FBCTRL_VDD1V0_SEC_1V0           = VREGMAIN_FBCTRL_VDD1V0_SEC1V0FB,      /**< SEC_1V0 feedback. */
    NRF_VREGMAIN_FBCTRL_VDD1V0_VDD_SEC_1V0       = VREGMAIN_FBCTRL_VDD1V0_VDDSEC1V0FB,   /**< VDD_1V0 and SEC_1V0 feedback. */ 
    NRF_VREGMAIN_FBCTRL_VDD1V0_VDDAO_0V8_SEC_1V0 = VREGMAIN_FBCTRL_VDD1V0_VDDAOSEC1V0FB, /**< VDD_AO_0V8 and SEC_1V0 feedback. */ 
} nrf_vregmain_fbctrl_vdd1v0_t;

/** @brief VDD_0V8 feedback configurations. */
typedef enum
{
    NRF_VREGMAIN_FBCTRL_VDD0V8_VDDVS_0V8        = VREGMAIN_FBCTRL_VDD0V8_VDDVS0V8FB,       /**< VDD_VS_0V8 feedback. */
    NRF_VREGMAIN_FBCTRL_VDD0V8_SEC_0V8          = VREGMAIN_FBCTRL_VDD0V8_SEC0V8FB,         /**< SEC_0V8 feedback. */
    NRF_VREGMAIN_FBCTRL_VDD0V8_VDDVS_SEC_0V8    = VREGMAIN_FBCTRL_VDD0V8_VDDVS0V8SEC0V8FB, /**< VDD_VS_0V8 and SEC_0V8 feedback. */ 
} nrf_vregmain_fbctrl_vdd0v8_t;

/** @brief Regulator feedback point control structure. */
typedef struct
{
    nrf_vregmain_fbctrl_vdd1v8_t vdd1v8; /**< VDD_1V8 feedback configuration. */
    nrf_vregmain_fbctrl_vdd1v0_t vdd1v0; /**< VDD_1V0 feedback configuration. */
    nrf_vregmain_fbctrl_vdd0v8_t vdd0v8; /**< VDD_0V8 feedback configuration. */
} nrf_vregmain_fbctrl_t;

/** @brief Enum for selecting mode in which current threshold will be configured. */
typedef enum
{
    NRF_VREGMAIN_ITHRESHOLD_HP_LP,   /**< Current threshold for HP/LP mode transistion. */
    NRF_VREGMAIN_ITHRESHOLD_PWM,     /**< Current threshold for half clock speed in PWM mode. */
    NRF_VREGMAIN_ITHRESHOLD_0V8_LOW, /**< Current threshold LDO toggle at low 0V8 current consumption. */
} nrf_vregmain_ithreshold_t;

/** @brief Signal to be overridden. */
typedef enum
{
    NRF_VREGMAIN_SIGNAL_ANALOG_CHRH_CH1,        /**< Override the CH1 SETTLED signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_CHRH_CH2,        /**< Override the CH2 SETTLED signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_CHRH_CH3,        /**< Override the CH3 SETTLED signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_EN_CH1,          /**< Override the EN_CH1 signal to the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_EN_CH2,          /**< Override the EN_CH2 signal to the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_EN_CH3,          /**< Override the EN_CH3 signal to the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_ICMP,            /**< Override the ICMP signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_MODE_LP,         /**< Override the MODE_LP signal to the analog module */
    NRF_VREGMAIN_SIGNAL_ANALOG_MODE_PWM,        /**< Override the MODE_PWM signal to the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_MODE_ULP,        /**< Override the MODE_ULP signal to the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_PWRUP,           /**< Override the PWRUP signal to the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_READY,           /**< Override the READY signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_RETAIN,          /**< Override the RETAIN signal to the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_CH1,     /**< Override the CH1 SETTLED signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_CH2,     /**< Override the CH2 SETTLED signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_CH3,     /**< Override the CH3 SETTLED signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_MODE,    /**< Override the SETTLED_MODE signal from the analog module. */
    NRF_VREGMAIN_SIGNAL_CFG_ALL_STATIC,         /**< Route all CFG bits as static CFGs. */
    NRF_VREGMAIN_SIGNAL_SELMUX_VOLT1V0_HP_BANK, /**< Override the VOLT_HP_VDD1V0 bank select multiplexer. */
    NRF_VREGMAIN_SIGNAL_SELMUX_VOLT1V0_LP_BANK, /**< Override the VOLT_LP_VDD1V0 bank select multiplexer. */
} nrf_vregmain_signal_t;

/** @brief Select multiplexer for ATB0. */
typedef enum
{
    NRF_VREGMAIN_DFT_ATB0_SELMUX_ATB0_EXT       = VREGMAIN_DFT_ATB0CONFIG_SELMUX_ATB0EXT,      /**< ATB0_EXT selected. */
    NRF_VREGMAIN_DFT_ATB0_SELMUX_VFB_0V9        = VREGMAIN_DFT_ATB0CONFIG_SELMUX_VFB0V9,       /**< VFB_0V9 selected. */
    NRF_VREGMAIN_DFT_ATB0_SELMUX_VFB_1V0        = VREGMAIN_DFT_ATB0CONFIG_SELMUX_VFB1V0,       /**< VFB_1V0 selected. */
    NRF_VREGMAIN_DFT_ATB0_SELMUX_VFB_0V8        = VREGMAIN_DFT_ATB0CONFIG_SELMUX_VFB0V8,       /**< VFB_0V8 selected. */
    NRF_VREGMAIN_DFT_ATB0_SELMUX_AVSS_VGND      = VREGMAIN_DFT_ATB0CONFIG_SELMUX_AVSSVGND,     /**< AVSS_VGND selected. */
    NRF_VREGMAIN_DFT_ATB0_SELMUX_MBIAS_IBPP_50N = VREGMAIN_DFT_ATB0CONFIG_SELMUX_MBIASIBPP50N, /**< MBIAS_IBPP_50N selected. */
    NRF_VREGMAIN_DFT_ATB0_SELMUX_MBIAS_IBPSR_8U = VREGMAIN_DFT_ATB0CONFIG_SELMUX_MBIASIBPSR8U, /**< MBIAS_IBPSR_8U selected. */
} nrf_vregmain_dft_atb0_selmux_t;

/** @brief Select multiplexer for ATB1. */
typedef enum
{
    NRF_VREGMAIN_DFT_ATB1_SELMUX_VREF_0V9   = VREGMAIN_DFT_ATB1CONFIG_SELMUX_VREF0V9,   /**< VREF_0V9 selected. */
    NRF_VREGMAIN_DFT_ATB1_SELMUX_VREF_1V0   = VREGMAIN_DFT_ATB1CONFIG_SELMUX_VREF1V0,   /**< VREF_1V0 selected. */
    NRF_VREGMAIN_DFT_ATB1_SELMUX_VREF_0V8   = VREGMAIN_DFT_ATB1CONFIG_SELMUX_VREF0V8,   /**< VREF_0V8 selected. */
    NRF_VREGMAIN_DFT_ATB1_SELMUX_VGND_REF5V = VREGMAIN_DFT_ATB1CONFIG_SELMUX_VGNDREF5V, /**< VGNDREF_5V selected. */
    NRF_VREGMAIN_DFT_ATB1_SELMUX_MBIAS_VREF = VREGMAIN_DFT_ATB1CONFIG_SELMUX_MBIASVREF, /**< MBIAS_VREF selected. */
    NRF_VREGMAIN_DFT_ATB1_SELMUX_AVSS_SIMO  = VREGMAIN_DFT_ATB1CONFIG_SELMUX_AVSSSIMO,  /**< AVSS_SIMO selected. */
} nrf_vregmain_dft_atb1_selmux_t;

/** @brief Select multiplexer for DTB0. */
typedef enum
{
    NRF_VREGMAIN_DFT_DTB0_SELMUX_CLK           = VREGMAIN_DFT_DTB0CONFIG_SELMUX_CLK,          /**< CLK selected. */
    NRF_VREGMAIN_DFT_DTB0_SELMUX_IBPP_READY    = VREGMAIN_DFT_DTB0CONFIG_SELMUX_IBPPREADY,    /**< IBPP_READY selected. */
    NRF_VREGMAIN_DFT_DTB0_SELMUX_MBIAS_REQUEST = VREGMAIN_DFT_DTB0CONFIG_SELMUX_REQUESTMBIAS, /**< REQUEST_MBIAS selected. */
    NRF_VREGMAIN_DFT_DTB0_SELMUX_MBIAS_READY   = VREGMAIN_DFT_DTB0CONFIG_SELMUX_MBIASREADY,   /**< MBIAS_READY selected. */
    NRF_VREGMAIN_DFT_DTB0_SELMUX_SEL_VOLT_LP   = VREGMAIN_DFT_DTB0CONFIG_SELMUX_SELVOLTLP,    /**< SEL_VOLT_LP selected. */
    NRF_VREGMAIN_DFT_DTB0_SELMUX_DRVHS         = VREGMAIN_DFT_DTB0CONFIG_SELMUX_DRVHS,        /**< DRVHS selected. */
    NRF_VREGMAIN_DFT_DTB0_SELMUX_MBIAS_SETTLED = VREGMAIN_DFT_DTB0CONFIG_SELMUX_MBIASSETTLED, /**< MBIAS_SETTLED selected. */
} nrf_vregmain_dft_dtb0_selmux_t;

/** @brief Select multiplexer for DTB1. */
typedef enum
{
    NRF_VREGMAIN_DFT_DTB1_SELMUX_PWRUPCH1     = VREGMAIN_DFT_DTB1CONFIG_SELMUX_PWRUPCH1,    /**< PWRUPCH1 selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_VOUTCMP1     = VREGMAIN_DFT_DTB1CONFIG_SELMUX_VOUTCMP1,    /**< VOUTCMP1 selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_PWMCMP1      = VREGMAIN_DFT_DTB1CONFIG_SELMUX_PWMCMP1,     /**< PWMCMP1 selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_DRVSEC1      = VREGMAIN_DFT_DTB1CONFIG_SELMUX_DRVSEC1,     /**< DRVSEC1 selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_ZCROSS       = VREGMAIN_DFT_DTB1CONFIG_SELMUX_ZCROSS,      /**< ZCROSS selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_PD_CCHR_EADY = VREGMAIN_DFT_DTB1CONFIG_SELMUX_PDCCHREADY,  /**< P_DCCH_READY selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_MODE_LP      = VREGMAIN_DFT_DTB1CONFIG_SELMUX_MODELP,      /**< MODE_LP selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_HVBUCK_READY = VREGMAIN_DFT_DTB1CONFIG_SELMUX_HVBUCKREADY, /**< HVBUCK_READY selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_SETTLED_CH3  = VREGMAIN_DFT_DTB1CONFIG_SELMUX_SETTLEDCH3,  /**< SETTLED_CH3 selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_PWM_ILIM2    = VREGMAIN_DFT_DTB1CONFIG_SELMUX_PWMILIM2,    /**< PWM_ILIM2 selected. */
    NRF_VREGMAIN_DFT_DTB1_SELMUX_PWM_OC1      = VREGMAIN_DFT_DTB1CONFIG_SELMUX_PWMOC1,      /**< PWM_OC1 selected.*/
    NRF_VREGMAIN_DFT_DTB1_SELMUX_PWM_SKIP1    = VREGMAIN_DFT_DTB1CONFIG_SELMUX_PWMSKIP1,    /**< PWM_SKIP1 selected.*/
    NRF_VREGMAIN_DFT_DTB1_SELMUX_PWM_FAULT1   = VREGMAIN_DFT_DTB1CONFIG_SELMUX_PWMFAULT1,   /**< PWM_FAULT1 selected.*/
    NRF_VREGMAIN_DFT_DTB1_SELMUX_CHRG1        = VREGMAIN_DFT_DTB1CONFIG_SELMUX_CHRG1,       /**< CHRG1 selected.*/
} nrf_vregmain_dft_dtb1_selmux_t;

/** @brief Select multiplexer for DTB2. */
typedef enum
{
    NRF_VREGMAIN_DFT_DTB2_SELMUX_PWRUP_PWM      = VREGMAIN_DFT_DTB2CONFIG_SELMUX_PWRUPPWM,      /**< PWRUP_PWM selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_PWRUPCH2       = VREGMAIN_DFT_DTB2CONFIG_SELMUX_PWRUPCH2,      /**< PWRUPCH2 selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_VOUTCMP3       = VREGMAIN_DFT_DTB2CONFIG_SELMUX_VOUTCMP3,      /**< VOUTCMP3 selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_PWMCMP2        = VREGMAIN_DFT_DTB2CONFIG_SELMUX_PWMCMP2,       /**< PWMCMP2 selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_DRVSEC2        = VREGMAIN_DFT_DTB2CONFIG_SELMUX_DRVSEC2,       /**< DRVSEC2 selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_HSLIM          = VREGMAIN_DFT_DTB2CONFIG_SELMUX_HSLIM,         /**< HSLIM selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_DRVLS          = VREGMAIN_DFT_DTB2CONFIG_SELMUX_DRVLS,         /**< DRVLS selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_MODE_HP        = VREGMAIN_DFT_DTB2CONFIG_SELMUX_MODEHP,        /**< MODE_HP selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_HVBUCK_SETTLED = VREGMAIN_DFT_DTB2CONFIG_SELMUX_HVBUCKSETTLED, /**< HVBUCK_SETTLED selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_SETTLED_CH1    = VREGMAIN_DFT_DTB2CONFIG_SELMUX_SETTLEDCH1,    /**< SETTLED_CH1 selected. */
    NRF_VREGMAIN_DFT_DTB2_SELMUX_PWM_LIM1_1V8   = VREGMAIN_DFT_DTB2CONFIG_SELMUX_PWMLIM11V8,    /**< PWM_LIM1_1V8 selected.*/
    NRF_VREGMAIN_DFT_DTB2_SELMUX_PWM_OC2        = VREGMAIN_DFT_DTB2CONFIG_SELMUX_PWMOC2,        /**< PWM_OC2 selected.*/
    NRF_VREGMAIN_DFT_DTB2_SELMUX_PWM_SKIP2      = VREGMAIN_DFT_DTB2CONFIG_SELMUX_PWMSKIP2,      /**< PWM_SKIP2 selected.*/
    NRF_VREGMAIN_DFT_DTB2_SELMUX_PWM_FAULT2     = VREGMAIN_DFT_DTB2CONFIG_SELMUX_PWMFAULT2,     /**< PWM_FAULT2 selected.*/
    NRF_VREGMAIN_DFT_DTB2_SELMUX_CHRG2          = VREGMAIN_DFT_DTB2CONFIG_SELMUX_CHRG2,         /**< CHRG2 selected.*/
} nrf_vregmain_dft_dtb2_selmux_t;

/** @brief Select multiplexer for DTB3. */
typedef enum
{
    NRF_VREGMAIN_DFT_DTB3_SELMUX_PWRUP_HYST    = VREGMAIN_DFT_DTB3CONFIG_SELMUX_PWRUPHYST,   /**< PWRUP_HYST selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_PWRUPCH3      = VREGMAIN_DFT_DTB3CONFIG_SELMUX_PWRUPCH3,    /**< PWRUPCH3 selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_VOUTCMP2      = VREGMAIN_DFT_DTB3CONFIG_SELMUX_VOUTCMP2,    /**< VOUTCMP2 selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_PWMCMP3       = VREGMAIN_DFT_DTB3CONFIG_SELMUX_PWMCMP3,     /**< PWMCMP3 selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_DRVSEC3       = VREGMAIN_DFT_DTB3CONFIG_SELMUX_DRVSEC3,     /**< DRVSEC3 selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_SECREADY      = VREGMAIN_DFT_DTB3CONFIG_SELMUX_SECREADY,    /**< SECREADY selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_MODE_PWM      = VREGMAIN_DFT_DTB3CONFIG_SELMUX_MODEPWM,     /**< MODE_PWM selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_SETTLED_CH2   = VREGMAIN_DFT_DTB3CONFIG_SELMUX_SETTLEDCH2,  /**< SETTLED_CH2 selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_PWM_ILIM3_1V8 = VREGMAIN_DFT_DTB3CONFIG_SELMUX_PWMILIM31V8, /**< PWM_ILIM3_1V8 selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_PWM_OC3       = VREGMAIN_DFT_DTB3CONFIG_SELMUX_PWMOC3,      /**< PWM_OC3 selected. */
    NRF_VREGMAIN_DFT_DTB3_SELMUX_PWM_SKIP3     = VREGMAIN_DFT_DTB3CONFIG_SELMUX_PWMSKIP3,    /**< PWM_SKIP3 selected.*/
    NRF_VREGMAIN_DFT_DTB3_SELMUX_PWM_FAULT2    = VREGMAIN_DFT_DTB3CONFIG_SELMUX_PWMFAULT2,   /**< PWM_FAULT2 selected.*/
    NRF_VREGMAIN_DFT_DTB3_SELMUX_CHRG3         = VREGMAIN_DFT_DTB3CONFIG_SELMUX_CHRG3,       /**< CHRG3 selected.*/
} nrf_vregmain_dft_dtb3_selmux_t;

/** @brief Select DRVSEC mode for test mode configuration (DFT.TCFG). */
typedef enum
{
    NRF_VREGMAIN_DFT_TCFG_DRVSEC_NORMAL = VREGMAIN_DFT_TCFG_DRVSEC_Normal,  /**< Normal mode, DRVSEC2 in reset. */
    NRF_VREGMAIN_DFT_TCFG_DRVSEC_1      = VREGMAIN_DFT_TCFG_DRVSEC_DRVSEC1, /**< DRVSEC1 selected. */
    NRF_VREGMAIN_DFT_TCFG_DRVSEC_2      = VREGMAIN_DFT_TCFG_DRVSEC_DRVSEC2, /**< DRVSEC2 selected. */
    NRF_VREGMAIN_DFT_TCFG_DRVSEC_OFF    = VREGMAIN_DFT_TCFG_DRVSEC_OFF,     /**< OFF. */
} nrf_vregmain_dft_tcfg_drvsec_t;

/** @brief Select HSFORCEON mode for test mode configuration (DFT.TCFG). */
typedef enum
{
    NRF_VREGMAIN_DFT_TCFG_HSFORCEON_NORMAL      = VREGMAIN_DFT_TCFG_HSFORCEON_Normal,    /**< Normal mode. */
    NRF_VREGMAIN_DFT_TCFG_HSFORCEON_HSILIM      = VREGMAIN_DFT_TCFG_HSFORCEON_HSILIM,    /**< HS force on HSILIM gating. */
    NRF_VREGMAIN_DFT_TCFG_HSFORCEON_GPI         = VREGMAIN_DFT_TCFG_HSFORCEON_GPI,       /**< GPI. */
    NRF_VREGMAIN_DFT_TCFG_HSFORCEON_HS_FORCE_ON = VREGMAIN_DFT_TCFG_HSFORCEON_HSforceon, /**< HS force on. */
} nrf_vregmain_dft_tcfg_hsforceon_t;

/** @brief Select LSFORCEON mode for test mode configuration (DFT.TCFG). */
typedef enum
{
    NRF_VREGMAIN_DFT_TCFG_LSFORCEON_NORMAL       = VREGMAIN_DFT_TCFG_LSFORCEON_Normal,     /**< Normal mode. */
    NRF_VREGMAIN_DFT_TCFG_LSFORCEON_LS_FORCE_OFF = VREGMAIN_DFT_TCFG_LSFORCEON_LSforceoff, /**< LS force off-zx gating. */
    NRF_VREGMAIN_DFT_TCFG_LSFORCEON_GPI          = VREGMAIN_DFT_TCFG_LSFORCEON_GPI,        /**< GPI. */
    NRF_VREGMAIN_DFT_TCFG_LSFORCEON_LS_FORCE_ON  = VREGMAIN_DFT_TCFG_LSFORCEON_LSforceon,  /**< LS force on. */
} nrf_vregmain_dft_tcfg_lsforceon_t;

/** @brief Test mode configuration. */
typedef struct
{
    bool                              pwrup_ibpsr;   /**< Enable PWRUP_IBPSR. */
    bool                              pwrup_ibpp;    /**< Enable PWRUP_IBPP. */
    bool                              pwrup_pwm;     /**< Enable PWRUP_PWM. */
    bool                              pwrup_hyst;    /**< Enable PWRUP_HYST. */
    bool                              minidrv;       /**< Enable MINIDRV. */
    bool                              sample_p_dcch; /**< Sample P_DCCH by ready. */
    bool                              pwrup_p_dcchv; /**< Enable mux PWRUP_P_DCCHV. */
    nrf_vregmain_dft_tcfg_drvsec_t    drvsec;        /**< Select DRVSEC. */
    nrf_vregmain_dft_tcfg_hsforceon_t hs_force_on;   /**< Enable HS force on. */
    nrf_vregmain_dft_tcfg_lsforceon_t ls_force_on;   /**< Enable LS force on. */
    bool                              digoff;        /**< Enable DIGOFF. */
    bool                              sigdig;        /**< Enable SIGDIG. */
    bool                              gpi;           /**< Enable GPI (PUEDO PWM). */
} nrf_vregmain_tcfg_t;

/**
 * @brief Function for clearing the specified VREGMAIN event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_vregmain_event_clear(NRF_VREGMAIN_Type *  p_reg,
                                                nrf_vregmain_event_t event);

/**
 * @brief Function for retrieving the state of the VREGMAIN event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_vregmain_event_check(NRF_VREGMAIN_Type const * p_reg,
                                                nrf_vregmain_event_t      event);
/**
 * @brief Function for getting the address of the specified event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmain_event_address_get(NRF_VREGMAIN_Type const * p_reg,
                                                          nrf_vregmain_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_vregmain_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregmain_int_enable(NRF_VREGMAIN_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_vregmain_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_vregmain_int_disable(NRF_VREGMAIN_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_vregmain_int_mask_t values for bit masking.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmain_int_enable_check(NRF_VREGMAIN_Type const * p_reg,
                                                         uint32_t                  mask);

/**
 * @brief Function for retrieving the state of pending interrupts.
 *
 * States of pending interrupt are saved as a bitmask.
 * One set at particular position means that interrupt for event is pending.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bitmask with information about pending interrupts.
 *         Use @ref nrf_vregmain_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmain_int_pending_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for getting VREGMAIN status register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUS register value.
 */
NRF_STATIC_INLINE nrf_vregmain_status_t nrf_vregmain_status_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for getting VREGMAIN status of the analog module output signals.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSANA register value.
 *         Use @ref nrf_vregmain_statusana_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmain_statusana_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for getting STATUSDIG status of digital controllers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The STATUSDIG register value.
 *         Use @ref nrf_vregmain_statusdig_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmain_statusdig_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting static voltage regulator configuration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] config Static configuration.
 */
NRF_STATIC_INLINE void nrf_vregmain_config_cfgstatic_set(NRF_VREGMAIN_Type *          p_reg,
                                                         nrf_vregmain_config_static_t config);

/**
 * @brief Function for setting specific channel voltage regulator configuration.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] channel Selected channel to be configured.
 * @param[in] config  Static configuration.
 */
NRF_STATIC_INLINE void nrf_vregmain_config_cfgch_set(NRF_VREGMAIN_Type *           p_reg,
                                                     nrf_vregmain_channel_t        channel,
                                                     nrf_vregmain_config_channel_t config);

/**
 * @brief Function for setting IBPP current bias trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Bias trimming value.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_biasibpp_set(NRF_VREGMAIN_Type *          p_reg, 
                                                      nrf_vregmain_trim_biasibpp_t val);

/**
 * @brief Function for getting IBPP current bias trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return Bias trimming value.
 */
NRF_STATIC_INLINE 
nrf_vregmain_trim_biasibpp_t nrf_vregmain_trim_biasibpp_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting IBPSR current and VREF voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Bias trimming value. The value is 2's complement value from -7.4% 
 *                  to 8.0% in steps of 0.5%.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_biasibpsr_set(NRF_VREGMAIN_Type * p_reg, uint8_t val);

/**
 * @brief Function for getting IBPSR current and VREF voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Bias trimming value. The value is 2's complement value from -7.4% 
 *         to 8.0% in steps of 0.5%.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_biasibpsr_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting VDD_AO_1V8 hysteretic (HYST) output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV -/+ 8mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_vddao1v8hystoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                                uint8_t             val);

/**
 * @brief Function for getting VDD_AO_1V8 hysteretic (HYST) output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0mV -/+ 8mV steps.
 */
NRF_STATIC_INLINE 
uint8_t nrf_vregmain_trim_vddao1v8hystoutput_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting VDD_AO_1V8 PWM output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV -/+ 8mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_vddao1v8pwmoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                               uint8_t             val);

/**
 * @brief Function for getting VDD_AO_1V8 PWM output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0mV -/+ 8mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vddao1v8pwmoutput_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting VDD_1V0 hysteretic (HYST) output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_vdd1v0hystoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                              uint8_t             val);

/**
 * @brief Function for getting VDD_1V0 hysteretic (HYST) output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vdd1v0hystoutput_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting VDD_VS_0V8 hysteretic (HYST) output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_vddvs0v8hystoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                                uint8_t             val);

/**
 * @brief Function for getting VDD_VS_0V8 hysteretic (HYST) output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vddvs0v8hystoutput_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting VDD_VS_0V8 PWM output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_vddvs0v8pwmoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                               uint8_t             val);

/**
 * @brief Function for getting VDD_VS_0V8 PWM output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vddvs0v8pwmoutput_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting VDD_1V0 PWM PWM output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_vdd1v0pwmoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                             uint8_t             val);

/**
 * @brief Function for getting VDD_1V0 PWM output voltage trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0mV -/+ 4mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vdd1v0pwmoutput_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting zero cross detector current trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0mA +/- 3mA steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_zcross_set(NRF_VREGMAIN_Type * p_reg, 
                                                    uint8_t             val);

/**
 * @brief Function for getting zero cross detector current trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0mA +/- 3mA steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_zcross_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting HS current limiter trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of 0 +/- 8 
 *                  percent point steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_hsilim_set(NRF_VREGMAIN_Type * p_reg,
                                                    uint8_t             val);

/**
 * @brief Function for getting HS current limiter trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of 0 +/- 8 
 *         percent point steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_hsilim_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting DCDC output current comparator trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_icmp_set(NRF_VREGMAIN_Type *      p_reg, 
                                                  nrf_vregmain_trim_icmp_t val);

/**
 * @brief Function for getting DCDC output current comparator trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value.
 */
NRF_STATIC_INLINE
nrf_vregmain_trim_icmp_t nrf_vregmain_trim_icmp_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting VGND trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Trimming value. The value is 2's complement value of +1% +/- 2 
 *                  percent point steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_trim_vgnd_set(NRF_VREGMAIN_Type * p_reg, 
                                                  uint8_t             val);

/**
 * @brief Function for getting VGND trimming.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Trimming value. The value is 2's complement value of +1% +/- 2 
 *         percent point steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vgnd_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for locking mirrored registers.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] lock  When true lock is enabled. When false lock is disabled and mirrored
 *                  registers can be updated at any time.
 */
NRF_STATIC_INLINE void nrf_vregmain_mirror_lock(NRF_VREGMAIN_Type * p_reg, bool lock);

/**
 * @brief Function for VREGMAIN power up control register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Power control mode.
 */
NRF_STATIC_INLINE void nrf_vregmain_pwrupctrl_set(NRF_VREGMAIN_Type *      p_reg, 
                                                  nrf_vregmain_pwrupctrl_t mode);
/**
 * @brief Function for getting VREGMAIN power up control register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Power control mode.
 */
NRF_STATIC_INLINE
nrf_vregmain_pwrupctrl_t nrf_vregmain_pwrupctrl_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting voltage regulator mode.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] p_data Pointer to the structure filled with information about voltage 
 *                   regulator mode.
 */
NRF_STATIC_INLINE void nrf_vregmain_mode_set(NRF_VREGMAIN_Type *                p_reg,
                                             nrf_vregmain_mode_config_t const * p_data);

/**
 * @brief Function for getting voltage regulator mode.
 *
 * @param[in]  p_reg  Pointer to the structure of registers of the peripheral.
 * @param[out] p_data Pointer to the structure to be filled with information about
 *                    voltage regulator mode.
 */
NRF_STATIC_INLINE void nrf_vregmain_mode_get(NRF_VREGMAIN_Type const *        p_reg,
                                             nrf_vregmain_mode_config_t *     p_data);

/**
 * @brief Function for setting VDD_AO_1V8 output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Output voltage target.
 * @param[in] val   Output voltage value. The value is 1.72V + 0.02V steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_vdd_ao_1v8_out_set(NRF_VREGMAIN_Type *              p_reg,
                                                       nrf_vregmain_vdd_ao_1v8_output_t vout,
                                                       uint8_t                          val);

/**
 * @brief Function for getting VDD_AO_1V8 output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Output voltage target.
 *
 * @return Output voltage value. The value is 1.72V + 0.02V steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_vdd_ao_1v8_out_get(NRF_VREGMAIN_Type const *        p_reg,
                                                          nrf_vregmain_vdd_ao_1v8_output_t vout);

/**
 * @brief Function for setting VDD_AO_1V8 output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Output voltage target.
 * @param[in] val   Output voltage value. The value is 0.57V + 10mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_vdd_1v0_out_set(NRF_VREGMAIN_Type *           p_reg,
                                                    nrf_vregmain_vdd_1v0_output_t vout,
                                                    uint8_t                       val);

/**
 * @brief Function for getting VDD_AO_1V8 output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vout  Output voltage target.
 *
 * @return Output voltage value. The value is 0.57V + 10mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_vdd_1v0_get(NRF_VREGMAIN_Type const *     p_reg,
                                                   nrf_vregmain_vdd_1v0_output_t vout);

/**
 * @brief Function for setting VDD_VS_0V8 output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   Output voltage value. The value is 0.32V + 10mV steps.
 */
NRF_STATIC_INLINE void nrf_vregmain_vdd_vs_0v8_out_set(NRF_VREGMAIN_Type * p_reg,
                                                       uint8_t             val);

/**
 * @brief Function for getting VDD_VS_0V8 output voltage.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Output voltage value. The value is 0.32V + 10mV steps.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_vdd_vs_0v8_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting HS current limiter program.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   HS current limiter value.
 */
NRF_STATIC_INLINE void nrf_vregmain_hsilimprog_set(NRF_VREGMAIN_Type *       p_reg,
                                                   nrf_vregmain_hsilimprog_t val);

/**
 * @brief Function for getting HS current limiter program.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return HS current limiter value.
 */
NRF_STATIC_INLINE
nrf_vregmain_hsilimprog_t nrf_vregmain_hsilimprog_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting PWM program.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] val   PWM program value.
 */
NRF_STATIC_INLINE void nrf_vregmain_pwmprog_set(NRF_VREGMAIN_Type *    p_reg,
                                                nrf_vregmain_pwmprog_t val);

/**
 * @brief Function for getting PWM program.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return PWM program value.
 */
NRF_STATIC_INLINE nrf_vregmain_pwmprog_t nrf_vregmain_pwmprog_get(NRF_VREGMAIN_Type const * p_reg);

/**
 * @brief Function for setting regulator feedback point control configuration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] p_data Pointer to the structure filled with information about regulator 
 *                   feedback point control configuration.
 */
NRF_STATIC_INLINE void nrf_vregmain_fbctrl_set(NRF_VREGMAIN_Type *           p_reg,
                                               nrf_vregmain_fbctrl_t const * p_data);

/**
 * @brief Function for regulator feedback point control configuration.
 *
 * @param[in]  p_reg  Pointer to the structure of registers of the peripheral.
 * @param[out] p_data Pointer to the structure to be filled with information about
 *                    regulator feedback point control configuration.
 */
NRF_STATIC_INLINE void nrf_vregmain_fbctrl_get(NRF_VREGMAIN_Type const * p_reg,
                                               nrf_vregmain_fbctrl_t *   p_data);

/**
 * @brief Function for setting current threshold for HP/LP mode transistion.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode in which current threshold will be set.
 * @param[in] thr   Compare value to match PCRM format.
 */
NRF_STATIC_INLINE void nrf_vregmain_ithreshold_set(NRF_VREGMAIN_Type *       p_reg,
                                                   nrf_vregmain_ithreshold_t mode,
                                                   uint8_t                   thr);

/**
 * @brief Function for getting current threshold for HP/LP mode transistion.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mode  Mode in which current threshold will be checked.
 * 
 * @return Current consumption threshold value.
 */
NRF_STATIC_INLINE uint8_t nrf_vregmain_ithreshold_get(NRF_VREGMAIN_Type const * p_reg,
                                                      nrf_vregmain_ithreshold_t mode);

/**
 * @brief Function for override signal.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be overridden.
 * @param[in] enable True to enable override and false to disable.
 * @param[in] val    Override value.
 */
NRF_STATIC_INLINE void nrf_vregmain_override(NRF_VREGMAIN_Type *   p_reg,
                                             nrf_vregmain_signal_t signal,
                                             bool                  enable,
                                             uint8_t               val);
/**
 * @brief Function for configuring Analog Test Bus 0 (ATB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_atb0_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_atb0_selmux_t selmux,
                                                        bool                           enable);

/**
 * @brief Function for configuring Analog Test Bus 1 (ATB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_atb1_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_atb1_selmux_t selmux,
                                                        bool                           enable);

/**
 * @brief Function for configuring Digital Test Bus 0 (DTB0).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_dtb0_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb0_selmux_t selmux,
                                                        bool                           enable);

/**
 * @brief Function for configuring Digital Test Bus 1 (DTB1).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_dtb1_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb1_selmux_t selmux,
                                                        bool                           enable);

/**
 * @brief Function for configuring Digital Test Bus 2 (DTB2).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_dtb2_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb2_selmux_t selmux,
                                                        bool                           enable);

/**
 * @brief Function for configuring Digital Test Bus 3 (DTB3).
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] selmux Multiplexer configuration.
 * @param[in] enable True to enable test bus.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_dtb3_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb3_selmux_t selmux,
                                                        bool                           enable);

/**
 * @brief Function for configuring test mode.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] tcfg  Test mode configuration.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_tcfg_config_set(NRF_VREGMAIN_Type * p_reg,
                                                        nrf_vregmain_tcfg_t tcfg);

/**
 * @brief Function for enabling or disabling calibration.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if the calibration is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vregmain_dft_cal_set(NRF_VREGMAIN_Type * p_reg,
                                                bool                enable);

/**
 * @brief Function for checking calibration.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * 
 * @return True if calibration is enabled, false otherwise.
 */
NRF_STATIC_INLINE bool nrf_vregmain_dft_cal_check(NRF_VREGMAIN_Type * p_reg);

/**
 * @brief Function for checking calibration compare.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Calibration compare.
 */
NRF_STATIC_INLINE uint32_t nrf_vregmain_dft_calcmp_check(NRF_VREGMAIN_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_vregmain_event_clear(NRF_VREGMAIN_Type *  p_reg,
                                                nrf_vregmain_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_vregmain_event_check(NRF_VREGMAIN_Type const * p_reg,
                                                nrf_vregmain_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_vregmain_event_address_get(NRF_VREGMAIN_Type const * p_reg,
                                                          nrf_vregmain_event_t      event)
{
        return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_vregmain_int_enable(NRF_VREGMAIN_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_vregmain_int_disable(NRF_VREGMAIN_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregmain_int_enable_check(NRF_VREGMAIN_Type const * p_reg,
                                                         uint32_t                  mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_vregmain_int_pending_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->INTPEND;
}

NRF_STATIC_INLINE nrf_vregmain_status_t nrf_vregmain_status_get(NRF_VREGMAIN_Type const * p_reg)
{
    return (nrf_vregmain_status_t)p_reg->STATUS;
}

NRF_STATIC_INLINE uint32_t nrf_vregmain_statusana_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->STATUSANA;
}

NRF_STATIC_INLINE uint32_t nrf_vregmain_statusdig_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->STATUSDIG;
}

NRF_STATIC_INLINE void nrf_vregmain_config_cfgstatic_set(NRF_VREGMAIN_Type *          p_reg,
                                                         nrf_vregmain_config_static_t config)
{
    p_reg->CONFIG.CFGSTATIC = ((config.icmp_3ma_enable ?
                                VREGMAIN_CONFIG_CFGSTATIC_ENICMP3MA_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_ENICMP3MA_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_ENICMP3MA_Pos) |
                              ((config.hsilim_manual ?
                                VREGMAIN_CONFIG_CFGSTATIC_HSILIMMANUAL_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_HSILIMMANUAL_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_HSILIMMANUAL_Pos)     |
                              ((config.vrefv_gnd_ready ?
                                VREGMAIN_CONFIG_CFGSTATIC_VREFVGNDREADY_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_VREFVGNDREADY_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_VREFVGNDREADY_Pos)   |
                              ((config.middle_mode_bias ?
                                VREGMAIN_CONFIG_CFGSTATIC_MIDDLEMODEBIAS_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_MIDDLEMODEBIAS_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_MIDDLEMODEBIAS_Pos)        |
                              ((config.auto_zero_cmp ?
                                VREGMAIN_CONFIG_CFGSTATIC_ATCZ_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_ATCZ_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_ATCZ_Pos) |
                              ((config.pwm_cc ?
                                VREGMAIN_CONFIG_CFGSTATIC_PWMCC_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_PWMCC_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_PWMCC_Pos)     |
                              ((config.hyst_cc ?
                                VREGMAIN_CONFIG_CFGSTATIC_HYSTCC_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_HYSTCC_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_HYSTCC_Pos)   |
                              ((uint32_t)config.hyst_ctrl << 
                               VREGMAIN_CONFIG_CFGSTATIC_HYSTCTRL_Pos) |
                              ((uint32_t)config.hyst_run_ctrl << 
                               VREGMAIN_CONFIG_CFGSTATIC_HYSTRUNCTRL_Pos) |
                              ((config.bias_t_sample ?
                                VREGMAIN_CONFIG_CFGSTATIC_BIASTSAMPLE_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_BIASTSAMPLE_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_BIASTSAMPLE_Pos)   |
                              ((config.dis_ulp_od ?
                                VREGMAIN_CONFIG_CFGSTATIC_DISULPOD_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_DISULPOD_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_DISULPOD_Pos)        |
                              ((config.ana_osc_div_by_2 ?
                                VREGMAIN_CONFIG_CFGSTATIC_ANAOSCDIVBY2_Enabled :
                                VREGMAIN_CONFIG_CFGSTATIC_ANAOSCDIVBY2_Disabled) <<
                               VREGMAIN_CONFIG_CFGSTATIC_ANAOSCDIVBY2_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_config_cfgch_set(NRF_VREGMAIN_Type *           p_reg,
                                                     nrf_vregmain_channel_t        channel,
                                                     nrf_vregmain_config_channel_t config)
{
    switch(channel)
    {
        case NRF_VREGMAIN_CHANNEL_1:
            p_reg->CONFIG.CFGCH1 = ((config.duty_lim_enable ?
                                     VREGMAIN_CONFIG_CFGCH1_ENDUTYLIM1_Enabled :
                                     VREGMAIN_CONFIG_CFGCH1_ENDUTYLIM1_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH1_ENDUTYLIM1_Pos) |
                                   ((config.fast_pwm ?
                                     VREGMAIN_CONFIG_CFGCH1_FASTPWM1_Enabled :
                                     VREGMAIN_CONFIG_CFGCH1_FASTPWM1_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH1_FASTPWM1_Pos)     |
                                   ((config.biast_boost_lp ?
                                     VREGMAIN_CONFIG_CFGCH1_BIASBOOSTLP1_Enabled :
                                     VREGMAIN_CONFIG_CFGCH1_BIASBOOSTLP1_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH1_BIASBOOSTLP1_Pos);
            break;
        case NRF_VREGMAIN_CHANNEL_2:
            p_reg->CONFIG.CFGCH2 = ((config.duty_lim_enable ?
                                     VREGMAIN_CONFIG_CFGCH2_ENDUTYLIM2_Enabled :
                                     VREGMAIN_CONFIG_CFGCH2_ENDUTYLIM2_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH2_ENDUTYLIM2_Pos) |
                                   ((config.fast_pwm ?
                                     VREGMAIN_CONFIG_CFGCH2_FASTPWM2_Enabled :
                                     VREGMAIN_CONFIG_CFGCH2_FASTPWM2_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH2_FASTPWM2_Pos)     |
                                   ((config.biast_boost_lp ?
                                     VREGMAIN_CONFIG_CFGCH2_BIASBOOSTLP2_Enabled :
                                     VREGMAIN_CONFIG_CFGCH2_BIASBOOSTLP2_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH2_BIASBOOSTLP2_Pos)   |
                                   ((config.dis_vout_cmp_lp ?
                                     VREGMAIN_CONFIG_CFGCH2_DISVOUTCMPLP2_Enabled :
                                     VREGMAIN_CONFIG_CFGCH2_DISVOUTCMPLP2_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH2_DISVOUTCMPLP2_Pos);
            break;
        case NRF_VREGMAIN_CHANNEL_3:
            p_reg->CONFIG.CFGCH3 = ((config.duty_lim_enable ?
                                     VREGMAIN_CONFIG_CFGCH3_ENDUTYLIM3_Enabled :
                                     VREGMAIN_CONFIG_CFGCH3_ENDUTYLIM3_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH3_ENDUTYLIM3_Pos) |
                                   ((config.fast_pwm ?
                                     VREGMAIN_CONFIG_CFGCH3_FASTPWM3_Enabled :
                                     VREGMAIN_CONFIG_CFGCH3_FASTPWM3_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH3_FASTPWM3_Pos)     |
                                   ((config.biast_boost_lp ?
                                     VREGMAIN_CONFIG_CFGCH3_BIASBOOSTLP3_Enabled :
                                     VREGMAIN_CONFIG_CFGCH3_BIASBOOSTLP3_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH3_BIASBOOSTLP3_Pos)   |
                                   ((config.dis_vout_cmp_lp ?
                                     VREGMAIN_CONFIG_CFGCH3_DISVOUTCMPLP3_Enabled :
                                     VREGMAIN_CONFIG_CFGCH3_DISVOUTCMPLP3_Disabled) <<
                                    VREGMAIN_CONFIG_CFGCH3_DISVOUTCMPLP3_Pos);
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_vregmain_trim_biasibpp_set(NRF_VREGMAIN_Type *          p_reg, 
                                                      nrf_vregmain_trim_biasibpp_t val)
{
    p_reg->TRIM.BIASIBPP = (uint32_t)val;
}

NRF_STATIC_INLINE
nrf_vregmain_trim_biasibpp_t nrf_vregmain_trim_biasibpp_get(NRF_VREGMAIN_Type const * p_reg)
{
    return (nrf_vregmain_trim_biasibpp_t)p_reg->TRIM.BIASIBPP;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_biasibpsr_set(NRF_VREGMAIN_Type * p_reg, uint8_t val)
{
    p_reg->TRIM.BIASIBPSR = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_biasibpsr_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.BIASIBPSR;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_vddao1v8hystoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                                uint8_t             val)
{
    p_reg->TRIM.VDDAO1V8HYSTOUTPUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vddao1v8hystoutput_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.VDDAO1V8HYSTOUTPUT;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_vddao1v8pwmoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                               uint8_t             val)
{
    p_reg->TRIM.VDDAO1V8PWMOUTPUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vddao1v8pwmoutput_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.VDDAO1V8PWMOUTPUT;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_vdd1v0hystoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                              uint8_t             val)
{
    p_reg->TRIM.VDD1V0HYSTOUTPUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vdd1v0hystoutput_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.VDD1V0HYSTOUTPUT;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_vddvs0v8hystoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                               uint8_t              val)
{
    p_reg->TRIM.VDDVS0V8HYSTOUTPUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vddvs0v8hystoutput_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.VDDVS0V8HYSTOUTPUT;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_vddvs0v8pwmoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                               uint8_t             val)
{
    p_reg->TRIM.VDDVS0V8PWMOUTPUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vddvs0v8pwmoutput_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.VDDVS0V8PWMOUTPUT;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_vdd1v0pwmoutput_set(NRF_VREGMAIN_Type * p_reg, 
                                                             uint8_t             val)
{
    p_reg->TRIM.VDD1V0PWMOUTPUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vdd1v0pwmoutput_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.VDD1V0PWMOUTPUT;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_zcross_set(NRF_VREGMAIN_Type * p_reg, 
                                                    uint8_t             val)
{
    p_reg->TRIM.ZCROSS = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_zcross_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.ZCROSS;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_hsilim_set(NRF_VREGMAIN_Type * p_reg, 
                                                    uint8_t             val)
{
    p_reg->TRIM.HSILIM = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_hsilim_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.HSILIM;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_icmp_set(NRF_VREGMAIN_Type *      p_reg, 
                                                  nrf_vregmain_trim_icmp_t val)
{
    p_reg->TRIM.ICMP = (uint32_t)val;
}

NRF_STATIC_INLINE 
nrf_vregmain_trim_icmp_t nrf_vregmain_trim_icmp_get(NRF_VREGMAIN_Type const * p_reg)
{
    return (nrf_vregmain_trim_icmp_t)p_reg->TRIM.ICMP;
}

NRF_STATIC_INLINE void nrf_vregmain_trim_vgnd_set(NRF_VREGMAIN_Type * p_reg, 
                                                  uint8_t             val)
{
    p_reg->TRIM.VGND = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_trim_vgnd_get(NRF_VREGMAIN_Type const * p_reg)
{
    return p_reg->TRIM.VGND;
}

NRF_STATIC_INLINE void nrf_vregmain_mirror_lock(NRF_VREGMAIN_Type * p_reg, bool lock)
{
    p_reg->MIRROR = (lock ? VREGMAIN_MIRROR_LOCK_Enabled : VREGMAIN_MIRROR_LOCK_Disabled) <<
                    VREGMAIN_MIRROR_LOCK_Pos;
}

NRF_STATIC_INLINE void nrf_vregmain_pwrupctrl_set(NRF_VREGMAIN_Type *      p_reg, 
                                                  nrf_vregmain_pwrupctrl_t mode)
{
    p_reg->PWRUPCTRL = (uint32_t)(mode << VREGMAIN_PWRUPCTRL_CTRL_Pos);
}

NRF_STATIC_INLINE 
nrf_vregmain_pwrupctrl_t nrf_vregmain_pwrupctrl_get(NRF_VREGMAIN_Type const * p_reg)
{
    return (nrf_vregmain_pwrupctrl_t)(p_reg->PWRUPCTRL & VREGMAIN_PWRUPCTRL_CTRL_Msk);
}

NRF_STATIC_INLINE void nrf_vregmain_mode_set(NRF_VREGMAIN_Type *                p_reg,
                                             nrf_vregmain_mode_config_t const * p_data)
{
    p_reg->MODE = ((uint32_t)p_data->mode           << VREGMAIN_MODE_MODE_Pos)             |
                  ((uint32_t)p_data->hp_block       << VREGMAIN_MODE_BLOCKMODEHP_Pos)      |
                  ((uint32_t)p_data->lp_block       << VREGMAIN_MODE_BLOCKMODELP_Pos)      |
                  ((uint32_t)p_data->ulp_block      << VREGMAIN_MODE_BLOCKMODEULP_Pos)     |
                  ((uint32_t)p_data->pwm_block      << VREGMAIN_MODE_BLOCKMODEPWM_Pos)     |
                  ((uint32_t)p_data->hp_radio_block << VREGMAIN_MODE_BLOCKMODEHPRADIO_Pos) |
                  ((uint32_t)p_data->lp_radio_block << VREGMAIN_MODE_BLOCKMODELPRADIO_Pos) |
                  ((uint32_t)p_data->ulv_block      << VREGMAIN_MODE_BLOCKMODEULV_Pos)     |
                  ((uint32_t)p_data->ldo1v8_block   << VREGMAIN_MODE_BLOCKMODELDO1V8_Pos)  |
                  ((uint32_t)p_data->vs0v8_block    << VREGMAIN_MODE_BLOCKMODEVS0V8_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_mode_get(NRF_VREGMAIN_Type const *    p_reg,
                                             nrf_vregmain_mode_config_t * p_data)
{
    p_data->mode           = (nrf_vregmain_mode_t)(p_reg->MODE & VREGMAIN_MODE_MODE_Msk);
    p_data->hp_block       = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODEHP_Msk);
    p_data->lp_block       = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODELP_Msk);
    p_data->ulp_block      = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODEULP_Msk);
    p_data->pwm_block      = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODEPWM_Msk);
    p_data->hp_radio_block = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODEHPRADIO_Msk);
    p_data->lp_radio_block = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODELPRADIO_Msk);
    p_data->ulv_block      = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODEULV_Msk);
    p_data->ldo1v8_block   = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODELDO1V8_Msk);
    p_data->vs0v8_block    = (bool)(p_reg->MODE & VREGMAIN_MODE_BLOCKMODEVS0V8_Msk);
}

NRF_STATIC_INLINE void nrf_vregmain_vdd_ao_1v8_out_set(NRF_VREGMAIN_Type *              p_reg,
                                                       nrf_vregmain_vdd_ao_1v8_output_t vout,
                                                       uint8_t                          val)
{
    switch (vout)
    {
        case NRF_VREGMAIN_VDD_AO_1V8_OUTPUT_NORMAL:
            p_reg->VDDAO1V8OUTPUT = val;
            break;
        case NRF_VREGMAIN_VDD_AO_1V8_OUTPUT_LP:
            p_reg->VDDAO1V8LPOUTPUT = val;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_vdd_ao_1v8_out_get(NRF_VREGMAIN_Type const *        p_reg,
                                                          nrf_vregmain_vdd_ao_1v8_output_t vout)
{
    switch (vout)
    {
        case NRF_VREGMAIN_VDD_AO_1V8_OUTPUT_NORMAL:
            return (uint8_t)p_reg->VDDAO1V8OUTPUT;
        case NRF_VREGMAIN_VDD_AO_1V8_OUTPUT_LP:
            return (uint8_t)p_reg->VDDAO1V8LPOUTPUT;
        default:
            NRFX_ASSERT(0);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_vregmain_vdd_1v0_out_set(NRF_VREGMAIN_Type *           p_reg,
                                                    nrf_vregmain_vdd_1v0_output_t vout,
                                                    uint8_t                       val)
{
    switch (vout)
    {
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_NORMAL:
            p_reg->VDD1V0OUTPUT = val;
            break;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_RADIO:
            p_reg->VDD1V0OUTPUTRADIO = val;
            break;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_LP:
            p_reg->VDD1V0LPOUTPUT = val;
            break;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_LP_RADIO:
            p_reg->VDD1V0LPOUTPUTRADIO = val;
            break;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_ULP:
            p_reg->VDD1V0ULPOUTPUT = val;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_vdd_1v0_get(NRF_VREGMAIN_Type const *     p_reg,
                                                   nrf_vregmain_vdd_1v0_output_t vout)
{
    switch (vout)
    {
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_NORMAL:
            return (uint8_t)p_reg->VDD1V0OUTPUT;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_RADIO:
            return (uint8_t)p_reg->VDD1V0OUTPUTRADIO;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_LP:
            return (uint8_t)p_reg->VDD1V0LPOUTPUT;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_LP_RADIO:
            return (uint8_t)p_reg->VDD1V0LPOUTPUTRADIO;
        case NRF_VREGMAIN_VDD_1V0_OUTPUT_ULP:
            return (uint8_t)p_reg->VDD1V0ULPOUTPUT;
        default:
            NRFX_ASSERT(0);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_vregmain_vdd_vs_0v8_out_set(NRF_VREGMAIN_Type * p_reg,
                                                       uint8_t             val)
{
    p_reg->VDDVS0V8OUTPUT = val;
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_vdd_vs_0v8_get(NRF_VREGMAIN_Type const * p_reg)
{
   return (uint8_t)p_reg->VDDVS0V8OUTPUT;
}

NRF_STATIC_INLINE void nrf_vregmain_hsilimprog_set(NRF_VREGMAIN_Type *       p_reg,
                                                   nrf_vregmain_hsilimprog_t val)
{
    p_reg->HSILIMPROG = (uint32_t)val << VREGMAIN_HSILIMPROG_VAL_Pos;
}

NRF_STATIC_INLINE
nrf_vregmain_hsilimprog_t nrf_vregmain_hsilimprog_get(NRF_VREGMAIN_Type const * p_reg)
{
    return (nrf_vregmain_hsilimprog_t)p_reg->HSILIMPROG;
}

NRF_STATIC_INLINE void nrf_vregmain_pwmprog_set(NRF_VREGMAIN_Type *    p_reg,
                                                nrf_vregmain_pwmprog_t val)
{
    p_reg->PWMPROG = (uint32_t)val << VREGMAIN_PWMPROG_VAL_Pos;
}

NRF_STATIC_INLINE nrf_vregmain_pwmprog_t nrf_vregmain_pwmprog_get(NRF_VREGMAIN_Type const * p_reg)
{
    return (nrf_vregmain_pwmprog_t)p_reg->PWMPROG;
}

NRF_STATIC_INLINE void nrf_vregmain_fbctrl_set(NRF_VREGMAIN_Type *           p_reg,
                                               nrf_vregmain_fbctrl_t const * p_data)
{
    p_reg->FBCTRL = ((uint32_t)p_data->vdd1v8 << VREGMAIN_FBCTRL_VDD1V8_Pos) |
                    ((uint32_t)p_data->vdd1v0 << VREGMAIN_FBCTRL_VDD1V0_Pos) |
                    ((uint32_t)p_data->vdd0v8 << VREGMAIN_FBCTRL_VDD0V8_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_fbctrl_get(NRF_VREGMAIN_Type const * p_reg,
                                               nrf_vregmain_fbctrl_t *   p_data)
{
    p_data->vdd1v8 = (nrf_vregmain_fbctrl_vdd1v8_t)(p_reg->FBCTRL & VREGMAIN_FBCTRL_VDD1V8_Msk);
    p_data->vdd1v0 = (nrf_vregmain_fbctrl_vdd1v0_t)(p_reg->FBCTRL & VREGMAIN_FBCTRL_VDD1V0_Msk);
    p_data->vdd0v8 = (nrf_vregmain_fbctrl_vdd0v8_t)(p_reg->FBCTRL & VREGMAIN_FBCTRL_VDD0V8_Msk);
}

NRF_STATIC_INLINE void nrf_vregmain_ithreshold_set(NRF_VREGMAIN_Type *       p_reg,
                                                   nrf_vregmain_ithreshold_t mode,
                                                   uint8_t                   thr)
{
    switch(mode)
    {
        case NRF_VREGMAIN_ITHRESHOLD_HP_LP:
            p_reg->ITHRESHOLD = thr << VREGMAIN_ITHRESHOLD_VAL_Pos;
            break;
        case NRF_VREGMAIN_ITHRESHOLD_PWM:
            p_reg->ITHRESHOLDPWM = thr << VREGMAIN_ITHRESHOLDPWM_VAL_Pos;
            break;
        case NRF_VREGMAIN_ITHRESHOLD_0V8_LOW:
            p_reg->ITHRESHOLD0V8LOW = thr << VREGMAIN_ITHRESHOLD0V8LOW_VAL_Pos;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE uint8_t nrf_vregmain_ithreshold_get(NRF_VREGMAIN_Type const * p_reg,
                                                      nrf_vregmain_ithreshold_t mode)
{
    switch(mode)
    {
        case NRF_VREGMAIN_ITHRESHOLD_HP_LP:
            return (uint8_t)p_reg->ITHRESHOLD;
        case NRF_VREGMAIN_ITHRESHOLD_PWM:
            return (uint8_t)p_reg->ITHRESHOLDPWM;
        case NRF_VREGMAIN_ITHRESHOLD_0V8_LOW:
            return (uint8_t)p_reg->ITHRESHOLD0V8LOW;
        default:
            NRFX_ASSERT(0);
            return 0;
    }
}

NRF_STATIC_INLINE void nrf_vregmain_override(NRF_VREGMAIN_Type *   p_reg,
                                             nrf_vregmain_signal_t signal,
                                             bool                  enable,
                                             uint8_t               val)
{
    switch (signal)
    {
        case NRF_VREGMAIN_SIGNAL_ANALOG_CHRH_CH1:
            p_reg->OVERRIDE.CHRGCH1 = ((enable ?
                                       VREGMAIN_OVERRIDE_CHRGCH1_EN_Enabled :
                                       VREGMAIN_OVERRIDE_CHRGCH1_EN_Disabled) <<
                                       VREGMAIN_OVERRIDE_CHRGCH1_EN_Pos) |
                                      val << VREGMAIN_OVERRIDE_CHRGCH1_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_CHRH_CH2:
            p_reg->OVERRIDE.CHRGCH2 = ((enable ?
                                       VREGMAIN_OVERRIDE_CHRGCH2_EN_Enabled :
                                       VREGMAIN_OVERRIDE_CHRGCH2_EN_Disabled) <<
                                       VREGMAIN_OVERRIDE_CHRGCH2_EN_Pos) |
                                      val << VREGMAIN_OVERRIDE_CHRGCH2_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_CHRH_CH3:
            p_reg->OVERRIDE.CHRGCH3 = ((enable ?
                                       VREGMAIN_OVERRIDE_CHRGCH3_EN_Enabled :
                                       VREGMAIN_OVERRIDE_CHRGCH3_EN_Disabled) <<
                                       VREGMAIN_OVERRIDE_CHRGCH3_EN_Pos) |
                                      val << VREGMAIN_OVERRIDE_CHRGCH3_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_EN_CH1:
            p_reg->OVERRIDE.ENCH1 = ((enable ?
                                     VREGMAIN_OVERRIDE_ENCH1_EN_Enabled :
                                     VREGMAIN_OVERRIDE_ENCH1_EN_Disabled) <<
                                     VREGMAIN_OVERRIDE_ENCH1_EN_Pos) |
                                    val << VREGMAIN_OVERRIDE_ENCH1_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_EN_CH2:
            p_reg->OVERRIDE.ENCH2 = ((enable ?
                                     VREGMAIN_OVERRIDE_ENCH2_EN_Enabled :
                                     VREGMAIN_OVERRIDE_ENCH2_EN_Disabled) <<
                                     VREGMAIN_OVERRIDE_ENCH2_EN_Pos) |
                                    val << VREGMAIN_OVERRIDE_ENCH2_VAL_Pos;
            break;

        case NRF_VREGMAIN_SIGNAL_ANALOG_EN_CH3:
            p_reg->OVERRIDE.ENCH3 = ((enable ?
                                     VREGMAIN_OVERRIDE_ENCH3_EN_Enabled :
                                     VREGMAIN_OVERRIDE_ENCH3_EN_Disabled) <<
                                     VREGMAIN_OVERRIDE_ENCH3_EN_Pos) |
                                    val << VREGMAIN_OVERRIDE_ENCH3_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_ICMP:
            p_reg->OVERRIDE.ICMP = ((enable ?
                                    VREGMAIN_OVERRIDE_ICMP_EN_Enabled :
                                    VREGMAIN_OVERRIDE_ICMP_EN_Disabled) <<
                                    VREGMAIN_OVERRIDE_ICMP_EN_Pos) |
                                   val << VREGMAIN_OVERRIDE_ICMP_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_MODE_LP:
            p_reg->OVERRIDE.MODELP = ((enable ?
                                      VREGMAIN_OVERRIDE_MODELP_EN_Enabled :
                                      VREGMAIN_OVERRIDE_MODELP_EN_Disabled) <<
                                      VREGMAIN_OVERRIDE_MODELP_EN_Pos) |
                                     val << VREGMAIN_OVERRIDE_MODELP_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_MODE_PWM:
            p_reg->OVERRIDE.MODEPWM = ((enable ?
                                       VREGMAIN_OVERRIDE_MODEPWM_EN_Enabled :
                                       VREGMAIN_OVERRIDE_MODEPWM_EN_Disabled) <<
                                       VREGMAIN_OVERRIDE_MODEPWM_EN_Pos) |
                                      val << VREGMAIN_OVERRIDE_MODEPWM_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_MODE_ULP:
            p_reg->OVERRIDE.MODEULP = ((enable ?
                                       VREGMAIN_OVERRIDE_MODEULP_EN_Enabled :
                                       VREGMAIN_OVERRIDE_MODEULP_EN_Disabled) <<
                                       VREGMAIN_OVERRIDE_MODEULP_EN_Pos) |
                                      val << VREGMAIN_OVERRIDE_MODEULP_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_PWRUP:
            p_reg->OVERRIDE.PWRUP = ((enable ?
                                     VREGMAIN_OVERRIDE_PWRUP_EN_Enabled :
                                     VREGMAIN_OVERRIDE_PWRUP_EN_Disabled) <<
                                     VREGMAIN_OVERRIDE_PWRUP_EN_Pos) |
                                    val << VREGMAIN_OVERRIDE_PWRUP_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_READY:
            p_reg->OVERRIDE.READY = ((enable ?
                                     VREGMAIN_OVERRIDE_READY_EN_Enabled :
                                     VREGMAIN_OVERRIDE_READY_EN_Disabled) <<
                                     VREGMAIN_OVERRIDE_READY_EN_Pos) |
                                    val << VREGMAIN_OVERRIDE_READY_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_RETAIN:
             p_reg->OVERRIDE.RETAIN = ((enable ?
                                       VREGMAIN_OVERRIDE_RETAIN_EN_Enabled :
                                       VREGMAIN_OVERRIDE_RETAIN_EN_Disabled) <<
                                       VREGMAIN_OVERRIDE_RETAIN_EN_Pos) |
                                      val << VREGMAIN_OVERRIDE_RETAIN_VAL_Pos;
             break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_CH1:
            p_reg->OVERRIDE.SETTLEDCH1 = ((enable ?
                                          VREGMAIN_OVERRIDE_SETTLEDCH1_EN_Enabled :
                                          VREGMAIN_OVERRIDE_SETTLEDCH1_EN_Disabled) <<
                                          VREGMAIN_OVERRIDE_SETTLEDCH1_EN_Pos) |
                                         val << VREGMAIN_OVERRIDE_SETTLEDCH1_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_CH2:
            p_reg->OVERRIDE.SETTLEDCH2 = ((enable ?
                                          VREGMAIN_OVERRIDE_SETTLEDCH2_EN_Enabled :
                                          VREGMAIN_OVERRIDE_SETTLEDCH2_EN_Disabled) <<
                                          VREGMAIN_OVERRIDE_SETTLEDCH2_EN_Pos) |
                                         val << VREGMAIN_OVERRIDE_SETTLEDCH2_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_CH3:
            p_reg->OVERRIDE.SETTLEDCH3 = ((enable ?
                                          VREGMAIN_OVERRIDE_SETTLEDCH3_EN_Enabled :
                                          VREGMAIN_OVERRIDE_SETTLEDCH3_EN_Disabled) <<
                                          VREGMAIN_OVERRIDE_SETTLEDCH3_EN_Pos) |
                                         val << VREGMAIN_OVERRIDE_SETTLEDCH3_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_ANALOG_SETTLED_MODE:
            p_reg->OVERRIDE.SETTLEDMODE = ((enable ?
                                           VREGMAIN_OVERRIDE_SETTLEDMODE_EN_Enabled :
                                           VREGMAIN_OVERRIDE_SETTLEDMODE_EN_Disabled) <<
                                           VREGMAIN_OVERRIDE_SETTLEDMODE_EN_Pos) |
                                          val << VREGMAIN_OVERRIDE_SETTLEDMODE_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_CFG_ALL_STATIC:
            p_reg->OVERRIDE.CFGALLSTATIC = ((enable ?
                                            VREGMAIN_OVERRIDE_CFGALLSTATIC_EN_Enabled :
                                            VREGMAIN_OVERRIDE_CFGALLSTATIC_EN_Disabled) <<
                                            VREGMAIN_OVERRIDE_CFGALLSTATIC_EN_Pos) |
                                           val << VREGMAIN_OVERRIDE_CFGALLSTATIC_EN_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_SELMUX_VOLT1V0_HP_BANK:
            p_reg->OVERRIDE.VOLT1V0HPBANK = ((enable ?
                                             VREGMAIN_OVERRIDE_VOLT1V0HPBANK_EN_Enabled :
                                             VREGMAIN_OVERRIDE_VOLT1V0HPBANK_EN_Disabled) <<
                                             VREGMAIN_OVERRIDE_VOLT1V0HPBANK_EN_Pos) |
                                            val << VREGMAIN_OVERRIDE_VOLT1V0HPBANK_VAL_Pos;
            break;
        case NRF_VREGMAIN_SIGNAL_SELMUX_VOLT1V0_LP_BANK:
            p_reg->OVERRIDE.VOLT1V0LPBANK = ((enable ?
                                             VREGMAIN_OVERRIDE_VOLT1V0LPBANK_EN_Enabled :
                                             VREGMAIN_OVERRIDE_VOLT1V0LPBANK_EN_Disabled) <<
                                             VREGMAIN_OVERRIDE_VOLT1V0LPBANK_EN_Pos) |
                                            val << VREGMAIN_OVERRIDE_VOLT1V0LPBANK_VAL_Pos;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_vregmain_dft_atb0_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_atb0_selmux_t selmux,
                                                        bool                           enable)
{
    p_reg->DFT.ATB0CONFIG = ((enable ?
                              VREGMAIN_DFT_ATB0CONFIG_EN_Enabled :
                              VREGMAIN_DFT_ATB0CONFIG_EN_Disabled) <<
                             VREGMAIN_DFT_ATB0CONFIG_EN_Pos) |
                            (selmux << VREGMAIN_DFT_ATB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_dft_atb1_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_atb1_selmux_t selmux,
                                                        bool                           enable)
{
    p_reg->DFT.ATB1CONFIG = ((enable ?
                              VREGMAIN_DFT_ATB1CONFIG_EN_Enabled :
                              VREGMAIN_DFT_ATB1CONFIG_EN_Disabled) <<
                             VREGMAIN_DFT_ATB1CONFIG_EN_Pos) |
                            (selmux << VREGMAIN_DFT_ATB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_dft_dtb0_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb0_selmux_t selmux,
                                                        bool                           enable)
{
    p_reg->DFT.DTB0CONFIG = ((enable ?
                              VREGMAIN_DFT_DTB0CONFIG_EN_Enabled :
                              VREGMAIN_DFT_DTB0CONFIG_EN_Disabled) <<
                             VREGMAIN_DFT_DTB0CONFIG_EN_Pos) |
                            (selmux << VREGMAIN_DFT_DTB0CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_dft_dtb1_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb1_selmux_t selmux,
                                                        bool                           enable)
{
    p_reg->DFT.DTB1CONFIG = ((enable ?
                              VREGMAIN_DFT_DTB1CONFIG_EN_Enabled :
                              VREGMAIN_DFT_DTB1CONFIG_EN_Disabled) <<
                             VREGMAIN_DFT_DTB1CONFIG_EN_Pos) |
                            (selmux << VREGMAIN_DFT_DTB1CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_dft_dtb2_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb2_selmux_t selmux,
                                                        bool                           enable)
{
    p_reg->DFT.DTB2CONFIG = ((enable ?
                              VREGMAIN_DFT_DTB2CONFIG_EN_Enabled :
                              VREGMAIN_DFT_DTB2CONFIG_EN_Disabled) <<
                             VREGMAIN_DFT_DTB2CONFIG_EN_Pos) |
                            (selmux << VREGMAIN_DFT_DTB2CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_dft_dtb3_config_set(NRF_VREGMAIN_Type *            p_reg,
                                                        nrf_vregmain_dft_dtb3_selmux_t selmux,
                                                        bool                           enable)
{
    p_reg->DFT.DTB3CONFIG = ((enable ?
                              VREGMAIN_DFT_DTB3CONFIG_EN_Enabled :
                              VREGMAIN_DFT_DTB3CONFIG_EN_Disabled) <<
                             VREGMAIN_DFT_DTB3CONFIG_EN_Pos) |
                            (selmux << VREGMAIN_DFT_DTB3CONFIG_SELMUX_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_dft_tcfg_config_set(NRF_VREGMAIN_Type * p_reg,
                                                        nrf_vregmain_tcfg_t tcfg)
{
    p_reg->DFT.TCFG = ((tcfg.pwrup_ibpsr ? VREGMAIN_DFT_TCFG_PWRUPIBPSR_Enabled :
                        VREGMAIN_DFT_TCFG_PWRUPIBPSR_Disabled) <<
                       VREGMAIN_DFT_TCFG_PWRUPIBPSR_Pos) |
                      ((tcfg.pwrup_ibpp ? VREGMAIN_DFT_TCFG_PWRUPIBPP_Enabled :
                        VREGMAIN_DFT_TCFG_PWRUPIBPP_Disabled) <<
                       VREGMAIN_DFT_TCFG_PWRUPIBPP_Pos) |
                      ((tcfg.pwrup_pwm ? VREGMAIN_DFT_TCFG_PWRUPWM_Enabled :
                        VREGMAIN_DFT_TCFG_PWRUPWM_Disabled) <<
                       VREGMAIN_DFT_TCFG_PWRUPWM_Pos) |
                      ((tcfg.pwrup_hyst ? VREGMAIN_DFT_TCFG_PWRUPHYST_Enabled :
                        VREGMAIN_DFT_TCFG_PWRUPHYST_Disabled) <<
                       VREGMAIN_DFT_TCFG_PWRUPHYST_Pos) |
                      ((tcfg.minidrv ? VREGMAIN_DFT_TCFG_MINIDRV_Enabled :
                        VREGMAIN_DFT_TCFG_MINIDRV_Disabled) <<
                       VREGMAIN_DFT_TCFG_MINIDRV_Pos) |
                      ((tcfg.sample_p_dcch ? VREGMAIN_DFT_TCFG_SAMPLEPDCCH_Enabled :
                        VREGMAIN_DFT_TCFG_SAMPLEPDCCH_Disabled) <<
                       VREGMAIN_DFT_TCFG_SAMPLEPDCCH_Pos) |
                      ((tcfg.pwrup_p_dcchv ? VREGMAIN_DFT_TCFG_PWRUPPDCCHV_Enabled :
                        VREGMAIN_DFT_TCFG_PWRUPPDCCHV_Disabled) <<
                       VREGMAIN_DFT_TCFG_PWRUPPDCCHV_Pos) |
                      ((uint32_t)tcfg.drvsec << VREGMAIN_DFT_TCFG_DRVSEC_Pos) |
                      ((uint32_t)tcfg.hs_force_on << VREGMAIN_DFT_TCFG_HSFORCEON_Pos) |
                      ((uint32_t)tcfg.ls_force_on << VREGMAIN_DFT_TCFG_LSFORCEON_Pos) |
                      ((tcfg.digoff ? VREGMAIN_DFT_TCFG_DIGOFF_Enabled :
                        VREGMAIN_DFT_TCFG_DIGOFF_Disabled) <<
                       VREGMAIN_DFT_TCFG_DIGOFF_Pos) |
                      ((tcfg.sigdig ? VREGMAIN_DFT_TCFG_SIGDIG_Enabled :
                        VREGMAIN_DFT_TCFG_SIGDIG_Disabled) <<
                       VREGMAIN_DFT_TCFG_SIGDIG_Pos) |
                      ((tcfg.gpi ? VREGMAIN_DFT_TCFG_GPI_Enabled :
                        VREGMAIN_DFT_TCFG_GPI_Disabled) <<
                       VREGMAIN_DFT_TCFG_GPI_Pos);
}

NRF_STATIC_INLINE void nrf_vregmain_dft_cal_set(NRF_VREGMAIN_Type * p_reg,
                                                bool                enable)
{
    p_reg->DFT.CALEN = (enable ? VREGMAIN_DFT_CALEN_CALEN_ATCMPOn : VREGMAIN_DFT_CALEN_CALEN_ATCMPOff)
                        << VREGMAIN_DFT_CALEN_CALEN_Pos;
}

NRF_STATIC_INLINE bool nrf_vregmain_dft_cal_check(NRF_VREGMAIN_Type * p_reg)
{
    return ((p_reg->DFT.CALEN & VREGMAIN_DFT_CALEN_CALEN_Msk) >> VREGMAIN_DFT_CALEN_CALEN_Pos) ?
            true : false;
}

NRF_STATIC_INLINE uint32_t nrf_vregmain_dft_calcmp_check(NRF_VREGMAIN_Type const * p_reg)
{
    return ((p_reg->DFT.CALCMP & VREGMAIN_DFT_CALCMP_CALCMP_Msk) >> 
            VREGMAIN_DFT_CALCMP_CALCMP_Pos) ? true : false;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VREGMAIN_H__
