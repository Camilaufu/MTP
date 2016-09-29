#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time (0));

    int num,soma;
    printf ("Entre com um numero:");
    scanf("%d",&num);

soma= num + rand ()%2;
   if (soma%2 == 0)
   {
     printf( "é par");
   }
    else
        printf( "E impar!");

    return 0;
}

