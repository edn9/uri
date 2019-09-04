#include <stdio.h>

int main()
{
  int id, ht;
  float sal, res;
  scanf("%d %d %f", &id, &ht, &sal);
  res = ht * sal;
  printf("NUMBER = %d\nSALARY = U$ %.2f\n", id, res);
  return 0;
}