/*Escreva um algoritmo, usando uma Pilha, que inverte as letras de cada palavra de um texto terminado por ponto (.) preservando a ordem das palavras. Por exemplo, dado o texto:
ESTE EXERCÍCIO É MUITO FÁCIL.
A saída deve ser:
ETSE OICÍCREXE É OTIUM LICÁF*/

#include <stdio.h>
#include <stdlib.h>

#define tamArray 30

struct pilha{
    int qtd;
    char str[tamArray];
};

typedef struct pilha Pilha;

Pilha* cria_pilha(){
    Pilha *pi;
    pi = (Pilha*) malloc(sizeof(Pilha));

    if (pi != NULL){
        pi->qtd = 0;
    }

    return pi;
}


void libera_pilha(Pilha *pi){
    free(pi);
}

int insere_pilha(Pilha *pi, char c){

    if (pi == NULL){
        return 0;
    }

    if (pi->qtd == tamArray){
        return 0;
    }

    for (int i = pi->qtd; i > 0; i--){
        pi->str[i] = pi->str[i-1];
    }
    pi->str[0] = c;
    pi->qtd++;
    return 1;
}


int main(){
    char a = 0;
    int N = 0;
    Pilha *pi;
    pi = cria_pilha();

    printf("quantos caracteres tera a pilha?\n");
    scanf("%i", &N);

    printf("digite os caracteres da pilha:\n");
    for (int i = 0; i < N; i++){
        scanf(" %c", &a);
        insere_pilha(pi, a);
    }

    printf("pilha:\n");
    for (int i = 0; i < pi->qtd; i++){
        printf("%c", pi->str[i]);
    }
    
    printf("\n");
    libera_pilha(pi);
    system("pause");
    return 0;
}