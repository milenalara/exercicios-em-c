#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcSoma(int n1, int n2);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int n1, n2;
  printf("Informe o primeiro número:\n");
  scanf("%i", &n1);
  printf("Informe o segundo número:\n");
  scanf("%i", &n2);

  calcSoma(n1, n2);
}

void calcSoma(int n1, int n2)
{
  int soma = n1 + n2;
  printf("%i + %i = %i", n1, n2, soma);
}