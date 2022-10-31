#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int calcResto(int dividendo, int divisor);

int main()
{
    int dividendo, divisor, resto;
    printf("Informe o dividendo:");
    scanf("%i", &dividendo);
    printf("Informe o divisor");
    scanf("%i", &divisor);
    resto = calcResto(dividendo, divisor);
    printf("Resultado = %i", resto);
}

int calcResto(int dividendo, int divisor)
{
    if(dividendo < divisor)
    {
        return dividendo;
    } else {
        return calcResto(dividendo - divisor, divisor);
    }
}
