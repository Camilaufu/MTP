#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main ()
{

    unsigned int numero;
    float numeros [N], soma=0, produto=1;
      int i;
    printf(" digite 10 Numeros inteiros nao negativo\n");


    for (i=0;i<N;i++)
    {
     scanf("%d",&numeros[N]);
    }
    for (i=0;i<N;i++)
    {
      soma=soma + numeros [i];
    }

    for (i=0;i<N;i++)
    {
        produto=produto * numeros [i];
    }

    printf("Soma: %f\n", soma);
    printf("Soma: %f\n", produto);



    return 0;
}
