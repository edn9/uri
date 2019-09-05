#include <stdio.h>
#include <math.h>

int main()
{
  float x1, y1, x2, y2, res;
  scanf("%f %f\n%f %f", &x1, &y1, &x2, &y2);
  res = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
  printf("%.4f\n", res);
  return 0;
}
//gcc -Wall 1015.c -o 1015 -lm