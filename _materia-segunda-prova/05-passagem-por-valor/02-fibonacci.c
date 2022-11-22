#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 2 – Elabore um procedimento que receba um valor passado por parâmetro. Esse procedimento deverá devolver na variável global Fib o termo correspondente ao valor passado da serie de Fibonacci. Exemplo suponha que seja passado o valor 6, então deverá retorna o 6º termo da série ou seja 1,1,2,3,5,8, ou seja, deverá atribuir a variável Fib o valor 8.
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

  return 0;
}

void somaFib(int num)
{
  long long n1 = 0, n2 = 1;
  int i = 0;
  while (i < num)
  {
    fib = n1 + n2;
    n2 = n1;
    n1 = fib;
    i++;
  }
}