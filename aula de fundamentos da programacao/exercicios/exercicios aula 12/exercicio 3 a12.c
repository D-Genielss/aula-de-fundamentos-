/*Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva:

 O valor e a localização (linha, coluna) do maior valor encontrado
na matriz. */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

    int linha;
    int coluna;
    int matriz [5][5];
    int MLmaior;
    int MCmaior;
    int Vmaior = 0;

    //estrutura q busca dados

    for(linha = 0;linha < 5;linha ++){

        for(coluna = 0;coluna < 5;coluna ++){

            printf("Digite o valor pra matriz [%d][%d] : ",linha,coluna);
            scanf("%d",&matriz[linha][coluna]);

        }//for2

        printf("\n");

    }//for1

    //estrutura para achar o maior 

    for(linha = 0;linha < 5;linha ++){

        for(coluna = 0;coluna < 5;coluna ++){

            if(Vmaior < matriz[linha][coluna]){

                Vmaior = matriz[linha][coluna];
                MLmaior = linha;
                MCmaior = coluna;

            }

        }//for2

    }//for1

    //mostramdo od resultados da pesquisa

    printf("o Maior numero eh : %d \n",Vmaior);
    printf("e estava localizada na [%d][%d]\n",MLmaior,MCmaior);

    return 0;

}