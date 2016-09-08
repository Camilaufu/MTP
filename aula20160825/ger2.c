#include <stdio.h>
#include <stdlib.h>
int main () {
srand(time (0));

int num, c=0, x=0;

x=rand%100
do{
printf("Escolha um num entre 0 e 99:\n");
scanf ("%d", & num);

if (num>x)
{
    printf("alto");
}
  if else (num<x)
  {
printf("baixo");
  }
   if else (num=x)
   {
   printf("acertou");
   }
   c++
}while(num!=x);

printf("voce fez %d tentativas\n", c")
return 0;
}




