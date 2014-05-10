
#ifndef PeekNext_included
#define PeekNext_included

#include "Locals.h"
#include "ValidIncrementalLocals.h"

/*@
  requires \valid(Locals);
  requires Valid(Locals);
  requires 0 <= Length <= 64;
  requires Locals->CurrentBitposition + Length <= UINT_MAX;
  requires Locals->CurrentBitposition + Length <= 8 * Locals->Length;

  assigns  Locals->CurrentBitposition;

  ensures  \result < (1 << Length);
*/
uint64_t Bitwalker_IncrementalWalker_Peek_Next(
  T_Bitwalker_Incremental_Locals*  Locals,
  unsigned int                     Length);

#endif

