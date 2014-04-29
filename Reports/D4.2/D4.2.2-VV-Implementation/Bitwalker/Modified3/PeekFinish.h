#ifndef PEEK_FINISH_H
#define PEEK_FINISH_H

#include "Locals.h"
#include "limits.h"

/*@
  requires  \valid(Locals);

  assigns   \nothing;

  ensures \result == Locals->CurrentBitposition;
*/

int Bitwalker_IncrementalWalker_Peek_Finish(
        T_Bitwalker_Incremental_Locals  *Locals);


#endif // PEEK_FINISH_H
