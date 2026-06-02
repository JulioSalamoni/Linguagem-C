#include <stdio.h>
int main (){

    int n;
    printf ("Digite um número inteiro e tecle Enter\n");
    scanf ("%d", &n);

    if( n % 2 == 0) {
        printf ("O Número %d é Par\n",n); 
    } else {
        printf ("O Número %d é impar\n",n); 
    }

    return 0;                                                                                                             
}
