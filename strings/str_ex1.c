#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa que leia uma string e a imprima
*/

int main(){
    char str[20];
    printf("digite uma frase:\n");
    gets(str);

    printf("Frase digitada: %s\n", str);

    system("pause");
    return 0;
}