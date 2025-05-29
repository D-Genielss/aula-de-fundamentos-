/*Faça um programa que some as matrizes A e B,
gerando C */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

    int linha;
    int coluna;
    int VetorA[2][3];
    int VetorB[2][3];
    int VetorC[2][3];

    //buscando dados do vetor A com uma estrutura de repetição 

    for(linha = 0; linha < 2; linha ++){

        for(coluna = 0; coluna < 3; coluna ++){

            printf("Digite o Vetor A[%d][%d] : ",linha,coluna);
            scanf("%d",&VetorA[linha][coluna]);

        }//for coluna

    }//for linha

    printf("\n");

    //buscando dados do vetor B com uma estrutura de repetição

    for(linha = 0; linha < 2; linha ++){

        for(coluna = 0; coluna < 3; coluna ++){

            printf("Digite o Vetor B[%d][%d] : ",linha,coluna);
            scanf("%d",&VetorB[linha][coluna]);

        }//for coluna
        
    }//for linha

    printf("\n");

    //usando a estrutura de repetição para somar os Vetores A e B

    for(linha = 0; linha < 2; linha ++){

        for(coluna = 0; coluna < 3; coluna ++){

            VetorC[linha][coluna] = VetorA[linha][coluna] + VetorB[linha][coluna];

        }//for coluna
        
    }//for linha

    // mostrando o Vetor C com uma estrutura de repetição

    for(linha = 0; linha < 2; linha ++){

        for(coluna = 0; coluna < 3; coluna ++){

            printf("|%2d|",VetorC[linha][coluna]);

        }//for coluna

        printf("\n");
        
    }//for linha

    return 0;

}