#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float num1, num2, soma;
    int cont = 0;
    //int tam = sizeof(vetor)/sizeof(int);

    printf(" Digite dois numeros reais\n");
    scanf("%f",& num1);
    scanf("%f",& num2);




    //unsigned char *p= NULL, *q; //inicializar ponteiros

    printf("\n %p: %f\n", &num1, num1);
    printf("\n %p: %f\n", &num2, num2);

    soma=num1 + num2;
    printf("Soma e:%f\n", soma);
    printf("%p: %f\n", &soma,soma);



    return 0;
}

