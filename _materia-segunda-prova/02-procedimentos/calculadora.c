#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma();
void options();
void chooseProgram(int op);
void subtrai();
void multiplica();
void divide();

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int op;

  do
  {
    printf("---------------MENU PRINCIPAL---------------\n");
    printf("Informe o código do programa desejado\n");
    printf("OU digite 0 para visualizar as opções de programas\n");
    printf("OU digite -1 para encerrar\n");

    scanf("%i", &op);

    chooseProgram(op);

  } while (op != -1);

  return 0;
}

void options()
{
  printf("1 - soma\n");
  printf("2 - subtração\n");
  printf("3 - multiplicação\n");
  printf("4 - divisão\n");
}

void chooseProgram(int op)
{
  switch (op)
  {
  case -1:
    break;
  case 0:
    options();
    break;
  case 1:
    soma();
    break;
  case 2:
    subtrai();
    break;
  case 3:
    multiplica();
    break;
  case 4:
    divide();
    break;
  default:
    printf("Programa não encontrado\n");
  }
}

void soma()
{
  int a, b, result;
  printf("Informe o primeiro valor\n");
  scanf("%i", &a);
  printf("Informe o segundo valor\n");
  scanf("%i", &b);

  result = a + b;

  printf("%i + %i = %i\n", a, b, result);
}

void subtrai()
{
  int a, b, result;
  printf("Informe o primeiro valor\n");
  scanf("%i", &a);
  printf("Informe o segundo valor\n");
  scanf("%i", &b);

  result = a - b;

  printf("%i - %i = %i\n", a, b, result);
}

void multiplica()
{
  int a, b, result;
  printf("Informe o primeiro valor\n");
  scanf("%i", &a);
  printf("Informe o segundo valor\n");
  scanf("%i", &b);

  result = a * b;

  printf("%i * %i = %i\n", a, b, result);
}

void divide()
{
  float a, b, result;
  printf("Informe o primeiro valor\n");
  scanf("%f", &a);
  printf("Informe o segundo valor\n");
  scanf("%f", &b);

  result = a / b;

  printf("%.2f / %.2f = %.2f\n", a, b, result);
}