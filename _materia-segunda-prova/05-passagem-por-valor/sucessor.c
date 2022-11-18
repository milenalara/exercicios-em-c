#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcSoma(int n);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int n;
  printf("Informe o n�mero:\n");
  scanf("%i", &n);
  calcSoma(n);
}

void calcSoma(int n)
{
  int sucessor = n + 1;
  printf("O sucessor de %i � %i", n, sucessor);
}