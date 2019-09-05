#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, b, c, res, res2;
  scanf("%d %d %d", &a, &b, &c);
  res = (a + b + abs(a - b)) / 2;
  res2 = (res + c + abs(res - c)) / 2;
  printf("%d eh o maior\n", res2);
  return 0;
}
