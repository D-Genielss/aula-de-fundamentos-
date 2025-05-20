#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis com vetor

    int tamanho = 5;

    int vetor[tamanho];
    int contador;

    //buscando dados

    for(contador =0;contador < tamanho; contador ++){

        printf("Digite o vetor [%d] :",contador);
        scanf("%d",&vetor[contador]);
    }

    //exibir dados do vetor

    for(contador =0;contador < tamanho; contador ++){

        printf(" o vetor [%d] esta com o valor de : %d\n",contador,vetor[contador]);

    }

    return 0;
}