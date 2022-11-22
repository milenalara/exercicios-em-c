#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Faça um programa que peça um número inteiro ao usuário e retorne a soma de todos os números de 1 até o número que o usuário introduziu ou seja: 1 + 2 + 3 + ... + n
// a) faça sem utilizar recursividade
// b) utilize agora recursividade.

int calcPow(int n);
int calcPowRec(int n);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int n, soma = 0;

  printf("Informe o número:\n");
  scanf("%i", &n);

  soma = calcPow(n);
  printf("resultado com for: %i\n", soma);
  soma = calcPowRec(n);
  printf("resultado com rec: %i\n", soma);

  return 0;
}

int calcSoma(int n)
{
  int soma = 0;
  for (int i = 1; i <= n; i++)
  {
    soma = soma + i;
  }
  return soma;
}

int calcPowRec(int n)
{
  int soma;
  if (n == 1)
  {
    soma = 1;
  }
  else
  {
    soma = n + calcPowRec(n - 1);
  }
  return soma;
}