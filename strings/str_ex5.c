/*
Digite um nome, calcule e retorne quantas letras tem esse nome
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20];
    int contador = 0;
    printf("digite um nome:\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            continue;
        }
        contador++;
    }
    printf("%s tem %i letras.\n", str, contador);

    system("pause");
    return 0;
}