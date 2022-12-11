/*1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros. 
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma = 0;
    int A[6] = {1,0,5,-2,-5,7};

    soma = A[0] + A[1] + A[5];
    printf("soma: A[0] + A[1] + A[5] = %i\n", soma);
    
    A[4] = 100;

    for (int i = 0; i < 6; i++){
        printf("%i\n", A[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}