/* Faça um programa que receba valores enquanto eles estiverem no intervalo de 500 a 1000.
Ao receber um valor fora da faixa, o programa deverá parar de solicitar valores,
exibir quantos valores válidos foram digitados e finalizar. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    
    //variaveis
    
    int valor; 
    int contador = 0;
    
    //mostrando as regras

    printf("Digite valores entre 500 e 1000.\n");
    printf("Para parar, digite outro valor.\n");
    
    //estrutura de repetição

    do {
        
        //buscando valores
        
        printf("Digite um valor: ");
        scanf("%d", &valor);
        
        //testando

        if(valor >= 500 && valor <= 1000) {
            
            contador++;
            
        } else {
            
            break;
            
        }//else1
        
    } while(1 == 1);
    
    //mostrando o resultado

    printf("\nTotal de valores digitados: %d\n", contador);

    return 0;
    
}
