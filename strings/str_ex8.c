/*Faça um programa que conte o número de 1's que aparecem em uma string. Exemplo: "0011001" -> 3.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[10]; 
    char a = 0;
    int cont = 0;

    printf("digite os zeros e uns da string:\n");
    for (int i = 0; i < 10; i++){
        scanf(" %c", &a);
        str[i] = a;
        if (a == '1'){
            cont++;
        }
    }

    str[10] = '\0';


    printf("a string digitada eh %s\n", str);
    printf("o numero de 1 na string eh: %i\n", cont);

    system("pause");
    return 0;
}