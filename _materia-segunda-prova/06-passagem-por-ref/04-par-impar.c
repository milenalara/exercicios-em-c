#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 4 – Elabore um procedimento que receba dois valores passados por parâmetro. Esse procedimento  deverá retornar, em uma variável passada por referência, a quantidade de números ímpares entre o intervalo fechado correspondente aos valores  passados.

void leValores(int *min, int *max);
void contImpar(int min, int max, int *impares);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int min, max, impares = 0;

  leValores(&min, &max);
  contImpar(min, max, &impares);
  printf("Quantidade de ímpares = %i\n", impares);

  return 0;
}

void leValores(int *min, int *max)
{
  printf("Informe o valor mínimo do intervalo:\n");
  scanf("%i", &*min);
  printf("Informe o valor máximo do intervalo:\n");
  scanf("%i", &*max);
}

void contImpar(int min, int max, int *impares)
{
  for (int i = min; i <= max; i++)
  {
    if (i % 2 != 0)
    {
      *impares = *impares + 1;
    }
  }
}