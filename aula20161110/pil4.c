#include <stdio.h>
#include <stdlib.h>

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
    int aux;
    int bit;
    int num;
    Pilha * pilha = NULL;
    //programa

    printf("insira um numero:\n ");
    scanf("%d", &num);

    aux=num;
    while(aux>0)
    {
    bit=aux%2;
    push(&pilha, bit);
    aux=aux/2;
    }

     printf("Numeros:");
     while(!empty(pilha)) {
        printf("%d", top(pilha));
        pop(&pilha);
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



