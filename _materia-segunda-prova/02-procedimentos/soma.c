#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um procedimento que solicite a entrada de um valor nume?rico (inteiro e positivo) e imprima o valor do somatório do número 1 ate? esse valor. Crie um programa principal que chame esse procedimento

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