/* Linker script for Nordic Semiconductor nRF devices
 *
 * Version: Sourcery G++ 4.5-1
 * Support: https://support.codesourcery.com/GNUToolchain/
 *
 * Copyright (c) 2007, 2008, 2009, 2010 CodeSourcery, Inc.
 *
 * The authors hereby grant permission to use, copy, modify, distribute,
 * and license this software and its documentation for any purpose, provided
 * that existing copyright notices are retained in all copies and that this
 * notice is included verbatim in any distributions.  No written agreement,
 * license, or royalty fee is required for any of the authorized uses.
 * Modifications to this software may be copyrighted by their authors
 * and need not follow the licensing terms described here, provided that
 * the new terms are clearly indicated on the first page of each file where
 * they apply.
 */
OUTPUT_FORMAT("elf32-littleriscv")
OUTPUT_ARCH(riscv)

/* Linker script to place sections and symbol values. Should be used together
 * with other linker script that defines memory regions FLASH and RAM.
 * It references following symbols, which must be defined in code:
 *   Reset_Handler : Entry of reset handler
 *
 * It defines following symbols, which code can use without definition:
 *   _etext, _edata and _end
 *
 *   __init_start
 *   __init_end
 *   __text_start
 *   __CTOR_LIST__
 *   __CTOR_END__
 *   __DTOR_LIST__
 *   __DTOR_END__
 *   __exidx_start
 *   __exidx_end
 *   _etext
 *   etext
 *   __data_load_start
 *   __data_start
 *   __preinit_array_start
 *   __preinit_array_end
 *   __data_end
 *   __sdata_start
 *   __sdata_end
 *   __fast_start
 *   __fast_end
 *   _edata
 *   edata
 *   __init_array_start
 *   __init_array_end
 *   __fini_array_start
 *   __fini_array_end
 *   __bss_start
 *   __bss_end
 *   _end
 *   end
 *   __global_pointer$
 *   __HeapBase
 *   __HeapLimit
 *   __StackLimit
 *   __StackTop
 *   __stack
 */
ENTRY(Reset_Handler)


