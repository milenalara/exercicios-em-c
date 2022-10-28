#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fibonacci(int termo);

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    int termo;
    
    printf("Informe o termo a ser exibido: ");
    scanf("%i", &termo);


}

int fibonacci(int termo) {
    if(termo == 1 || termo == 2)
    {
        return 1;
    } else {
        return fibonacci(termo - 1) + fibonacci(termo - 2);       
    }
}