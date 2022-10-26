/*
Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10] = {0};
    
    printf("digite os elementos do vetor\n");
    for (int i = 0; i < 10; i++){
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 10; i++){
        if (vetor[i] < 0){
            vetor[i] = 0;
        }
        printf("%i ", vetor[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}