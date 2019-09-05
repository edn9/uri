#include <stdio.h>

int main()
{
  char name;
  double sal, tv, res;
  scanf("%s %le %le", &name, &sal, &tv);
  res = (tv * 15 / 100) + sal;
  printf("TOTAL = R$ %.2f\n", res);
  return 0;
}