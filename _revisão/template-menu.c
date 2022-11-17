#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void options();
void chooseProgram(int op);
void soma();
void subtrai();
void multiplica();
void divide();

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int op;

  do
  {
    printf("\n--------------- MENU PRINCIPAL ---------------\n\n");
    printf("Digite o c�digo do programa que deseja executar\n");
    printf("OU digite 0 para ver as op��es de programas\n");
    printf("OU digite -1 para encerrar\n");
    scanf("%i", &op);

    chooseProgram(op);

  } while (op != -1);

  return 0;
}

void options()
{
  printf("1 - ");
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
    printf("Programa n�o encontrado");
    break;
  }
}

void soma()
{
}

void subtrai()
{
}

void multiplica()
{
}

void divide()
{
}