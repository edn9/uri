#include <stdio.h>

int main()
{
  int km;
  float lt, res;
  scanf("%d %f", &km, &lt);
  res = km / lt;
  printf("%.3f km/l\n", res);
  return 0;
}