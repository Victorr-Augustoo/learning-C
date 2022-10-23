#include <stdio.h>
#include <stdlib.h>

/*
Faça uma função recursiva que calcule e retorne o fatorial de um numero inteiro N
*/

int fatorial(int n){
    if (n == 0){
        return 1;
    }
    return n*fatorial(n-1);
}

int main(){
    int x = 0, y = 0;
    printf("digite um numero >= 0\n");
    scanf("%i", &x);
    y = fatorial(x);
    printf("o fatorial de %i eh %i\n", x, y);


    system("pause");
    return 0;
}