/*
Escreva uma função recursiva que determine quantas vezes um dígito K ocorre
em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.
*/

#include <stdio.h>
#include <stdlib.h>

int freq(int k, int n){

    if (n == 0){
        return 0;
    }
    if (k == n%10){
        return 1 + freq(k, n/10);
    }
    return freq(k, n/10);
}

int main(){
    unsigned int m, n;
    printf("digite dois numeros: \n");
    scanf("%i %i", &m, &n);
    printf("%i aparece %i vezes em %i\n", m, freq(m,n), n);

    system("pause");
    return 0;
}