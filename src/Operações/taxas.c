#include <stdio.h>
int main () {

    float preco;
    float taxa;
    float parcelas;
    float resultado;
    float resultadoParcelas;

    /*
    Camel Cases (nomeCompletoCliente)
    Snake Case ( Nome_Completo_Cliente)
    Simple Case (nomecompletocliente)
    */

    printf("Digite o preço do produto e tecle Enter\n");
    scanf("%f", &preco);

    printf("Digite a taxa de acréscimo sem o símbolo de porcentagem e tecle Enter\n");
    scanf("%f", &preco);

    printf("Digite o número de parcelas e tecle Enter\n");
    scanf("%f", &parcelas);

    resultado = preco * (taxa / 100) + preco;
    resultadoParcelas = resultado / parcelas;

    printf("O valor final do produto é R$%.2f \n", resultado);
    printf("O Valor da parcela é R$ %.2f \n", resultadoParcelas);

return 0;
}