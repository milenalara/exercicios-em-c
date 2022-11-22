#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1 - Elabore um procedimento para calcular o Fatorial de um número passado por parâmetro. A resposta deverá ser retornada em uma variável definida como global de nome FAT. Faça também um programa principal que chame esse procedimento.

void calcFat(int num);
void imprimeResult(int num);

int fat = 1;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num;
  printf("Informe o número:\n");
  scanf("%i", &num);
  calcFat(num);
  imprimeResult(num);

  return 0;
}

void imprimeResult(int num)
{
  printf("%i! = %i", num, fat);
}

void calcFat(int num)
{
  for (int i = 1; i <= num; i++)
  {
    fat = fat * i;
  }
}