#include <stdio.h>
#include <limits.h>

extern int __e_acsl_abs_int(int);

int a = 0;

void print_abs(int x)
{
  printf("%12d\t\t%12d\n", x, __e_acsl_abs_int(x));
}

int main()
{
  printf("\n");
  print_abs(0);

  printf("\n");
  print_abs(1);
  print_abs(10);
  print_abs(INT_MAX);

  printf("\n");
  print_abs(-1);
  print_abs(-10);
  print_abs(INT_MIN);
}

