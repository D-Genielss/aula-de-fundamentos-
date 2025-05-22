/*Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
soma dos seus elementos, e apresente o resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

     int tamanho = 8;
     int Vetor [tamanho];
     int soma = 0;
     int contador;

    //estrutura de repetição para buscar dados

    for(contador = 0;contador < tamanho;contador ++){

        printf("Digite o numero do Vetor[%d] : ",contador+1);
        scanf("%d",&Vetor[contador]);

    }//for

    //estrutura de repetição para somar todos os vetores

    for(contador = 0;contador < tamanho;contador ++){

        soma = soma + Vetor[contador];
    }//for2

    //mostrando resultado

    printf("a soma de todos os Vetors eh : %d\n",soma);

    return 0;

}
