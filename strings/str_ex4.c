/*
Faça um programa que leia um nome e imprima as 4 primeiras letras do nome
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20];
    printf("digite um nome\n");
    gets(str);

    for (int i = 0; str[i] != '\0' && i < 4; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}