#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
#include "biblioteca.h"

int main()
{
    int a, b, result, op;
    do
    {
        printf("Informe o primeiro n�mero");
        scanf("%i", &a);

        printf("Informe o segundo n�mero");
        scanf("%i", &b);

        printf("Escolha a opera��o:\n1 - soma\n2 - subtra��o\n3 - multiplica��o\n4 - divis�o\n");
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
            printf("Opera��o n�o encontrada");
        }
    }
    while(op !=-1);

}
