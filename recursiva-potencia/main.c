#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int calcPotencia(int num, int rad);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, potencia, result;
    printf("Informe a base: ");
    scanf("%i", &num);
    printf("Informe a potência: ");
    scanf("%i", &potencia);
    result = calcPotencia(num, potencia);
    printf("Resultado = %i\n", result);
}

int calcPotencia(int num, int rad)
{
    if(rad == 0)
    {
        return 1;
    } else {
        return num * calcPotencia(num, rad - 1);
    }
}
