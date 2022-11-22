#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um m�todo que receba um n�mero inteiro e retorne 1 caso o n�mero recebido seja primo e 0 caso n�o seja
int isPrime(int num);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num, result;

  printf("Informe o n�mero:\n");
  scanf("%i", &num);

  result = isPrime(num);
  printf("%i � primo? %i -> %s", num, result, result == 1 ? "verdadeiro" : "falso");

  return 0;
}

int isPrime(int num)
{
  if (num < 2)
  {
    return 0;
  }

  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}