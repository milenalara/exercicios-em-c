#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma();

int main()
{
  setlocale(LC_ALL, "Portuguese");

  soma();

  return 0;
}

void soma()
{
  int a, b, soma;
  printf("Informe o primeiro valor");
  scanf("%i", &a);
  printf("Informe o segundo valor");
  scanf("%i", &b);

  soma = a + b;

  printf("%i + %i = %i", a, b, soma);
}