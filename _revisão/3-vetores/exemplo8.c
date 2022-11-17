#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// soma() agora é uma função, porque retorna valor

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, vet[10];

  preencheVet(vet);

  for (i = 0; i < 10; i++)
  {
    printf("%i - ", vet[i]);
  }

  return 0;
}

void preencheVet(int v[10]) // vetores SEMPRE são passados por referência, por isso dispensa o uso do * na definição do método e do & na chamada
{
  int i;

  for (i = 0; i < 10; i++)
  {
    v[i] = rand() % (15 - 10 + 1) + 10; // vai gerar números entre 10 e 15
  }

  return; // procedimentos podem ter um return que não retorna nenhum valor no final
}