#include <stdio.h>
#include <stdlib.h>
int main () {
    int numero, i, fatorial;
    printf("Entre com numero ");
    scanf ("%d",&numero);
    fatorial=1;
        for (i=2; i<=numero;i++)
        fatorial=fatorial*i;
        printf("o fatorial de %d e igual a %d\n", numero, fatorial);
    return 0;
}

