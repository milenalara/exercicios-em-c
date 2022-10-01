#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include <ctype.h>

int options();
int ex4a();
int ex4b();
int ex4c();
int ex4d();
int ex4e();
int ex4f();
int ex4g();
int ex4h();
int ex4i();
int ex4j();
int ex501();
int ex502();
int ex503();
int ex504();
int ex505();
int ex506();
int ex507();
int ex508();
int ex509();
int ex510();
int ex511();
int ex512();
int ex513();
int ex514();
int ex515();

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
                ex4a();
                break;
            case 2:
                ex4b();
                break;
            case 3:
                ex4c();
                break;
            case 4:
                ex4d();
                break;
            case 5:
                ex4e();
                break;
            case 6:
                ex4f();
                break;
            case 7:
                ex4g();
                break;
            case 8:
                ex4h();
                break;
            case 9:
                ex4i();
                break;
            case 10:
                ex4j();
                break;
            case 11:
                ex501();
                break;
            case 12:
                ex502();
                break;
            case 13:
                ex503();
                break;
            case 14:
                ex504();
                break;
            case 15:
                ex505();
                break;
            case 16:
                ex506();
                break;
            case 17:
                ex507();
                break;
            case 18:
                ex508();
                break;
            case 19:
                ex509();
                break;
            case 20:
                ex510();
                break;
            case 21:
                ex511();
                break;
            case 22:
                ex512();
                break;
            case 23:
                ex513();
                break;
            case 24:
                ex514();
                break;
            case 25:
                ex515();
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
    printf("1 - (ex. 4a) Leia um n�mero e imprima seu sucessor.\n");
    printf("2 - (ex. 4b) Calcule a m�dia aritm�tica de quatro n�meros inteiros dados.\n");
    printf("3 - (ex. 4c) Fa�a um algoritmo que receba 3 (tr�s) notas e seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.\n");
    printf("4 - (ex. 4d) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F). \n");
    printf("5 - (ex. 4e) Fa�a um algoritmo que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o novo sal�rio.\n");
    printf("6 - (ex. 4f) Fa�a um algoritmo que pe�a ao usu�rio a base e a altura e calcule a �rea de um triangulo.\n");
    printf("7 - (ex. 4g) Pedro comprou um saco de Ra��o com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ra��o em gramas. Fa�a um algoritmo que receba o peso do Saco de ra��o e a quantidade de ra��o fornecida para cada gato. Calcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias\n");
    printf("8 - (ex. 4h) Ler dois n�meros inteiros para vari�veis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");
    printf("9 - (ex. 4i) Leia um n�mero e imprima o resto da divis�o por 7.\n");
    printf("10 -(ex. 4j)  Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do n�mero de\n");
    printf("11 - (ex. 5.01) Ler um valor inteiro do teclado e dizer se � par\n");
    printf("12 - (ex. 5.02) Ler um valor inteiro do teclado e dizer se � �mpar\n");
    printf("13 - (ex. 5.03) ler um valor inteiro do teclado e dizer se �mpar e maior que 100.\n");
    printf("14 - (ex. 5.04) ler um valor inteiro do teclado e dizer se � par e menor que 100, ou �mpar e maior que 100.\n");
    printf("15 - (ex. 5.05) ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).\n");
    printf("16 - (ex. 5.06) ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].\n");
    printf("17 - (ex. 5.07) ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]\n");
    printf("18 - (ex. 5.08) ler dois valores inteiros do teclado e dizer se o primeiro � par e o segundo � �mpar.\n");
    printf("19 - (ex. 5.09) ler dois valores inteiros do teclado e dizer se o primeiro � par e positivo, e o segundo � �mpar e negativo.\n");
    printf("20 - (ex. 5.10) ler dois valores reais do teclado e dizer se o primeiro � maior, menor ou igual ao segundo.\n");
    printf("21 - (ex. 5.11) ler tr�s valores reais do teclado e dizer se o primeiro est� entre os outros dois\n");
    printf("22 - (ex. 5.12) ler tr�s valores reais do teclado e dizer se o primeiro n�o est� entre os outros dois\n");
    printf("23 - (ex. 5.13) ler tr�s valores literais (caracteres) do teclado e dizer se o primeiro est� entre os outros dois\n");
    printf("24 - (ex. 5.14) ler tr�s valores literais (caracteres) do teclado e dizer se est�o em ordem crescente lexicograficamente.\n");
    printf("25 - (ex. 5.15) ler um valor literal (caractere) do teclado e dizer se � uma letra mai�scula.\n");

    return 0;
}

