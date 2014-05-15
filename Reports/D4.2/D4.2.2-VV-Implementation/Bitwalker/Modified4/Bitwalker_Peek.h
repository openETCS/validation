#include "Bitwalker.h"

/*@
  requires readable_bitstream:
           \valid_read(Bitstream + (0..BitstreamSize-1));
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
    ensures no_overflow_on_result: \result < (1 << Length);

  complete behaviors;
  disjoint behaviors;
*/
uint64_t Bitwalker_Peek(unsigned int Start,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSize);
