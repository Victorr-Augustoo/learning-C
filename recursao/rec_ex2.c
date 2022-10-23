#include <stdio.h>
#include <stdlib.h>

/*
Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/

int fibonacci(int n){
    if (n == 1){
        return 1;
    }
    if (n == 0){
        return 0;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}

int main(){
    int x = 0;
    printf("Digite um numero:\n");
    scanf("%i", &x);
    printf("o %iº termo da sequencia de fibonacci eh %i", x, fibonacci(x-1));

    return 0;
}