int ex4a()
{
    printf("Leia um n�mero e imprima seu sucessor.\n\n");

    int num, sucessor;

    printf("Informe o n�mero: \n");
    scanf("%d", &num);
    sucessor = num + 1;
    printf("\nO sucessor de %i � %i.", num, sucessor);

    return 0;
}

int ex4b()
{
    printf("Calcule a m�dia aritm�tica de quatro n�meros inteiros dados.\n\n");

    int num1, num2, num3, num4;
    float media;

    printf("Informe o primeiro n�mero\n");
    scanf("%d", &num1);

    printf("Informe o segundo n�mero\n");
    scanf("%d", &num2);

    printf("Informe o terceiro n�mero\n");
    scanf("%d", &num3);

    printf("Informe o quarto n�mero\n");
    scanf("%d", &num4);

    media = (num1 + num2 + num3 + num4) / 4.0;

    printf("\nA m�dia dos n�meros %d, %d, %d e %d � %.2f.", num1, num2, num3, num4, media);

    return 0;
}

int ex4c()
{
    printf("Fa�a um algoritmo que receba 3 (tr�s) notas e seus respectivos pesos, calcule e mostre a m�dia ponderada dessas notas.\n\n");

    int peso1, peso2, peso3;
    float nota1, nota2, nota3, media;

    printf("Informe a primeira nota, e em seguida, o seu peso:\n");
    scanf("%f", &nota1);
    scanf("%i", &peso1);

    printf("Informe a segunda nota, e em seguida, o seu peso:\n");
    scanf("%f", &nota2);
    scanf("%i", &peso2);

    printf("Informe a terceira nota, e em seguida, o seu peso:\n");
    scanf("%f", &nota3);
    scanf("%i", &peso3);

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3) / (peso1 + peso2 + peso3);

    printf("A m�dia ponderada das notas � %.2f", media);

    return 0;
}

int ex4d()
{
    printf("Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F).\n\n");

    int option;
    float tempC, tempF;

    printf("Digite \"1\" para converter de Celsius para Fahrenheit\n");
    printf("Digite \"2\" para converter de Fahrenheit para Celsius\n");
    scanf("%i", &option);

    if (option == 1)
    {
    printf("Informe a temperatura em �C:\n");
    scanf("%f", &tempC);

    tempF = 9.0/5.0 * tempC + 32;

    printf("%.2f �C equivale a %.2f �F", tempC, tempF);
    }
    else
    {
        if(option == 2)
        {
            printf("Informe a temperatura em �F:\n");
            scanf("%f", &tempF);

            tempC = (tempF - 32) * 5 / 9;

            printf("%.2f �F equivale a %.2f �C", tempF, tempC);
        }
    }


    return 0;
}

int ex4e()
{
    printf("Fa�a um algoritmo que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e mostre o novo sal�rio.\n\n");
    float salarioInicial, salarioFinal, aumento;

    printf("Informe o sal�rio atual\n");
    scanf("%f", &salarioInicial);

    printf("Informe o percentual de aumento\n");
    scanf("%f", &aumento);
    aumento = aumento / 100;

    salarioFinal = salarioInicial * (1+ aumento);

    printf("O sal�rio final ser� R$%.2f", salarioFinal);

    return 0;
}

