/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_VPR_CSR_H__
#define NRF_VPR_CSR_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vpr_csr_hal VPR CSR HAL
 * @{
 * @ingroup nrf_vpr
 * @brief   Hardware access layer for managing the VPR RISC-V CPU Control
 *          and Status Registers (VPR CSR).
 */

/** @brief Nordic key for CSR writes. */
/* @todo Assert all NORDICKEY values and offsets are equal */
#define NRF_VPR_CSR_NORDIC_KEY_MASK \
    (VPRCSR_NORDIC_VPRNORDICCTRL_NORDICKEY_Enabled << VPRCSR_NORDIC_VPRNORDICCTRL_NORDICKEY_Pos)

/** @brief Symbol specifying maximum interrupt threshold. */
#define NRF_VPR_CSR_INT_THRESHOLD_MAX VPRCSR_MINTTHRESH_TH_Max

/** @brief Symbol specifying minimum interrupt threshold. */
#define NRF_VPR_CSR_INT_THRESHOLD_MIN VPRCSR_MINTTHRESH_TH_Min

/** @brief Trap causes. */
typedef enum
{
    NRF_VPR_CSR_TRAP_CAUSE_INSTR_ADDR_MISALIGNED = VPRCSR_MCAUSE_EXCEPTIONCODE_INSTADDRMISALIGN,   ///< Instruction address misaligned.
    NRF_VPR_CSR_TRAP_CAUSE_INSTR_ACCESS_FAULT    = VPRCSR_MCAUSE_EXCEPTIONCODE_INSTACCESSFAULT,    ///< Instruction access fault.
    NRF_VPR_CSR_TRAP_CAUSE_INSTR_ILLEGAL         = VPRCSR_MCAUSE_EXCEPTIONCODE_ILLEGALINST,        ///< Illegal instruction.
    NRF_VPR_CSR_TRAP_CAUSE_BREAKPOINT            = VPRCSR_MCAUSE_EXCEPTIONCODE_BKPT,               ///< Breakpoint.
    NRF_VPR_CSR_TRAP_CAUSE_LOAD_ADDR_MISALIGNED  = VPRCSR_MCAUSE_EXCEPTIONCODE_LOADADDRMISALIGN,   ///< Load address misaligned.
    NRF_VPR_CSR_TRAP_CAUSE_LOAD_ACCESS_FAULT     = VPRCSR_MCAUSE_EXCEPTIONCODE_LOADACCESSFAULT,    ///< Load access fault.
    NRF_VPR_CSR_TRAP_CAUSE_STORE_ADDR_MISALIGNED = VPRCSR_MCAUSE_EXCEPTIONCODE_STOREADDRMISALIGN,  ///< Store/AMO address misaligned.
    NRF_VPR_CSR_TRAP_CAUSE_STORE_ACCESS_FAULT    = VPRCSR_MCAUSE_EXCEPTIONCODE_STOREACCESSFAULT,   ///< Store/AMO access misaligned.
#if defined(LILIUMFP1_XXAA)
    NRF_VPR_CSR_TRAP_CAUSE_ECALL_U               = VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLUMODE,         ///< Environment call U-mode.
    NRF_VPR_CSR_TRAP_CAUSE_ECALL_S               = VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLSMODE,         ///< Environment call S-mode.
    NRF_VPR_CSR_TRAP_CAUSE_INSTR_PAGE_FAULT      = VPRCSR_MCAUSE_EXCEPTIONCODE_INSTPAGEFAULT,      ///< Instruction page fault.
    NRF_VPR_CSR_TRAP_CAUSE_LOAD_PAGE_FAULT       = VPRCSR_MCAUSE_EXCEPTIONCODE_LOADPAGEFAULT,      ///< Load page fault.
    NRF_VPR_CSR_TRAP_CAUSE_STORE_PAGE_FAULT      = VPRCSR_MCAUSE_EXCEPTIONCODE_STOREPAGEFAULT,     ///< Store/AMO page fault.
#endif
    NRF_VPR_CSR_TRAP_CAUSE_ECALL_M               = VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLMMODE,         ///< Environment call M-mode.
    NRF_VPR_CSR_TRAP_CAUSE_STACKING_BUS_FAULT    = VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTSTACKING,   ///< Bus fault on stacking.
#if defined(LILIUMFP1_XXAA)
    NRF_VPR_CSR_TRAP_CAUSE_STACKING_UNALIGNED    = VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKING,    ///< Unaligned stacking.
    NRF_VPR_CSR_TRAP_CAUSE_VECTOR_FAULT          = VPRCSR_MCAUSE_EXCEPTIONCODE_VECTORFAULT,        ///< Vector fault.
    NRF_VPR_CSR_TRAP_CAUSE_STACKING_UNALIGNED_EX = VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKINGEXC, ///< Unaligned stacking exception fault.
#else
    NRF_VPR_CSR_TRAP_CAUSE_STACKING_UNALIGNED    = VPRCSR_MCAUSE_EXCEPTIONCODE_MISALIGNSTACKING,   ///< Misaligned Stacking.
    NRF_VPR_CSR_TRAP_CAUSE_VECTOR_FAULT          = VPRCSR_MCAUSE_EXCEPTIONCODE_INTVECTORFAULT,     ///< Interrupt Vector Fault.
    NRF_VPR_CSR_TRAP_CAUSE_STACKING_UNALIGNED_EX = VPRCSR_MCAUSE_EXCEPTIONCODE_STACKINGEXCFAULT,   ///< Fault on Exception Stacking.
#endif
    NRF_VPR_CSR_TRAP_CAUSE_UNSTACKING_BUS_FAULT  = VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTUNSTACKING, ///< Bus fault on unstacking.
    NRF_VPR_CSR_TRAP_CAUSE_STORE_TIMEOUT_FAULT   = VPRCSR_MCAUSE_EXCEPTIONCODE_STORETIMEOUTFAULT,  ///< Store timeout fault.
    NRF_VPR_CSR_TRAP_CAUSE_LOAD_TIMEOUT_FAULT    = VPRCSR_MCAUSE_EXCEPTIONCODE_LOADTIMEOUTFAULT,   ///< Load timeout fault.
} nrf_vpr_csr_trap_cause_t;

/** @brief Sleep states. */
typedef enum
{
    NRF_VPR_CSR_SLEEP_STATE_WAIT       = VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_WAIT,      ///< During sleep, clock is not turned off.
    NRF_VPR_CSR_SLEEP_STATE_RESET      = VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_RESET,     ///< Sleep mode out of reset.
    NRF_VPR_CSR_SLEEP_STATE_SLEEP      = VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_SLEEP,     ///< During sleep, clock is turned off.
    NRF_VPR_CSR_SLEEP_STATE_DEEP_SLEEP = VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_DEEPSLEEP, ///< During sleep, clock and power are turned off.
    NRF_VPR_CSR_SLEEP_STATE_HIBERNATE  = VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_HIBERNATE, ///< During sleep, clock is turned off. All the registers are saved automatically. Restart by a reset.
} nrf_vpr_csr_sleep_state_t;

/** @brief Stacking modes. */
typedef enum
{
    NRF_VPR_CSR_STACKING_AUTO_1F0_FAST = VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_AUTOSTACK1F0,      ///< Automatic stacking, interrupt handlers as functions that return to address 0x1F0, which in turn contains MRET instruction.
    NRF_VPR_CSR_STACKING_AUTO_ANY_FAST = VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_AUTOSTACKNO1F0,    ///< Automatic stacking, interrupt handlers do not return to address 0x1F0.
    NRF_VPR_CSR_STACKING_AUTO_1F0_SLOW = VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_AUTOSTACK1F0NOFIT, ///< Automatic stacking, interrupt handlers as functions that return to address 0x1F0. Fast interrupt transition disabled.
    NRF_VPR_CSR_STACKING_LEGACY        = VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_NOAUTOSTACK,       ///< Legacy RISC-V interrupt handling. Automatic stacking and fast interrupt transition disabled.
} nrf_vpr_csr_stacking_t;

/** @brief Function for enabling the interrupts in machine mode. */
NRF_STATIC_INLINE void nrf_vpr_csr_machine_interrupts_enable(void);

/** @brief Function for disabling the interrupts in machine mode. */
NRF_STATIC_INLINE void nrf_vpr_csr_machine_interrupts_disable(void);

/**
 * @brief Function for checking whether interrupts are enabled in machine mode.
 *
 * @retval true  Interrupts are enabled.
 * @retval false Interrupts are disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_machine_interrupts_check(void);

/**
 * @brief Function for setting the base address of trap vector table.
 *
 * @param[in] address Machine trap vector table base address to be set.
 *                    Has to be aligned on 64-byte or greater power-of-two boundary.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_machine_trap_vector_table_addr_set(uint32_t address);

/**
 * @brief Function for getting the machine trap vector table base address.
 *
 * @return Machine trap vector table base address.
 */
NRF_STATIC_INLINE uint32_t nrf_vpr_csr_machine_trap_vector_table_addr_get(void);

/**
 * @brief Function for getting the machine exception program counter.
 *
 * @return Virtual address of the instruction that was interrupted or that encountered the exception.
 */
NRF_STATIC_INLINE uint32_t nrf_vpr_csr_machine_exception_pc_get(void);

/**
 * @brief Function for getting the machine trap cause exception code.
 *
 * @return Exception code.
 */
NRF_STATIC_INLINE nrf_vpr_csr_trap_cause_t nrf_vpr_csr_machine_trap_cause_code_get(void);

/**
 * @brief Function for checking the state of the interrupt bit for machine trap.
 *
 * @retval true  Trap was caused by an interrupt.
 * @retval false Trap was not caused by an interrupt.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_machine_trap_interrupt_check(void);

/**
 * @brief Function for getting the machine trap value.
 *
 * @return Exception-specific information.
 */
NRF_STATIC_INLINE uint32_t nrf_vpr_csr_machine_trap_value_get(void);

/**
 * @brief Function for setting the machine mode interrupt level threshold.
 *
 * @param[in] th Machine mode interrupt level threshold to be set.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_machine_interrupt_threshold_set(uint8_t th);

/**
 * @brief Function for getting the machine mode interrupt level threshold.
 *
 * @return Machine mode interrupt level threshold.
 */
NRF_STATIC_INLINE uint8_t nrf_vpr_csr_machine_interrupt_threshold_get(void);

/**
 * @brief Function for enabling or disabling the Cycle Counter.
 *
 * @param[in] enable True if Cycle Counter is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_machine_cycle_counter_enable_set(bool enable);

/**
 * @brief Function for checking whether the Cycle Counter is enabled.
 *
 * @retval true  Cycle counter is enabled.
 * @retval false Cycle counter is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_machine_cycle_counter_enable_check(void);

/**
 * @brief Function for getting the machine cycle counter.
 *
 * @return Number of clock cycles executed by the processor core.
 */
NRF_STATIC_INLINE uint64_t nrf_vpr_csr_machine_cycle_counter_get(void);

/**
 * @brief Function for enabling or disabling the Instruction Counter.
 *
 * @param[in] enable True if Instruction Counter is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_machine_instruction_counter_enable_set(bool enable);

/**
 * @brief Function for checking whether the Instruction Counter is enabled.
 *
 * @retval true  Instruction counter is enabled.
 * @retval false Instruction counter is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_machine_instruction_counter_enable_check(void);
/**
 * @brief Function for getting the machine instruction counter.
 *
 * @return Number of instructions exectuted by the processor.
 */
NRF_STATIC_INLINE uint64_t nrf_vpr_csr_machine_instruction_counter_get(void);

/**
 * @brief Function for enabling or disabling the Real-Time Peripherals.
 *
 * @param[in] enable True if RT Perhiperals are to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_rtperiph_enable_set(bool enable);

/**
 * @brief Function for checking whether the Real-Time Peripherals are enabled.
 *
 * @retval true  RT Peripherals are enabled.
 * @retval false RT Peripherals are disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_rtperiph_enable_check(void);

/**
 * @brief Function for setting the external clock to remain running.
 *
 * @param[in] enable True if forcing the external clock is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_force_ext_clock_set(bool enable);

/**
 * @brief Function for checking whether the external clock is to remain running.
 *
 * @retval true  External clock is configured to remain on.
 * @retval false External clock is not configured to remain on.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_force_ext_clock_check(void);

/**
 * @brief Function for setting the RAM clock to remain running.
 *
 * @param[in] enable True if forcing RAM clock is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_force_ram_clock_set(bool enable);

/**
 * @brief Function for checking whether the RAM clock is to remain running.
 *
 * @retval true  RAM clock is configured to remain on.
 * @retval false RAM clock is not configured to remain on.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_force_ram_clock_check(void);

/**
 * @brief Function for enabling or disabling the generation of IRQ at position CNT_IRQ_POSITION.
 *
 * @param[in] enable True if generation of IRQ at position CNT_IRQ_POSITION is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_cnt_irq_enable_set(bool enable);

/**
 * @brief Function for checking whether the generation of IRQ at position CNT_IRQ_POSITION is enabled.
 *
 * @retval true  Generation of IRQ is enabled.
 * @retval false Generation of IRQ is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_cnt_irq_enable_check(void);

/**
 * @brief Function for setting the sleep state.
 *
 * @param[in] state Sleep state to be set.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_sleep_state_set(nrf_vpr_csr_sleep_state_t state);

/**
 * @brief Function for getting the sleep state.
 *
 * @return Current sleep state.
 */
NRF_STATIC_INLINE nrf_vpr_csr_sleep_state_t nrf_vpr_csr_sleep_state_get(void);

/**
 * @brief Function for enabling or disabling the return to sleep functionality.
 *
 * @param[in] enable True if CPU should be forced to return to sleep when it returns in a non-handler program,
 *                   false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_return_to_sleep_set(bool enable);

/**
 * @brief Function for checking whether the return to sleep functionality is enabled.
 *
 * @retval true  Return to sleep functionality is enabled.
 * @retval false Return to sleep functionality is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_return_to_sleep_check(void);

/**
 * @brief Function for enabling or disabling the stack on sleep functionality.
 *
 * @param[in] enable True if CPU should be forced to stack the context before going to sleep (used in order to have a fast wake-up),
 *                   false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_stack_on_sleep_set(bool enable);

/**
 * @brief Function for checking whether the stack on sleep functionality is enabled.
 *
 * @retval true  Stack on sleep functionality is enabled.
 * @retval false Stack on sleep functionality is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_stack_on_sleep_check(void);

/**
 * @brief Function for enabling or disabling the CLIC round robin arbitration.
 *
 * @param[in] enable True if round robin arbitration should be used for CLIC interrupt requests,
 *                   false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_clic_round_robin_set(bool enable);

/**
 * @brief Function for checking whether the CLIC round robin arbitration is enabled.
 *
 * @retval true  CLIC round robin arbitration is enabled.
 * @retval false CLIC round robin arbitration is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_clic_round_robin_check(void);

/**
 * @brief Function for enabling or disabling the unrecoverable return functionality.
 *
 * @param[in] enable True if unrecoverable return from exception is to be forced, false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_unrecoverable_return_set(bool enable);

/**
 * @brief Function for checking whether the unrecoverable return is enabled.
 *
 * @retval true  Unrecoverable return is enabled.
 * @retval false Unrecoverable return is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_unrecoverable_return_check(void);

/**
 * @brief Function for setting the IRQ stacking mode.
 *
 * @param[in] mode IRQ stacking mode to be used.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_irq_stacking_set(nrf_vpr_csr_stacking_t mode);

/**
 * @brief Function for getting the IRQ stacking mode.
 *
 * @return IRQ stacking mode.
 */
NRF_STATIC_INLINE nrf_vpr_csr_stacking_t nrf_vpr_csr_irq_stacking_get(void);

/**
 * @brief Function for enabling or disabling the transaction timeout check.
 *
 * @param[in] enable True if exception is to be raised if a transaction takes more than 512 cycles,
 *                   false otherwise.
 */
NRF_STATIC_INLINE void nrf_vpr_csr_transaction_timeout_exception_set(bool enable);

/**
 * @brief Function for checking whether the transaction timeout check is enabled.
 *
 * @retval true  Transaction timeout check is enabled.
 * @retval false Transaction timeout check is disabled.
 */
NRF_STATIC_INLINE bool nrf_vpr_csr_transaction_timeout_exception_check(void);

#ifndef NRF_DECLARE_ONLY
/* @todo Report to fix in IPS: MSTATUS_MIE is read only */
NRF_STATIC_INLINE void nrf_vpr_csr_machine_interrupts_enable(void)
{
    csr_set_bits(VPRCSR_MSTATUS, VPRCSR_MSTATUS_MIE_Msk);
}

NRF_STATIC_INLINE void nrf_vpr_csr_machine_interrupts_disable(void)
{
    csr_clear_bits(VPRCSR_MSTATUS, VPRCSR_MSTATUS_MIE_Msk);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_machine_interrupts_check(void)
{
    return csr_read(VPRCSR_MSTATUS) & VPRCSR_MSTATUS_MIE_Msk;
}

NRF_STATIC_INLINE void nrf_vpr_csr_machine_trap_vector_table_addr_set(uint32_t address)
{
    NRFX_ASSERT(!(address & 0xF));

    csr_write(VPRCSR_MTVT, address);
}

NRF_STATIC_INLINE uint32_t nrf_vpr_csr_machine_trap_vector_table_addr_get(void)
{
    return csr_read(VPRCSR_MTVT);
}

NRF_STATIC_INLINE uint32_t nrf_vpr_csr_machine_exception_pc_get(void)
{
    return csr_read(VPRCSR_MEPC);
}

NRF_STATIC_INLINE nrf_vpr_csr_trap_cause_t nrf_vpr_csr_machine_trap_cause_code_get(void)
{
    return csr_read(VPRCSR_MCAUSE) & VPRCSR_MCAUSE_EXCEPTIONCODE_Msk;
}

NRF_STATIC_INLINE bool nrf_vpr_csr_machine_trap_interrupt_check(void)
{
    return (csr_read(VPRCSR_MCAUSE) & VPRCSR_MCAUSE_INTERRUPT_Msk) >> VPRCSR_MCAUSE_INTERRUPT_Pos;
}

NRF_STATIC_INLINE uint32_t nrf_vpr_csr_machine_trap_value_get(void)
{
    return csr_read(VPRCSR_MTVAL);
}

NRF_STATIC_INLINE void nrf_vpr_csr_machine_interrupt_threshold_set(uint8_t th)
{
    // TODO: Remove when FPGA and Palladium will have VPR1.1 implemented (see IP-5053)
#if defined(BOARD_SYSTEMC)
    csr_write(VPRCSR_MINTTHRESH, th);
#else
    csr_write(VPRCSR_MINTTHRESH, (th << VPRCSR_MINTTHRESH_TH_Pos));
#endif
}

NRF_STATIC_INLINE uint8_t nrf_vpr_csr_machine_interrupt_threshold_get(void)
{
    // TODO: Remove when FPGA and Palladium will have VPR1.1 implemented (see IP-5053)
#if defined(BOARD_SYSTEMC)
    return csr_read(VPRCSR_MINTTHRESH);
#else
    return (csr_read(VPRCSR_MINTTHRESH) & VPRCSR_MINTTHRESH_TH_Msk) >> VPRCSR_MINTTHRESH_TH_Pos;
#endif
}

NRF_STATIC_INLINE void nrf_vpr_csr_machine_cycle_counter_enable_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_MCOUNTINHIBIT);

    reg = (reg & ~VPRCSR_MCOUNTINHIBIT_CY_Msk) | (enable ?
            (VPRCSR_MCOUNTINHIBIT_CY_INCREMENT << VPRCSR_MCOUNTINHIBIT_CY_Pos) :
            (VPRCSR_MCOUNTINHIBIT_CY_INHIBIT   << VPRCSR_MCOUNTINHIBIT_CY_Pos));

    csr_write(VPRCSR_MCOUNTINHIBIT, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_machine_cycle_counter_enable_check(void)
{
    uint32_t reg = csr_read(VPRCSR_MCOUNTINHIBIT);

    return (reg & (VPRCSR_MCOUNTINHIBIT_CY_INHIBIT << VPRCSR_MCOUNTINHIBIT_CY_Pos)) ? false : true;
}

NRF_STATIC_INLINE uint64_t nrf_vpr_csr_machine_cycle_counter_get(void)
{
    return csr_read(VPRCSR_MCYCLE) | ((uint64_t)csr_read(VPRCSR_MCYCLEH) << 32);
}

NRF_STATIC_INLINE void nrf_vpr_csr_machine_instruction_counter_enable_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_MCOUNTINHIBIT);

    reg = (reg & ~VPRCSR_MCOUNTINHIBIT_IR_Msk) | (enable ?
            (VPRCSR_MCOUNTINHIBIT_IR_INCREMENT << VPRCSR_MCOUNTINHIBIT_IR_Pos) :
            (VPRCSR_MCOUNTINHIBIT_IR_INHIBIT   << VPRCSR_MCOUNTINHIBIT_IR_Pos));

    csr_write(VPRCSR_MCOUNTINHIBIT, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_machine_instruction_counter_enable_check(void)
{
    uint32_t reg = csr_read(VPRCSR_MCOUNTINHIBIT);

    return (reg & (VPRCSR_MCOUNTINHIBIT_IR_INHIBIT << VPRCSR_MCOUNTINHIBIT_IR_Pos)) ? false : true;
}

NRF_STATIC_INLINE uint64_t nrf_vpr_csr_machine_instruction_counter_get(void)
{
    return csr_read(VPRCSR_MINSTRET) | ((uint64_t)csr_read(VPRCSR_MINSTRETH) << 32);
}

NRF_STATIC_INLINE void nrf_vpr_csr_rtperiph_enable_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICCTRL);
    reg = (reg & ~VPRCSR_NORDIC_VPRNORDICCTRL_ENABLERTPERIPH_Msk) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    reg |= ((enable ? VPRCSR_NORDIC_VPRNORDICCTRL_ENABLERTPERIPH_Enabled :
                      VPRCSR_NORDIC_VPRNORDICCTRL_ENABLERTPERIPH_Disabled)
            << VPRCSR_NORDIC_VPRNORDICCTRL_ENABLERTPERIPH_Pos) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    csr_write(VPRCSR_NORDIC_VPRNORDICCTRL, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_rtperiph_enable_check(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICCTRL) & VPRCSR_NORDIC_VPRNORDICCTRL_ENABLERTPERIPH_Msk)
           >> VPRCSR_NORDIC_VPRNORDICCTRL_ENABLERTPERIPH_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_force_ext_clock_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICCTRL);
    reg = (reg & ~VPRCSR_NORDIC_VPRNORDICCTRL_FORCEEXTCLK_Msk) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    reg |= ((enable ? VPRCSR_NORDIC_VPRNORDICCTRL_FORCEEXTCLK_Enabled :
                      VPRCSR_NORDIC_VPRNORDICCTRL_FORCEEXTCLK_Disabled)
            << VPRCSR_NORDIC_VPRNORDICCTRL_FORCEEXTCLK_Pos) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    csr_write(VPRCSR_NORDIC_VPRNORDICCTRL, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_force_ext_clock_check(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICCTRL) & VPRCSR_NORDIC_VPRNORDICCTRL_FORCEEXTCLK_Msk)
           >> VPRCSR_NORDIC_VPRNORDICCTRL_FORCEEXTCLK_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_force_ram_clock_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICCTRL);
    reg = (reg & ~VPRCSR_NORDIC_VPRNORDICCTRL_FORCERAMCLK_Msk) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    reg |= ((enable ? VPRCSR_NORDIC_VPRNORDICCTRL_FORCERAMCLK_Enabled :
                      VPRCSR_NORDIC_VPRNORDICCTRL_FORCERAMCLK_Disabled)
            << VPRCSR_NORDIC_VPRNORDICCTRL_FORCERAMCLK_Pos) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    csr_write(VPRCSR_NORDIC_VPRNORDICCTRL, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_force_ram_clock_check(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICCTRL) & VPRCSR_NORDIC_VPRNORDICCTRL_FORCERAMCLK_Msk)
           >> VPRCSR_NORDIC_VPRNORDICCTRL_FORCERAMCLK_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_cnt_irq_enable_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICCTRL);
    reg &= ~(VPRCSR_NORDIC_VPRNORDICCTRL_CNTIRQENABLE_Msk | NRF_VPR_CSR_NORDIC_KEY_MASK);

    reg |= ((enable ? VPRCSR_NORDIC_VPRNORDICCTRL_CNTIRQENABLE_Enabled :
                      VPRCSR_NORDIC_VPRNORDICCTRL_CNTIRQENABLE_Disabled)
            << VPRCSR_NORDIC_VPRNORDICCTRL_CNTIRQENABLE_Pos) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    csr_write(VPRCSR_NORDIC_VPRNORDICCTRL, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_cnt_irq_enable_check(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICCTRL) & VPRCSR_NORDIC_VPRNORDICCTRL_CNTIRQENABLE_Msk)
           >> VPRCSR_NORDIC_VPRNORDICCTRL_CNTIRQENABLE_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_sleep_state_set(nrf_vpr_csr_sleep_state_t state)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL);
    reg &= ~VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_Msk;

    reg |= (uint32_t)state << VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_Pos;
    csr_write(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL, reg);
}

