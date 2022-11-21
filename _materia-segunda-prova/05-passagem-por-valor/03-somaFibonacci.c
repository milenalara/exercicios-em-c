#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 3 – Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver na variável global Fib a soma dos termos da serie de Fibonacci do primeiro termo até o termo passado. Exemplo suponha que seja passado o valor 6, então deverá atribuir a variável Fib a soma de 1+1+2+3+5+8, ou seja, Fib = 20.

void somaFib(int num);

long long fib;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num = 0;
  printf("Informe o número:\n");
  scanf("%i", &num);
  somaFib(num);
  printf("%lli\n", fib);
}

void somaFib(int num)
{
  long long n1 = 0, n2 = 1, termo;
  int i = 0;
  while (i < num)
  {
    termo = n1 + n2;
    n2 = n1;
    n1 = termo;
    fib += termo;
    i++;
  }
}