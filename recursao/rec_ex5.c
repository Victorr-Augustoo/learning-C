#include <stdio.h>
#include <stdlib.h>

/*
Faça uma funçao recursiva que receba um numero inteiro positivo N e calcule o somatorio dos numeros de 1 a N
*/

int somatorio(int n){
    if (n == 0){
        return 0;
    }
    return (n + somatorio(n-1));
}

int main(){

    int x = 0, soma = 0;
    printf("Digite um numero:\n");
    scanf("%i", &x);
    soma = somatorio(x);
    printf("A soma de 1 ate %i eh %i\n", x, soma);
    system("pause");
    return 0;
}