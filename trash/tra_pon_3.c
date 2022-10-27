/*
Assumindo que o endereço da variável x foi atribuído a um ponteiro px, escreva
uma expressão que não usa x e divida x por 5.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0, *px;
    px = &x;

    printf("digite um numero:\n");
    scanf("%i", px);
    
    printf("x = %i\n", x);

    *px = *px / 5;

    printf("x = %i\n", *px);


    system("pause");
    return 0;
}