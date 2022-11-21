#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1 - Elabore um procedimento para calcular o Fatorial de um número passado por parâmetro. A resposta deverá ser retornada em uma variável passada por referência. Faça também um programa principal que chame esse procedimento.

void calcFat(int num, int *fat);
void impResult(int num, int result);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num, fat = 1;

  printf("Informe o número:\n");
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
