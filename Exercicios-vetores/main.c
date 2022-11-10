#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

void options();
void chooseProgram(int op);
void leVetor(int *v, int tam, int min, int max);
void imprimeVetor(int *v, int tam, char *nomeVetor);
int calcSoma(int num);
int verificaItem(int *v, int tam, int item);
void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();

const int nTermos = 64;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int op;

  do
  {
    printf("\n============================================== BOAS VINDAS =============================================\n\n");
    printf("Digite o código do programa que deseja executar\n");
    printf("OU digite 0 para ver as opções de programas\n");
    printf("OU digite -1 para encerrar\n");
    scanf("%i", &op);

    chooseProgram(op);

  } while (op != -1);

  return 0;

  return 0;
}

void options()
{
  printf("1 - exercício 1");
  printf("2 - exercício 2");
  printf("3 - exercício 3");
  printf("4 - exercício 4");
  printf("5 - exercício 5");
}

void chooseProgram(int op)
{
  switch (op)
  {
  case -1:
    break;
  case 1:
    exercicio1();
    break;
  case 2:
    exercicio2();
    break;
  case 3:
    exercicio3();
    break;
  case 4:
    exercicio4();
    break;
  case 5:
    exercicio5();
    break;
  default:
    printf("Programa não encontrado");
    break;
  }
}

void leVetor(int *v, int tam, int min, int max)
{
  for (int i = 0; i < tam; i++)
  {
    v[i] = rand() % (max-min) + min;
  }
}

// void leVetorDigi(int *v, int tam)
// {
//   for (int i = 0; i < tam; i++)
//   {
//     printf("Digite o %iº valor", i+1);
//     scanf("%i", &v[i]);
//   }

// }

void imprimeVetor(int *v, int tam, char *nomeVetor)
{
  for (int i = 0; i < tam; i++)
  {
    printf("%s[%i]=%i\n", nomeVetor, i + 1, v[i]);
  }
}

int calcSoma(int num)
{
  int soma = 0;
  for (int i = 0; i < num; i++)
  {
    soma += i;
  }

  return soma;
}

int verificaItem(int *v, int tam, int item)
{
  int existe = 0, i = 0;

  while(!existe && i<tam)
  {
    if (v[i] == item)
    {
      existe = 1;
    }
    i++;
  }

  return existe;
}

void exercicio1()
{
  const int tam = 15;
  int vetA[tam], vetB[tam];

  leVetor(vetA, tam, 15, 50);

  for (int i = 0; i < tam; i++)
  {
    vetB[i] = calcSoma(vetA[i]);
  }

  imprimeVetor(vetA, tam, "A:");
  printf("\n");
  imprimeVetor(vetB, tam, "B:");
}

void exercicio2()
{
  const int tam = 15;
  int tamC = 2 *tam;
  int vetA[tam], vetB[tam], vetC[tamC];
  int min, max, ;

  printf("Informe o menor número do intervalo:\n");
  scanf("%i", &min);
  printf("Informe o maior número do intervalo:\n");
  scanf("%i", &max);

  leVet(vetA, tam, min, max);
  leVet(vetB, tam, min, max);

  for (int i = 0; i < tamC; i++)
  {
   if(!verificaItem(vetC, tamC, vetA[i]))
   {
    vetC[tamC]=vetA[i];
    tamC++;
   }
  }
  for (int i = 0; i < tamC; i++)
  {
   if(!verificaItem(vetC, tamC, vetB[i]))
   {
    vetC[tamC]=vetB[i];
    tamC++;
   }
  }
  

}

void exercicio3()
{
}

void exercicio4()
{
}

void exercicio5()
{
}
