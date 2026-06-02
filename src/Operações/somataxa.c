#include <stdio.h>
int main (){

    float preco;
    float taxa;
    int parcela;

    float resultado;
    float resultadoparcela;


    printf ("digite o valor do produto e tecle Enter \n");
    scanf ("%f", &preco);

    printf ("digite o valor de acréscimo da taxa (sem porcentagem) e tecle Enter \n");
    scanf ("%f", &taxa);

    printf ("digite a quantidade de parcelas e tecle Enter \n");
    scanf ("%d", &parcela);

    taxa = (taxa /100) * preco;
    resultado = preco + taxa;
    resultadoparcela = resultado / parcela;

    printf ("o preço final do produto é R$ %.2f,\n", resultado);
    printf ("as taxas do produto ficarão %d parcelas de R$%2.f,\n", parcela, resultadoparcela);

return 0;

}