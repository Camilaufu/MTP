#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char frase [256];
    int i;
    printf("entre com uma frase: \n");
    gets (frase);
    for (i=0; frase [i] ; i++)
        frase [i] = toupper (frase [i]);
    printf(" A frase tem %d caracteres.\n",strlen(frase));
    if (strncmp(frase , "BOM DIA",7)==0)
     printf(" Bom dia pra vc tbm!\n");
    else
        printf(" Vc quer dizer: %s?", frase);

    return 0;
}

