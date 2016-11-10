#include <stdio.h>
#define MAXPILHA 10
typedef char DADO;
typedef struct Pilha_{
int idtopo;
DADO dados[MAXPILHA];
}Pilha;
void push(Pilha * ppilha, DADO elemento);
void pop(Pilha * ppilha);
DADO top(Pilha pilha);
int empty (Pilha pilha);
int main (){
    int i;
    Pilha pilha;
    pilha.idtopo=-1;
    //programa
    printf("Push:");
    for (i=0; i<5; i++){

        push(&pilha,'A'+i);
        printf("%c", top(pilha));
    }
     printf("\nPop:");
     while(!empty(pilha)) {
        printf("%c", top(pilha));
        pop(&pilha);
     }
     printf( "\n\n");
     for(i=0 ; i<MAXPILHA+1; i++){
        push(&pilha,'A'+i);
        printf("%c", top(pilha));
}

return 0;
}
void push(Pilha * ppilha, DADO elemento){
    if(ppilha->idtopo + 1 < MAXPILHA){
        ppilha->idtopo++;
        ppilha->dados[ppilha->idtopo]=elemento;
    }
    else fprintf(stderr, "\nERROR:: estouro de pilha");
}
void pop(Pilha * ppilha){
if(ppilha->idtopo >=0){
        ppilha->dados[ppilha->idtopo]= 0x0;
        ppilha->idtopo--;
        }
     else
        fprintf(stdout, "\nWARNING :: pilha vazia");
}

DADO top(Pilha pilha){
    return pilha.dados[pilha.idtopo];
}

int empty (Pilha pilha) {
   return (pilha.idtopo == -1);
}

