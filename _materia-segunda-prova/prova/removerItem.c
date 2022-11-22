#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVet(int *v, int tam);
void printVet(int *v, int tam);
void removeItem(int *v, int *tam, int item);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int tam = 10, num;
  int vet[tam];

  preencheVet(vet, tam);
  printVet(vet, tam);

  printf("\n\ndepois remover item:\n\n");

  removeItem(vet, &tam, 25);
  printVet(vet, tam);

  return 0;
}

void preencheVet(int *v, int tam)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    v[i] = rand() % (30 - 25 + 1) + 25;
  }
}

void printVet(int *v, int tam)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    printf("v[%i] = %i\n", i, v[i]);
  }
}

void removeItem(int *v, int *tam, int item)
{
  int i, j = 0, v2[*tam];
  for (i = 0; i < *tam; i++)
  {
    if (v[i] != item)
    {
      v2[j] = v[i];
      j++;
    }
  }

  *tam = j;

  for (i = 0; i < *tam; i++)
  {
    v[i] = v2[i];
  }
}