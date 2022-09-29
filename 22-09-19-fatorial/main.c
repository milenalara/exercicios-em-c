#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int fatorial = 1, num;

    printf("Informe o número inteiro para calcular o valor do seu fatorial:\n");
    scanf("%i", &num);

    printf("%i! = ", num);

    for(int i = num; i >= 1; i--)
    {
        fatorial *= i;
    }

    printf("%i ", fatorial);
    return 0;
}
