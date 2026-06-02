#include <stdio.h>
int main (){

    int linha, coluna;
    linha = 1;
    coluna = 1;

    while (linha <= 50){
        while(coluna <= linha){
            printf("#");
            coluna ++;
        }
        // voltar a coluna para 1 pois chegou ao limite de 15 e tem que reiniciar
        // para o valor original para continuar funcionando na proxima linha.
        coluna = 1;
        printf("\n");
        linha ++;
    }
return 0;
}