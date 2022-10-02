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
        printf("Digite o c�digo do programa que deseja executar\n");
        printf("OU digite 0 para ver as op��es de programas\n");
        printf("OU digite -1 para encerrar\n");
        scanf("%i", &op);

        chooseProgram(op);

    } while (op != -1);

    return 0;
}

int options()
{
    printf("1 - Leia um conjunto indeterminado de palavras e ao final(estipule voc� um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n");
    printf("2 - Ler um string de no m�ximo 50 caracteres e contar quantas letras A essa palavra possui.\n");
    printf("3 - Ler uma string de no m�ximo 50 caracteres e indicar quais as posi��s da letra A nessa palavra.\n");
    printf("4 - Ler uma string de no m�ximo 50 caracteres e em seguida um caractere, mostrar quais as posi��es esse caractere aparece na string lida e quantas vezes ele apareceu.\n");
    printf("5 - Ler uma string de no m�ximo 50 caracteres e em seguida um caractere(entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posi��es esse caractere(mai�scula ou min�scula) na string lida e quantas vezes ele apareceu.\n");
    printf("6 - Ler uma string de no m�ximo 50 caracteres e mostrar quantas letras possui e quantos caracteres s�o n�meros e quantos n�o s�o nem n�meros nem letras.\n");
    printf("7 - Ler uma string de no m�ximo 50 caracteres e criar uma nova string com seu inverso, isto � a ultima letra da primeira string ser� a primeira na nova string e assim sucessivamente.\n");
    printf("8 - Ler uma string de no m�ximo 50 caracteres e retire dessa string todos os espa�os em branco.Utilize uma string auxiliar.\n");
    printf("9 - Ler uma string de no m�ximo 50 caracteres e retire dessa string todos os espacos em branco.Sem utilize string auxiliar.\n");
    printf("10 - Ler uma string de no m�ximo 50 caracteres em seguida leia outra string de no m�ximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posi��es iniciais em que ela aparece.\n");

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
        printf("Programa n�o encontrado");
        break;
    }

    return 0;
}

int exercise01()
{
    printf("1 - Leia um conjunto indeterminado de palavras e ao final(estipule voc� um flag) informe qual foi a maior palavra e a menor palavra digitada, em tamanho e lexicograficamente.\n");
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

    printf("\n\nmaior palavra lexicograficamente: %s\n", maiorLexi);
    printf("maior palavra em tamanho: %s\n", maiorTam);
    printf("menor palavra lexicograficamente: %s\n", menorLexi);
    printf("menor palavra em tamanho: %s\n", menorTam);
    return 0;
}

int exercise02()
{
    printf("2 - Ler um string de no m�ximo 50 caracteres e contar quantas letras A essa palavra possui.\n");
    char string[50];
    int i, qte = 0;

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);
    printf("string: %s\n", string);

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'A' || string[i] == 'a')
        {
            qte++;
        }
    }

    printf("A string \"%s\" cont�m %i vezes a letra \'A\'.\n", string, qte);

    return 0;
}

int exercise03()
{
    printf("3 - Ler uma string de no m�ximo 50 caracteres e indicar quais as posi��s da letra A nessa palavra.\n");
    int i;
    char string[50];

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);

    printf("Posi��es da letra A na string \"%s\":\n", string);

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'A' || string[i] == 'a')
        {
            printf("%i\n", i);
        }
    }

    return 0;
}

int exercise04()
{
    printf("4 - Ler uma string de no m�ximo 50 caracteres e em seguida um caractere, mostrar quais as posi��es esse caractere aparece na string lida e quantas vezes ele apareceu.\n");

    int i, countChar = 0;
    char string[50], caractere;

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);
    printf("Informe um caractere:\n");
    fflush(stdin);
    scanf("%c", &caractere);

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == caractere)
        {
            countChar++;
        }
    }

    printf("O caractere \'%c\' aparece %i vezes na string.\n", caractere, countChar);

    return 0;
}

