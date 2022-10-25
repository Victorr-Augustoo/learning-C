/*
Qual é a instrução que deve ser adicionada ao programa seguinte para que ele trabalhe corretamente?
main () {
    int j, *pj;
    *pj = 3;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int j, *pj;
    pj = &j; // instrução que faltava
    *pj = 3;

    printf("variavel j: %i\n", j);

    system("pause");
    return 0;
}