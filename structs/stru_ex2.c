/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
*/
// not working properly
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[20];
    int idade;
    char endereco[50];
} cadastro;

int main(){
    cadastro c;

    printf("digite o nome: \n");
    scanf("%s", c.nome);

    printf("digite a idade: \n");
    scanf("%i", &c.idade);

    printf("digite o endereco: \n");
    scanf("%s", c.endereco);

    printf("informacoes digitadas: \n");
    printf("nome: %s\n", c.nome);
    printf("idade: %i\n", c.idade);
    printf("endereco: %s\n", c.endereco);

    system("pause");
    return 0;
}