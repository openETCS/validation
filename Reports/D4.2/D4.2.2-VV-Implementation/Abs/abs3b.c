
// Forbid side effects with assigns \nothing.

#include <limits.h>

extern int a;

/*@
    requires x > INT_MIN;

    assigns \nothing;

    ensures 0 <= x ==> \result ==  x;
    ensures 0 >  x ==> \result == -x;
*/
int abs_int(int x)
{
  a = x;
  return (x >= 0) ? x : -x;
}



