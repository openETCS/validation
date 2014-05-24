

#include "abs3a2.c"

int a = 0;  // for potential side effects

void print_abs(int x)
{
  int y = abs_int(x);
}

int main()
{
  //printf("\n");
  print_abs(0);

  //printf("\n");
  print_abs(1);
  print_abs(10);
  print_abs(INT_MAX);

  //printf("\n");
  print_abs(-1);
  print_abs(-10);
  print_abs(INT_MIN);
}

