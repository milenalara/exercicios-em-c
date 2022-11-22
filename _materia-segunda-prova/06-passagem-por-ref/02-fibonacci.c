#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 2 – Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver em uma variável passada por referência o termo correspondente ao valor passado da serie de Fibonacci.

void somaFibonacci(long long num, long long *fib);
void printResult(int num, long long result);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  long long num, fib = 1;

  printf("Informe o número:\n");
  scanf("%lli", &num);

  somaFibonacci(num, &fib);
  printResult(num, fib);

  return 0;
}

void printResult(int num, long long result)
{
  printf("%iº termo: %lli\n", num, result);
}

void somaFibonacci(long long num, long long *fib)
{
  long long n1 = 0, n2 = 1;
  for (long long i = 0; i < num; i++)
  {
    *fib = n1 + n2;
    n2 = n1;
    n1 = *fib;
  }
}