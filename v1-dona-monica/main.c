#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int m, a, b, c, aux;

    scanf("%i", &m);
    scanf("%i", &a);
    scanf("%i", &b);
    c = m - (a + b);

    // printf("antes: %i, %i, %i\n", a, b, c);

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (a > c)
    {
        aux = a;
        a = c;
        c = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    
    // printf("depois: %i, %i, %i\n", a, b, c);
    printf("%i", c);

    return 0;
}