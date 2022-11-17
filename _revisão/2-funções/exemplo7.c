#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// soma() agora é uma função, porque retorna valor
int soma(int *a, int b);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b, result;
  a = 10;
  b = 7;
  result = soma(&a, b); // retorna 18
  printf("%i + %i = %i\n", a, b, result);
  return 0;
}

int soma(int *a, int b)
{
  *a = *a + 1;
  return *a + b;
}