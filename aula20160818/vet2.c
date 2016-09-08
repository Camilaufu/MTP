#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main ()
{

    int numeros [N],rev [N];
      int i, j=0;
    printf(" digite 10 Numeros inteiros nao negativo\n");


    for (i=0;i<N;i++)
    {
     scanf("%d",&numeros[i]);
    }


    for (i=N-1;i>=0;i--)

    {
      rev [j] = numeros[i];
      j++;
    }

    for (j=0;j<N;j++)
          printf("vetor: %d\n", rev [j]);

    return 0;
}
