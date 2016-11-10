#include <stdio.h>
#include <stdlib.h>

typedef struct _Pilha
{
float num;
struct _Pilha *out;
}Pilha;
void push(Pilha **ppilha, float elemento);
void pop (Pilha **ppilha);
float top (Pilha *pilha);
int empty(Pilha *pilha);

int main()
{
Pilha *pilha=NULL;
FILE * arquivo = fopen("dados.txt", "r");
float num;

while(!feof(arquivo))
{
fscanf(arquivo, "%f\n", &num);
push(&pilha, num);
}

printf("DADOS ARMAZENADOS NO ARQUIVO:\n");
while(!empty(pilha))
{
printf(" %g\n", top(pilha));
pop(&pilha);
}

free(pilha);
return 0;
}

void push(Pilha **ppilha, float elemento)
{
Pilha *novo=malloc(sizeof(Pilha));
novo->num=elemento;
novo->out=*ppilha;
*ppilha=novo;

}

void pop (Pilha **ppilha)
{
if(*ppilha != NULL)
{
Pilha * aux = (*ppilha)->out;
free(*ppilha);
*ppilha = aux;
  }
}

float top (Pilha *pilha)
{
if(pilha!=NULL)
return pilha->num;

printf("Pilha vazia.\n");

}

int empty(Pilha *pilha)
{
return pilha==NULL;
}
