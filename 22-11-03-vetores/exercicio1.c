#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// 19:32
// com vetor fixo: 19:44

int main () {
    setlocale(LC_ALL, "Portuguese");
    // imprimir a frequencia dos valores de um vetor (compreendidos entre 1 e 5)    
    int tam;

    printf("Informe o tamanho do vetor:\n");
    scanf("%i", &tam);

    int v[tam];
    int freq[6];
    leVet(v, tam);
    zeraVet(freq, 6);
    
    for (int i = 0; i < 15; i++)
    {
        freq[v[i]]++;
    }

    printf("O número 1 apareceu %i vezes\n", freq[0]);
    printf("O número 2 apareceu %i vezes\n", freq[1]);
    printf("O número 3 apareceu %i vezes\n", freq[2]);
    printf("O número 4 apareceu %i vezes\n", freq[3]);
    printf("O número 5 apareceu %i vezes\n", freq[4]);

    return 0;
}

void leVet (int *v, int n) {
    int i;
    for (i = 0; i <n; i++) {
        v[i]=rand()%5+1;
    }
}

void impVet(int *v, int tam) {
    for (int i = 0; i < tam; i++)
    {
        printf("%i", v[i]);
    }
    
}

void zeraVet (int *v, int tam) {
    for (int i = 0; i < tam; i++)
    {
        v[i] == 0;
    }
    
}