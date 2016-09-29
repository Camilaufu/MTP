#include <stdio.h>
#include <stdlib.h>
int main () {

int B, P, pot,i;
printf("Digite a base e o expoente respectivamente:\n");
scanf("%d", &B);
scanf("%d", &P);
pot=B;

for (i=1;i<P; i++)
{
pot=pot*B;

}
    printf("O valor da potencia é %d\n", pot);
    return 0;
}
