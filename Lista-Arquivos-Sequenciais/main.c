#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// Fazer um programa com um menu para:
// a) - gravar em um arquivo os 64 primeiros valores da série: 1 1 2 3 5 8 13 21 34...
// b) - ler o arquivo letra a e armazenar os valores pares em um arquivo e os impares em outro arquivo
// c) - ler o arquivo letra a e armazenar apenas os primos em um arquivo
// d) - leia um conjunto de valores (flag -1) e verifique para cada valor se ele se encontra ou não no arquivo gravado na letra a. Caso não exista deverá mostrar o valor anterior e o posterior a esse valor. Exemplo: caso seja lido o valor 8 – deverá ser mostrada a informação o valor 8 está no arquivo na posição 6, caso o valor lido seja o 17 – deverá ser mostrada a informação o valor 17 não está no arquivo, valores mais próximos: 13 e 21.

int main()
{
  setlocale(LC_ALL, "Portuguese");
  long int qtValores = 64, n1 = 0, n2 = 0, n = 1, i = 0;

  do
  {
    printf("%li\n", n);
    n1 = n2;
    n2 = n;
    n = n1 + n2;
    i++;
  } while (i < 64);

  return 0;
}