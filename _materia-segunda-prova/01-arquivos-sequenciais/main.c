#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void options();
void chooseProgram(int op);
void soma();
void subtrai();
void multiplica();
void divide();

const int tam = 64;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int op;

	do
	{
		printf("\n--------------- MENU PRINCIPAL ---------------\n\n");
		printf("Digite o código do programa que deseja executar\n");
		printf("OU digite 0 para ver as opções de programas\n");
		printf("OU digite -1 para encerrar\n");
		scanf("%i", &op);

		chooseProgram(op);

	} while (op != -1);

	return 0;
}

void options()
{
	printf("1 - gravar em um arquivo os 64 primeiros valores da série: 1 1 2 3 5 8 13 21 34 . . .");
	printf("2 - ler o arquivo letra a e armazenar os valores pares em um arquivo e os impares em outro arquivo");
	printf("3 - ler o arquivo letra a e armazenar apenas os primos em um arquivo");
	printf("4 - leia um conjunto de valores (flag -1) e verifique para cada valor se ele se encontra ou não no arquivo gravado na letra a. Caso não exista deverá mostrar o valor anterior e o posterior a esse valor.");
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
		printf("Programa não encontrado");
		break;
	}
}

// 1 - gravar em um arquivo os 64 primeiros valores da série: 1 1 2 3 5 8 13 21 34 . . .
void soma()
{
	FILE *fibonacci;
	long long n1 = 0, n2 = 0, num = 1;

	fibonacci = fopen("fibonacci.txt", "w");

	if (fibonacci == NULL)
	{
		printf("Erro de abertura\n");
	}
	else
	{
		for (int i = 0; i < tam; i++)
		{
			fprintf(fibonacci, "%lli\n", num);
			n2 = n1;
			n1 = num;
			num = n1 + n2;
		}
		fclose(fibonacci);
	}

	printf("\n\nfibonacci.txt criado com sucesso\n\n");
}

// 2 - ler o arquivo letra a e armazenar os valores pares em um arquivo e os impares em outro arquivo
void subtrai()
{
	FILE *fibonacci, *pares, *impares;
	long long num;

	fibonacci = fopen("fibonacci.txt", "r");
	pares = fopen("pares.txt", "w");
	impares = fopen("impares.txt", "w");

	if (fibonacci == NULL || pares == NULL || impares == NULL)
	{
		printf("Erro de abertura\n");
	}
	else
	{
		for (int i = 0; i < tam; i++)
		{
			fscanf(fibonacci, "%lli\n", &num);

			if (num % 2 == 0)
			{
				fprintf(pares, "%lli\n", num);
			}
			else
			{
				fprintf(impares, "%lli\n", num);
			}
		}
	}

	fclose(fibonacci);
	fclose(pares);
	fclose(impares);

	printf("\n\npares.txt criado com sucesso\n");
	printf("impares.txt criado com sucesso\n\n");
}

// 3 - ler o arquivo letra a e armazenar apenas os primos em um arquivo
void multiplica()
{
	FILE *fibonacci, *primos;
	long long num;

	fibonacci = fopen("fibonacci.txt", "r");
	primos = fopen("primos.txt", "w");

	if (fibonacci == NULL || primos == NULL)
	{
		printf("Erro de abertura\n");
	}
	else
	{
		for (long long i = 0; i < (long long)tam; i++)
		{
			fscanf(fibonacci, "%lli\n", &num);
			if (num > 2)
			{
				int divisores = 0;

				if (num % i == 0)
				{
					divisores++;
					break;
				}

				if (divisores == 0)
				{
					printf("%lli\n", num);
					fprintf(primos, "%lli\n", num);
				}
			}
		}
	}
	fclose(fibonacci);
	fclose(primos);

	printf("\n\nprimos.txt criado com sucesso\n\n");
}

void divide()
{
	printf("4 - leia um conjunto de valores (flag -1) e verifique para cada valor se ele se encontra ou não no arquivo gravado na letra a. Caso não exista deverá mostrar o valor anterior e o posterior a esse valor.");
}