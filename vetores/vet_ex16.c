/*
Faça um programa que leia um vetor de 5 posições para números reais e, depois, um
código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso o código for diferente de 1 e 2
escreva uma mensagem informando que o código é inválido
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float vetor[5] = {0};
    float x = 0;
    printf("digite os elementos do vetor: \n");
    for (int i = 0; i < 5; i++){
        scanf("%f", &vetor[i]);
    }
    x = vetor[0] - vetor[1];
    if (x == 0){
        printf("finalizando o programa\n");
    }else if (x > 0){
        for (int i = 0; i < 5; i++){
            printf("%.1f ", vetor[i]);
        }
    }else {
        for (int i = 4; i >= 0; i--){
            printf("%.1f ", vetor[i]);
        }
    }
    printf("\n");
    system("pause");
    return 0;
}