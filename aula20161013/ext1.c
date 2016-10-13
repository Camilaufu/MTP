#include<stdio.h>
#include<stdlib.h>
int tamanho=0;

float * recebeNumero(float * vetor);
float media(float * vetor, int tamanho);
float maximo(int tamanho, float * vetor);
float minimo(int tamanho, float * vetor);


int main (){
   float * vetor=NULL;
   int opc;

   do {
        printf( "entre com um numero: ");
        vetor = recebeNumero(vetor);
        printf("media = %f\n", media(vetor, tamanho));
        printf("Maior = %f\n", maximo(tamanho,vetor));
        printf("Menor = %f\n", minimo(tamanho,vetor));

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

float maximo(int tamanho, float * vetor){
    int x;
    if (tamanho == 1)
        return vetor[0];
   else {
        x = maximo (tamanho-1, vetor);
   if (x > vetor[tamanho-1])
         return x;
      else
         return vetor[tamanho-1];
   }
}

float minimo(int tamanho, float * vetor){
    int x;
    if (tamanho == 1)
        return vetor[0];
   else {
        x = maximo (tamanho-1, vetor);
   if (x < vetor[tamanho-1])
         return x;
      else
         return vetor[tamanho-1];
   }
}


