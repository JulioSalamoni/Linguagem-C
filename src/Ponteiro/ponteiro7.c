#include <stdio.h>
#include <stdlib.h>

int main(){
    system ("clear");
    char nomeCompleto[30];
    /* vamos usar uma função para obter todos
    os caracteres digitados pelo usuário na
    tela de terminal, o nome da função é fgets*/
    printf("digite o seu nome completo\n");
    fgets(nomeCompleto,30,stdin);
    printf("Olá, sr.(a) %s\n", nomeCompleto);

return 0;
}