#include <stdio.h>
#include <stdlib.h>
int main(){

    int base;
    int potencia;
    int resultado;
    int qtd;

    printf("digite um numero que vai ser a base da operação e tecle Enter\n");
    scanf("%d", &base);

    printf("digite um numero que vai ser o expoente da operação e tecle Enter\n");
    scanf("%d", &potencia);


    resultado = base;
    for ( qtd = 1 ; qtd < potencia ; qtd++ ){
        resultado *= base;
    }
    
    printf ("o resultado da operação é %d\n", resultado);

return 0;
}