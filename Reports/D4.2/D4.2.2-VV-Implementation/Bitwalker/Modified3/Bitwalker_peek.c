#include "Bitwalker.h"

unsigned int inverse_modulo(unsigned int n, unsigned int d)
{
    return d - 1 - (n % d);
}

uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes)
{
  if ((Startposition + Length)  > 8 * BitstreamSizeInBytes)
    return 0;	// error: index out of range

  uint64_t retval = 0;

  for (unsigned int i = Startposition; i < Startposition + Length; i++)
  {
        unsigned int bit_index  = inverse_modulo(i, 8);
        uint8_t bit_as_byte = (Bitstream[i / 8] >> bit_index) & 1;
        retval = 2 * retval + bit_as_byte;
  }

  return retval;
}

