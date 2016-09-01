#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, angulo;
    printf("Informe dois lados do triangulo e o angulo: \n");
    scanf("%f",&b);
    scanf("%f", &c);
    scanf("%f", &angulo);

    a = sqrt((pow(b,2))+(pow(c,2))-(2*b*c)* cos(angulo));

  printf(" O valor do lado e: %f", a);
    return 0;
}

