/*
Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int ant, suc;
    printf("Digite um numero\n");
    scanf("%i", &x);
    ant = x-1;
    suc = x+1;
    printf("o antecessor de %i eh %i, e seu sucessor eh %i\n", x, ant, suc);

    system("pause");
    return 0;
}