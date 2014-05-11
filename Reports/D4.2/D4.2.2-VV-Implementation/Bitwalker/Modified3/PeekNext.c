
#include "PeekNext.h"
#include "Peek.h"

uint64_t Bitwalker_IncrementalWalker_Peek_Next(
  T_Bitwalker_Incremental_Locals *Locals,
  unsigned int Length)
{
  // plausibility check is done when reading the bits
  uint64_t retval = Bitwalker_Peek(Locals->CurrentBitposition,
                                   Length,
                                   Locals->Bitstream,
                                   Locals->Length);
  Locals->CurrentBitposition += Length;
  return retval;
}

