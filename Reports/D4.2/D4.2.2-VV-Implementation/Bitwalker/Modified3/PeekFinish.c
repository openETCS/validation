#include "PeekFinish.h"

/*unsigned int Bitwalker_IncrementalWalker_Peek_Finish(*/
int Bitwalker_IncrementalWalker_Peek_Finish(
  T_Bitwalker_Incremental_Locals  *Locals)
{
  return Locals->CurrentBitposition;
}
