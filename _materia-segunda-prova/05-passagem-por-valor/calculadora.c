#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void options();
void soma(float a, float b);
void subtrai(float a, float b);
void multiplica(float a, float b);
void divide(float a, float b);
void imprimeResultado();

float result = 0;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int op;
  float a, b;

  do
  {

    printf("\n--------------- MENU PRINCIPAL ---------------\n\n");
    printf("Digite o c�digo do programa que deseja executar\n");
    printf("OU digite 0 para ver as op��es de programas\n");
    printf("OU digite -1 para encerrar\n");
    scanf("%i", &op);

    if (op != -1)
    {
      printf("Informe o primeiro n�mero:\n");
      scanf("%f", &a);
      printf("Informe o segundo n�mero:\n");
      scanf("%f", &b);

      switch (op)
      {
      case -1:
        break;
      case 0:
        options();
        break;
      case 1:
        soma(a, b);
        break;
      case 2:
        subtrai(a, b);
        break;
      case 3:
        multiplica(a, b);
        break;
      case 4:
        divide(a, b);
        break;
      default:
        printf("Programa n�o encontrado");
        break;
      }

      imprimeResultado();
    }
  } while (op != -1);

  return 0;
}

void options()
{
  printf("1 - SOMA\n");
  printf("2 - SUBTRA��O\n");
  printf("3 - MULTIPLICA��O\n");
  printf("4 - DIVIS�O\n");
}

void imprimeResultado()
{
  printf("RESULTADO: %.2f\n", result);
}

void soma(float a, float b)
{
  result = a + b;
}

void subtrai(float a, float b)
{
  result = a - b;
  printf("RESULTADO: %.2f\n", result);
}

void multiplica(float a, float b)
{
  result = a * b;
}

void divide(float a, float b)
{
  result = (float)a / b;
}