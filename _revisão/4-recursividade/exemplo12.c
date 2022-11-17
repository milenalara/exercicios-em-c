#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimeX(int x);

int main()
{
  setlocale(LC_ALL, "Portuguese");

  imprimeX(5);

  return 0;
}

void imprimeX(int x)
{
  printf("x = %i\n", x);
  if (x > 0)
  {
    imprimeX(x - 1);
  }
  printf("voltando x = %i\n", x);
}
