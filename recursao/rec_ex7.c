#include <stdio.h>
#include <stdlib.h>

/*
crie um programa em C que receba um vetor de números reais com 100 elementos.
Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.
*/

int inverte_ordem(int *v, int pos_a, int tam){
    int aux = 0;
    if (pos_a >= tam/2){
        return v[tam];
    }
    aux = v[pos_a];
    v[pos_a] = v[tam -1 -pos_a];
    v[tam -1 -pos_a] = aux;
    return inverte_ordem(v, pos_a + 1, tam);

}

int main(){
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    inverte_ordem(vetor, 0, 10);
    for (int i = 0; i <10; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}