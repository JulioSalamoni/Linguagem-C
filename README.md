# Estudo de Linguagem C e NASM
# Aplicada a lógica de programação e algoritmo
<img src="Logo.png" width="300" height="300">
</p>

---

Estudo das principais estruturas da linguagem de programação C.

Vamos listar os itens trabalhados neste repositório:

    * Variáveis
    * Comandos de entrada e saída(IO-Input output):
        * printf
        * scanf
    * Desvio de fluxo simples (if ... )
    * Desvio de fluxo Múltiplo (if ... else ... )
    * Estrutura de repetição While
    * Estrtura de repetição For
    * Função (Módulos)
        - Função Interna (dentro do arquivo .c)
        - Função Externa (dentro do arquivo .h)
    * Importação de Módulos
        - Módulo da linguagem (stdio.h)
        - Módulo do usuário (funcoes.h)
    * Ponteiro
    * Criação de arquivos


#### Demonstração de uma estrutura simples
``` C
#include <stdio.h>
int main(){
    int x = 10
    printf("O valor é %d\n, x);
    return 0;
}
```


#### Demonstração de estrutura de Repetição
```C
#include <stdio.h>
int main (){
    
    int i,num,res;
    printf ("Digite um número para fazer a tabuada e tecle Enter\n");
    scanf ("%d", &num);

    i = 0;
    while(i <= 10) {
        res = num * i;
        printf("%d X %d = %d\n",num, i, res);
        i++;
    }
return 0;
}
```


#### Demonstração de estrutura simples de Desvio de Fluxo
``` C
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
