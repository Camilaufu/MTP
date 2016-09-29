#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[256];
    char olheiro;
    int indice = 0;
    int cont=0;

    printf ("informe uma frase:\n");
    gets(frase);
    olheiro = frase [indice];
    while(olheiro!='\0)')
        {

if(frase [indice] != isspace(olheiro))
{
cont ++;
}
 indice ++;

olheiro = frase [indice];

}
        printf ("o numero de letras e : %d\n", indice);
   return 0;
}

