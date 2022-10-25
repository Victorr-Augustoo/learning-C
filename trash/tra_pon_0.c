#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 5, *pnum = NULL;

    pnum = &num; // pnum recebe o endereço de num

    if (pnum == &num){
        printf("pnum == &num: Verdadeiro\n");
    }
    if (num == *pnum){
        printf("num == *pnum: Verdadeiro\n");
    }
    printf("endereco de num: %p\n", pnum);

    system("pause");
    return 0;
}