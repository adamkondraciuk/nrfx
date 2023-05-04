/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x40000 /* M0 has no vector table and must have start address 0 (non-secure) */
  FLASH1 (rx) : ORIGIN = 0x2F840000, LENGTH = 0x4000 /* OTP0 */
  EXTFLASH (rx) : ORIGIN = 0x70000000, LENGTH = 0x20000000
  RAM (rwx) : ORIGIN = 0x26000000, LENGTH = 0x1C000 /* M0 (non-secure) */
  RAM1 (rwx) : ORIGIN = 0x26070000, LENGTH = 0x2000 /* DATA (non-secure) */
  RAM2 (rwx) : ORIGIN = 0x26080000, LENGTH = 0x2000 /* IPC (non-secure) */
  RAM3 (rwx) : ORIGIN = 0x26050000, LENGTH = 0x1000 /* TXDSA (non-secure) */
  RAM4 (rwx) : ORIGIN = 0x26060000, LENGTH = 0x1000 /* RXDSA (non-secure) */
  RAM5 (rwx) : ORIGIN = 0x25100000, LENGTH = 0x40000 /* LS_RAM0 (non-secure) */
  RAM6 (rwx) : ORIGIN = 0x25140000, LENGTH = 0x20000 /* LS_RAM1 (non-secure) */
  RAM7 (rwx) : ORIGIN = 0x25160000, LENGTH = 0x20000 /* DSP_HS_RAM (non-secure) */
  RAM8 (rwx) : ORIGIN = 0x2F000000, LENGTH = 0x80000 /* GRAM00 */
  RAM9 (rwx) : ORIGIN = 0x2F080000, LENGTH = 0x60000 /* GRAM01 */
  RAM10 (rwx) : ORIGIN = 0x2F880000, LENGTH = 0x10000 /* GRAM20 */
  RAM11 (rwx) : ORIGIN = 0x2F890000, LENGTH = 0x8000 /* GRAM21 */
  RAM12 (rwx) : ORIGIN = 0x2FC00000, LENGTH = 0x4000 /* GRAM30 (low-speed) */
  RAM13 (rwx) : ORIGIN = 0x2FC04000, LENGTH = 0x4000 /* GRAM31 (low-speed) */
}


INCLUDE "nrf_common.ld"
