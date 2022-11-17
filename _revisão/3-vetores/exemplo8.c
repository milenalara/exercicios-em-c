#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// soma() agora � uma fun��o, porque retorna valor

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

void preencheVet(int v[10]) // vetores SEMPRE s�o passados por refer�ncia, por isso dispensa o uso do * na defini��o do m�todo e do & na chamada
{
  int i;

  for (i = 0; i < 10; i++)
  {
    v[i] = rand() % (15 - 10 + 1) + 10; // vai gerar n�meros entre 10 e 15
  }

  return; // procedimentos podem ter um return que n�o retorna nenhum valor no final
}