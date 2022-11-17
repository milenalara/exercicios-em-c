#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheMat(int m[10][10], int valorInicial, int valorFinal);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL)); // para os n�meros serem sorteados diferentes toda vez
  int i, mat[10][10];

  preencheMat(mat, 100, 150);

  return 0;
}

// OBS: N�o imprimir dentro de procedimentos, a n�o ser que seja um procedimento para imprimir
void preencheMat(int mat[10][10], int valorInicial, int valorFinal)
{
  int i, j;

  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      mat[i][j] = rand() % (valorFinal - valorInicial + 1) + valorInicial;
      printf("%2i - ", m[i][j]);
    }
    printf("\n");
  }

  return; // procedimentos podem ter um return que n�o retorna nenhum valor no final
}