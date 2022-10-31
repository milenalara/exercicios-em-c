#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  float n1, n2, n3, media;
  int count = 0;

  printf("Informe a primeira nota:\n");
  scanf("%f", &n1);

  printf("Informe a segunda nota:\n");
  scanf("%f", &n2);

  printf("Informe a terceira nota:\n");
  scanf("%f", &n3);

  media = (n1 + n2 + n3) / 3;

  if (n1 < media)
  {
    count++;
  }
  if (n2 < media)
  {
    count++;
  }
  if (n3 < media)
  {
    count++;
  }

  printf("%i notas têm valor abaixo da média.", count);

  return 0;
}
