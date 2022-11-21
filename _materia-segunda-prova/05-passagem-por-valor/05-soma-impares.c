#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 5 - Elabore um procedimento que receba dois valores passados por par�metro. Esse procedimento dever� atribuir a vari�vel impar, a soma dos n�meros �mpares entre o intervalo fechado correspondente aos valores passados.

int impar = 0;
void parImpar(int min, int max);
void imprimeValor(char label[10], int valor);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int min, max;

  printf("Informe o valor m�nimo do intervalor:\n");
  scanf("%i", &min);
  printf("Informe o valor m�ximo do intervalor:\n");
  scanf("%i", &max);

  parImpar(min, max);
  imprimeValor("�mpares", impar);

  return 0;
}

void imprimeValor(char label[10], int valor)
{
  printf("\nSoma dos n�meros %s = %i\n", label, valor);
}

void parImpar(int min, int max)
{
  for (int i = min; i <= max; i++)
  {
    if (i % 2 != 0)
    {
      impar += i;
    }
  }
}
