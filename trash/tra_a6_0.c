#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[3] = {1, 2, 3};
    int *p = NULL;

    p = vet; // atribui endereço de memória relativo à primeira posição

    for (int i = 0; i<3; i++){
        printf("%i\n", p[i]); // colchetes para acessar os elementos do array
    }

    system("pause");
    return 0;
}
