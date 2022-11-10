#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
  // ler um vetor de 10 posições e após a leitura calcular e imprimir a soma dos valores do vetor
  const int tam = 10;
  int nums[tam];
  int soma = 0;

  for (int i = 0; i < tam; i++)
  {
    printf("Informe o %iº valor: \n", i + 1);
    scanf("%i", &nums[i]);
  }

  for (int i = 0; i < tam; i++)
  {
    soma += nums[i];
  }

  printf("A soma das notas é %i\n", soma);

  return 0;
}