#include <stdio.h>
#include <stdlib.h>

int main () {
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%i", &tam);
    int v[tam], i;
    for (i = 0; i < tam; i++)
    {
        printf("v[%i]=10+%i\n",i,v[i]);
    }
    return 0;
}