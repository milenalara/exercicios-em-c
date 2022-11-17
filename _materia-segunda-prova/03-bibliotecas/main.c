#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
#include "biblioteca.h"

int main()
{
    int a, b, result, op;
    do
    {
        printf("Informe o primeiro número");
        scanf("%i", &a);

        printf("Informe o segundo número");
        scanf("%i", &b);

        printf("Escolha a operação:\n1 - soma\n2 - subtração\n3 - multiplicação\n4 - divisão\n");
        scanf("%i", op);
        switch(op)
        {
        case 1:
            result = soma(a, b);
            break;
        case 2:
            result = subtrai(a, b);
            break;
        case 3:
            result = multiplica(a, b);
            break;
        case 4:
            result = divide((float)a, (float)b);
            break;
        default:
            printf("Operação não encontrada");
        }
    }
    while(op !=-1);

}
