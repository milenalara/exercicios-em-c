#include <stdio.h>
#include <stdlib.h>
void preencheVetor(int *v, int tam, int vi, int vf);
void imprimeVetor(int *v, int tam, char *nome);
int somatorio(int num);
int main()
{
    int n, cod, qte, maior, menor, soma = 0, i;
    float media;
    printf("digite a qte mercadoria:");
    scanf("%i", &n);
    int estoque[n + 1];
    preencheVetor(estoque, n + 1, 1, 10);
    imprimeVetor(estoque, n + 1, "Estoque");
    printf("digite o cod e a qte:");
    scanf("%i%i", &cod, &qte);
    while (cod != 0 && qte != 0)
    {

        if (cod > 0 && cod <= n)
        {
            estoque[cod] += qte;
            if (estoque[cod] < 0)
            {
                estoque[cod] = 0;
            }
        }
        else
        {
            printf("codigo invalido!\n");
        }
        imprimeVetor(estoque, n + 1, "Estoque");
        printf("digite o cod e a qte:");
        scanf("%i%i", &cod, &qte);
    }
    // responder as perguntas
    maior = estoque[1];
    menor = estoque[1];
    for (i = 1; i <= n; i++)
    {
        if (estoque[i] > estoque[maior])
        {
            maior = i;
        }
        if (estoque[i] <= estoque[menor])
        {
            menor = i;
        }
        soma = soma + estoque[i];
    }
    media = soma / (float)n;
    printf("Maior estoque:%i - posicao:%i\n", estoque[maior], maior);
    printf("Menor estoque:%i - posicao:%i\n", estoque[menor], menor);
    printf("Media = %.2f\n", media);
    imprimeVetor(estoque, n + 1, "Estoque");
    return 0;
}

/*
int A[10],freq[6]={0,0,0,0,0,0},i;
    preencheVetor(A,10,1,5);
    imprimeVetor(A,10,"A");
    for (i=0;i<10;i++){
        freq[A[i]]++;
    }
    imprimeVetor(freq,6,"B");

*/
int somatorio(int num)
{
    int soma = 0, i;
    for (i = 1; i <= num; i++)
    {
        soma = soma + i;
    }
    return soma;
}
void preencheVetor(int *v, int tam, int vi, int vf)
{
    int i;
    // estoque será de 1 a N
    v[0] = 0;
    for (i = 1; i < tam; i++)
    {
        v[i] = (rand() % (vf - vi + 1)) + vi;
    }
}
void imprimeVetor(int *v, int tam, char *nome)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf("%s[%i]=%i\n", nome, i, v[i]);
    }
}
