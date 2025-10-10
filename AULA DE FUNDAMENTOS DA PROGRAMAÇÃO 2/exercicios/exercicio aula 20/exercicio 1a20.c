/*1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.*/

#include<stdio.h>
#include<stdlib.h>

int main(){

//vairiaveis

    int tamanho;

//buscando informação

    printf("DIgite quantos vetores vc quer : ");
    scanf("%d",&tamanho);

//alocação

    int* vetor = (int*)malloc(tamanho * sizeof(int));

//buscando dados de vetores

    for(int i = 0 ; i < tamanho; i ++){

        printf("Digite qual o valor do Vetor %d: ",i);
        scanf("%d",&vetor[i]);

    }

    printf("\n");

//imprimindo

    for(int i = 0 ; i < tamanho; i ++){

        printf(" Vetor (%d) eh : %d \n",i,vetor[i]);

    }

//free

    free(vetor);

    return 0;

}