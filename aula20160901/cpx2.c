#include <stdio.h>
#include <complex.h>

int main()
{
    double complex z1, z2, prod;
    double preal, pimag;
    printf ("Entre com real z1: ");
    scanf("%lf",&preal);
    printf ("Entre com imaginario de z1: ");
    scanf("%lf",&pimag);
    z1=preal+pimag * I;

    printf ("Entre com real z2: ");
    scanf("%lf",&preal);
    printf ("Entre com imaginario de z2: ");
    scanf("%lf",&pimag);

    z2=preal+pimag * I;
    prod = z1*z2;


    printf(" produto %lf + %lf i\n",creal (prod), cimag(prod));
    printf(" produto  %lf /_ %lf rad\n",cabs (prod), carg(prod));
    return 0;
}

