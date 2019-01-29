/*$$$LICENCE_NORDIC_STANDARD<2012>$$$*/

#include <nrfx.h>
#include "nrf_ecb.h"
#include <string.h>

static uint8_t  ecb_data[48];   ///< ECB data structure for RNG peripheral to access.
static uint8_t* ecb_key;        ///< Key:        Starts at ecb_data
static uint8_t* ecb_cleartext;  ///< Cleartext:  Starts at ecb_data + 16 bytes.
static uint8_t* ecb_ciphertext; ///< Ciphertext: Starts at ecb_data + 32 bytes.

bool nrf_ecb_init(void)
{
  ecb_key = ecb_data;
  ecb_cleartext  = ecb_data + 16;
  ecb_ciphertext = ecb_data + 32;

  NRF_ECB->ECBDATAPTR = (uint32_t)ecb_data;
  return true;
}


bool nrf_ecb_crypt(uint8_t * dest_buf, const uint8_t * src_buf)
{
   uint32_t counter = 0x1000000;
   if (src_buf != ecb_cleartext)
   {
     memcpy(ecb_cleartext,src_buf,16);
   }
   NRF_ECB->EVENTS_ENDECB = 0;
   NRF_ECB->TASKS_STARTECB = 1;
   while (NRF_ECB->EVENTS_ENDECB == 0)
   {
    counter--;
    if (counter == 0)
    {
      return false;
    }
   }
   NRF_ECB->EVENTS_ENDECB = 0;
   if (dest_buf != ecb_ciphertext)
   {
     memcpy(dest_buf,ecb_ciphertext,16);
   }
   return true;
}

void nrf_ecb_set_key(const uint8_t * key)
{
  memcpy(ecb_key,key,16);
}


