#include<stdio.h>
#include<stdlib.h>
int tamanho=0;

float * recebeNumero(float * vetor);
float media(float * vetor, int tamanho);


int main (){
   float * vetor=NULL;
   int opc;
   do {
        printf( "entre com um numero: ");
        vetor = recebeNumero(vetor);
        printf("media = %f\n", media(vetor, tamanho));

        printf("outro ? (0 nao , 1 sim):");
        scanf("%d", &opc);
   }while(opc !=0);

   free(vetor);

   return 0;
}
float * recebeNumero(float * vetor) {
    tamanho++;
    if (vetor==NULL)
    vetor=(float *) malloc(sizeof(float));
    else vetor=(float *) realloc(vetor,tamanho*sizeof(float));
    scanf("%f",&vetor[tamanho-1]);
    return vetor;
    }

float media(float * vetor, int tamanho){
float soma=0.f;
int i;
for(i=0; i<tamanho;i++)
    soma+=vetor[i];
return soma/tamanho;
}




