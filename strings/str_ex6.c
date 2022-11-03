/*Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da pessoa e a palavra "ACEITA", caso contrário imprimir "NÃO ACEITA".*/
// need to be fixed
#include <stdio.h>
#include <stdlib.h>

int funcao(char *a){
    int contador = 0;
    char b[10] = "feminino";
    for (int i = 0; i < 9; i++){
        if (a[i] == b[i]){
            contador++;
        }
        if (contador > 2){
            return 1;
        }
    }
    return 0;

}

int main(){
    char nome[25], sexo[25];
    int idade = 0; 
    char a[9] = "feminino";
    // entrada
    printf("digite o nome:\n");
    gets(nome);
    printf("digite o sexo:\n");
    setbuf(stdin, NULL); // LIMPANDO BUFFER
    fgets(sexo, 25, stdin);
    printf("digite idade:\n");
    scanf("%i", &idade);

    // saída
    if (funcao(sexo) && idade < 25){
        printf("%s\n", nome);
        printf("ACEITA\n");
    }else {
        printf("NAO ACEITA\n");
    }

    system("pause");
    return 0;
}