int ex4f()
{
    printf("Fa�a um algoritmo que pe�a ao usu�rio a base e a altura e calcule a �rea de um triangulo.\n\n");
    float base, altura, area;

    printf("Informe a base do tri�ngulo:\n");
    scanf("%f", &base);

    printf("Informe a altura do tri�ngulo:\n");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("A �rea do tri�ngulo � igual a %.2f\n", area);

    return 0;
}

int ex4g()
{
    printf("Pedro comprou um saco de Ra��o com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ra��o em gramas.\n");
    printf("Fa�a um algoritmo que receba o peso do Saco de ra��o e a quantidade de ra��o fornecida para cada gato.\n");
    printf("Calcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias.\n\n");

    float pesoSaco, qtdFornecida, qtdConsumida, qtdRestante;

    printf("Informe o peso do saco de ra��o em quilos:\n");
    scanf("%f", &pesoSaco);

    printf("informe a quantidade de ra��o fornecida para cada gato em gramas:\n");
    scanf("%f", &qtdFornecida);

    qtdConsumida = qtdFornecida * 2 * 5;    // 2 gatos, 5 dias

    qtdRestante = (pesoSaco * 1000) - qtdConsumida;
    qtdRestante = qtdRestante / 1000; // converter de g para kg

    printf("A quantidade de ra��o restante no saco ap�s 5 dias � %.2f kg", qtdRestante);

    return 0;
}

int ex4h()
{
    printf("Ler dois n�meros inteiros para vari�veis a e b. Trocar o valor de b com o de a, e imprimi-los\n\n");

    int a, b, aux;

    printf("Informe o primeiro n�mero inteiro.\na = ");
    scanf("%d", &a);

    printf("Informe o segundo n�mero inteiro.\nb = ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("\nOs valores de \"a\" e \"b\" foram trocados:\na = %d\nb = %d", a, b);

    return 0;
}

int ex4i()
{
    printf("Leia um n�mero e imprima o resto da divis�o por 7.\n\n");

    int num, resto;

    printf("Forne�a um n�mero inteiro:\n");
    scanf("%d", &num);

    resto = num % 7;

    printf("O resto da divis�o de %d por 7 � %d.\n", num, resto);

    return 0;
}

int ex4j()
{
    printf("Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do n�mero de termos.\n\n");

    int termo1, termo2, termoN, qtdTermos, razao;
    float soma;

    printf("Informe o primeiro termo da P.A.:\n");
    scanf("%d", &termo1);

    printf("Informe o segundo termo da P.A.:\n");
    scanf("%d", &termo2);

    printf("Informe o n�mero de termos da P.A.:\n");
    scanf("%d", &qtdTermos);

    razao = termo2 - termo1;

    termoN = termo1 + (qtdTermos -1)*razao;

    soma = qtdTermos * (termo1 + termoN)/2.0;

    printf("O valor da soma dos termos da P.A. � %.1f.", soma);

    return 0;
}

int ex501()
{
    printf("Ler um valor inteiro do teclado e dizer se � par\n");
    printf("OBS: 0 = false; 1 = true\n\n");

    int ehPar, num;

    printf("Informe um n�mero:\n");
    scanf("%i", &num);

    ehPar = (num % 2 == 0);

    printf("%i � par? -> RE: %i\n", num, ehPar);

    return 0;
}

int ex502()
{
    printf("Ler um valor inteiro do teclado e dizer se � �mpar\n");
    printf("OBS: 0 = false; 1 = true\n\n");


    int ehImpar, num;

    printf("Informe um n�mero:\n");
    scanf("%i", &num);

    ehImpar = !(num % 2 == 0);

    printf("%i � �mpar? -> %i", num, ehImpar);
    return 0;
}

int ex503()
{
    printf("Ler um valor inteiro do teclado e dizer se � �mpar e maior que 100\n");
    printf("OBS: 0 = false; 1 = true\n\n");

    int ehImpar, ehMaiorQue100, num;

    printf("Informe um n�mero:\n");
    scanf("%i", &num);

    ehImpar = !(num % 2 == 0);
    ehMaiorQue100 = ehImpar && (num > 100);

    printf("%i � �mpar e maior que 100? -> %i", num, ehMaiorQue100);

    return 0;
}

