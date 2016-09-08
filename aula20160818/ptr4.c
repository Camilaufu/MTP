#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int num1, num2, soma;
    int cont = 0;
    //int tam = sizeof(vetor)/sizeof(int);

    printf(" Digite dois numeros reais\n");
    scanf("%d",& num1);
    scanf("%d",& num2);




    //unsigned char *p= NULL, *q; //inicializar ponteiros

    printf("\n %p: %d\n", &num1, num1);
    printf("\n %p: %d\n", &num2, num2);

    soma=num1 + num2;
    printf("Soma e:%d\n", soma);
    printf("%p: %d\n", &soma,soma);



    return 0;
}

