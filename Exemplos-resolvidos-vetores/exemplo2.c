#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leVetor(int *v, int tam);
void imprimeVet(int *v, int tam, char *nomeVet);
int calcSoma(int num);

// 1 - Elaborar um programa que leia um vetor A com 15 elementos inteiros. Construir um vetor B do mesmo tipo, em que cada elemento de B deva ser o resultado do somatório de 1 até o valor correspondente de cada elemento do vetor A. Apresentar A e B.

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
        printf("Informe o %iº número:\n", i + 1);
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