#include <stdio.h>
#include <stdlib.h>

int main () {
srand(time (0));

int num, c=0, x=0;
x= rand()%99;
do
    {
printf("Escolha um num entre 0 e 99:\n");
scanf ("%d", & num);

c++;

if (num>x)
{
    printf("alto\n\n");
}
  else if  (num<x)
  {
printf("baixo\n\n");
  }

}while(num!=x);

printf("vc acertou !\n");
printf("voce fez %d tentativas\n", c);
return 0;
}




