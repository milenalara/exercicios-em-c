#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVet(int *v, int tam);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL)); // para os n�meros serem sorteados diferentes toda vez
  int tam = 5;
  int i, vet[tam];

  preencheVet(vet, tam);

  for (i = 0; i < 10; i++)
  {
    printf("%i - ", vet[i]);
  }

  return 0;
}

void preencheVet(int *v, int tam)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    v[i] = rand() % (15 - 10 + 1) + 10; // vai gerar n�meros entre 10 e 15
  }

  return; // procedimentos podem ter um return que n�o retorna nenhum valor no final
}