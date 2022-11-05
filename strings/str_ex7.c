/*Crie um programa que compara duas strings (não use a função strcmp).*/

#include <stdio.h>
#include <stdlib.h>

int comp_str(char *str1, char *str2){
    // funcao retornará 1 caso sejam iguais e 0 se forem diferentes
    int tam1 = 0, tam2 = 0;
    for (int i = 0; str1[i] != '\0'; i++){
        tam1++;
    }
    for (int j = 0; str2[j] != '\0'; j++){
        tam2++;
    }
    if (tam1 != tam2){
        return 0;
    }
    for (int k = 0; k < tam1; k++){
        if (str1[k] != str2[k]){
            return 0;
        }
    }
    return 1;
}


int main(){
    char a[20] = "hello world";
    char b[12] = "hello world";

    if (comp_str(a, b)){
        printf("strings iguais\n");
    }
    else {
        printf("nao sao iguais\n");
    }

    system("pause");
    return 0;
}