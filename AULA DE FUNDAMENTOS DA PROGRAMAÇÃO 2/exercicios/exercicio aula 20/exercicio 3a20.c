/*Escreva uma função que receba como parâmetro dois vetores via referência( A e B) e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que:
C[i] = A[i] * B[i]*/

#include <stdio.h>
#include <stdlib.h>

void SomaVetor(int* A,int* B,int N,int* C){
    
    for(int i = 0 ; i < N; i ++){
        
        printf("Digite um numero para o vetor [%d]A : ",i + 1);
        scanf("%d",&A[i]);
        
    }
    for(int i = 0 ; i < N; i ++){
        
        printf("Digite um numero para o vetor [%d]B : ",i + 1);
        scanf("%d",&B[i]);
        
    }
    for(int i = 0 ; i < N; i ++){
        
        C[i] = A[i] * B[i];
        
        printf("o Vet[%d] de C eh = %d\n",i,C[i]);
        
    }
    
    return ;
    
}

int main(){
    
    //variaveis
    int N;
    int* VetA;
    int* VetB;
    int* VetC;
    
    //buscando dados
    
    //N
    printf("Digite o tamanho dos vetores : ");
    scanf("%d",&N);
    
    //alocando
    VetA = (int*)malloc(N * sizeof(int));
    VetB = (int*)malloc(N * sizeof(int));
    VetC = (int*)malloc(N * sizeof(int));
    
    //função
    
    SomaVetor(VetA,VetB,N,VetC);
    
    //limpando 

    free(VetA);
    free(VetB);
    free(VetC);
    
    return 0;
}
