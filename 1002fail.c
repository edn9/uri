#include <stdio.h>
#include <math.h>

int main()
{
  double pi = 3.14159, raio, r, area;
  printf("Insira o valor raio: \n");
  scanf("%ld", &r);
  raio = pow(r, 2);
  area = pi * raio;

  printf("A=%.4f\n", area);
  return 0;
}
//gcc -Wall 1002.c -o 1002 -lm