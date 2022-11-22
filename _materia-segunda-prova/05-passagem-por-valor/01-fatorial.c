#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1 - Elabore um procedimento para calcular o Fatorial de um n�mero passado por par�metro. A resposta dever� ser retornada em uma vari�vel definida como global de nome FAT. Fa�a tamb�m um programa principal que chame esse procedimento.

void calcFat(int num);
void imprimeResult(int num);

int fat = 1;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num;
  printf("Informe o n�mero:\n");
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