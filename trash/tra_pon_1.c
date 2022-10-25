/*
Assumindo que queremos ler o valor de x, e o endereço de x foi atribuído a px,
a instrução seguinte é correta? scanf( "%d", *px )
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 10, *px = NULL;
    px = &x;

    printf("digite um numero:\n");
    scanf("%i", *px); //não funciona
    printf("conteudo do ponteiro: %i", *px);

    system("pause");
    return 0;
}