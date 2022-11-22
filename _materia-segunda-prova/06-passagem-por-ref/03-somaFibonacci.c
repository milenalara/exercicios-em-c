#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 3 – Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver em uma variável passada por referência a soma dos termos da serie de Fibonacci do primeiro termo até o termo passado

void somaFibonacci(int num, long long *fib);
void printResult(int num, long long result);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  long long fib = 0;
  int num;

  printf("Informe o número:\n");
  scanf("%i", &num);

  somaFibonacci(num, &fib);
  printResult(num, fib);

  return 0;
}

void printResult(int num, long long result)
{
  printf("Soma dos valores de 1 até o %iº termo de Fibonacci = %lli\n", num, result);
}

void somaFibonacci(int num, long long *fib)
{
  long long n1 = 0, n2 = 1, termo = 1;
  for (long long i = 0; i < num; i++)
  {
    termo = n1 + n2;
    n2 = n1;
    n1 = termo;
    *fib += termo;
  }
}