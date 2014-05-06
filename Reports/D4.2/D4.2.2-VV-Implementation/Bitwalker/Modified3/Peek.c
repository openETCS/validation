#include "Peek.h"

uint64_t Bitwalker_Peek(unsigned int Start,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSize)
{
  if ((Start + Length)  > 8 * BitstreamSize)
    return 0;	// error: invalid_bit_sequence

  //@ assert UINT64_MAX == (1 << 64) -1;
  uint64_t retval = 0;

  /*@
    loop invariant 0 <= i <= Length;
    loop invariant 0 <= retval < (1 << i);
    loop assigns i, retval;
    loop variant Length - i;
  */
  for (unsigned int i = 0; i < Length; i++)
  {
    unsigned int pos = Start + i;
    unsigned int byte_index = pos / 8;
    unsigned int bit_index  = inverse_modulo(pos, 8);

    // treat as unsigned int for Frama-C
    unsigned int shifted = Bitstream[byte_index] >> bit_index;
    unsigned int bit_as_byte = shifted & 1;
    //@ assert bit_as_byte == 0 || bit_as_byte == 1;

    retval = 2 * retval + bit_as_byte;
  }

  return retval;
}

