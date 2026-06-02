#include <stdio.h>
#include <stdlib.h>

int main (){

    int a = 35;
    int *pa = &a;

    printf("O valor da variável a é %d\n",a);
    printf("O endereço de memória da variável a é %p\n",pa);
    printf("O valor que está no endereço da variável a é %d\n",*pa);
}

