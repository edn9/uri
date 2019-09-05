#include <stdio.h>

int main()
{
  double r, res, pi = 3.14159;
  scanf("%le", &r);
  res = (4 / 3.0) * pi * r * r * r;
  printf("VOLUME = %.3f\n", res);
  return 0;
}