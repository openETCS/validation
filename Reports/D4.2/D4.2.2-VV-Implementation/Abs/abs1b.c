
#include <limits.h>

/*@
    ensures 0 <= x           ==>  \result ==  x;
    ensures 0 > x > INT_MIN  ==>  \result == -x;
    ensures x == INT_MIN     ==>  \result == INT_MIN;
*/
int abs_int(int x)
{
    return (x >= 0) ? x : -x;
}

