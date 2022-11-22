#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um procedimento que receba um conjunto de valores e devolva na variável global média, o valor da média do conjunto lido.

void calcMedia();

int n;
float media = 0, soma = 0;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  calcMedia();

  return 0;
}

void calcMedia()
{
  int i = 0;
  do
  {
    printf("Informe o %iº número (ou digite -1 para sair):\n", i + 1);
    scanf("%i", &n);
    if (n != -1)
    {
      soma += n;
      i++;
    }
  } while (n != -1);

  media = soma / i;

  printf("Média = %.2f", media);
}