#include "Bitwalker.h"

/*@
   requires valid_bitstream: \valid(Bitstream + (0..BitstreamSize-1));
   requires valid_length: 1 <= Length < 64;
   requires no_overflow_1: Start + Length < UINT_MAX;
   requires no_overflow_2: 8 * BitstreamSize < UINT_MAX;

   assigns Bitstream[0..BitstreamSize-1];

   behavior  bit_sequence_too_long:
     assumes (Start + Length)  > 8 * BitstreamSize;
     assigns \nothing;
     ensures \result == -1;

   behavior  value_too_big:
     assumes (1 << Length) <= Value && (Start + Length) <= 8 * BitstreamSize;
     assigns \nothing;
     ensures \result == -2;

   behavior  normal_case:
     assumes Value < (1 << Length) && (Start + Length) <= 8 * BitstreamSize;
     assigns Bitstream[Start/8..(Start + Length)/8];

   complete behaviors;
   disjoint behaviors;
*/
int Bitwalker_Poke (unsigned int Start,
                    unsigned int Length,
                    uint8_t Bitstream[],
                    unsigned int BitstreamSize,
                    uint64_t Value)
{
  // plausibility check: is last byte in range
  if ((Start + Length)  > 8 * BitstreamSize)
  {
    return -1;	// error: index out of range
  }

  // plausibility check: is value in range
  const uint64_t MaxValue = (((uint64_t) 1) << Length) - 1;

  if (MaxValue < Value)
  {
    return -2;  // error: value to big for bit field
  }

  // Everything ok, we can iterate bitwise from left to right
  /*@
    loop invariant 0 <= i <= Length;
    loop assigns i, Value, Bitstream[0..BitstreamSize-1];
    loop variant i;
  */
  for (unsigned int i = Length; i > 0; i--)
  {
    unsigned int pos = Start + i - 1;
    uint8_t mask = 1 <<  inverse_modulo(pos, 8);

    if ((Value % 2) == 0)
    {
      Bitstream[pos / 8] &= ~mask;
    }
    else
    {
      Bitstream[pos / 8] |=  mask;
    }

    Value /= 2;
  }

  // assert Value == 0; // this should hold here

  return 0;
}


