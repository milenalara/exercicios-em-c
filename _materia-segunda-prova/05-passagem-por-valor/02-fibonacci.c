#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 2 � Elabore um procedimento que receba um valor passado por par�metro. Esse procedimento dever� devolver na vari�vel global Fib o termo correspondente ao valor passado da serie de Fibonacci. Exemplo suponha que seja passado o valor 6, ent�o dever� retorna o 6� termo da s�rie ou seja 1,1,2,3,5,8, ou seja, dever� atribuir a vari�vel Fib o valor 8.
void somaFib(int num);

long long fib;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int num = 0;
  printf("Informe o n�mero:\n");
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