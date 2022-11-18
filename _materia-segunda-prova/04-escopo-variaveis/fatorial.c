#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcMedia();

int n, media = 1;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  media();

  return 0;
}

void calcMedia()
{
  printf("Informe o número:\n");
  scanf("%i", &n);

  for (int i = 0; i < n; i++)
  {
    calcMedia += calcMedia * i;
  }

  printf("%i! = %i", n, calcMedia);
}