int ex504()
{
    printf("Ler um valor inteiro do teclado e dizer se � par e menor que 100, ou �mpar e maior que 100\n");
    printf("OBS: 0 = false; 1 = true\n\n");

    int num;

    printf("Informe um n�mero:\n");
    scanf("%i", &num);

    if ((num % 2 == 0) && (num < 100))
    {
        printf("%i � par e menor que 100.", num);
    }
    else
    {
        if (!(num % 2 == 0) && (num > 100))
        {
            printf("%i � �mpar e maior que 100.", num);
        }
        else
        {
            printf("%i n�o � par e menor que 100 nem �mpar e maior que 100.\n", num);
        }
    }

    return 0;
}

int ex505()
{
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).\n\n");

    int num;

    printf("Informe um n�mero inteiro:\n");
    scanf("%i", &num);

    if (num > 25 && num < 75)
    {
        printf("%i pertence ao intervalo aberto entre ]25:75[", num);
    }
    else
    {
        printf("%i n�o pertence ao intervalo aberto entre ]25:75[", num);
    }
    return 0;
}

int ex506()
{
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].\n\n");

    int num;

    printf("Informe um n�mero inteiro:\n");
    scanf("%i", &num);

    if (num >= 25 && num <= 75)
    {
        printf("%i pertence ao intervalo fechado entre [25:75]", num);
    }
    else
    {
        printf("%i n�o pertence ao intervalo fechado entre [25:75]", num);
    }

    return 0;
}

int ex507()
{
    printf("Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]\n\n");

    int num;

    printf("Informe um n�mero inteiro:\n");
    scanf("%i", &num);

    if (num >= 15 && num <= 45)
    {
        printf("%i pertence ao intervalo fechado entre [15:45]", num);
    }
    else
    {
        if (num >= 66 && num <= 99)
        {
            printf("%i pertence ao intervalo fechado entre [66:99]", num);
        }
        else
        {
            printf("%i n�o pertence nem ao intervalo fechado entre [15:45] nem ao intervalo fechado entre [66:99]", num);
        }
    }

    return 0;
}

int ex508()
{
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro � par e o segundo � �mpar.\n\n");
    int num1, num2;

    printf("Informe o primeiro n�mero:\n");
    scanf("%i", &num1);
    printf("Informe o segundo n�mero:\n");
    scanf("%i", &num2);

//     char trueOrFalse[] = (num1 % 2 == 0) ? "verdadeiro" : "falso";
//     printf("%i � par? %c", num1, trueOrFalse);
//     error message: error: invalid initializer

    printf("\nOBS: 0 = false, 1 = true\n\n");
    printf("%i � par? -> %i\n", num1, num1 % 2 == 0);
    printf("%i � �mpar? -> %i\n", num2, !(num2 % 2 == 0));

    return 0;
}

int ex509()
{
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro � par e positivo, e o segundo � �mpar e negativo.\n\n");
    int num1, num2;

    printf("Informe o primeiro n�mero:\n");
    scanf("%i", &num1);
    printf("Informe o segundo n�mero:\n");
    scanf("%i", &num2);

    printf("\nOBS: 0 = false, 1 = true\n\n");
    printf("%i � par e positivo? -> %i\n", num1, num1 % 2 == 0 && num1 > 0);
    printf("%i � �mpar e negativo? -> %i\n", num2, !(num2 % 2 == 0) && num2 < 0);

    return 0;
}

