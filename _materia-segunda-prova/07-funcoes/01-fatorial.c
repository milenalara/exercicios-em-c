#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 1 - Elabore uma função para calcular e retornar o Fatorial de um número passado por parâmetro. Faça também um programa principal que chame essa função.
int calcFat(int num);
void impResult(int num, int result);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num, fat = 0;

  printf("Informe o número:\n");
  scanf("%i", &num);

  fat = calcFat(num);
  impResult(num, fat);

  return 0;
}

void impResult(int num, int result)
{
  printf("%i! = %i\n", num, result);
}

int calcFat(int num)
{
  int fat = 1;
  for (int i = 1; i <= num; i++)
  {
    fat = fat * i;
  }
  return fat;
}
