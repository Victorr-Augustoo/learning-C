/*Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

void imprime_pares(int n, int i){
    if (n < i){
        return;
    }
    if (i % 2 == 0){
        printf("%i ", i);
    }
    i++;
    return imprime_pares(n, i);
}


int main(){
    int x = 0;
    do{
        printf("digite um numero \n");
        scanf("%i", &x);
    } while(x < 0);

    printf("numeros pares de 0 a %i:\n", x);
    imprime_pares(x, 0);
    printf("\n");
    system("pause");
    return 0;
}