/*Faça um programa que multiplique as matrizes A e D
abaixo gerando matriz AD*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

    int linha;
    int coluna;
    int VetorA[2][3];
    int VetorD[3][2];
    int VetorAD[2][2];

    //buscando dados do vetor A com uma estrutura de repetição 

    for(linha = 0; linha < 2; linha ++){

        for(coluna = 0; coluna < 3; coluna ++){

            printf("Digite o Vetor A[%d][%d] : ",linha,coluna);
            scanf("%d",&VetorA[linha][coluna]);

        }//for coluna

    }//for linha

    printf("\n");

    //buscando dados do vetor D com uma estrutura de repetição

    for(linha = 0; linha < 3; linha ++){

        for(coluna = 0; coluna < 2; coluna ++){

            printf("Digite o Vetor D[%d][%d] : ",linha,coluna);
            scanf("%d",&VetorD[linha][coluna]);

        }//for coluna
        
    }//for linha

    printf("\n");

    //usando a estrutura de repetição para somar os Vetores A e B

    for(linha = 0; linha < 2; linha ++){

        for(coluna = 0; coluna < 2; coluna ++){

            VetorAD[linha][coluna] = VetorA[linha][0]*VetorD[0][coluna]+VetorA[linha][1]*VetorD[1][coluna]+VetorA[linha][2]*VetorD[2][coluna];

        }//for coluna
        
    }//for linha

    // mostrando o Vetor C com uma estrutura de repetição

    for(linha = 0; linha < 2; linha ++){

        for(coluna = 0; coluna < 2; coluna ++){

            printf("|%2d|",VetorAD[linha][coluna]);

        }//for coluna

        printf("\n");
        
    }//for linha

    return 0;

}