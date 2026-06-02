#include <stdio.h>
#include <stdlib.h>

int main(){
    // vamos criar uma estrutura de coleção de dados chamada de array (arranjo)
    int idade [6] = {18,26,17,16,30,23};
    int *pidade = idade;

    printf("primeiro elemento é %d\n", idade[0]);
    printf("primeiro elemento é %d\n", *pidade); // exemplo de que podemos chegar no dado usando o ponteiro também
    printf("o endereço do primeiro elemento é %p\n",pidade);

    pidade++; // assim vamos fazer o ponteiro andar para a proxima posição, se não houvesse, ele ficaria preso apontando para o primeiro dado
    
    printf("segundo elemento é %d\n", idade[1]);
    printf("segundo elemento é %d\n", *pidade);
    printf("o endereço do segundo elemento é %p\n",pidade);

    pidade ++;

    printf("terceiro elemento é %d\n", idade[2]);
    printf("terceiro elemento é %d\n", *pidade);
    printf("o endereço do terceiro elemento é %p\n",pidade);

return 0;
}