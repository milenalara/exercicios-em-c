#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[50];
    int i;
    for(i=0; i < 30; i++)
    {
        frase[i] = 'A' + i; /* a variável ‘i’ incrementa a posição do caractere na Tabela ASCII */
    }
    frase[i] = NULL;
    printf("A string contem %s \n", frase);
    system("pause");

    return 0;
}
