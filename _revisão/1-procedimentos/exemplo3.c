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
  soma(a, b);
  printf("%i + %i = %i\n", a, b, result);
  return 0;
}

void soma(int a, int b)
{
  result = a + b;
}