#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1 - Elabore um procedimento para calcular o Fatorial de um n�mero passado por par�metro. A resposta dever� ser retornada em uma vari�vel passada por refer�ncia. Fa�a tamb�m um programa principal que chame esse procedimento.

void calcFat(int num, int *fat);
void impResult(int num, int result);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num, fat = 1;

  printf("Informe o n�mero:\n");
  scanf("%i", &num);

  calcFat(num, &fat);
  impResult(num, fat);
}

void impResult(int num, int result)
{
  printf("%i! = %i\n", num, result);
}

void calcFat(int num, int *fat)
{
  for (int i = 1; i <= num; i++)
  {
    *fat = *fat * i;
  }
}
