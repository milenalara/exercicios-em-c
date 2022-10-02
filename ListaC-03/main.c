#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

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

    while (op != -1)
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
        scanf("%i", &op);
    }

    return 0;
}

int options()
{
    printf("\n======================================== OPÇÕES DE PROGRAMAS ========================================\n\n");

    printf("1 - Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares (QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3\n");
    printf("2 - Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o menor e a média aritmética desse conjunto de dados. (Flag -1).\n");
    printf("3 - Escrever um algoritmo em Portugol, para calcular e imprimir o fatorial de um número lido do teclado. Ex. Fatorial de 5! = 5x4x3x2x1=120\n");
    printf("4 – Calcule o valor da seguinte série lido a quantidade de termos: S = 1 - 1/3³ + 1/5³ - 1/7³ + 1/9³ - ...\n");
    printf("5 - A série de fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este n-ésimo termo.\n");
    printf("6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá se lido do teclado. S = +1/n - 2/(n-1) + 3/(n-2) - 4/(n-3) + ... n/1 \n");
    printf("7 - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números palíndromos de 10000 a 99999.\n");
    printf("8 - O numero 3025 possui a seguinte característica: 30 + 25 = 55; 55^2 = 3025. Quantos e quais são os números de 4 dígitos possuem essa característica?\n");
    printf("9. Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0 – cara e 1 – para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas. (utilize o comando - para que o computador escolha o resultado). \n");
    printf("10. Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo usuário em no máximo 10 tentativas! Verifique que você conseguirá acertar qualquer número em no máximo 10 tentativas!!!\n");
    return 0;
}

int ex01()
{
    printf("1 - Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de números pares (QPares) e a quantidade de números impares (QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela (FLAG) para fim de leitura. Ex.: 1,2,3,4,5,9999 => Pares=2 Impares=3\n");

    int num, qPares = 0, qImpares = 0;

    do
    {

        printf("Informe o número:\n");
        scanf("%i", &num);

        if (num != 9999)
        {
            if (num % 2 == 0)
            {
                qPares++;
            }
            else
            {
                qImpares++;
            }
        }
    } while (num != 9999);

    printf("Quantidade de pares: %i\nQuantidade de ímpares: %i\n", qPares, qImpares);
    return 0;
}

