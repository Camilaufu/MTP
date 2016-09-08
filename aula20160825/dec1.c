
#include <stdio.h>
#include <stdlib.h>
int main () {
    int numero;
    printf ("Entre com um numero:");
    scanf("%d",&numero);
    if (numero%2 == 0)
    printf ("o numero e par:");
    else printf("o numero e impar");
    if (numero%3 == 0)
    printf ("o numero e multiplo de 3:");
    if (numero%5 == 0)
    printf ("o numero e multiplo de 5:");
    if (numero%7 == 0)
     printf ("o numero e multiplo de 7:");


return 0;
}
