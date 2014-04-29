
#ifndef POKE_FINISH_H
#define POKE_FINISH_H

#include "Locals.h"
#include "limits.h"

/*@
  requires  \valid(Locals);

  assigns   \nothing;

  ensures \result == Locals->CurrentBitposition;
*/


int Bitwalker_IncrementalWalker_Poke_Finish(
  T_Bitwalker_Incremental_Locals *Locals);

#endif // POKE_FINISH_H
