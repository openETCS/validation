
#include "limits.h"


int foo(int a)
{
    if (a >= INT_MAX/2)
        return INT_MAX;
    else
	return a;
}

