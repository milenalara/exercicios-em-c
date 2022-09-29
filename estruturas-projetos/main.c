#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int options();
int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;

    printf("\n============================================== BOAS VINDAS =============================================\n\n");
    printf("Digite o código do programa que deseja executar\n");
    printf("OU digite 0 para ver as opções de programas\n");
    printf("OU digite -1 para encerrar\n");
    scanf("%i", &op);

    while(op != -1)
    {
        printf("========================================\n\n");

        switch (op)
        {
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
            case 4:
                ex04();
                break;
            case 5:
                ex05();
                break;
            case 6:
                ex06();
                break;
            case 7:
                ex07();
                break;
            case 8:
                ex08();
                break;
            case 9:
                ex09();
                break;
            case 10:
                ex10();
                break;
            default:
                printf("Programa não encontrado\n");
        }

        printf("\n========================================\n\n");
        printf("Digite o código do programa que deseja executar\n");
        printf("OU digite 0 para ver as opções de programas\n");
        printf("OU digite -1 para encerrar\n");
        scanf("%i", &op);
    }

    return 0;
}

int options()
{
    printf("\n======================================== OPÇÕES DE PROGRAMAS ========================================\n\n");
    printf("1 - Exercício 1\n");
    printf("2 - Exercício 2\n");

    return 0;
}

int ex01()
{

}

int ex02()
{
    return 0;
}

int ex03()
{
   return 0;
}

int ex04()
{
    return 0;
}
int ex05()
{
    return 0;
}
int ex06()
{
    return 0;
}
int ex07()
{
    return 0;
}
int ex08()
{
    return 0;
}
int ex09()
{
    return 0;
}

int ex10()
{
    return 0;
}
