#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// a) Faça um procedimento que receba uma matriz 10x10 como parâmetro de entrada e devolva essa matriz preenchida com valores compreendidos entre 10 e 20 - utilize a função rand()
// b) Faça uma função que receba uma matriz 10x10 como parâmetro de entrada e devolva a média dos elementos que estão na diagonal secundária dessa matriz.
// c) Faça um procedimento que receba como parâsmetros de entrada uma matriz 10x10 e um valor e escreva a localização (linha e coluna) de todos os elementos da matriz que sejam maiores que esse valor ou a mensagem que não existe valores com essa restrição.

void populaMat(int mat[10][10]);
void printMat(int mat[10][10]);
float calcMedia(int mat[10][10]);
void localizaItem(int num, int mat[10][10]);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int mat[10][10], n;

  populaMat(mat);
  printMat(mat);
  printf("média diagnonal secundária = %.2f\n", calcMedia(mat));

  printf("informe o número desejado:\n");
  scanf("%i", &n);

  localizaItem(n, mat);

  return 0;
}

void printMat(int mat[10][10])
{
  int i, j;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      printf("%i ", mat[i][j]);
    }
    printf("\n");
  }
}

// questão A
void populaMat(int mat[10][10])
{
  int i, j;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      mat[i][j] = rand() % (20 - 10 + 1) + 10;
    }
  }
}

// questão B
float calcMedia(int mat[10][10])
{
  int soma = 0, i, j;
  float media;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (i + j == 9)
      {
        soma += mat[i][j];
      }
    }
  }
  media = soma / 10.0;
  return media;
}

// questão C
void localizaItem(int num, int mat[10][10])
{
  int i, j, cont = 0;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (mat[i][j] > num)
      {
        printf("mat[%i][%i] = %i\n", i, j, mat[i][j]);
        cont++;
      }
    }
  }
  if (cont == 0)
  {
    printf("não existem valores com essa restrição\n");
  }
}