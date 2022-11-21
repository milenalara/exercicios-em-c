#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 4 - Elabore um procedimento que receba dois valores passados por parâmetro. Esse procedimento deverá atribuir a variável impar, a quantidade de números ímpares entre o intervalo fechado correspondente aos valores passados. Por exemplo, suponha que os valores passados seja, 3 e 6, deverá devolver impar=2, pois existem os números impares 3 e 5 no intervalo.

int impar = 0;
void parImpar(int min, int max);
void imprimeValor(char label[10], int valor);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int min, max;

  printf("Informe o valor mínimo do intervalor:\n");
  scanf("%i", &min);
  printf("Informe o valor máximo do intervalor:\n");
  scanf("%i", &max);

  parImpar(min, max);
  imprimeValor("Ímpares", impar);

  return 0;
}

void imprimeValor(char label[10], int valor)
{
  printf("\nQuantidade de %s = %i\n", label, valor);
}

void parImpar(int min, int max)
{
  for (int i = min; i <= max; i++)
  {
    if (i % 2 != 0)
    {
      impar++;
    }
  }
}
