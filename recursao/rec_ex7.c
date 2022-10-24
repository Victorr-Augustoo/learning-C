#include <stdio.h>
#include <stdlib.h>

/*
crie um programa em C que receba um vetor de números reais com 100 elementos.
Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.
*/

int inverte_ordem(int *v, int tam, int i){
    int a = 0;
    if (i == tam){
        return v[tam];
    }
    a = v[i];
    v[i] = v[tam];
    v[tam] = a;
    return inverte_ordem(v, tam-1, i+1);

}

int main(){
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    inverte_ordem(vetor, 10, 0);
    for (int i = 0; i <10; i++){
        printf("%i ", vetor[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}