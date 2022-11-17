#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leVetor(int *v, int tam);
void imprimeVet(int *v, int tam, char *nomeVet);
int calcSoma(int num);

// 2 - Construir um programa que leia dois vetores A e B com 10 elementos quaisquer inteiros. Construir um vetor C, sendo este o resultado da união dos elementos de A e B – sem repetição. Apresentar C.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const int tam = 15;
    int a[tam], b[tam];

    leVetor(a, tam);

    for (int i = 0; i < tam; i++)
    {
        b[i] = calcSoma(a[i]);
    }

    imprimeVet(a, tam, "A");
    imprimeVet(b, tam, "B");

    return 0;
}

void leVetor(int *v, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("Informe o %iï¿½ nï¿½mero:\n", i + 1);
        scanf("%i", &v[i]);
    }
}

void imprimeVet(int *v, int tam, char *nomeVet)
{
    for (int i = 0; i < tam; i++)
    {
        printf("%s[%i] = %i\n", nomeVet, i, v[i]);
    }
}

int calcSoma(int num)
{
    int soma = 0;
    for (int i = 0; i <= num; i++)
    {
        soma += i;
    }
    return soma;
}