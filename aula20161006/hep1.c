#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void recebeVetor(float * vetor, int qtd);
float desviopadrao(float * vetor, int qtd);
float media(float * vetor, int qtd);
int main (){
   int qtd;
   float * vetor;
   printf("Informe  a qtd de elementos:\n");
   scanf("%d",&qtd);
   vetor=(float *) calloc(qtd,sizeof(float));
   recebeVetor(vetor,qtd);
   printf("Media: %g; Desvio-padrao: %g\n", media(vetor, qtd), desviopadrao(vetor,qtd));
   free(vetor);
   return 0;
}
void recebeVetor(float * vetor, int qtd) {
    int i;
    for(i=0; i<qtd;i++) {
        printf("entre com elemeto #%d:",i);
        scanf("%f",&vetor[i]);
    }
}
float media(float * vetor, int qtd){
float soma=0.f;
int i;
for(i=0; i<qtd;i++)
    soma+=vetor[i];
return soma/qtd;
}

float desviopadrao(float * vetor, int qtd){
float soma=0.f;
float m=media(vetor,qtd);
int i;
for(i=0; i<qtd;i++)
    soma+=pow((vetor[i]-m),2.f);
return sqrt(soma/(qtd-1));
}