int exercise05()
{
    printf("5 - Ler uma string de no m�ximo 50 caracteres e em seguida um caractere(entre A e z - consista se o caracter esta nesse intervalo), mostrar quais as posi��es esse caractere(mai�scula ou min�scula) na string lida e quantas vezes ele apareceu.\n");
    int i, countChar = 0;
    char string[50], caractere;

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);
    printf("Informe um caractere:\n");
    fflush(stdin);
    scanf("%c", &caractere);
    printf("Posi��es de \'%c\' na string \"%s\": \n", caractere, string);

    if ((int)caractere >= 65 && (int)caractere <= 90)
    {
        strcpy(string, strupr(string));
    }
    else
    {
        if ((int)caractere >= 97 && (int)caractere <= 122)
        {
            strcpy(string, strlwr(string));
        }
    }

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == caractere)
        {
            printf("%i\t", i);
            countChar++;
        }
    }
    printf("O caractere \'%c\' aparece %i vezes na string.\n", caractere, countChar);
    return 0;
}

int exercise06()
{
    printf("6 - Ler uma string de no m�ximo 50 caracteres e mostrar quantas letras possui e quantos caracteres s�o n�meros e quantos n�o s�o nem n�meros nem letras.\n");

    int i, countLetras = 0, countNum = 0, countOutros = 0;
    char string[50];

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);

    for (i = 0; i < strlen(string); i++)
    {
        if (((int)string[i] >= 65 && (int)string[i] <= 90) || ((int)string[i] >= 97 && (int)string[i] <= 122))
        {
            countLetras++;
        }
        else
        {
            if ((int)string[i] >= 48 && (int)string[i] <= 57)
            {
                countNum++;
            }
            else
            {
                countOutros++;
            }
        }
    }

    printf("A string possui:\n%i letras\n%i n�meros\n%i outros tipos de caracteres\n", countLetras, countNum, countOutros);

    return 0;
}

int exercise07()
{
    printf("7 - Ler uma string de no m�ximo 50 caracteres e criar uma nova string com seu inverso, isto � a ultima letra da primeira string ser� a primeira na nova string e assim sucessivamente.\n");

    char string[50], stringReversa[50];
    int i, j = 0;

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);

    for (i = strlen(string) - 1; i >= 0; i--)
    {
        stringReversa[j] = string[i];
        j++;
    }

    stringReversa[j] = '\0'; // n�o entendi essa parte
    printf("\n\tString original:\n%s\n", string);
    printf("\tString reversa:\n%s\n", stringReversa);

    return 0;
}

int exercise08()
{
    printf("8 - Ler uma string de no m�ximo 50 caracteres e retire dessa string todos os espa�os em branco. Utilize uma string auxiliar.\n");
    char string[50], stringFinal[50];
    int i;

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);

    for (i = 0; i <= strlen(string); i++)
    {
        if (string[i] != ' ')
        {
            stringFinal[i] = string[i];
        }
    }
    string[i] = '\0';

    printf("%s", stringFinal);

    return 0;
}

int exercise09()
{
    printf("9 - Ler uma string de no m�ximo 50 caracteres e retire dessa string todos os espacos em branco. Sem utilizar string auxiliar.\n");

    char string[50];
    int i;

    printf("Informe uma string de no m�ximo 50 caracteres:\n");
    fflush(stdin);
    gets(string);
    printf("\n");

    for (i = 0; i <= strlen(string); i++)
    {
        if (string[i] == ' ')
        {
            continue;
        }
        printf("%c", string[i]);
    }

    return 0;
}

int exercise10()
{
    printf("10 - Ler uma string de no m�ximo 50 caracteres em seguida leia outra string de no m�ximo 3 caracteres, informe quantas vezes a segunda string aparece na primeira string, e diga as posi��es iniciais em que ela aparece.\n");

    return 0;
}
