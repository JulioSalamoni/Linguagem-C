// importação da biblioteca padrão de entrada e saída
#include <stdio.h>

// O programa inicia e executa a partir da função main
int main (){
    // declaração da variável j com o tipo int(inteiro)
    int j;

    // vamos pedir para o usuário digitar um valor inteiro para ser guardado na variável j
    printf("digite um número inteiro e tecle Enter:\n");

    /* o comando scanf será utilizado para capturar o número inteiro que o usuário irá digitar. O caracter 
    f do scan é usado para indicar qual será o formato de dado digitado pelo usuário, neste caso, usaremos
    %d que indica que o usuário digitou é um numero decimal, este número será alocado no endereço de memória
    da variável J, portanto usaremos &j para indicar o endereço da variável. */
    
    scanf("%d",&j);
    printf("o valor digitado pelo usuário é %d\n\n",j);

    return 0; //informa ao compilador que o programa acabou
}