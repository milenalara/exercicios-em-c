#include <stdio.h>
#include <stdlib.h>
int calcSoma(int num);

int main()
{
  int num, result;
  printf("Infome o número:\n");
  scanf("%i", &num);
  result = calcSoma(num);
  printf("Soma dos valores de 1 até %i: %i", num, result);
  return 0;
}

int calcSoma(int num)
{
  int soma = 0;
  for (int i = 0; i <= num; i++)
  {
    soma += i;
  }
  return soma;
}