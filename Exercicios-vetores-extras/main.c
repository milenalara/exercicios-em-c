#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void options();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int nItens, cdItem, qtItem;

    printf("Informe a quantidade de itens que deseja controlar");
    scanf("%i", &nItens);
    
    int estoque[nItens+1];

    printf("Informe o c�digo do %i� item:\n");
    scanf("%i", &cdItem);
    printf("Informe a quantidade do %i� item:\n");
    scanf("%i", &qtItem);

    



    return 0;
}
