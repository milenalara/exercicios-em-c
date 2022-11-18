#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();
void options();
void chooseProgram();
void leValores();
void imprimeResultado();
void soma();
void subtrai();
void multiplica();
void divide();

int a, b, op;
float result;
char sinal;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  do
  {
    menu();
    leValores();
    chooseProgram();
    imprimeResultado();
  } while (op != -1);

  return 0;
}

void menu()
{
  printf("\n--------------- MENU PRINCIPAL ---------------\n\n");
  printf("Digite o cùdigo do programa que deseja executar\n");
  printf("OU digite 0 para ver as opùùes de programas\n");
  printf("OU digite -1 para encerrar\n");
  scanf("%i", &op);
}

void options()
{
  printf("1 - SOMA\n");
  printf("2 - SUBTRAùùO\n");
  printf("3 - MULTIPLICAùùO\n");
  printf("4 - DIVISùO\n");
}

void chooseProgram()
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
    printf("Programa nùo encontrado");
    break;
  }
}

void leValores()
{
  printf("Informe o primeiro nùmero:\n");
  scanf("%i", &a);
  printf("Informe o segundo nùmero:\n");
  scanf("%i", &b);
}

void imprimeResultado()
{
  switch (op)
  {
  case 1:
    sinal = '+';
    break;
  case 2:
    sinal = '-';
    break;
  case 3:
    sinal = '*';
    break;
  case 4:
    sinal = '/';
    break;
  default:
    break;
  }
  printf("%i %c %i = %.2f\n", a, sinal, b, result);
}

void soma()
{
  result = a + b;
}

void subtrai()
{
  result = a - b;
}

void multiplica()
{
  result = a * b;
}

void divide()
{
  result = (float)a / b;
}