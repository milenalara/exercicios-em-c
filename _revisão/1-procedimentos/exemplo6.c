#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma(int *a, int b, int *result);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b, result;
  a = 10;
  b = 7;
  soma(&a, b, &result);                   // vai alterar o valor de a e de result
  printf("%i + %i = %i\n", a, b, result); // vai imprimir 11 + 7 = 18
  return 0;
}

void soma(int *a, int b, int *result)
{
  *a = *a + 1;
  *result = *a + b;
}