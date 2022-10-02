#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int options();
int chooseProgram(int op);
int exercise01();
int exercise02();
int exercise03();
int exercise04();
int exercise05();
int exercise06();
int exercise07();
int exercise08();
int exercise09();
int exercise10();


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;

    do
    {
        printf("\n============================================== BOAS VINDAS =============================================\n\n");
        printf("Digite o código do programa que deseja executar\n");
        printf("OU digite 0 para ver as opções de programas\n");
        printf("OU digite -1 para encerrar\n");
        scanf("%i", &op);

        chooseProgram(op);

    }
    while (op != -1);

    return 0;
}


int options()
{
    printf("1 - Leia um conjunto indeterminado de palavras e ao final(estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n");
    printf("2 – Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.\n");
    printf("3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.\n");
    printf("4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere aparece na string lida e quantas vezes ele apareceu.\n");
    printf("5 - Ler uma string de no máximo 50 caracteres e em seguida um caractere(entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posições esse caractere(maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.\n");
    printf("6 - Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e quantos não são nem números nem letras.\n");
    printf("7 – Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira string será a primeira na nova string e assim sucessivamente.\n");
    printf("8 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco.Utilize uma string auxiliar.\n");
    printf("9 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco.Sem utilize string auxiliar.\n");
    printf("10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.\n");

    return 0;
}

int chooseProgram(int op)
{
    switch (op)
    {
    case 1:
        exercise01();
        break;
    case 2:
        exercise02();
        break;
    case 3:
        exercise03();
        break;
    case 4:
        exercise04();
        break;
    case 5:
        exercise05();
        break;
    case 6:
        exercise06();
        break;
    case 7:
        exercise07();
        break;
    case 8:
        exercise08();
        break;
    case 9:
        exercise09();
        break;
    case 10:
        exercise10();
        break;
    default:
        printf("Programa não encontrado");
        break;
    }

    return 0;
}

int exercise01()
{
    printf("1 - Leia um conjunto indeterminado de palavras e ao final(estipule você um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n");
    char palavra[50], maiorLexi[50], maiorTam[50], menorLexi[50], menorTam[50];

    printf("digite uma palavra: ");
    scanf("%s", &palavra);
    strcpy(maiorLexi, strlwr(palavra));
    strcpy(maiorTam, palavra);
    strcpy(menorLexi, strlwr(palavra));
    strcpy(menorTam, palavra);

    while (strcmp(palavra, "fim") != 0)
    {
        if (strcmp(palavra, maiorLexi) > 0)
        {
            strcpy(maiorLexi, strlwr(palavra));
        }
        if (strcmp(palavra, menorLexi) < 0)
        {
            strcpy(menorLexi, strlwr(palavra));
        }
        if (strlen(palavra) > strlen(maiorTam))
        {
            strcpy(maiorTam, palavra);
        }
        if (strlen(palavra) < strlen(menorTam))
        {
            strcpy(menorTam, palavra);
        }
        printf("digite um valor: ");
        scanf("%s", palavra);
    }

    printf("maior palavra lexicograficamente: %s\n", maiorLexi);
    printf("maior palavra em tamanho: %s\n", maiorTam);
    printf("menor palavra lexicograficamente: %s\n", menorLexi);
    printf("menor palavra em tamanho: %s\n", menorTam);
    return 0;
}

int exercise02()
{
    printf("2 – Ler um string de no máximo 50 caracteres e contar quantas letras A essa palavra possui.\n");

    return 0;
}

int exercise03()
{
    printf("3 – Ler uma string de no máximo 50 caracteres e indicar quais as posições da letra A nessa palavra.\n");
    return 0;
}

int exercise04()
{
    printf("4 – Ler uma string de no máximo 50 caracteres e em seguida um caractere, mostrar quais as posições esse caractere aparece na string lida e quantas vezes ele apareceu.\n");

    return 0;
}

int exercise05()
{
    printf("5 - Ler uma string de no máximo 50 caracteres e em seguida um caractere(entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posições esse caractere(maiúscula ou minúscula) na string lida e quantas vezes ele apareceu.\n");

    return 0;
}

int exercise06()
{
    printf("6 - Ler uma string de no máximo 50 caracteres e mostrar quantas letras possui e quantos caracteres são números e quantos não são nem números nem letras.\n");

    return 0;
}

int exercise07()
{
    printf("7 – Ler uma string de no máximo 50 caracteres e criar uma nova string com seu inverso, isso é a ultima letra da primeira string será a primeira na nova string e assim sucessivamente.\n");
    return 0;
}

int exercise08()
{
    printf("8 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco.Utilize uma string auxiliar.\n");

    return 0;
}

int exercise09()
{
    printf("9 – Ler uma string de no máximo 50 caracteres e retire dessa string todos os espaços em branco.Sem utilize string auxiliar.\n");

    return 0;
}

int exercise10()
{
    printf("10 - Ler uma string de no máximo 50 caracteres em seguida leia outra string de no máximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posições iniciais em que ela aparece.\n");

    return 0;
}
