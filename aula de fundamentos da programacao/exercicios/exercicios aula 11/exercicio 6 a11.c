/*Faça um programa que receba e armazene 20 números em
um vetor. Em seguida exiba:
 Quantos números são iguais a 30;
 Quantos números são maior que a média;
 Quantos números são iguais à media; */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variavies

    int tamanho =20;
    int Vetor[tamanho];
    int contador;
    int N30 = 0;
    int soma = 0;
    int media ;
    int VmaiorM = 0;
    int VigualM = 0;


    //estrutura de repetição para buscar dados 

    for(contador = 0;contador < tamanho; contador ++){

        printf("Digite um Numero para o vetor[%d] : ",contador +1);
        scanf("%d",&Vetor[contador]);

    }//for 1

    //somando td

    for(contador = 0;contador < tamanho; contador ++){

        soma = soma + Vetor[contador];

    }//for 2

    //calculando a média

        media = soma/20;

    //estrutura de repetição para exibir dados;

    for(contador = 0;contador < tamanho; contador ++){

        //quais sao iguais a 30 ?

        if(Vetor[contador] == 30){

            N30 ++;

        }//if 1

        //quantos sao maiores q a media

        if(Vetor[contador] > media){

            VmaiorM ++;

        }//if 2

        //quantos numeros sao iguais a media

        if(Vetor[contador] == media){

            VigualM ++;

        }//if 3

    }//for 3

    //mostrando td

    printf("\n");
    printf("%d são iguais a 30\n",N30);
    printf("%d são maiores q a media\n",VmaiorM);
    printf("%d são iguais a media\n",VigualM);

    return 0;

}