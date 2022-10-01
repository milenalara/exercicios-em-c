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
    printf("1 - (ex. 4a) Leia um número e imprima seu sucessor.\n");
    printf("2 - (ex. 4b) Calcule a média aritmética de quatro números inteiros dados.\n");
    printf("3 - (ex. 4c) Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.\n");
    printf("4 - (ex. 4d) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F). \n");
    printf("5 - (ex. 4e) Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário.\n");
    printf("6 - (ex. 4f) Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo.\n");
    printf("7 - (ex. 4g) Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ração em gramas. Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato. Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias\n");
    printf("8 - (ex. 4h) Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los.\n");
    printf("9 - (ex. 4i) Leia um número e imprima o resto da divisão por 7.\n");
    printf("10 -(ex. 4j)  Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de\n");
    printf("11 - (ex. 5.01) Ler um valor inteiro do teclado e dizer se é par\n");
    printf("12 - (ex. 5.02) Ler um valor inteiro do teclado e dizer se é ímpar\n");
    printf("13 - (ex. 5.03) ler um valor inteiro do teclado e dizer se ímpar e maior que 100.\n");
    printf("14 - (ex. 5.04) ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.\n");
    printf("15 - (ex. 5.05) ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).\n");
    printf("16 - (ex. 5.06) ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].\n");
    printf("17 - (ex. 5.07) ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]\n");
    printf("18 - (ex. 5.08) ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.\n");
    printf("19 - (ex. 5.09) ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo.\n");
    printf("20 - (ex. 5.10) ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.\n");
    printf("21 - (ex. 5.11) ler três valores reais do teclado e dizer se o primeiro está entre os outros dois\n");
    printf("22 - (ex. 5.12) ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois\n");
    printf("23 - (ex. 5.13) ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois\n");
    printf("24 - (ex. 5.14) ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.\n");
    printf("25 - (ex. 5.15) ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.\n");

    return 0;
}

int ex4a()
{
    printf("Leia um número e imprima seu sucessor.\n\n");

    int num, sucessor;

    printf("Informe o número: \n");
    scanf("%d", &num);
    sucessor = num + 1;
    printf("\nO sucessor de %i é %i.", num, sucessor);

    return 0;
}

int ex4b()
{
    printf("Calcule a média aritmética de quatro números inteiros dados.\n\n");

    int num1, num2, num3, num4;
    float media;

    printf("Informe o primeiro número\n");
    scanf("%d", &num1);

    printf("Informe o segundo número\n");
    scanf("%d", &num2);

    printf("Informe o terceiro número\n");
    scanf("%d", &num3);

    printf("Informe o quarto número\n");
    scanf("%d", &num4);

    media = (num1 + num2 + num3 + num4) / 4.0;

    printf("\nA média dos números %d, %d, %d e %d é %.2f.", num1, num2, num3, num4, media);

    return 0;
}

int ex4c()
{
    printf("Faça um algoritmo que receba 3 (três) notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.\n\n");

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

    printf("A média ponderada das notas é %.2f", media);

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
    printf("Informe a temperatura em ºC:\n");
    scanf("%f", &tempC);

    tempF = 9.0/5.0 * tempC + 32;

    printf("%.2f ºC equivale a %.2f ºF", tempC, tempF);
    }
    else
    {
        if(option == 2)
        {
            printf("Informe a temperatura em ºF:\n");
            scanf("%f", &tempF);

            tempC = (tempF - 32) * 5 / 9;

            printf("%.2f ºF equivale a %.2f ºC", tempF, tempC);
        }
    }


    return 0;
}

int ex4e()
{
    printf("Faça um algoritmo que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o novo salário.\n\n");
    float salarioInicial, salarioFinal, aumento;

    printf("Informe o salário atual\n");
    scanf("%f", &salarioInicial);

    printf("Informe o percentual de aumento\n");
    scanf("%f", &aumento);
    aumento = aumento / 100;

    salarioFinal = salarioInicial * (1+ aumento);

    printf("O salário final será R$%.2f", salarioFinal);

    return 0;
}

int ex4f()
{
    printf("Faça um algoritmo que peça ao usuário a base e a altura e calcule a área de um triangulo.\n\n");
    float base, altura, area;

    printf("Informe a base do triângulo:\n");
    scanf("%f", &base);

    printf("Informe a altura do triângulo:\n");
    scanf("%f", &altura);

    area = base * altura / 2;

    printf("A área do triângulo é igual a %.2f\n", area);

    return 0;
}

