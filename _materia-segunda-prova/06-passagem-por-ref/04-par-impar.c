#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 4 � Elabore um procedimento que receba dois valores passados por par�metro. Esse procedimento  dever� retornar, em uma vari�vel passada por refer�ncia, a quantidade de n�meros �mpares entre o intervalo fechado correspondente aos valores  passados.

void leValores(int *min, int *max);
void contImpar(int min, int max, int *impares);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int min, max, impares = 0;

  leValores(&min, &max);
  contImpar(min, max, &impares);
  printf("Quantidade de �mpares = %i\n", impares);

  return 0;
}

void leValores(int *min, int *max)
{
  printf("Informe o valor m�nimo do intervalo:\n");
  scanf("%i", &*min);
  printf("Informe o valor m�ximo do intervalo:\n");
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