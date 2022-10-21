/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x1E1A0000, LENGTH = 0x20000 /* Inside global MRAM0 (secure) */
  FLASH1 (rx) : ORIGIN = 0xE1A0000, LENGTH = 0x20000 /* Inside global MRAM0 (non-secure) */
  FLASH2 (rx) : ORIGIN = 0x10200000, LENGTH = 0x200000 /* MRAM10 (secure) */
  FLASH3 (rx) : ORIGIN = 0x200000, LENGTH = 0x200000 /* MRAM10 (non-secure) */
  FLASH4 (rx) : ORIGIN = 0x1E200000, LENGTH = 0x200000 /* MRAM11 (secure) */
  FLASH5 (rx) : ORIGIN = 0xE200000, LENGTH = 0x200000 /* MRAM11 (non-secure) */
  FLASH6 (rx) : ORIGIN = 0x3F840000, LENGTH = 0x2000 /* OTP0 (secure) */
  FLASH7 (rx) : ORIGIN = 0x2F840000, LENGTH = 0x2000 /* OTP0 (non-secure) */
  EXTFLASH (rx) : ORIGIN = 0x70000000, LENGTH = 0x20000000
  RAM (rwx) : ORIGIN = 0x33040000, LENGTH = 0x8000 /* Inside network RAM10 (secure) */
  RAM1 (rwx) : ORIGIN = 0x23040000, LENGTH = 0x8000 /* Inside network RAM10 (non-secure) */
  RAM2 (rwx) : ORIGIN = 0x3F000000, LENGTH = 0x80000 /* GRAM00 (secure) */
  RAM3 (rwx) : ORIGIN = 0x2F000000, LENGTH = 0x80000 /* GRAM00 (non-secure) */
  RAM4 (rwx) : ORIGIN = 0x3F080000, LENGTH = 0x80000 /* GRAM01 (secure) */
  RAM5 (rwx) : ORIGIN = 0x2F080000, LENGTH = 0x80000 /* GRAM01 (non-secure) */
  RAM6 (rwx) : ORIGIN = 0x3F100000, LENGTH = 0x60000 /* GRAM02 (secure) */
  RAM7 (rwx) : ORIGIN = 0x2F100000, LENGTH = 0x60000 /* GRAM02 (non-secure) */
  RAM8 (rwx) : ORIGIN = 0x3F880000, LENGTH = 0x10000 /* GRAM20 (secure) */
  RAM9 (rwx) : ORIGIN = 0x2F880000, LENGTH = 0x10000 /* GRAM20 (non-secure) */
  RAM10 (rwx) : ORIGIN = 0x3F890000, LENGTH = 0x8000 /* GRAM21 (secure) */
  RAM11 (rwx) : ORIGIN = 0x2F890000, LENGTH = 0x8000 /* GRAM21 (non-secure) */
  RAM12 (rwx) : ORIGIN = 0x3FC00000, LENGTH = 0x4000 /* GRAM30 (low-speed) (secure) */
  RAM13 (rwx) : ORIGIN = 0x2FC00000, LENGTH = 0x4000 /* GRAM30 (low-speed) (non-secure) */
  RAM14 (rwx) : ORIGIN = 0x3FC04000, LENGTH = 0x4000 /* GRAM31 (low-speed) (secure) */
  RAM15 (rwx) : ORIGIN = 0x2FC04000, LENGTH = 0x4000 /* GRAM31 (low-speed) (non-secure) */
}


INCLUDE "nrf_common_riscv.ld"
