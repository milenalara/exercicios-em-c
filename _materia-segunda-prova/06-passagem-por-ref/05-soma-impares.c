#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 5 - Elabore um procedimento que receba dois valores passados por parâmetro. Esse procedimento deverá retornar, em uma variável  passada por referência, a soma dos números ímpares entre o intervalo fechado correspondente aos valores passados.

void leValores(int *min, int *max);
void somaImpares(int min, int max, int *soma);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int min, max, soma = 0;

  leValores(&min, &max);
  somaImpares(min, max, &soma);
  printf("Soma dos ímpares no intervalo = %i\n", soma);

  return 0;
}

void leValores(int *min, int *max)
{
  printf("Informe o valor mínimo do intervalo:\n");
  scanf("%i", &*min);
  printf("Informe o valor máximo do intervalo:\n");
  scanf("%i", &*max);
}

void somaImpares(int min, int max, int *soma)
{
  for (int i = min; i <= max; i++)
  {
    if (i % 2 != 0)
    {
      *soma = *soma + i;
    }
  }
}