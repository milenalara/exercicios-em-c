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
    printf("Digite o c�digo do programa que deseja executar\n");
    printf("OU digite 0 para ver as op��es de programas\n");
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
                printf("Programa n�o encontrado\n");
        }

        printf("\n========================================\n\n");
        printf("Digite o c�digo do programa que deseja executar\n");
        printf("OU digite 0 para ver as op��es de programas\n");
        printf("OU digite -1 para encerrar\n");
        scanf("%i", &op);
    }

    return 0;
}

int options()
{
    printf("\n======================================== OP��ES DE PROGRAMAS ========================================\n\n");
    printf("1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.\n");
    printf("2. Fazer um algoritmo que pe�a o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da m�dia do aluno, uma mensagem de \"Aprovado\", caso a media seja igual ou superior a 6, ou a mensagem \"reprovado\", caso contrario.\n");
    printf("3. Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado solido, l�quido ou gasoso.\n");
    printf("4. Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de uma mensagem de erro.\n");
    printf("5. Construa um algoritmo que receba como entrada tr�s valores (A,B e C). Ap�s o processamento o menor valor dever� estar em A e o maior valor em C, e o valor intermedi�rio em B. Imprima A,B e C.\n");
    printf("6. Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z e verifique se o n�mero X � divis�vel por Y e por Z.\n");
    printf("7. O numero 3025 possui a seguinte caracter�stica: 30 + 25 = 55; 552 = 3025. Fazer um algoritmo que dado um numero de 4 d�gitos (verifique se o n�mero pertence a faixa) calcule e escreva se ele possui ou n�o esta caracter�stica.\n");
    printf("8. Ler um c�digo do teclado e mostrar o nome correspondente, de acordo com a lista: \n\t221 Bernardo \n\t211 Eust�quio \n\t311 Luiz \n\t312 M�rio \n\t332 Artur\n\n" );
    printf("9. N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 d�gitos; calcule e escreva se este e ou n�o pal�ndromo.\n");
    printf("10. Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO. O custo da �gua varia dependendo do tipo do consumidor - residencial, comercial ou industrial. \n");

    return 0;
}

int ex01()
{
    printf("1. Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar.\n");
    int num;

    printf("Informe o n�mero:\n");
    scanf("%d", &num);
    printf("%d � par ou �mpar? -> %s", num, num % 2 == 0 ? "par" : "�mpar");

    return 0;
}

int ex02()
{
    printf("2. Fazer um algoritmo que pe�a o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da m�dia do aluno, uma mensagem de \"Aprovado\", caso a media seja igual ou superior a 6, ou a mensagem \"reprovado\", caso contrario.\n");
    char nome[100];
    float nota1, nota2, nota3, media;

    printf("Infome o nome do(a) aluno(a):\n");
    fflush(stdin);
    gets(nome);

    printf("Informe a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Informe a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Informe a terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Nome: %s \nM�dia: %.2f \n%s", nome, media, media >= 60 ? "Aprovado" : "Reprovado");

    return 0;
}

int ex03()
{
    printf("3. Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado solido, l�quido ou gasoso.\n");
    char estado[100];
    float temp;

    printf("Informe a temperatura:\n");
    scanf("%f", &temp);

    if(temp >= 100 )
    {
        strcpy(estado, "gasoso");
    } else
    {
        if (temp >= 0)
        {
            strcpy(estado, "l�quido");
        }
        else
        {
            strcpy(estado, "s�lido");
        }
    }

    printf("O estado da �gua � %s", estado);

    return 0;
}

int ex04()
{
    printf("4. Leia um valor X e se ele for menor que 0 avalie Y = x� + 4. Se ele for maior que 0 avalie x� - 3 e se ele for igual a 0 de uma mensagem de erro.\n");
    float x, y;

    printf("Informe X:\n");
    scanf("%f", &x);

    if (x < 0)
    {
        y = pow(x, 2) - 4;
    }
    else
    {
        if (x > 0)
        {
            y = pow(x, 3) - 3;
        }
        else
        {
            printf("Error");
            return 0;
        }
    }

    printf("y = %.2f", y);

    return 0;
}

