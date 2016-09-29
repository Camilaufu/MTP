#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time (0));

    int i, soma=0;

for (i=0; i<3 ; i++)
soma= soma + rand ()%6;
   if (soma == 7 || soma == 11)
   {
     printf( "Vc ganhou - soma %d", soma);
   }
    else
        printf( "Vc perdeu! - soma %d", soma);

    return 0;
}

