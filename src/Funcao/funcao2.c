#include <stdio.h>
#include "../../Lib/funclayout.h"
#include "../../Lib/funcsoma.h"

int main(){
    int x , y , z;

    cabecalho();
    
    printf ("digite um número inteiro e tecle Enter\n");
    scanf("%d", &x);
    printf ("digite outro número inteiro e tecle Enter\n");
    scanf("%d", &y);
    z = soma(x,y);
    printf("O Resultado da soma é %d\n",z);

    rodape();
return 0;
}
