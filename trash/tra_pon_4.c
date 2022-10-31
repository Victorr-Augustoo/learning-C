/*
Qual o v alor das seguintes expressões:
int i = 3, j = 5;
int *p = &i, *q = &j;
a) p == &i 
b) *p - *q
c) **&p
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 3, j = 5;
    int *p = &i, *q = &j;

    printf("%i\n", p == &i);

    printf("%i\n", *p - *q);

    printf("%i\n", **&p);

    system("pause");
    return 0;
}