NRF_STATIC_INLINE nrf_vpr_csr_sleep_state_t nrf_vpr_csr_sleep_state_get(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL)
            & VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_Msk)
           >> VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_SLEEPSTATE_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_return_to_sleep_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL);
    reg &= ~VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_RETURNTOSLEEP_Msk;

    reg |= (enable ? VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_RETURNTOSLEEP_Enabled :
                     VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_RETURNTOSLEEP_Disabled)
           << VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_RETURNTOSLEEP_Pos;
    csr_write(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_return_to_sleep_check(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL)
            & VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_RETURNTOSLEEP_Msk)
           >> VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_RETURNTOSLEEP_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_stack_on_sleep_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL);
    reg &= ~VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_STACKONSLEEP_Msk;

    reg |= (enable ? VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_STACKONSLEEP_Enabled :
                     VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_STACKONSLEEP_Disabled)
           << VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_STACKONSLEEP_Pos;
    csr_write(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_stack_on_sleep_check(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICSLEEPCTRL)
            & VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_STACKONSLEEP_Msk)
           >> VPRCSR_NORDIC_VPRNORDICSLEEPCTRL_STACKONSLEEP_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_clic_round_robin_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE);
    reg = (reg & ~VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_DISABLECLICROUNDROBIN_Msk) |
             NRF_VPR_CSR_NORDIC_KEY_MASK;

    reg |= (enable ? VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_DISABLECLICROUNDROBIN_Enabled :
                     VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_DISABLECLICROUNDROBIN_Disabled)
           << VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_DISABLECLICROUNDROBIN_Pos;
    csr_write(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_clic_round_robin_check(void)
{
    return ((csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE)
             & VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_DISABLECLICROUNDROBIN_Msk)
            >> VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_DISABLECLICROUNDROBIN_Pos
            == VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_DISABLECLICROUNDROBIN_Enabled);
}

