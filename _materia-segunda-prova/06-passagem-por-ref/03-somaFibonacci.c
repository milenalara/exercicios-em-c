#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 3 � Elabore um procedimento que receba um valor passado por par�metro. Esse procedimento dever� devolver em uma vari�vel passada por refer�ncia a soma dos termos da serie de Fibonacci do primeiro termo at� o termo passado

void somaFibonacci(long long num, long long *fib);
void printResult(int num, long long result);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  long long num, fib = 1;

  printf("Informe o n�mero:\n");
  scanf("%lli", &num);

  somaFibonacci(num, &fib);
  printResult(num, fib);
}

void printResult(int num, long long result)
{
  printf("%i� termo: %lli\n", num, result);
}

void somaFibonacci(long long num, long long *fib)
{
  long long n1 = 0, n2 = 1, soma = 0;
  for (long long i = 0; i < num; i++)
  {
    *fib = n1 + n2;
    soma += *fib;
    n2 = n1;
    n1 = *fib;
  }
}