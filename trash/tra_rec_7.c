#include <stdio.h>
#include <stdlib.h>

/*
crie um programa em C que receba um vetor de números reais com 100 elementos.
Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.
*/

void inverte_ordem(int *v, int pos_a, int pos_b){
    int aux = 0;
    if (pos_a >= pos_b/2){
        v[pos_b];
        return;
    }
    aux = v[pos_a];
    v[pos_a] = v[pos_b -1 -pos_a];
    v[pos_b -1 -pos_a] = aux;
    inverte_ordem(v, pos_a + 1, pos_b);

}

int main(){
    int vetor[5] = {1, 2, 3, 4, 5};
    inverte_ordem(vetor, 0, 5);
    for (int i = 0; i <5; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}