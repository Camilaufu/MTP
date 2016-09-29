#include <stdio.h>
#include <stdlib.h>


int main ()
{

    unsigned int numero;
    float numeros [100], soma=0, produto=1;
      int i;
    printf(" digite 10 Numeros inteiros \n");


    for (i=0;i<10;i++)
    {
     scanf("%d",&numeros[i]);
    }
    for (i=0;i<10;i++)
    {
      soma=soma + numeros [i];
    }

    for (i=0;i<10;i++)
    {
        produto=produto * numeros [i];
    }

    printf("Soma: %f\n", soma);
    printf("Soma: %f\n", produto);



    return 0;
}
