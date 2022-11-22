#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 5 - Elabore um procedimento que receba dois valores passados por par�metro. Esse procedimento dever� retornar, em uma vari�vel  passada por refer�ncia, a soma dos n�meros �mpares entre o intervalo fechado correspondente aos valores passados.

void leValores(int *min, int *max);
void somaImpares(int min, int max, int *soma);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int min, max, soma = 0;

  leValores(&min, &max);
  somaImpares(min, max, &soma);
  printf("Soma dos �mpares no intervalo = %i\n", soma);

  return 0;
}

void leValores(int *min, int *max)
{
  printf("Informe o valor m�nimo do intervalo:\n");
  scanf("%i", &*min);
  printf("Informe o valor m�ximo do intervalo:\n");
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