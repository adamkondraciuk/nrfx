/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x10000000, LENGTH = 0x100000 /* Inside global RRAM0 (secure) */
  FLASH1 (rx) : ORIGIN = 0x00000000, LENGTH = 0x100000 /* Inside global RRAM0 (non-secure) */
  FLASH2 (rx) : ORIGIN = 0x10000000, LENGTH = 0x100000 /* RRAM00 (secure) */
  FLASH3 (rx) : ORIGIN = 0x00000000, LENGTH = 0x100000 /* RRAM00 (non-secure) */
  EXTFLASH (rx) : ORIGIN = 0x70000000, LENGTH = 0x20000000
  RAM (rwx) : ORIGIN = 0x30000000, LENGTH = 0x40000 /* (secure) */
  RAM1 (rwx) : ORIGIN = 0x20000000, LENGTH = 0x40000 /* (non-secure) */
  RAM2 (rwx) : ORIGIN = 0x30000000, LENGTH = 0x400000 /* GRAM00 (secure) */
  RAM3 (rwx) : ORIGIN = 0x20000000, LENGTH = 0x400000 /* GRAM00 (non-secure) */
}


INCLUDE "nrf_common.ld"
