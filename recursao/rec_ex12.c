/*
Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.
*/
#include <stdio.h>
#include <stdlib.h>

void decrescente(int n){
    printf("%i ", n);
    if (n == 0){
        return;
    }
    decrescente(n-1);
}

int main(){
    int x = 0;
    printf("digite um numero\n");
    scanf("%i", &x);

    decrescente(x);

    printf("\n");

    system("pause");
    return 0;
}