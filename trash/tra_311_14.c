/*
Faça um programa que converta uma letra maiúscula em letra minúscula.
Use a tabela ASCII para iss
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char x;
    printf("digite uma letra maiuscula\n");
    scanf("%c", &x);
    printf("conversao para minuscula: %c >>>> %c\n", x, x + 32);

    system("pause");
    return 0;
}