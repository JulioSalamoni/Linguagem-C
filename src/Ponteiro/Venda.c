#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");

    int i;
    for( i = 0 ; i < 100 ; i++){
        printf("=");
    }
    printf("\n-------------------------Nota Produto-------------------------\n");

    char nomeCliente[10];
    char nomeVendedor[10];
    char nomeProduto[20];
    float precoProduto;
    int formaPagamento;
    float precoFinal;
    int parcelas;

    printf("Digite o nome do cliente\n");
    fgets(nomeCliente,10,stdin);

    printf("Digite o nome do vendedor\n");
    fgets(nomeVendedor,10,stdin);

    printf("Digite o nome do produto\n");
    fgets(nomeProduto,10,stdin);

    printf("Digite o preço do produto\n");
    scanf("%f",&precoProduto);

    printf("Escolha a forma de pagamento:\nDigite 0 para A Vista\nDigite 1 para Parcelado\n");
    scanf("%d", &formaPagamento);

    if (formaPagamento == 1){
        printf("Digite o Número de parcelas\n");
            scanf("%d", &parcelas);
    } else {(parcelas = 0);
    }

    if (formaPagamento == 0){
        precoFinal = precoProduto - (precoProduto * 0.10);
    }
    if (formaPagamento == 1){
        precoFinal = precoProduto + (precoProduto * 0.15);
    }

    FILE *arquivo = fopen("files/notaproduto.txt", "a");
    fprintf(arquivo,"Nome Cliente: %s", nomeCliente);
    fprintf(arquivo,"Nome Vendedor: %s", nomeVendedor);
    fprintf(arquivo,"Produto: %s", nomeProduto);
    fprintf(arquivo,"Preço: %.2f\n", precoProduto);
    fprintf(arquivo,"Preco Final: %.2f\n",precoFinal);
    fprintf(arquivo,"Parcelas: %d\n", parcelas);
    fprintf(arquivo,"===================================================================================\n");

    fclose(arquivo);
return 0;

}