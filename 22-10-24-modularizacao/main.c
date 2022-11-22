#include <stdio.h>
#include <stdlib.h>
int calcPow(int num);

int main()
{
  int num, result;
  printf("Infome o número:\n");
  scanf("%i", &num);
  result = calcPow(num);
  printf("Soma dos valores de 1 até %i: %i\n", num, result);
  return 0;
}

int calcPow(int num)
{
  int soma = 0;
  for (int i = 0; i <= num; i++)
  {
    soma += i;
  }
  return soma;
}