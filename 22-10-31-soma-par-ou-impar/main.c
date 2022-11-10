#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  // ler array de 10 elementos, depois somar pares ou impares
  setlocale(LC_ALL, "Portuguese");

  const int tam = 10;
  int nums[tam];
  int op = 0, somaPar = 0, somaImp = 0;

  for (int i = 0; i < tam; i++)
  {
    printf("Informe o %iº valor: \n", i + 1);
    scanf("%i", &nums[i]);
  }

  for (int i = 0; i < tam; i++)
  {
    if (nums[i] % 2 == 0)
    {
      somaPar++;
    }
    else
    {
      somaImp++;
    }
  }

  printf("Digite 1 para imprimir a soma dos pares ou 2 para imprimir a soma dos ímpares\n");
  scanf("%i", &op);

  if (op == 1)
  {
    printf("Soma pares: %i\n", somaPar);
  }
  if (op == 2)
  {
    printf("Soma ímpares: %i\n", somaImp);
  }

  return 0;
}