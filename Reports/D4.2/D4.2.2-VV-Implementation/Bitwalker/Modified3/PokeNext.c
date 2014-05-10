
#include "PokeNext.h"
#include "Poke.h"

int Bitwalker_IncrementalWalker_Poke_Next(
  T_Bitwalker_Incremental_Locals*  Locals,
  unsigned int                     Length,
  uint64_t                         Value)
{
  // plausibility check is done when reading the bits
  int retval = Bitwalker_Poke(Locals->CurrentBitposition,
                              Length,
                              Locals->Bitstream,
                              Locals->Length,
                              Value);
  Locals->CurrentBitposition += Length;
  return retval;
}

