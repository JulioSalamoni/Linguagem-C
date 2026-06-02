#include <stdio.h>
#include <stdlib.h>

int main (){

    /* Comando system que chama uma execução do sistema operacional que
    neste caso será o comando clear*/

    system ("clear");
    
    float media;
    float notamatematica;
    float notaportugues;
    float notageografia;
    float notahistoria;

    printf("Digite a sua nota em matemática e tecle Enter\n");
    scanf("%f", &notamatematica);

    printf("Digite a sua nota em português e tecle Enter\n");
    scanf("%f", &notaportugues);

    printf("Digite a sua nota em geografia e tecle Enter\n");
    scanf("%f", &notageografia);

    printf("Digite a sua nota em história e tecle Enter\n");
    scanf("%f", &notahistoria);

    media = (notamatematica + notaportugues + notageografia + notahistoria) / 4;


    if( media >= 7) {
        printf ("a sua média é de %2.f e você foi Aprovado\n", media);
    } else {
        printf ("a sua média é de %2.f e você foi Reprovado\n", media);
    }


    printf("\n###########################################################################\n");
    printf("Endereço de memória da variável notamatematica %p \n", &notamatematica);
    printf("Endereço de memória da variável notaportugues %p \n", &notaportugues);
    printf("Endereço de memória da variável notageografia %p \n", &notageografia);
    printf("Endereço de memória da variável notahistoria %p \n", &notahistoria);

    return 0;

}