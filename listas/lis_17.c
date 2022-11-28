/*Fazer uma função que copia uma lista L1 em outra L2, eliminando os elementos repetidos*/

#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;


Lista* cria_lista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));

    if (li != NULL){
        *li = NULL;
    }
    return li;
}

void libera_lista(Lista *li){
    if (li == NULL){
        return;
    }

    if ((*li) == NULL){
        free(li);
        return;
    }

    Elem *no;
    while ((*li) != NULL){
        no = *li;
        *li = (*li)->prox;
        free(no);
    }
    free(li);
    return;
}

int insere_lista_inicio(Lista *li, int n){

    if (li == NULL){
        return 0;
    }

    Elem *no;
    no = (Elem *) malloc(sizeof(Elem));

    no->num = n;
    no->prox = *li;
    *li = no;
    return 1;

}


void imprime_lista(Lista *li){
    if (li == NULL || (*li) == NULL){
        return;
    }

    Elem *atual;
    atual = *li;
    while(atual != NULL){
        printf("%i ", atual->num);
        atual = atual->prox;
    }
    printf("\n");
    return;
}

int copia_lista(Lista *l1, Lista *l2){
    int aux = 0;
    if (l1 == NULL || l2 == NULL){
        return 0;
    }

    Elem *atual;
    atual = *l1; 

    while (atual != NULL){

        // alocando espaço para o novo elemento
        Elem *no;
        no = (Elem*) malloc(sizeof(Elem));

        if (no == NULL){
            return 0;
        }

        no->num = atual->num;
        no->prox = NULL;

        if ((*l2) == NULL){
            (*l2) = no; // caso a lista esteja vazia
        }
        else{
            Elem *atual_2;
            atual_2 = *l2;
            while(atual_2->prox != NULL){
                if (atual_2->num == atual->num){
                    aux = 1;
                    break;
                }
                atual_2 = atual_2->prox;
            }
            if (aux == 0){
                atual_2->prox = no;
                aux = 0;    
            }
            aux = 0;
            
        }
        atual = atual->prox;
    }
    return 1;

}

int main(){
    int a = 0, b = 0;
    Lista *l1, *l2;
    l2 = cria_lista();
    l1 = cria_lista();

    printf("digite quantos elementos quer na lista:\n");
    do {
        scanf("%i", &a);
        if (a <= 0){
            printf("valor invalido. Digite novamente\n");
        }
    }while( a <= 0);

    printf("digite os elementos da lista:\n");
    for (int i = 0; i < a; i++){
        scanf("%i", &b);
        insere_lista_inicio(l1, b);
    }

    copia_lista(l1, l2);

    printf("imprimindo lista 1:\n");
    imprime_lista(l1);

    printf("imprimindo lista 2:\n");
    imprime_lista(l2);

    libera_lista(l1);
    libera_lista(l2);
    system("pause");
    return 0;
}