#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// a) Escrever um método que receba um vetor de tamanho 100. Preencha esse vetor com elementos entre 1 e 5 - inlusive. Utilize a função rand() para preencher o vetor.
// b) Escreva um método para receber o vetor criado no item anterior, como parâmetro e devolva outro parâmetro um vetor de 5 posições contendo a frequência dos valores no vetor.

const int tam = 100;
void populaVet(int *v, int tam);
void printVet(char nome[20], int *v, int tam);
void contNums(int *v1, int *v2, int tam);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int v1[tam], v2[6] = {0, 0, 0, 0, 0, 0};

  populaVet(v1, tam);
  contNums(v1, v2, tam);

  printVet("v1", v1, tam);
  printVet("v2", v2, 6);

  return 0;
}

void populaVet(int *v, int tam)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    v[i] = rand() % 5 + 1;
  }
}

void printVet(char nome[20], int *v, int tam)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    printf("%s[%i] = %i\n", nome, i, v[i]);
  }
}

void contNums(int *v1, int *v2, int tam)
{
  int i = 0;
  for (i = 0; i < tam; i++)
  {
    v2[v1[i]]++;
  }
}