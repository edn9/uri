#include <stdio.h>

int main()
{
  int codPeca1, numPeca1, codPeca2, numPeca2;
  float valU1, valU2, res;
  scanf("%d %d %f", &codPeca1, &numPeca1, &valU1);
  scanf("%d %d %f", &codPeca2, &numPeca2, &valU2);
  res = ((numPeca1 * valU1) + (numPeca2 * valU2));
  printf("VALOR A PAGAR: R$ %.2f\n", res);
  return 0;
}