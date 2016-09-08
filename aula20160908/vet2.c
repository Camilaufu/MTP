#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main ()
{

    int numeros [N],rev [N];
      int i, j;
    printf(" digite 10 Numeros inteiros nao negativo\n");


    for (i=0;i<N;i++)
    {
     scanf("%d",&numeros[N]);
    }


    for (i=N;i>0;i--)
    for (j=i;j<N;j++)
    {
      rev [j] = numeros[i];
    }

    for (i=0;i<N;i++)
          printf("vetor: %d\n", rev [j]);

    return 0;
}
