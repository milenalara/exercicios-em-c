#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int options();
int ex01();
int ex02();
int ex03();


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int op;

    printf("\n============================================== BOAS VINDAS =============================================\n\n");
    do {
        printf("Digite o código do programa que deseja executar\n");
        printf("OU digite 0 para ver as opções de programas\n");
        printf("OU digite -1 para encerrar\n");
        scanf("%i", &op);

        switch(op)
        {
            case -1:
                printf("\n             FIM DO PROGRAMA             ");
                break;
            case 0:
                options();
                break;
            case 1:
                ex01();
                break;
            case 2:
                ex02();
                break;
            case 3:
                ex03();
                break;
            default:
                printf("Programa não encontrado");
        }

    } while (op != -1);

    printf("\n========================================\n\n");

    return 0;
}

int options()
{
    printf("\n======================================== OPÇÕES DE PROGRAMAS ========================================\n\n");
    printf("1. Escrever um algoritmo, para calcular e imprimir o fatorial de um número lido do teclado.\n");
    printf("2. Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série de 1 até este enésimo termo da sequência de Fibonacci.\n");
    printf("3. O numero 3025 possui a seguinte característica: 30 + 25 = 55;  55² = 3025. Quantos e quais são os números de 4 dígitos possuem essa característica?\n");

    return 0;
}

int ex01()
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

    printf("\n================\n");
    return 0;
}

int ex02()
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

    printf("\n================\n");
    return 0;
}

int ex03()
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
    printf("\n================\n");

    return 0;
}
