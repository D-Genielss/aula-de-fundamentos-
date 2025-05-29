/*Faça um programa que multiplique por 5 a
matriz A (preenchida a partir do teclado) para gerar a
matriz C.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

    int VetorC[2][3];
    int VetorA[2][3];
    int Linha;
    int Coluna;

    //buscando dados com uma estrutura de repetição

    for(Linha = 0;Linha <2;Linha ++ ){

        for(Coluna = 0;Coluna < 3;Coluna ++){

            printf("Digite os vetores A em [%d][%d] : ",Linha,Coluna);
            scanf("%d",&VetorA[Linha][Coluna]);

        }//for Coluna

    }//for Linha

    //usando uma estrutura de repetição para caucular

    for(Linha = 0;Linha <2;Linha ++ ){

        for(Coluna = 0;Coluna < 3;Coluna ++){

            VetorC [Linha][Coluna]=VetorA[Linha][Coluna]*5;
            
        }//for Coluna

    }//for Linha

    printf("\n");

    //mostrando valores com uma estrutura de repetição

    for(Linha = 0;Linha <2;Linha ++ ){

        for(Coluna = 0;Coluna < 3;Coluna ++){

            printf("|%2d|",VetorC[Linha][Coluna]);

        }//for Coluna

        printf("\n");

    }//for Linha

    return 0;

}
