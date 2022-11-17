#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencheVet(int *v, int tam, int valorInicial, int valorFinal);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL)); // para os n�meros serem sorteados diferentes toda vez
  int tam = 5;
  int i, vet[tam];

  preencheVet(vet, tam, 100, 150); // vai preencher um vetor de 5 posi��es com valores entre 100 e 150

  for (i = 0; i < 10; i++)
  {
    printf("%i - ", vet[i]);
  }

  return 0;
}

// OBS: N�o imprimir dentro de procedimentos, a n�o ser que seja um procedimento para imprimir
void preencheVet(int *v, int tam, int valorInicial, int valorFinal)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    v[i] = rand() % (valorFinal - valorInicial + 1) + valorInicial; // vai gerar n�meros entre 10 e 15
  }

  return; // procedimentos podem ter um return que n�o retorna nenhum valor no final
}