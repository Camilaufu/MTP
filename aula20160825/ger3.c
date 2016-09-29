#include <stdio.h>

int main()
{
    int num, soma=0, i=1;
    printf("Digite um numero:\n");
    scanf("%d", &num);

    while (soma<=num)
        {
    if(num%i==0 && num!=i)
    {
        soma= soma+i;
    }
    i++;
    }

    if (soma!=num)
    {
        printf(" Nao e um numero perfeito");
    }

    else if (soma==num)
    {
        printf("E um numero perfeito");
    }

    return 0;

}
