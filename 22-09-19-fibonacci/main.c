#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1 = 0, n2 = 1, n = 1, num;

    printf("Sequência de Fibonacci: exibir os termos até o número informado.\nInforme o número:\n");
    scanf("%i", &num);
    printf("%i, %i", n1, n2);

    for(int i = n; i <= num; i += n1)
    {
        n = n1 + n2;
        n1 = n2;
        n2 = n;
        printf(", %i", n);
    }

    return 0;
}
