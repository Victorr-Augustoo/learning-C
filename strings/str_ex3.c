/*
Entre com um nome e imprima o nome somente se a primeira letra do nome for 
'a' (maiúscula ou minúscula).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[20];
    printf("digite um nome:\n");
    scanf("%s", str);
    if (str[0] == 'A' || str[0] == 'a'){
        printf("Nome digitado: %s\n", str);
    }else {
        printf("O nome digitado nao comeca com A\n");
    }

    system("pause");
    return 0;
}