#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma();

int a, b, result;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  a = 10;
  b = 7;
  soma();
  printf("%i + %i = %i\n", a, b, result);
  return 0;
}

void soma()
{
  result = a + b;
}