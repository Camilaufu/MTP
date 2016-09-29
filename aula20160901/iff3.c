#include <stdio.h>
#include <stdlib.h>

int main () {
    float i, soma=0, num;
   //double i, soma=0, num

    printf("Digite um numero:\n");
    scanf("%f",&num);
    //scanf("%lf",&num);


    while (i<729)
    {
       soma=soma +(1/num);

       i++;
    }

    printf("A soma e : %.15f / %.15lf", soma, soma);

    return 0;
}

