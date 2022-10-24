#include <stdio.h>
#include <stdlib.h>

/*
elabore um programa que solicite ao usuário entrar com o valor do dia, mês
e ano (inteiros). Em seguida, imprima os valores lidos separados por uma barra (\)
*/

int main(){
    int dia, mes, ano;
    printf("digite dia/mes/ano:\n");
    scanf("%i/%i/%i", &dia, &mes, &ano);

    printf("valores lidos: %i/%i/%i\n", dia, mes, ano);

    system("pause");
    return 0;
}