int ex02()
{
    printf("2 - Faça um programa que leia um conjunto indeterminado de números inteiros positivos e imprima o maior, o menor e a média aritmética desse conjunto de dados. (Flag -1).\n");

    int num, maior = 0, menor = 9999, soma = 0, count = 0;
    float media;

    do
    {
        printf("Informe o número:\n");
        scanf("%i", &num);

        if (num != -1)
        {
            if (num < menor)
            {
                menor = num;
            }
            if (num > maior)
            {
                maior = num;
            }
            soma += num;
            count++;
        }
    } while (num != -1);

    printf("soma: %i", soma);
    printf("count: %i", count);
    media = soma / (int)count;

    printf("\nMaior número: %i\n", maior);
    printf("Menor número: %i\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}

int ex03()
{
    printf("3 - Escrever um algoritmo para calcular e imprimir o fatorial de um número lido do teclado.\n");

    int num, fatorial = 1;

    printf("Informe o número:\n");
    scanf("%i", &num);

    printf("%i! = ", num);

    while (num >= 1)
    {
        fatorial *= num;
        num--;
    }

    printf("%i", fatorial);

    return 0;
}

int ex04()
{
    printf("4 – Calcule o valor da seguinte série lido a quantidade de termos: S = 1 - 1/3³ + 1/5³ - 1/7³ + 1/9³ - ...\n");

    int qtdTermos = 0;
    float termo = 0, denom = 1, resultado = 0;
    printf("Informe a quantidade de termos:\n");
    scanf("%i", &qtdTermos);

    for (int i = 1; i <= qtdTermos; i++)
    {
        termo = 1 / pow(denom, 3);

        if (i % 2 == 0)
        {
            resultado -= termo;
        }
        else
        {
            resultado += termo;
        }
        denom += 2;
    }

    printf("Resultado: %.6f", resultado);

    return 0;
}

int ex05()
{
    printf("5 - A série de fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... Escreva um algoritmo que peça um número N maior que 2. Gere e imprima a série até este n-ésimo termo.\n");

    int n1 = 1, n2 = 1, n = 2, num;

    printf("Informe o número:\n");
    scanf("%i", &num);

    if (num <= 2)
    {
        printf("ERRO: informe um número MAIOR que 2");
        return 0;
    }

    printf("%i, %i", n1, n2);

    for (int i = n; i <= num; i += n1)
    {
        n = n1 + n2;
        n1 = n2;
        n2 = n;
        printf(", %i", n);
    }

    return 0;
}

int ex06()
{
    printf("6 - Fazer um algoritmo para calcular o valor de s, dado por, sendo o valor de N deverá se lido do teclado. S = +1/n - 2/(n-1) + 3/(n-2) - 4/(n-3) + ... n/1 \n");

    int num = 1, denom, sinal = 1;
    float fracao = 0, soma = 0;

    printf("Informe o valor de n:\n");
    scanf("%i", &denom);

    while (denom > 0)
    {
        fracao = num / denom;
        fracao *= sinal;
        soma += fracao;
        num++;
        denom--;
        sinal *= -1;
    }

    printf("%.6f", soma);

    return 0;
}

int ex07()
{
    printf("7 - Números palíndromos são aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor. Exemplo:929, 44, 97379. Fazer um algoritmo que imprima todos os números palíndromos de 10000 a 99999.\n");

    int n1, n2, n4, n5, aux;

    for (int num = 10000; num <= 99999; num++)
    {
        n5 = num % 10;
        aux = num / 10;
        n4 = aux % 10;
        aux = aux / 100;
        n2 = aux % 10;
        aux = aux / 10;
        n1 = aux % 10;

        if (n1 == n5 && n2 == n4)
        {
            printf("%i\t", num);
        }
    }

    return 0;
}

int ex08()
{
    printf("8 - O numero 3025 possui a seguinte característica: 30 + 25 = 55; 55^2 = 3025. Quantos e quais são os números de 4 dígitos possuem essa característica?\n");

    int milhares, dezenas, soma, count = 1;
    for (int num = 1000; num <= 9999; num++)
    {
        milhares = num / 100;
        dezenas = num % 100;
        soma = milhares + dezenas;

        if (num != 3025)
        {
            if (pow(soma, 2) == num)
            {
                printf("O número %i possui a mesma propriedade que 3025\n", num);
                count++;
            }
        }
    }

    printf("\n%i números de 4 dígitos possuem esta característica (incluindo 3025)", count);

    return 0;
}

int ex09()
{
    printf("9. Faça um programa para um jogo de cara ou coroa. Neste caso, o jogador escolhe cara ou coroa (0 – cara e 1 – para coroa) mostre ao final de 10 tentativas, quantas foram certas e quantas erradas. (utilize o comando - para que o computador escolha o resultado). \n");

    int aposta, resultado, acertos = 0, erros = 0;

    srand(time(NULL));

    for (int i = 1; i <= 10; i++)
    {
        printf("\nRODADA %i: digite 0 para \"cara\" ou 1 para \"coroa\"\n", i);

        scanf("%i", &aposta);

        resultado = rand() % 2;

        if (aposta > 1 || aposta < 0)
        {
            printf("ERRO");
            return 0;
        }
        else
        {
            //            As linhas abaixo são para que o usuário nunca acerte mais do que 3 vezes!
            //            if (acertos > 2)
            //            {
            //                resultado != aposta;
            //            }
            if (aposta == resultado)
            {
                acertos++;
            }
            else
            {
                erros++;
            }

            printf("APOSTA: %i \t RESULTADO: %i --------> %s\n", aposta, resultado, aposta == resultado ? "acertou!" : "errou!");
        }
    }

    printf("%d acertos\n%d erros\n", acertos, erros);

    return 0;
}

int ex10()
{
    printf("10. Faça um programa para adivinhar um número escolhido pelo usuário, entre 1 e 1023. Indique ao final quantas tentativas foram necessárias. O programa deverá localizar o número escolhido pelo usuário em no máximo 10 tentativas! Verifique que você conseguirá acertar qualquer número em no máximo 10 tentativas!!!\n");
    int min = 1, max = 1023, media, tentativas = 0;
    char resp = '=';

    do
    {
        media = (min + max) / 2;
        printf("\n%iª tentativa: ------> ", tentativas + 1);
        printf("Seu número é  = (igual), > (maior) ou < (menor) que %i?\n", media);
        fflush(stdin);
        scanf("%c", &resp);

        if (resp == '=')
        {
            printf("Acertei!");
        }
        else
        {
            if (resp == '>')
            {
                min = media;
            }
            else
            {
                if (resp == '<')
                {
                    max = media;
                }
                else
                {
                    printf("ERRO");
                    printf("Digite \"=\" para IGUAL\tOU \">\" para MAIOR\tOU \"<\" para MENOR\n");
                    return 0;
                }
            }
        }

        tentativas++;
    } while (resp != '=');

    printf("\nTentativas: %i", tentativas);
    return 0;
}