SECTIONS
{
    /* Set the location counter to start of FLASH */
    . = ALIGN(ORIGIN(FLASH), 4);

    /* executable instructions that contribute to the process initialization code */
    .init :
    {
        __init_start = .;
        KEEP(*(.init))
        *(.init*)
    } > FLASH
    __init_size = SIZEOF(.init);
    __init_end = __init_start + __init_size;
    ASSERT(__init_start == __init_end || (__init_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .init is too large to fit in FLASH memory segment")

    /* Exception return hardcoded at offset 0x01F0 */
    ASSERT(__init_end <= (__init_start + 0x01F0), "error: .init is too large. It must be less than 0x01F0 bytes")
    .isr_return __init_start + 0x01F0 :
    {
        KEEP(*(.isr_return))
    } > FLASH

    . = ALIGN(4);
    __vectors_start = .;
    .vectors : {
        /* Vector table */
        KEEP(*(.isr_vector))
        KEEP(*(.vectors))
    } > FLASH
    __vectors_size = SIZEOF(.vectors);
    __vectors_end = __vectors_start + __vectors_size;
    ASSERT(__vectors_start == __vectors_end || (__vectors_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .vectors is too large to fit in FLASH memory segment")

    /* .ctors section (global constructor function pointers) */
    . = ALIGN(4);
    .ctors :
    {
        __ctors_start = .;
        __CTOR_LIST__ = .;
        KEEP (*crtbegin*.o(.ctors))
        KEEP (*(EXCLUDE_FILE (*crtend*.o ) .ctors))
        KEEP (*(SORT(.ctors.*)))
        KEEP (*(.ctors))
        __CTOR_END__ = .;
    } > FLASH
    __ctors_size  = SIZEOF(.ctors);
    __ctors_end   = __ctors_start + __ctors_size;
    ASSERT(__ctors_start == __ctors_end || (__ctors_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .ctors is too large to fit in FLASH memory segment")


    /* .detors section (global destructor function pointers) */
    . = ALIGN(4);
    .dtors :
    {
        __dtors_start = .;
        __DTOR_LIST__ = .;
        KEEP (*crtbegin*.o(.dtors))
        KEEP (*(EXCLUDE_FILE (*crtend*.o ) .dtors))
        KEEP (*(SORT(.dtors.*)))
        KEEP (*(.dtors))
        __DTOR_END__ = .;
    } > FLASH
    __dtors_size  = SIZEOF(.dtors);
    __dtors_end   = __dtors_start + __dtors_size;
    ASSERT(__dtors_start == __dtors_end || (__dtors_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .dtors is too large to fit in FLASH memory segment")


    . = ALIGN(4);
    __text_start = .;
    .text :
    {
        /* text: executable instructions of a program. */
        *(.text*)

        /* executable instructions that contribute to the process termination code */
        KEEP(*(.fini))

        /* DWARF-based unwinding - exception handling. C++ stuff (disable with no-asynchronous-unwind-tables)*/
        . = ALIGN(4);
        KEEP(*(.eh_frame*))

        /* section contains a pointer to the .eh_frame section which is */
        /* accessible to the runtime support code of a C++ application  */
        . = ALIGN(4);
        *(.eh_frame_hdr)

        /* hash tables */
        . = ALIGN(4);
        *(.hash)
        *(.gnu.hash)

        . = ALIGN(4);
        *(.gnu_extab* .gnu.linkonce.extab.*)

        . = ALIGN(4);
        __exidx_start = .;
        *(.gnu_exidx* .gnu.linkonce.exidx.*)
        . = ALIGN(4);
        __exidx_end = .;
    } > FLASH
    __text_size = SIZEOF(.text);
    __text_end = __text_start + __text_size;
    ASSERT(__text_start == __text_end || (__text_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .text is too large to fit in FLASH memory segment")

    /* End of text */
    . = ALIGN(4);
    _etext = .; PROVIDE(etext = .);


    /* Define start of all sections that needs to be loaded on boot */
    . = ALIGN(4);
    __all_data_load_start = .;

    /* .data section */
    __data_load_start = .;
    .data : AT(__data_load_start){
        . = ALIGN(4);
        __data_start = .;
        *(vtable)
        *(.data* .gnu.linkonce.d.*)

        /* preinit data */
        . = ALIGN(4);
        PROVIDE_HIDDEN (__preinit_array_start = .);
        KEEP(*(.preinit_array))
        PROVIDE_HIDDEN (__preinit_array_end = .);

        /* init data */
        . = ALIGN(4);
        PROVIDE_HIDDEN (__init_array_start = .);
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array))
        PROVIDE_HIDDEN (__init_array_end = .);

        . = ALIGN(4);
        KEEP(*(.jcr*))
    } > RAM
    __data_size       = SIZEOF(.data);
    __data_end        = __data_start + __data_size;
    __data_load_end   = __data_load_start + __data_size;
    ASSERT(__data_load_start == __data_load_end || (__data_load_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .data is too large to fit in FLASH memory segment")
    ASSERT(__data_start == __data_end || (__data_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .data is too large to fit in RAM memory segment")


    /* .rodata section */
    . = ALIGN(4);
    __rodata_load_start = ALIGN(__data_load_end, 4);
    .rodata : AT(__rodata_load_start){
        . = ALIGN(4);
        __rodata_start = .;
        *(.rodata*)
        *(.srodata .srodata.*)
    } > RAM
    __rodata_size       = SIZEOF(.rodata);
    __rodata_end        = __rodata_start + __rodata_size;
    __rodata_load_end   = __rodata_load_start + __rodata_size;
    ASSERT(__rodata_load_start == __rodata_load_end || (__rodata_load_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .rodata is too large to fit in FLASH memory segment")
    ASSERT(__rodata_start == __rodata_end || (__rodata_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .rodata is too large to fit in RAM memory segment")


    /* .sdata section */
    . = ALIGN(4);
    __sdata_load_start = ALIGN(__rodata_load_end, 4);
    .sdata : AT(__sdata_load_start){
        . = ALIGN(4);
        __sdata_start = .;
        *(.sdata .sdata.* .gnu.linkonce.s.*)
        *(.sdata2 .sdata2.* .gnu.linkonce.s2.*)
    } > RAM
    __sdata_size       = SIZEOF(.sdata);
    __sdata_end        = __sdata_start + __sdata_size;
    __sdata_load_end   = __sdata_load_start + __sdata_size;
    ASSERT(__sdata_load_start == __sdata_load_end || (__sdata_load_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .sdata is too large to fit in FLASH memory segment")
    ASSERT(__sdata_start == __sdata_end || (__sdata_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .sdata is too large to fit in RAM memory segment")


    /* .tdata section */
    . = ALIGN(4);
    __tdata_load_start = ALIGN(__sdata_load_end, 4);
    .tdata : AT(__tdata_load_start){
        . = ALIGN(4);
        __tdata_start = .;
        *(.tdata .tdata.* .gnu.linkonce.td.*)
        *(.stdata .stdata.*)
    } > RAM
    __tdata_size       = SIZEOF(.tdata);
    __tdata_end        = __tdata_start + __tdata_size;
    __tdata_load_end   = __tdata_load_start + __tdata_size;
    ASSERT(__tdata_load_start == __tdata_load_end || (__tdata_load_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .tdata is too large to fit in FLASH memory segment")
    ASSERT(__tdata_start == __tdata_end || (__tdata_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .tdata is too large to fit in RAM memory segment")


    /* .fast section */
    . = ALIGN(4);
    __fast_load_start = ALIGN(__tdata_load_end, 4);
    .fast : AT(__fast_load_start){
        . = ALIGN(4);
        __fast_start = .;
        *(.fast .fast.*)
        *(.fastcode .fastcode.*)
        *(.fastdata .fastdata.*)
        *(.ramcode*)
    } > RAM
    __fast_size       = SIZEOF(.fast);
    __fast_end        = __fast_start + __fast_size;
    __fast_load_end   = __fast_load_start + __fast_size;
    ASSERT(__fast_load_start == __fast_load_end || (__fast_load_end - ORIGIN(FLASH)) <= LENGTH(FLASH) , "error: .fast is too large to fit in FLASH memory segment")
    ASSERT(__fast_start == __fast_end || (__fast_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .tdata is too large to fit in RAM memory segment")

    /* end of data in RAM */
    . = ALIGN(4);
    _edata = .; PROVIDE (edata = .);

    /* .bss section */
    . = ALIGN(4);
    __bss_start = .;
    .bss :{
        *(.bss* .gnu.linkonce.b.*)
        *(.noinit .noinit.*)
        *(.dynbss)
        *(COMMON)
    } > RAM
    __bss_size         = SIZEOF(.bss);
    __bss_end          = __bss_start + __bss_size;
    ASSERT(__bss_start == __bss_end || (__bss_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .bss is too large to fit in RAM memory segment")


    /* .sbss section */
    . = ALIGN(4);
    __sbss_start = .;
    .sbss :{
        *(.sbss .sbss.* .gnu.linkonce.sb.*)
        *(.sbss2 .sbss2.* .gnu.linkonce.sb2.*)
        *(.dynsbss)
    } > RAM
    __sbss_size         = SIZEOF(.sbss);
    __sbss_end          = __sbss_start + __sbss_size;
    ASSERT(__sbss_start == __sbss_end || (__sbss_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .sbss is too large to fit in RAM memory segment")


    /* .tbss section */
    . = ALIGN(4);
    __tbss_start = .;
    .tbss :{
        . = ALIGN(4);
        *(.tbss .tbss.* .gnu.linkonce.tb.*)
        *(.tcommon)
        *(.stbss .stbss.*)
    } > RAM
    __tbss_size         = SIZEOF(.tbss);
    __tbss_end          = __tbss_start + __tbss_size;
    ASSERT(__tbss_start == __tbss_end || (__tbss_end - ORIGIN(RAM)) <= LENGTH(RAM) , "error: .tbss is too large to fit in RAM memory segment")

    . = ALIGN(4);
    . = SEGMENT_START("ldata-segment", .);


    /* Set global pointer. GP lookup covers a 4K block +/- 2K from set address
     * Prioritize .sdata section for performance, but cover .data if possible  */
    __global_pointer$ = MIN(__sdata_start + 0x800,
		            MAX(__data_start + 0x800, __tbss_end - 0x800));

    . = ALIGN(4);
    __heap_start = .;
    .heap (COPY):
    {
        __HeapBase = .;
        _end = .; PROVIDE(end = .);
        KEEP(*(.heap*))
        __HeapLimit = .;
    } > RAM
    __heap_end = .;

    /* .stack_dummy section doesn't contains any symbols. It is only
     * used for linker to calculate size of stack sections, and assign
     * values to stack symbols later */
    .stack_dummy (COPY):
    {
        KEEP(*(.stack*))
    } > RAM

    /* Set stack top to end of RAM, and stack limit move down by
     * size of stack_dummy section */
    __stack_end = ORIGIN(RAM) + LENGTH(RAM);

    __StackTop = ORIGIN(RAM) + LENGTH(RAM);
    __StackLimit = __StackTop - SIZEOF(.stack_dummy);
    PROVIDE(__stack = __StackTop);

    /* Check if data + heap + stack exceeds RAM limit */
    ASSERT(__StackLimit >= __HeapLimit, "region RAM overflowed with stack")

    /* Check if text sections + data exceeds FLASH limit */
    DataInitFlashUsed = __bss_start - __data_start;
    CodeFlashUsed = _etext - ORIGIN(FLASH);
    TotalFlashUsed = CodeFlashUsed + DataInitFlashUsed;
    ASSERT(TotalFlashUsed <= LENGTH(FLASH), "region FLASH overflowed with .data and user data")
}

