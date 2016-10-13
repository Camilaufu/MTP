#include<stdio.h>
#include<stdlib.h>

float * recebeVetor(float * vetor, int qtd);
float media(float * vetor, int qtd);

int main (){
   int qtd=0;
   int opc;
   float * vetor=NULL;
   do{
   printf("Informe o numero :\n");
   recebeVetor(vetor, qtd);
   printf("outro ? (0 nao , 1 sim):");
   scanf("%d", &opc);
   }while(opc !=0);

   media(vetor,qtd);
   printf("Media: %g\n", media(vetor, qtd));

   return 0;
}
float * recebeVetor(float * vetor, int qtd) {

    * qtd ++;
    if (vetor==NULL)
    vetor=(float *) calloc(qtd,sizeof(float));
    else vetor=(float *) realloc(vetor,qtd * sizeof(float));
    return vetor;


}
float media(float * vetor, int qtd){
float soma=0.f;
int i;
for(i=0; i<qtd;i++)
    soma+=vetor[i];
return soma/qtd;
}

