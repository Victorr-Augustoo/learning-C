#include <stdio.h>
#include <stdlib.h>

/*
Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321
*/

int inverte(int n){
    int a = 1, b = 0, c = 0;
    if (n < 10){
        return n;
    }

    b = n / 10;
    c = n % 10;
    while (n/10 != 0){
        a = a*10;
        n = n/10;
    }
    return (a*(c) + inverte(b));

}

int main(){
    int x = 0;
    printf("digite um numero\n");
    scanf("%i", &x);
    printf("%i invertido eh %i\n", x, inverte(x));

    system("pause");
    return 0;
}