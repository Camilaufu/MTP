#include <stdio.h>
#include <stdlib.h>
int main () {

int num, i;
printf("Entre com o numero:\n");
scanf("%d", &num);
for (i=2;i<num; i++)
{
    if (num%i == 0)
    {
        printf("Nao e primo!");
        break;
    }
}
if (i==num)
    printf("Primo !!!!\n");
return 0;

}
