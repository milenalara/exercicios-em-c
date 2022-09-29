#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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
    printf("1 - Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n");
    printf("2 – Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.\n");
    printf("3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.\n");
    printf("4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere aparece na string lida e quantas vezes ele apareceu.\n");
    printf("5 - Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.\n");
    printf("6 - Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e quantos não são nem números nem letras.\n");
    printf("7 – Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira string será a primeira na nova string e assim sucessivamente.\n");
    printf("8 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string auxiliar.\n");
    printf("9 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Sem utilize string auxiliar.\n");
    printf("10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.\n");

    return 0;
}

int ex01()
{
    printf("1 - Leia um conjunto indeterminado de palavras e ao final (estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n");

    return 0;
}

int ex02()
{
    printf("2 – Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.\n");

    return 0;
}

int ex03()
{
    printf("3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.\n");

   return 0;
}

int ex04()
{
    printf("4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere aparece na string lida e quantas vezes ele apareceu.\n");

    return 0;
}

int ex05()
{
    printf("5 - Ler uma string de no máximo 50 caracteres e em seguida um caractere (entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posições esse caractere (maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.\n");

    return 0;
}

int ex06()
{
    printf("6 - Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e quantos não são nem números nem letras.\n");

    return 0;
}

int ex07()
{
    printf("7 – Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira string será a primeira na nova string e assim sucessivamente.\n");

    return 0;
}

int ex08()
{
    printf("8 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Utilize uma string auxiliar.\n");


    return 0;
}

int ex09()
{
    printf("9 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco. Sem utilize string auxiliar.\n");

    return 0;
}

int ex10()
{
    printf("10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.\n");

    return 0;
}
