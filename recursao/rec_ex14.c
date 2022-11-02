/*Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem decrescente*/

#include <stdio.h>
#include <stdlib.h>

void imprime_pares(int n){
    if (n % 2 == 1){
        n = n - 1;
    }
    if (n == 0){
        printf("%i", n);
        return;
    }
    printf("%i ", n);
    imprime_pares(n - 2);
}

int main(){
    int x = 0;
    do {
        printf("digite um numero \n");
        scanf("%i", &x);
    } while(x < 0);

    printf("numeros pares de %i a 0\n", x);
    imprime_pares(x);
    printf("\n");

    system("pause");
    return 0;
}