/*
Crie uma função recursiva que receba um número inteiro positivo N e imprima
todos os números naturais de 0 até N em ordem crescente.
*/

#include <stdio.h>
#include <stdlib.h>

void crescente(int n, int i){
    if (n < i){
        return;
    }
    printf("%i ", i);
    i++;
    crescente(n, i);
}

int main(){
    int x = 0;
    printf("digite um numero \n");
    scanf("%i", &x);
    crescente(x, 0);
    printf("\n");
    system("pause");
    return 0;
}