#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int DADO;

typedef struct Pilha_{
DADO topo;
struct Pilha_ * proximo;
}Pilha;

void push(Pilha ** ppilha, DADO elemento);
void pop(Pilha ** ppilha);
DADO top(Pilha * pilha);
int empty (Pilha * pilha);
int main (){
    int i;
    int op;
    int num;
    Pilha * pilha = NULL;
    //programa
    do{
    printf("insira um numero:\n ");
    scanf("%d", &num);
    if (num>=0)
            push(&pilha,num);
    }while (num>=0);
    printf(" gostaria de armazenar os dados? Sim=0 se Nao=1:\n");
    scanf("%d", &op);
    if (op == 0)
    {
    FILE *arquivo;
    arquivo = fopen("exercicio_3.txt","w");
    if(arquivo == NULL)
        fprintf(stderr, "Erro na criacao do arquivo!\n");
    else
        while(!empty(pilha)){
        fprintf(arquivo,"%d ",top(pilha));
        pop(&pilha);
    }
    fclose(arquivo);
    }
    else
    {

     printf("Numeros:");
     while(!empty(pilha)) {
        printf("%d", top(pilha));
        pop(&pilha);
     }
    }

return 0;
}

void push(Pilha ** ppilha, DADO elemento){
    Pilha * novo = (Pilha*) malloc(sizeof(Pilha));
    novo->topo = elemento;
    novo->proximo = *ppilha;
    *ppilha = novo;
}
void pop(Pilha ** ppilha){
    Pilha * aux = NULL;
if(!empty(*ppilha)){
        aux = (*ppilha)->proximo;
         free(*ppilha);
         *ppilha = aux;

        }
     else
        fprintf(stdout, "\nWARNING :: pilha vazia");
}

DADO top(Pilha * pilha){
    return pilha->topo;
}
int empty (Pilha * pilha) {
   return (pilha == NULL);
}



