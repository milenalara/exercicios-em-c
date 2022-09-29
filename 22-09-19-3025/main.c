#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int milhares, dezenas, soma, count = 1;
    for (int num = 1000; num <= 9999; num++)
    {
        milhares = num / 100;
        dezenas = num % 100;
        soma = milhares + dezenas;

        if(num != 3025)
        {
            if(pow(soma, 2) == num)
            {
                printf("O número %i possui a mesma propriedade que 3025\n", num);
                count++;
            }
        }
    }

    printf("%i números de 4 dígitos possuem esta característica (incluindo 3025)", count);

    return 0;
}