int ex05()
{
    printf("5. Construa um algoritmo que receba como entrada tr�s valores (A,B e C). Ap�s o processamento o menor valor dever� estar em A e o maior valor em C, e o valor intermedi�rio em B. Imprima A,B e C.\n");
    int num1, num2, num3, aux;

    printf("Informe o primeiro n�mero:\n");
    scanf("%i", &num1);

    printf("Informe o segundo n�mero:\n");
    scanf("%i", &num2);

    printf("Informe o terceiro n�mero:\n");
    scanf("%i", &num3);

    if (num1 > num3)
    {
        aux = num1;
        num1 = num3;
        num3 = aux;
    }
    if (num1 > num2)
    {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if (num2 > num3)
    {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    printf("%i < %i < %i", num1, num2, num3);
    return 0;
}

int ex06()
{
    printf("6. Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z e verifique se o n�mero X � divis�vel por Y e por Z.\n");

    int num1, num2, num3;

    printf("Informe o primeiro n�mero:\n");
    scanf("%i", &num1);

    printf("Informe o segundo n�mero:\n");
    scanf("%i", &num2);

    printf("Informe o terceiro n�mero:\n");
    scanf("%i", &num3);

    if(num1 % num2 == 0 && num1 % num3 == 0)
    {
        printf("%i � divis�vel por %i e por %i.\n", num1, num2, num3);
    }
    else
    {
        if(num1 % num2 == 0)
        {
            printf("%i � divis�vel por %i.\n", num1, num2);
        }
        else
        {
            if(num1 % num3 == 0)
            {
                printf("%i � divis�vel por %i.\n", num1, num3);
            }
            else
            {
                printf("%i n�o � divis�vel nem por %i e nem por %i.\n", num1, num2, num3);
            }
        }
    }

    return 0;
}

int ex07()
{
    printf("7. O numero 3025 possui a seguinte caracter�stica: 30 + 25 = 55; 55� = 3025. Fazer um algoritmo que dado um numero de 4 d�gitos (verifique se o n�mero pertence a faixa) calcule e escreva se ele possui ou n�o esta caracter�stica.\n");

    int num, milhares, dezenas, soma, numAoQuadrado;

    printf("Informe o n�mero:\n");
    scanf("%i", &num);

    milhares = num / 100;
    dezenas = num % 100;
    soma = milhares + dezenas;
    numAoQuadrado = pow(soma, 2);

    printf("%i + %i = %i\n", milhares, dezenas, soma);
    printf("%i� = %i\n", soma, numAoQuadrado );

    if(num <= 1000 || num >= 9999)
    {
        printf("Favor informar um n�mero de 4 d�gitos");
    }
    else
    {
        if(numAoQuadrado  == num)
        {
            printf("O n�mero possui a mesma propriedade que 3025");
        }
        else
        {
            printf("O n�mero N�O possui a mesma propriedade que 3025");
        }
    }

//    O c�digo abaixo verifica quais n�meros tem a propriedade:
//    Os n�meros s�o 2025 e 9801

//    num = 1000;
//    for (int i = 1000; i <= 9999; i++)
//    {
//        milhares = num / 100;
//        dezenas = num % 100;
//        soma = milhares + dezenas;
//
//        if(pow(soma, 2) == num)
//        {
//            printf("O n�mero %i possui a mesma propriedade que 3025\n", num);
//        }
//
//        num++;
//    }

    return 0;
}

int ex08()
{
    printf("8. Ler um c�digo do teclado e mostrar o nome correspondente, de acordo com a lista: \n\t221 Bernardo \n\t211 Eust�quio \n\t311 Luiz \n\t312 M�rio \n\t332 Artur\n" );
    int num;
    char nome[50];

    printf("Informe o n�mero:\n");
    scanf("%i", &num);

    switch(num)
    {
        case 211:
            strcpy(nome, "Eust�quio");
            break;
        case 221:
            strcpy(nome, "Bernardo");
            break;
        case 311:
            strcpy(nome, "Luiz");
            break;
        case 312:
            strcpy(nome, "M�rio");
            break;
        case 332:
            strcpy(nome, "Artur");
            break;
        default:
            strcpy(nome, "N�O ENCONTRADO");
    }

    printf("Nome: %s", nome);

    return 0;
}

int ex09()
{
    printf("9. N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.\nExemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 d�gitos; calcule e escreva se este � ou n�o pal�ndromo.\n");
    int num, digi1, digi2, digi4, digi5, aux;

    printf("Informe o n�mero:\n");
    scanf("%i", &num); // 12345 -> 5, 4, 3, 4

    digi1 = num % 10;
    aux = num / 10;

    digi2 = aux % 10;
    aux = aux / 100;

    digi4 = aux % 10;
    aux = aux / 10;

    digi5 = aux % 10;
    aux = aux / 10;

    if(num >= 10000 && num < 99999)
    {
        if(digi2==digi4 && digi1==digi5)
        {
            printf("%i � pal�ndromo", num);
        }
        else
        {
            printf("%i N�O � pal�ndromo", num);
        }
    }

    return 0;
}

int ex10()
{
    printf("10. Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO. O custo da �gua varia dependendo do tipo do consumidor - residencial, comercial ou industrial. \n");

//A regra para calcular a conta e:
//� Residencial: R$ 75,00 de taxa mais R$ 3,50 por m� gastos;
//� Comercial: R$ 500,00 para os primeiros 80 m� gastos mais R$ 5,50 por m� gastos acima dos 80 m�;
//� Industrial: R$ 800,00 para os primeiros 100 m� gastos mas R$ 8,00 por m� gastos acima dos 100 m�;
//O algoritmo devera ler a conta do cliente, seu tipo (residencial, comercial e industrial) e o seu consumo de �gua em metros cubicos.
//Como resultado imprimir o valor a ser pago pelo mesmo

    int tipoConsumidor;
    float consumo, conta;

    printf("Informe o consumo em m�:\n");
    scanf("%f", &consumo);

    printf("Informe o tipo do consumidor\nDigite \"1\" para residencial \nDigite \"2\" para comercial \nDigite \"3\" para industrial:\n");
    scanf("%i", &tipoConsumidor);

    if (tipoConsumidor == 1)
    {
        conta = 75 + 3,50 * consumo;
    }
    else
    {
        if (tipoConsumidor == 2)
        {
            if(consumo <= 80)
            {
                conta = 500;
            }
            else
            {
                conta = 500 + (consumo - 80) * 5,50;
            }
        }
        else
        {
            if (tipoConsumidor == 3)
            {
                if (consumo <= 10)
                {
                    conta = 800;
                }
                else
                {
                    conta = 800 + (consumo - 100) * 8,00;
                }
            }
            else
            {
                printf("Tipo de consumidor inexistente");
                return 0;
            }
        }
    }

    printf("Conta: R$%.2f", conta);

    return 0;
}
