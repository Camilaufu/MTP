#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand (time(0));
    unsigned int numero;
    float aleatorios[N];
    float vet[1000000];
    //in road
    int i;
    printf(" Numero \n");
    scanf("%d",&numero);
    for (i=0;i<N;i++)
        aleatorios [i] = rand ()%numero +1;
    for (i=0;i<N;i++)
    soma=soma + aleatorios [i];

    media = soma /N;
    printf("Media : %f\n", media);



    return 0;
}
