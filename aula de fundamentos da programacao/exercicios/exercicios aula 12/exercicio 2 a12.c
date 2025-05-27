/*Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária; */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

    int matriz[3][3];
    int linha;
    int coluna;
    int somaPrincipal = 0;
    int somaSecundaria = 0;
    int SomaOsDois = 0;

    //estrutura para buscar os dados da matriz

    for(linha = 0;linha < 3; linha ++){

        for(coluna = 0;coluna < 3;coluna ++){

            printf("digite o valor da matriz no ponto [%d][%d] : ",linha,coluna);
            scanf("%d",&matriz[linha][coluna]);

        }//for2

        printf("\n");

    }//for1

    //estrutura q pega os dados para somar a diagonal principal

    for(linha = 0;linha < 3; linha ++){

        for(coluna = 0;coluna < 3;coluna ++){

            if(linha == coluna){

                somaPrincipal = somaPrincipal + matriz[linha][coluna];

            }//if
            
        }//for2
        
        printf("\n");

    }//for1

    //soma da diagonal secundaria
    
    somaSecundaria = matriz[0][2] +matriz[1][1]+matriz[2][0];

    //a soma das duas 

    SomaOsDois = somaPrincipal + somaSecundaria;

    //mostrando dados

    printf("A soma da diagonal principal deu : %d\n",somaPrincipal);
    printf("A soma da diagonal secundaria deu : %d\n",somaSecundaria);
    printf("A soma dos dois deu : %d\n",SomaOsDois );

    return 0;

}
