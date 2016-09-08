#include <stdio.h>
#include <stdlib.h>
int main () {
    float A, B, C, media;
    printf ("Entre com a nota A, B e C respectivamente:");
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    media= (2*A+3*B+5*C)/10;
    printf( "Media: %.2f\n",media);
return 0;
}
