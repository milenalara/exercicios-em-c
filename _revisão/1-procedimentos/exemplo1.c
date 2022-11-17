#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma();

// método: pode ser função ou procedimento

// main é função porque retorna valor
int main()
{
  setlocale(LC_ALL, "Portuguese");
  soma();
  return 0;
}

// soma() é método pois não retorna valor
void soma()
{
  int a, b, soma;
  a = 10;
  b = 7;
  soma = a + b;
  printf("%i + %i = %i\n", a, b, soma);
}