/*
Crie um programa em C, que contenha uma função recursiva que receba dois inteiros positivos k e n e calcule k^n. Utilize apenas multiplicações. O programa principal deve solicitar ao usuário os valores de k e n e imprimir o resultado da chamada da função.
*/

#include <stdio.h>
#include <stdlib.h>

int potencia(int k, int n){
    if (n == 0){
        return 1;
    }
    else {
        return k*potencia(k, n-1);
    }

}

int main()
{
    int a = 0, b = 0;
    printf("digite dois numeros\n");
    scanf("%i %i", &a, &b);

    printf("%i elevado a %i eh %i\n", a, b, potencia(a, b));
    system("pause"); 
    return 0;
}
