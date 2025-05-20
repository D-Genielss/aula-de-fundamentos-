/* Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador;
    int tamanho = 10;
    int VetorA[tamanho];
    int VetorB[tamanho];

    //buscando valores

    for(contador = 0; contador < tamanho; contador ++){

        printf("Digite o valor do vetor[%d] : ",contador);
        scanf("%d",&VetorA[contador]);
    }

    //cauculando

    for(contador = 0; contador < tamanho; contador ++){

        VetorB[contador]= VetorA[contador]*VetorA[contador];

        printf("o VetorB [%d] eh : %d\n",contador,VetorB[contador]);

    }

    return 0;
}