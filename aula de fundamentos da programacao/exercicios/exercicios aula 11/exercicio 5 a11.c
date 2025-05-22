/*Dado dois vetores, A (4 elementos) e B (5 elementos), faça
um programa em C que imprima todos os elementos comuns
aos dois vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int tamanho1 = 4;
    int tamanho2 = 5;
    int VA[tamanho1];
    int VB[tamanho2];
    int contador;
    int contador2;

    //estrutura de repetição para a primeira variavel

    for(contador = 0;contador < tamanho1;contador ++){

        //buscando dados

        printf("Digite qual o Valor do Vetor A[%d] : ",contador);
        scanf("%d",&VA[contador]);

    }//for1

    //estrutura de repetição para a segunda variavel

    printf("\n");

    for(contador = 0;contador < tamanho2;contador ++){

        //buscando dados

        printf("Digite qual o Valor do Vetor B[%d] : ",contador);
        scanf("%d",&VB[contador]);
        
    }//for2

    //estrutura de repetição para verificar quais são comuns

    printf("\n");

    for(contador = 0;contador < tamanho1;contador ++){

        for( contador2 = 0;contador2 < tamanho2;contador2 ++){

            if(VA[contador]==VB[contador2]){

                printf("VA[%d] eh = a VB[%d] \n",contador,contador2);

            }//if

        }//for4

    }//for3

    return 0;
}