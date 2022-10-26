/*
Faça uma função recursiva que permita somar os elementos de um vetor de inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int *v, int tam){
    if (tam == 1){
        return v[0];
    }
    return v[tam - 1] + soma_vetor(v, tam - 1);
}

int main(){
    int vetor[6] = {1,2,3,4,5,5};
    int soma = 0;

    for (int i = 0; i < 6; i++){
        soma += vetor[i];
    }

    printf("soma iterativa: %i\n", soma);
    printf("recursiva: %i\n", soma_vetor(vetor, 6));

    system("pause");
    return 0;
}

