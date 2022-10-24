#include <stdio.h>
#include <stdlib.h>

/*
crie um programa em C que receba um vetor de números reais com 100 elementos.
Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.
*/

int main(){
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int aux = 0;
    for (int i = 0; i < 5; i++){
        aux = vetor[i];
        vetor[i] = vetor[9-i];
        vetor[9-i] = aux;
    }

    for (int i = 0; i <10; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}