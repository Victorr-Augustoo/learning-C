#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que calcula o comprimento de uma string
(não use a função strlen)
*/

int main(){
    
    char str[30] = "Hello, world!!!!";
    int comp = 0;
    for (int i = 0; str[i] != '\0'; i++){
        comp++;
    }   
    printf("Comprimento da string: %i\n", comp); 

    system("pause");
    return 0;
}