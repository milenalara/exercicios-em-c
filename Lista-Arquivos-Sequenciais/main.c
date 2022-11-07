#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

void options();
void chooseProgram(int op);
void exercicioA();
void exercicioB();
void exercicioC();
void exercicioD();

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int op;

  do
  {
    printf("\n============================================== BOAS VINDAS =============================================\n\n");
    printf("Digite o código do programa que deseja executar\n");
    printf("OU digite 0 para ver as opçõees de programas\n");
    printf("OU digite -1 para encerrar\n");
    scanf("%i", &op);

    chooseProgram(op);

  } while (op != -1);

  return 0;

  return 0;
}

void options()
{
  printf("1 - gravar em um arquivo os 64 primeiros valores da série de Fibonacci");
  printf("2 - ler o arquivo do programa 1 e armazenar os valores pares em um arquivo e os impares em outro arquivo");
  printf("3 - ler o arquivo do programa 1 e armazenar apenas os primos em um arquivo");
  printf("4 - leia um conjunto de valores (flag -1) e verifique para cada valor se ele se encontra ou não no arquivo gravado no programa 1. Caso não exista deverá mostrar o valor anterior e o posterior a esse valor.");
}

void chooseProgram(int op)
{
  switch (op)
  {
  case -1:
    break;
  case 1:
    exercicioA();
    break;
  case 2:
    exercicioB();
    break;
  case 3:
    exercicioC();
    break;
  case 4:
    exercicioD();
    break;
  default:
    printf("Programa não encontrado");
    break;
  }
}

void exercicioA()
{
  // 1 - gravar em um arquivo os 64 primeiros valores da série de Fibonacci
  FILE *fFib;
  long long n1 = 0, n2 = 0, n = 1;
  int i = 0;

  fFib = fopen("fFib.txt", "w");

  if (fFib == NULL)
  {
    printf("Erro de abertura! \n");
  }
  else
  {
    do
    {
      fprintf(fFib, "%lli\n", n);
      n1 = n2;
      n2 = n;
      n = n1 + n2;
      i++;
    } while (i < 64);

    fclose(fFib);
  }

  printf("\nfFib.txt criado com sucesso\n\n");
}

void exercicioB()
{
  // 2 - ler o arquivo do programa 1 e armazenar os valores pares em um arquivo e os impares em outro arquivo
  FILE *fFib, *fPares, *fImpares;
  int i = 0;
  long long n;

  fFib = fopen("fFib.txt", "r");
  fPares = fopen("fPares.txt", "w");
  fImpares = fopen("fImpares.txt", "w");

  if (fFib == NULL || fPares == NULL || fImpares == NULL)
  {
    printf("Error de abertura\n");
  }
  else
  {
    do
    {
      fscanf(fFib, "%lli\n", &n);

      if (n % 2 == 0)
      {
        fprintf(fPares, "%lli\n", n);
      }
      else
      {
        fprintf(fImpares, "%lli\n", n);
      }
      i++;
    } while (i < 64);
  }

  fclose(fFib);
  fclose(fPares);
  fclose(fImpares);

  printf("\npares.txt criado com sucesso");
  printf("\nimpares.txt criado com sucesso\n\n");
}

void exercicioC()
{
  // 3 - ler o arquivo do programa 1 e armazenar apenas os primos em um arquivo
  FILE *fFib, *fPrimos;
  long long n, primos[64];
  int k = 1;

  fFib = fopen("fFib.txt", "r");
  fPrimos = fopen("fPrimos.txt", "w");

  if (fFib == NULL || fPrimos == NULL)
  {
    printf("Erro de abertura\n");
  }
  else
  {
    long long n;
    int d = 2, ehPrimo = 1;

    fcanf(fFib, "%lli", &n);


  }

  // if (fFib == NULL || fPrimos == NULL)
  // {
  //   printf("Error de abertura\n");
  // }
  // else
  // {
  //   for (int i = 0; i < 64; i++)
  //   {
  //     fscanf(fFib, "%lli\n", &n);

  //     for (int j = 0; j < 63; j++)
  //     {
  //       if (n % primos[j] == 0)
  //       {
  //         break;
  //       }
  //       else
  //       {
  //         primos[k] = n;
  //         k++;
  //       }
  //     }
  //   }
  // }

  // int m = 3;

  // do
  // {
  //   if (primos[m] != 0)
  //   {
  //     fprintf(fPrimos,"%lli\n", primos[m]);
  //     m++;
  //   }
  // } while (m < 64);

  fclose(fFib);
  fclose(fPrimos);
}

void exercicioD()
{
  // 4 - leia um conjunto de valores (flag -1) e verifique para cada valor se ele se encontra ou não no arquivo gravado no programa 1. Caso não exista deverá mostrar o valor anterior e o posterior a esse valor.
}
