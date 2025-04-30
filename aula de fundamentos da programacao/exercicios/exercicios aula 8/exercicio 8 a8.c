/* Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
 A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
 A segunda opção imprime “Teste2” e mostra o menu novamente.
 A terceira opção finaliza o programa.
 Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int Menu;
    int contador = 0;

    //testando

    while(contador == 0){

        //buscando dados

        printf("Menu do programa:\n");
        printf("1 - Teste 1\n");
        printf("2 - Teste 2\n");
        printf("3 – Sair do programa\n");
        printf("Digite sua opção:\n");
        scanf("%d",&Menu);

        //testando

        if(Menu == 1){

            printf("Teste 1\n");

        }else{
            if(Menu == 2){
            
            printf("Teste 2\n");
            
            }else{
                if(Menu == 3){
            
                printf("saindo do programa\n");
            
                contador ++;
                
                }else{
                    
                    printf("Error , tente novamente\n");
                    
                }//else 3
            
            }//else 2
            
        }//else 1

    }//while
    
    return 0;

}
