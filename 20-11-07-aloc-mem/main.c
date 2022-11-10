#include <stdio.h>
#include <stdlib.h>

int main () {
    char *pChar;
    pChar = malloc(1);
    *pChar='A';
    long double a;
    printf("%c endereco %i\n", *pChar, pChar);
    printf("tamanho de um char = %i\n", sizeof(char));
    printf("tamanho de um int = %i\n", sizeof(int));
    printf("tamanho de um long long = %i\n", sizeof(long long));
    printf("tamanho de a = %i\n", sizeof(a));
    return 0;
}