#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma();

// m�todo: pode ser fun��o ou procedimento

// main � fun��o porque retorna valor
int main()
{
  setlocale(LC_ALL, "Portuguese");
  soma();
  return 0;
}

// soma() � m�todo pois n�o retorna valor
void soma()
{
  int a, b, soma;
  a = 10;
  b = 7;
  soma = a + b;
  printf("%i + %i = %i\n", a, b, soma);
}