#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int calcSoma(int num);

int main()
{
    int num, result;
    printf("Informe o valor:");
    scanf("%i", &num);
    result = calcSoma(num);
    printf("Resultado = %i", result);
}

int calcSoma(int num)
{
    if(num == 1)
    {
        return 1;
    } else {
        return num + calcSoma(num - 1);
    }
}