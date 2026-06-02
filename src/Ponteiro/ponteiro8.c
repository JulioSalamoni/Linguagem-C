#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    int i;
    for( i = 0 ; i < 100 ; i++){
        printf("=");
    }

    printf("\nPrograma de cadastro\n");
    char primeiroNome[10];
    char sobrenome[10];
    char email[50];
    int idade;

    printf("Digite o seu primeiro nome\n");
    fgets(primeiroNome,10,stdin);

    printf("Digite seu Sobrenome\n");
    fgets(sobrenome,10,stdin);

    printf("Digite seu Email\n");
    fgets(email,50,stdin);

    printf("Digite sua idade\n");
    scanf("%d",&idade);

    // vamos criar um arquivo de texto para guardar os dados dos clientes
    FILE *arquivo = fopen("files/cadastro.txt", "a");
    
    fprintf(arquivo,"Nome: %s",primeiroNome);
    fprintf(arquivo,"Sobrenome: %s",sobrenome);
    fprintf(arquivo,"E-Mail: %s",email);
    fprintf(arquivo,"Idade: %d\n",idade);
    fprintf(arquivo,"===================================================================================\n");


    // vamos fechar o arquivo
    fclose(arquivo);
return 0;
}