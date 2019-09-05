#include <stdio.h>

int main()
{
  int h, velM;
  float res;
  scanf("%d %d", &h, &velM);
  res = velM * h / 12.0;
  printf("%.3f\n", res);
  return 0;
}