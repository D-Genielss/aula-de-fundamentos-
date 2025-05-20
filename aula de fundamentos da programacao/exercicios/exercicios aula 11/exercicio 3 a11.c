/*Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador;
    int tamanho = 10;
    int Idades[tamanho];
    int PessoasM = 0;

    //buscando as idades e pegando so as de maior

    for(contador =0;contador < tamanho;contador ++){

        printf(" Digite a idade da pessoa[%d] : ",contador);
        scanf("%d",&Idades[contador]);

        if(Idades[contador] >= 35){

            PessoasM ++;
            
        }//if

    }

    //mostrando as pessoas

    printf(" tem %d Pessoas com 35 anos ou mais neste grupo \n",PessoasM);

    return 0;
}