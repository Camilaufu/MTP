#include <stdio.h>
#include <complex.h>
#include <math.h>

int main()
{
    double complex z1, raiz;
    double preal, pimag;
    printf ("Entre com real z1: ");
    scanf("%lf",&preal);
    printf ("Entre com imaginario de z1: ");
    scanf("%lf",&pimag);
    z1=preal+pimag * I;

    //in road.....

    printf(" Raiz %lf + %lf i\n",creal (raiz), cimag(raiz));
    printf(" Raiz %lf / _%lf rad\n",cabs (raiz), carg(raiz));

    return 0;
}

