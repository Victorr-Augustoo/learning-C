/*Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os múltiplos de um número inteiro x num vetor e mostre-os na tela.*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10] = {1, 4, 7, 3, 15, 68, 17, 40, 0, 9};
    int contador = 0, x = 0;
    printf("digite um numero:\n");
    scanf("%i", &x);

    for (int i = 0; i < 10; i++){

        if (vetor[i] % x == 0){
            contador += 1;
            printf("%i ", vetor[i]);
        }
    }
    printf("\nNumero de multiplos de %i: %i\n", x, contador);

    system("pause");
    return 0;
}