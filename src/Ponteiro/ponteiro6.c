#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");

    char *primeiroNome;

    printf("Digite o seu nome e tecle Enter\n");
    scanf("%s", primeiroNome);

    printf("olá, sr(a). %s\n", primeiroNome);
    return 0;

// Não irá dar nenhum valor, pois o ponteiro não está apontando para nada nesse caso.
}