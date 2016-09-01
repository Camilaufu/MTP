#include <stdio.h>
#include <stdlib.h>
int main () {
    double numero, i, fatorial;
    printf("Entre com numero ");
    scanf ("%lf",&numero);
    fatorial=1;
        for (i=2; i<=numero;i++)
        fatorial=fatorial*i;
        printf("o fatorial de %lf e igual a %lf\n", numero, fatorial);
    return 0;
}
