/*
Arquivos com a extensão .h (header), são arquivos de cabeçalho (header h). Portanto arquivos com
a extensão .h são importados na parte superior do arquivo que irá utilizá-lo 
*/

#include <stdio.h>
#include <stdlib.h>

int cabecalho(){
    system("clear");
    int i;
    for(i = 1; i <= 160 ; i++){
        printf("=");
    }
    printf("\n");
    printf("PROGRAMA ESCRITO EM C\n");
    for( i = 1 ; i <=160 ; i++){
        printf("=");
    }
    printf("\n");
}


int rodape(){
    int i;
    for(i = 1; i <= 160 ; i++){
        printf("=");
    }
    printf("\n");
    printf("FIM DO PROGRAMA ESCRITO EM C\n");
    for( i = 1 ; i <= 160 ; i++){
        printf("=");
    }
    printf("\n");
}

