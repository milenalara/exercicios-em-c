#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma();

int result;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b;
  a = 10;
  b = 7;
  soma(&a, b);                            // vai alterar o valor de a
  printf("%i + %i = %i\n", a, b, result); // vai imprimir 11 + 7 = 18
  return 0;
}

void soma(int *a, int b)
{
  *a = *a + 1;
  result = *a + b;
}