int ex510()
{
    printf("Ler dois valores reais do teclado e dizer se o primeiro � maior, menor ou igual ao segundo.\n\n");
    int num1, num2;

    printf("Informe o primeiro n�mero:\n");
    scanf("%i", &num1);
    printf("Informe o segundo n�mero:\n");
    scanf("%i", &num2);

    if (num1>num2) {
        printf("%i � maior que %i.", num1, num2);
    }
    else
    {
        if(num1<num2) {
            printf("%i � menor que %i.", num1, num2);
        }
        else {
            printf("%i e %i s�o iguais.", num1, num2);
        }
    }

    return 0;
}

int ex511()
{
    printf("Ler tr�s valores reais do teclado e dizer se o primeiro est� entre os outros dois\n\n");
    int num1, num2, num3;

    printf("Informe o primeiro n�mero:\n");
    scanf("%i", &num1);
    printf("Informe o segundo n�mero:\n");
    scanf("%i", &num2);
    printf("Informe o terceiro n�mero:\n");
    scanf("%i", &num3);

    if(num2<num3)
    {
        printf("%i est� entre %i e %i? -> ", num1, num2, num3);
    }
    else {
        printf("%i est� entre %i e %i? -> ", num1, num3, num2);

    }

    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
    {
        printf("Sim");
    }
    else
    {
        printf("N�o");
    }

    return 0;
}

int ex512()
{
    printf("Ler tr�s valores reais do teclado e dizer se o primeiro N�O est� entre os outros dois\n\n");
    int num1, num2, num3;

    printf("Informe o primeiro n�mero:\n");
    scanf("%i", &num1);
    printf("Informe o segundo n�mero:\n");
    scanf("%i", &num2);
    printf("Informe o terceiro n�mero:\n");
    scanf("%i", &num3);

    if(num2<num3)
    {
        printf("%i N�O est� entre %i e %i? -> ", num1, num2, num3);
    }
    else {
        printf("%i N�O est� entre %i e %i? -> ", num1, num3, num2);

    }

    if (!(num1 > num2 && num1 < num3) && !(num1 > num3 && num1 < num2))
    {
        printf("Verdadeiro");
    }
    else
    {
        printf("Falso");
    }

    return 0;
}

int ex513()
{
    printf("Ler tr�s valores literais (caracteres) do teclado e dizer se o primeiro est� entre os outros dois\n\n");
    char caracter1, caracter2, caracter3, aux;

    printf("Informe o primeiro caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter1);

    printf("Informe o segundo caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter2);

    printf("Informe o terceiro caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter3);

    printf("\"%c\" est� entre \"%c\" e \"%c\"? -> ", caracter1, caracter2, caracter3);

    if (((int)caracter1 > (int)caracter2 && (int)caracter1 < (int)caracter3)
        || ((int)caracter1 > (int)caracter3 && (int)caracter1 < (int)caracter2))
    {
        printf("Sim");
    }
    else
    {
        printf("N�o");
    }

    return 0;
}

int ex514()
{
    printf("Ler tr�s valores literais (caracteres) do teclado e dizer se est�o em ordem crescente lexicograficamente.\n\n");

    char caracter1, caracter2, caracter3, aux;

    printf("Informe o primeiro caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter1);

    printf("Informe o segundo caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter2);

    printf("Informe o terceiro caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter3);

    printf("\"%c\", \"%c\", e \"%c\" est�o em ordem crescente lexicograficamente? -> ", caracter1, caracter2, caracter3);

    if ((int)tolower(caracter1) < (int)tolower(caracter2)
        && (int)tolower(caracter2) < (int)tolower(caracter3))
    {
        printf("Sim");
    }
    else
    {
        printf("N�o");
    }

    return 0;


    return 0;
}

int ex515()
{
    printf("Ler um valor literal (caractere) do teclado e dizer se � uma letra mai�scula.\n\n");

    char caracter, aux;

    printf("Informe o caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter);

    printf("%c � uma letra mai�scula? -> ", caracter);

    if((int)caracter >= 65 && (int)caracter <= 90)
    {
        printf("Sim\n");
    }
    else
    {
        printf("N�o\n");
    }

    return 0;
}
