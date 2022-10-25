#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int calcSub(int x, int y);

int main()
{
  int a, b, resp;
  float resp2;
  a = 9;
  b = 10;

  resp = calcSoma(a, b);
  printf("Resultado da soma = %i\n", resp);
  resp = calcSub(a, b);
  printf("Resultado da subtração = %i\n", resp);
  resp = calcMulti(a, b);
  printf("Resultado da multiplicação = %i\n", resp);
  resp2 = calcDiv(a, b);
  printf("Resultado da divisão = %.2f\n", resp2);
  return 0;
}
