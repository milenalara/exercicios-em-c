#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1 = 0, n2 = 1, n = 1, num;

    printf("Sequ�ncia de Fibonacci: exibir os termos at� o n�mero informado.\nInforme o n�mero:\n");
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
