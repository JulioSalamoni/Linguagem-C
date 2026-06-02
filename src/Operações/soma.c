#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;
    
    printf ("Digite um número inteiro e tecle Enter\n");
    scanf("%d",&num1);

    printf ("Digite outro número inteiro e tecle Enter\n");
    scanf("%d",&num2);

    // vamos realizar a soma entre as duas varáveis, sendo elas num 1 e num 2, e alocar o resultado na variável soma
    soma = num1 + num2;

    printf("a soma dos números %d e %d resultou em %d\n", num1,num2,soma);
    return 0;
}