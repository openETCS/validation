#include "Bitwalker.h"
#include "extract_bit.h"

uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes)
{
  if (((Startposition + Length - 1) / 8) >= BitstreamSizeInBytes)
    return 0;	// error: index out of range

  uint64_t retval = 0;

  for (unsigned int i = Startposition; i < Startposition + Length; i++)
  {
        uint8_t val = Bitstream[i / 8];
        unsigned int k  = 0x07-(i & 0x07);
        uint8_t bit_as_byte = (val >> k) & 0x01;
        retval = 2 * retval + bit_as_byte;
  }

  return retval;
}
