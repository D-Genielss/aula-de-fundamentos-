/* Faça um programa que leia e armazene dois vetores de
tamanho 5. Ao final o programa deve calcular e exibir o vetor
soma; */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variveis

    int tamanho = 5;
    int contador;
    int numero1[tamanho];
    int numero2[tamanho];
    int soma[tamanho];

    //buscando dados

    for(contador = 0;contador < tamanho;contador ++){

        printf("Digite o Numero do primeiro Vetor [%d] : ",contador);
        scanf("%d",&numero1[contador]);

        printf("Digite o Numero do segundo vetor[%d] : ",contador);
        scanf("%d",&numero2[contador]);

    }

    //somando 

    for(contador = 0;contador < tamanho;contador ++){

        soma[contador] = numero1[contador]+numero2[contador];

    }

    //mostrando os vetores

    for(contador = 0;contador < tamanho;contador ++){

        printf("a soma do Vetor[%d] eh : %d\n",contador,soma[contador]);

    }

    return 0;

}
