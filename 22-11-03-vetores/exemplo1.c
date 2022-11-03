#include <stdio.h>
#include <stdlib.h>

int main () {
    int v[5]={5,7,2,3,6};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("v[%i]=%i\n",i,v[i]);
    }
    return 0;
}