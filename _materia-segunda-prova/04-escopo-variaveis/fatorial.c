#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um procedimento que receba um  um valor passado como vari�vel global(N) e devolva em outra  vari�vel global (Fat) o fatorial do numero, o programa principal dever� ler o valor de N e imprimir a vari�vel Fat

void leNum();
void calcFat();

int n, fat = 1;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  leNum();
  calcFat();
  printf("%i! = %i", n, fat);

  return 0;
}

void leNum()
{
  printf("Informe o n�mero:\n");
  scanf("%i", &n);
}

void calcFat()
{
  for (int i = 0; i < n; i++)
  {
    fat += fat * i;
  }
}