#include<stdio.h>


void  imprimeMatriz(float  matriz[N][M]);
void  imprimeTransposta(float  matriz[N][M]);
int main ()
{
int i,j;
int N, M;
float ** matriz;

printf( "informe a ordem da matriz NxM\n");
scanf("%d",N);
scanf("%d",M);

matriz=(float **) calloc(N,sizeof(float*));

for (i=0; i<N;i++)
    matriz[i]=(float *) calloc(M,sizeof(float));



for (i=0;i<N;i++)
for(j=0;j<M; j++)
{
    printf("entre com elemento (%d,%d),: ",i,j);
    scanf("%f",&matriz[i][j]);
}

for (i=0; i<N;i++)
    free(matriz[i]);
free(matriz);

imprimeMatriz(matriz);
printf("A transposta e:\n");
imprimeTransposta(matriz);
  return 0;

}

void imprimeMatriz(int  matriz[N][M]){
    int i,j;
    int N,M;
for (i=0;i<N;i++)
for(j=0;j<M; j++)
        printf("%g%c",matriz[i][j],(j==M-1)?'\n':'\t');
}

void imprimeTransposta(float  matriz[N][M]){
    int i,j;
    int N,M;
for (j=0;j<M;j++)
for(i=0;i<N; i++)
        printf("%g%c", matriz[i][j],(i==N-1)?'\n':'\t');
}
