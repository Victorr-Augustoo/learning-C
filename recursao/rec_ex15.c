/*A função fatorial duplo é definida como o produto de todos os números naturais ímpares de 1 até algum número natural ímpar N. Assim, o fatorial duplo de 5 é 5!! = 1 * 3 * 5 = 15
*/

#include <stdio.h>
#include <stdlib.h>

int fatorial_duplo(int n){
    if (n % 2 == 0 || n < 0){
        return -1;
    }

    if (n == 1){
        return 1;
    }
    return n * fatorial_duplo(n - 2);
}

int main(){
    int x = 0;
    do {
        printf("digite um numero impar \n");
        scanf("%i", &x);
    } while (x % 2 == 0 || x < 0);

    printf("fatorial duplo de %i eh %i\n", x, fatorial_duplo(x));

    system("pause");
    return 0;
}