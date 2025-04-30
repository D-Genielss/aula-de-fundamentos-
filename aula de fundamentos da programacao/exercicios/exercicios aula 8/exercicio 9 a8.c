/*Faça um programa que simule um jogo, onde o usuário deverá descobrir um número aleatório escolhido pelo computador (de 1 a 100).
O usuário poderá realizar até 6 tentativas, o programa deverá retornar as mensagens “muito alto”, “muito baixo” até o usuário acertar o número ou esgotar o número máximo de tentativas

Dica: Pesquise sobre como gerar um numero aleatório  utilizando a função rand da biblioteca math.h*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    
    //setando o randomizador
    
    srand(time(NULL));
    
    //variaveis

    int contador = 0;
    int numero;
    int numeroSorteado = rand() % 100 + 1;

    //estrutura de repetição

    while (contador < 6){
        
        //buscando dados
        
        printf("Digite um numero entra 1 a 100 \n");
        scanf("%d",&numero);
        
            //testando 

            if(numero > numeroSorteado){
                
             printf ("Muito alto\n");
            
            }else if(numero < numeroSorteado){
                
             printf ("Numero muito baixo\n");
             
            }else{
                
             printf("Parabens acertou o numero\n");
             
             break;
             
             }//else final
             
        contador ++;
        
        if (contador == 6){
            
        printf ("Acabou as tentativas o numero era: %d",numeroSorteado);
        
        }//if 2
        
        }
        
    return 0;
    
}
