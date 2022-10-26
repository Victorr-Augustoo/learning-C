/*
A multiplicação de dois números inteiros pode ser feita através de somas sucessivas.
Proponha um algoritmo recursivo multip_rec(n1, n2) que calcule a multiplicação de dois
inteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int multi(int n1, int n2){
    if (n2 > n1){
        return multi(n2, n1);
    }
    if (n2 == 0){
        return 0;
    }else{
        return n1 + multi(n1, n2-1);
    }

}

int main()
{
    int a = 0, b = 0;
    int c = 0;
    printf("Digite dois numeros\n>>>>");
    scanf("%i %i", &a, &b);

    c = multi(a, b);
    printf("%i x %i = %i\n", a, b, c);

    system("pause");
    return 0;
}
