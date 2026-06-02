#include <stdio.h>
int main(){

    int num1;
    int num2;
    int soma;
    int divisao;
    int multiplicacao;
    int subtracao;
    
    
    printf ("Digite um número inteiro e tecle Enter\n");
    scanf("%d",&num1);

    printf ("Digite outro número inteiro e tecle Enter\n");
    scanf("%d",&num2);


    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;

    printf("a soma dos números %d e %d resultou em %d,\n", num1,num2,soma);
    printf("a subtraçao dos números %d e %d resultou em %d,\n", num1,num2,subtracao);
    printf("a divisão dos números %d e %d resultou em %d,\n", num1,num2,divisao);
    printf("a multiplicação dos números %d e %d resultou em %d,\n", num1,num2,multiplicacao);
    return 0;
}