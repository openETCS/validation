#include "Bitwalker.h"


/*@
  requires valid_bitstream: \valid(Bitstream + (0..BitstreamSize-1));
  requires valid_length: 1 <= Length < 64;
  requires no_overflow_1: Start + Length < UINT_MAX;
  requires no_overflow_2: 8 * BitstreamSize < UINT_MAX;

  assigns \nothing;

  behavior  bit_sequence_too_long:
    assumes (Start + Length)  > 8 * BitstreamSize;
    assigns \nothing;
    ensures \result == 0;

  behavior  normal_case:
    assumes (Start + Length) <= 8 * BitstreamSize;
    assigns \nothing;
    ensures no_overflow_on_result: \result <= (1 << Length);

  complete behaviors;
  disjoint behaviors;

*/
uint64_t Bitwalker_Peek(unsigned int Start,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSize)
{
  if ((Start + Length)  > 8 * BitstreamSize)
    return 0;	// error: index out of range

  uint64_t retval = 0;

  /*@
    loop invariant 0 <= i <= Length;
    loop invariant 0 <= retval < 1 << i;
    loop assigns i, retval;
    loop variant Length - i;
  */
  for (unsigned int i = 0; i < Length; i++)
  {
    unsigned int pos = Start + i;
    unsigned int byte_index = pos / 8;
    unsigned int bit_index  = inverse_modulo(pos, 8); 

    // treat as unsigned int for Frama-C
    unsigned int shift = Bitstream[byte_index] >> bit_index;
    unsigned int bit_as_byte = shift & 1;
    //@ assert bit_as_byte == 0 || bit_as_byte == 1;

    retval = 2 * retval + bit_as_byte;
  }

  return retval;
}