NRF_STATIC_INLINE void nrf_vpr_csr_unrecoverable_return_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE);
    reg = (reg & ~VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_UNRECOVRETURN_Msk) |
             NRF_VPR_CSR_NORDIC_KEY_MASK;

    reg |= (enable ? VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_UNRECOVRETURN_Enabled :
                     VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_UNRECOVRETURN_Disabled)
           << VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_UNRECOVRETURN_Pos;
    csr_write(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_unrecoverable_return_check(void)
{
    return ((csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE)
             & VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_UNRECOVRETURN_Msk)
            >> VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_UNRECOVRETURN_Pos
            == VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_UNRECOVRETURN_Enabled);
}

NRF_STATIC_INLINE void nrf_vpr_csr_irq_stacking_set(nrf_vpr_csr_stacking_t mode)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE);
    reg = (reg & ~VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_Msk) |
             NRF_VPR_CSR_NORDIC_KEY_MASK;

    reg |= (mode << VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_Pos);
    csr_write(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE, reg);
}

NRF_STATIC_INLINE nrf_vpr_csr_stacking_t nrf_vpr_csr_irq_stacking_get(void)
{
    return (csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE)
            & VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_Msk)
           >> VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_INTHWSTACKING_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_csr_transaction_timeout_exception_set(bool enable)
{
    uint32_t reg = csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE);
    reg = (reg & ~VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_TIMEOUTCHK_Msk) | NRF_VPR_CSR_NORDIC_KEY_MASK;

    reg |= (enable ? VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_TIMEOUTCHK_Enabled :
                     VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_TIMEOUTCHK_Disabled)
           << VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_TIMEOUTCHK_Pos;
    csr_write(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE, reg);
}

NRF_STATIC_INLINE bool nrf_vpr_csr_transaction_timeout_exception_check(void)
{
    return ((csr_read(VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE)
             & VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_TIMEOUTCHK_Msk)
            >> VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_TIMEOUTCHK_Pos
            == VPRCSR_NORDIC_VPRNORDICFEATURESDISABLE_TIMEOUTCHK_Enabled);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_VPR_CSR_H__
