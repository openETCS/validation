
#ifndef PokeNext_included
#define PokeNext_included

#include "Locals.h"
#include "ValidIncrementalLocals.h"

/*@
  requires \valid(Locals);
  requires Valid(Locals);
  requires 0 <= Length <= 63;
  requires Locals->CurrentBitposition + Length <= UINT_MAX;

  assigns  Locals->Bitstream[0..Locals->Length - 1];

  behavior  invalid_bit_sequence:
    assumes (Locals->CurrentBitposition + Length)  > 8 * Locals->Length;
    assigns \nothing;
    ensures \result == -1;

  behavior  value_too_big:
    assumes (1 << Length) <= Value &&
            (Locals->CurrentBitposition + Length) <= 8 * Locals->Length;
    assigns \nothing;
    ensures \result == -2;

  behavior  normal_case:
    assumes Value < (1 << Length) &&
            (Locals->CurrentBitposition + Length) <= 8 * Locals->Length;
    assigns  Locals->Bitstream[0..Locals->Length - 1];
    ensures \result == 0;

  complete behaviors;
  disjoint behaviors;
*/
int  Bitwalker_IncrementalWalker_Poke_Next(
  T_Bitwalker_Incremental_Locals*  Locals,
  unsigned int                     Length,
  uint64_t                         Value);

#endif

