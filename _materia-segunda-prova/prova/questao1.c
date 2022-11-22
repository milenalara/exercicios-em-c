#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um método que receba um número inteiro e retorne 1 caso o número recebido seja primo e 0 caso não seja
int isPrime(int num);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num, result;

  printf("Informe o número:\n");
  scanf("%i", &num);

  result = isPrime(num);
  printf("%i é primo? %i -> %s", num, result, result == 1 ? "verdadeiro" : "falso");

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