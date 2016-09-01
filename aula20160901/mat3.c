#include <stdio.h>
#include <math.h>

int main()
{
    double log, n, b;
    printf( " Informe um numero e a base desejada: \n ");
    scanf("%lf", &n );
    scanf("%lf", &b );
     log = log10( n)/ log10( b);
     printf("o valor é %lf", log);

     return 0;
}

