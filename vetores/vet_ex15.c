#include <stdio.h>
#include <stdlib.h>

/*
Leia um vetor com 20 números inteiros. Escreva os elementos do vetor
eliminando elementos repetidos.
*/

int main(){
    int vetor[20] = {0};
    int contador = 0;
    printf("digite os elementos do vetor:\n");
    for (int i = 0; i < 20; i++){
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < 20; i++){
        for (int j = i+1; j < 20; j++){
            if (vetor[i] == vetor[j]){
                contador++;
                break;
            }
        }
        if (contador == 0){
            printf("%i ", vetor[i]);
        }
        contador = 0;
        
    }
    printf("\n");
    system("pause");
    return 0;
}