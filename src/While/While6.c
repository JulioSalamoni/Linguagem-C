#include <stdio.h>
int main (){

    int i , j, resultado;

    i = 1;
    j = 0;
    
    while(i <= 10){
        while(j <= 10){
            resultado = i * j;
            printf("%d X %d = %d\n",i, j, resultado);
            j++;
        }
        j = 0;
        i++;
    }
return 0;
}