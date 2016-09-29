#include <stdio.h>
#include <stdlib.h>
int main () {

char palavra [256];
int i,cont=0;
printf("Digite uma palavra:\n");
scanf("%s",palavra);

for (i=0;palavra[i]!='\0'; i++){

cont++;
}
    printf("A palavra contem %d letras\n", cont);
    return 0;
}
