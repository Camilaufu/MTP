#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NCHAR 256
char * iniciaTexto();
char * recebeTexto(char ** texto);
void gravaTexto (char * texto, int tamanho);
int main ()
{
    //char * texto = iniciaTexto();
    char *texto;
    printf("....inicio\n");
        texto=recebeTexto(&texto);
        gravaTexto(texto,strlen(texto));
    printf("%s",texto);
       printf("Tamanho da string: %d\n",strlen(texto));
 free(texto);
    return 0;

}
char * iniciaTexto(){
    char * texto = (char*) malloc(sizeof(char));
    texto[0]='\0';
    return texto;
}
char * recebeTexto(char ** texto) {
    char * aux;
    *texto=iniciaTexto();
   // if(*texto == NULL)
       // printf("banana");
     int c, tamanho = 0;
     do{
            c=getchar();
            if(c != '#'){
                    aux= (char*) malloc(sizeof(char));
                    aux=(char *) realloc(*texto, sizeof(char)*(tamanho+2));
                    if(aux !=NULL){
                       *texto=aux;
                       (*texto)[tamanho]=c;
                        tamanho++;
                        (*texto)[tamanho]='\0';
                    }
                    else printf("\n**Erro! Sem memoria!**\n");
            }

     }while(c != '#');
aux=NULL;
     return *texto;
}
void gravaTexto (char * texto, int tamanho)
{
FILE * arquivo;
char nome [NCHAR];
int i;
arquivo = fopen ("meutexto.txt","w");
if(arquivo == NULL)
    fprintf(stderr, "Erro na gravação do arquivo!\n");
else{
        for(i=0; i<tamanho; i++)
        fputc(texto[i], arquivo);
        fclose(arquivo);
}
}