int ex4g()
{
    printf("Pedro comprou um saco de Ração com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ração em gramas.\n");
    printf("Faça um algoritmo que receba o peso do Saco de ração e a quantidade de ração fornecida para cada gato.\n");
    printf("Calcule e mostre quanto restará de ração no saco após 5 (cinco) dias.\n\n");

    float pesoSaco, qtdFornecida, qtdConsumida, qtdRestante;

    printf("Informe o peso do saco de ração em quilos:\n");
    scanf("%f", &pesoSaco);

    printf("informe a quantidade de ração fornecida para cada gato em gramas:\n");
    scanf("%f", &qtdFornecida);

    qtdConsumida = qtdFornecida * 2 * 5;    // 2 gatos, 5 dias

    qtdRestante = (pesoSaco * 1000) - qtdConsumida;
    qtdRestante = qtdRestante / 1000; // converter de g para kg

    printf("A quantidade de ração restante no saco após 5 dias é %.2f kg", qtdRestante);

    return 0;
}

int ex4h()
{
    printf("Ler dois números inteiros para variáveis a e b. Trocar o valor de b com o de a, e imprimi-los\n\n");

    int a, b, aux;

    printf("Informe o primeiro número inteiro.\na = ");
    scanf("%d", &a);

    printf("Informe o segundo número inteiro.\nb = ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("\nOs valores de \"a\" e \"b\" foram trocados:\na = %d\nb = %d", a, b);

    return 0;
}

int ex4i()
{
    printf("Leia um número e imprima o resto da divisão por 7.\n\n");

    int num, resto;

    printf("Forneça um número inteiro:\n");
    scanf("%d", &num);

    resto = num % 7;

    printf("O resto da divisão de %d por 7 é %d.\n", num, resto);

    return 0;
}

int ex4j()
{
    printf("Calcular a soma dos termos de uma P.A. lendo os valores do primeiro termo, do segundo termo e do número de termos.\n\n");

    int termo1, termo2, termoN, qtdTermos, razao;
    float soma;

    printf("Informe o primeiro termo da P.A.:\n");
    scanf("%d", &termo1);

    printf("Informe o segundo termo da P.A.:\n");
    scanf("%d", &termo2);

    printf("Informe o número de termos da P.A.:\n");
    scanf("%d", &qtdTermos);

    razao = termo2 - termo1;

    termoN = termo1 + (qtdTermos -1)*razao;

    soma = qtdTermos * (termo1 + termoN)/2.0;

    printf("O valor da soma dos termos da P.A. é %.1f.", soma);

    return 0;
}

int ex501()
{
    printf("Ler um valor inteiro do teclado e dizer se é par\n");
    printf("OBS: 0 = false; 1 = true\n\n");

    int ehPar, num;

    printf("Informe um número:\n");
    scanf("%i", &num);

    ehPar = (num % 2 == 0);

    printf("%i é par? -> RE: %i\n", num, ehPar);

    return 0;
}

int ex502()
{
    printf("Ler um valor inteiro do teclado e dizer se é ímpar\n");
    printf("OBS: 0 = false; 1 = true\n\n");


    int ehImpar, num;

    printf("Informe um número:\n");
    scanf("%i", &num);

    ehImpar = !(num % 2 == 0);

    printf("%i é ímpar? -> %i", num, ehImpar);
    return 0;
}

int ex503()
{
    printf("Ler um valor inteiro do teclado e dizer se é ímpar e maior que 100\n");
    printf("OBS: 0 = false; 1 = true\n\n");

    int ehImpar, ehMaiorQue100, num;

    printf("Informe um número:\n");
    scanf("%i", &num);

    ehImpar = !(num % 2 == 0);
    ehMaiorQue100 = ehImpar && (num > 100);

    printf("%i é ímpar e maior que 100? -> %i", num, ehMaiorQue100);

    return 0;
}

int ex504()
{
    printf("Ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100\n");
    printf("OBS: 0 = false; 1 = true\n\n");

    int num;

    printf("Informe um número:\n");
    scanf("%i", &num);

    if ((num % 2 == 0) && (num < 100))
    {
        printf("%i é par e menor que 100.", num);
    }
    else
    {
        if (!(num % 2 == 0) && (num > 100))
        {
            printf("%i é ímpar e maior que 100.", num);
        }
        else
        {
            printf("%i não é par e menor que 100 nem ímpar e maior que 100.\n", num);
        }
    }

    return 0;
}

int ex505()
{
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).\n\n");

    int num;

    printf("Informe um número inteiro:\n");
    scanf("%i", &num);

    if (num > 25 && num < 75)
    {
        printf("%i pertence ao intervalo aberto entre ]25:75[", num);
    }
    else
    {
        printf("%i não pertence ao intervalo aberto entre ]25:75[", num);
    }
    return 0;
}

int ex506()
{
    printf("Ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].\n\n");

    int num;

    printf("Informe um número inteiro:\n");
    scanf("%i", &num);

    if (num >= 25 && num <= 75)
    {
        printf("%i pertence ao intervalo fechado entre [25:75]", num);
    }
    else
    {
        printf("%i não pertence ao intervalo fechado entre [25:75]", num);
    }

    return 0;
}

