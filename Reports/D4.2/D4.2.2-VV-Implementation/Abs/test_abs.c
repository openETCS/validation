
#include <stdio.h>
#include <limits.h>

extern int abs_int(int);

void print_abs(int x)
{
  printf("%d\t\t%d\n", x, abs_int(x));
}

int main()
{
  print_abs(0);

  print_abs(1);
  print_abs(10);
  print_abs(INT_MAX);

  print_abs(-1);
  print_abs(-10);
  print_abs(INT_MIN);
}
