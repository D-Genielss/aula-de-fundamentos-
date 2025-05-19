/*Desenvolva um programa que receba um numero tamanho e exiba um quadrado de tamanho tamanho utilizando o carácter  #

Digite o tamanho: 5
#####
#####
#####
#####
#####

Dica: Para a exibição utilize apenas os comandos
printf(“#”);  e  printf(“\n”);*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    //variaveis 
    
    int tamanho;
    int contador;
    
    //buscando dados 
    
    printf("Digite o tamanha : ");
    scanf("%d",&tamanho);
    
    //estrutura de repetição
    
    for(contador = 0;contador <= tamanho;contador ++){
        
        //mostrando 
        
        printf("#####\n");
        
    }//for
    
    return 0;
    
}