int ex507()
{
    printf("Ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]\n\n");

    int num;

    printf("Informe um número inteiro:\n");
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
            printf("%i não pertence nem ao intervalo fechado entre [15:45] nem ao intervalo fechado entre [66:99]", num);
        }
    }

    return 0;
}

int ex508()
{
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.\n\n");
    int num1, num2;

    printf("Informe o primeiro número:\n");
    scanf("%i", &num1);
    printf("Informe o segundo número:\n");
    scanf("%i", &num2);

//     char trueOrFalse[] = (num1 % 2 == 0) ? "verdadeiro" : "falso";
//     printf("%i é par? %c", num1, trueOrFalse);
//     error message: error: invalid initializer

    printf("\nOBS: 0 = false, 1 = true\n\n");
    printf("%i é par? -> %i\n", num1, num1 % 2 == 0);
    printf("%i é ímpar? -> %i\n", num2, !(num2 % 2 == 0));

    return 0;
}

int ex509()
{
    printf("Ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo.\n\n");
    int num1, num2;

    printf("Informe o primeiro número:\n");
    scanf("%i", &num1);
    printf("Informe o segundo número:\n");
    scanf("%i", &num2);

    printf("\nOBS: 0 = false, 1 = true\n\n");
    printf("%i é par e positivo? -> %i\n", num1, num1 % 2 == 0 && num1 > 0);
    printf("%i é ímpar e negativo? -> %i\n", num2, !(num2 % 2 == 0) && num2 < 0);

    return 0;
}

int ex510()
{
    printf("Ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.\n\n");
    int num1, num2;

    printf("Informe o primeiro número:\n");
    scanf("%i", &num1);
    printf("Informe o segundo número:\n");
    scanf("%i", &num2);

    if (num1>num2) {
        printf("%i é maior que %i.", num1, num2);
    }
    else
    {
        if(num1<num2) {
            printf("%i é menor que %i.", num1, num2);
        }
        else {
            printf("%i e %i são iguais.", num1, num2);
        }
    }

    return 0;
}

int ex511()
{
    printf("Ler três valores reais do teclado e dizer se o primeiro está entre os outros dois\n\n");
    int num1, num2, num3;

    printf("Informe o primeiro número:\n");
    scanf("%i", &num1);
    printf("Informe o segundo número:\n");
    scanf("%i", &num2);
    printf("Informe o terceiro número:\n");
    scanf("%i", &num3);

    if(num2<num3)
    {
        printf("%i está entre %i e %i? -> ", num1, num2, num3);
    }
    else {
        printf("%i está entre %i e %i? -> ", num1, num3, num2);

    }

    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2))
    {
        printf("Sim");
    }
    else
    {
        printf("Não");
    }

    return 0;
}

int ex512()
{
    printf("Ler três valores reais do teclado e dizer se o primeiro NÃO está entre os outros dois\n\n");
    int num1, num2, num3;

    printf("Informe o primeiro número:\n");
    scanf("%i", &num1);
    printf("Informe o segundo número:\n");
    scanf("%i", &num2);
    printf("Informe o terceiro número:\n");
    scanf("%i", &num3);

    if(num2<num3)
    {
        printf("%i NÃO está entre %i e %i? -> ", num1, num2, num3);
    }
    else {
        printf("%i NÃO está entre %i e %i? -> ", num1, num3, num2);

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
    printf("Ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois\n\n");
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

    printf("\"%c\" está entre \"%c\" e \"%c\"? -> ", caracter1, caracter2, caracter3);

    if (((int)caracter1 > (int)caracter2 && (int)caracter1 < (int)caracter3)
        || ((int)caracter1 > (int)caracter3 && (int)caracter1 < (int)caracter2))
    {
        printf("Sim");
    }
    else
    {
        printf("Não");
    }

    return 0;
}

int ex514()
{
    printf("Ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.\n\n");

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

    printf("\"%c\", \"%c\", e \"%c\" estão em ordem crescente lexicograficamente? -> ", caracter1, caracter2, caracter3);

    if ((int)tolower(caracter1) < (int)tolower(caracter2)
        && (int)tolower(caracter2) < (int)tolower(caracter3))
    {
        printf("Sim");
    }
    else
    {
        printf("Não");
    }

    return 0;


    return 0;
}

int ex515()
{
    printf("Ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.\n\n");

    char caracter, aux;

    printf("Informe o caracter:\n");
    scanf("%c", &aux);
    scanf("%c", &caracter);

    printf("%c é uma letra maiúscula? -> ", caracter);

    if((int)caracter >= 65 && (int)caracter <= 90)
    {
        printf("Sim\n");
    }
    else
    {
        printf("Não\n");
    }

    return 0;
}
