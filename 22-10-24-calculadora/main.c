#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int calcSub(int x, int y);

int main()
{
  int a, b, resp;
  a = 9;
  b = 10;

  resp = calcSoma(a, b);
  printf("Resultado da soma = %i\n", resp);
  resp = calcSub(a, b);
  printf("Resultado da subtração = %i\n", resp);
  return 0;
}