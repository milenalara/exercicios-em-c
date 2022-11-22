#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fa�a um programa que pe�a um n�mero inteiro ao usu�rio e retorne a soma de todos os n�meros de 1 at� o n�mero que o usu�rio introduziu ou seja: 1 + 2 + 3 + ... + n
// a) fa�a sem utilizar recursividade
// b) utilize agora recursividade.

int calcPow(int x, int y);
int calcPowRec(int x, int y);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int a, b, result;

  printf("Informe a base:\n");
  scanf("%i", &a);
  printf("Informe a pot�ncia:\n");
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