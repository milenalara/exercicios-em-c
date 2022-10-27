#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void options();
void adicao();
void sub();
void multi();
void divisao();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;

    do
    {
        printf("\n---------CALCULADORA---------\n");
        printf("Informe o c�digo da opera��o desejada ou -1 para encerrar:\n");
        printf("1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n");
        scanf("%i", &op);

        switch (op)
        {
        case -1:
            break;
        case 1:
            adicao();
            break;
        case 2:
            sub();
            break;
        case 3:
            multi();
            break;
        case 4:
            divisao();
            break;
        default:
            printf("opera��o n�o encontrada\n\n");
        }

    } while (op != -1);

    return 0;
}

void adicao()
{
    int num1, num2, result;

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num1);

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num2);

    result = num1 + num2;
    printf("\n-------RESULTADO-------\n");
    printf("%i + %i = %i\n\n", num1, num2, result);
}

void sub()
{
    int num1, num2, result;

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num1);

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num2);

    result = num1 - num2;
    printf("\n-------RESULTADO-------\n");
    printf("%i - %i = %i\n\n", num1, num2, result);
}

void multi()
{
    int num1, num2, result;

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num1);

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num2);

    result = num1 * num2;
    printf("\n-------RESULTADO-------\n");
    printf("%i * %i = %i\n\n", num1, num2, result);
}

void divisao()
{
    int num1, num2;
    float result;

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num1);

    printf("Informe o primeiro n�mero: \n");
    scanf("%i", &num2);

    result = (float)num1 / num2;
    printf("\n-------RESULTADO-------\n");
    printf("%i / %i = %.2f\n\n", num1, num2, result);
}