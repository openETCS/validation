#include "Bitwalker.h"

/*@
  requires valid_bitstream: \valid(Bitstream+(0..BitstreamSize-1));
  requires valid_length: 0 <= Length < 64;
  requires no_overflow_1: Start + Length < UINT_MAX;
  requires no_overflow_2: 8 * BitstreamSize < UINT_MAX;

  assigns \nothing;

  behavior  invalid_bit_sequence:
    assumes (Start + Length)  > 8 * BitstreamSize;
    assigns \nothing;
    ensures \result == 0;

  behavior  normal_case:
    assumes (Start + Length) <= 8 * BitstreamSize;
    assigns \nothing;
    ensures no_overflow_on_result: \result <= (1 << Length) - 1;

  complete behaviors;
  disjoint behaviors;
*/
uint64_t Bitwalker_Peek(unsigned int Start,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSize);
