#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa que peça um número inteiro ao usuário e retorne a soma de todos os números de 1 até o número que o usuário introduziu ou seja: 1 + 2 + 3 + ... + n
// a) faça sem utilizar recursividade
// b) utilize agora recursividade.

int calcPow(int x, int y);
int calcPowRec(int x, int y);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b, result;

  printf("Informe a base:\n");
  scanf("%i", &a);
  printf("Informe a potência:\n");
  scanf("%i", &b);

  result = calcPow(a, b);
  printf("resultado com for: %i\n", result);
  result = calcPowRec(a, b);
  printf("resultado com rec: %i\n", result);

  return 0;
}

int calcPow(int x, int y)
{
  int result = 1;
  for (int i = 0; i < y; i++)
  {
    result = result * x;
  }
  return result;
}

int calcPowRec(int x, int y)
{
  if (y == 0)
  {
    x = 1;
  }
  else
  {
    x = x * calcPow(x, y - 1);
  }
  return x;
}