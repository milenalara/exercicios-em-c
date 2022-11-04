#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  // estrutura de dados homogêa
  // OU variáveis indexadas
  // OU variáveis subscritasconst int tamanho = 3;
  // float notas[tamanho];
  // OU arranjos
  // OU arrays
  // OU tabelas em memoria
  // OU vetores = agrupamento de uma dimensão
  // OU matrizes = agrupamento de mais de uma dimensão

  setlocale(LC_ALL, "Portuguese");
  const int tam = 3;
  float notas[tam];
  float soma = 0, media;
  int i, count = 0;

  for (i = 0; i < tam; i++)
  {
    printf("Informe a %iª nota nota:\n", i + 1);
    scanf("%f", &notas[i]);
    soma += notas[i];
  }

  media = soma / sizeof(notas);

  for (i = 0; i < sizeof(notas); i++)
  {
    if (notas[i] < media)
    {
      count++;
    }
  }

  printf("%i notas têm valor abaixo da média.", count);

  return 0;
}
