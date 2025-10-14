/*Escreva uma função que receba como parâmetro um valor L e um valor C e retorne o ponteiro para uma
matriz alocada dinamicamente contendo L linhas e C colunas. Essa matriz deve ser inicializada com o
valor 0 em todas as suas posições.*/

#include<stdio.h>
#include<stdlib.h>

void Matrix(int* L, int* C){
    
    int** matriz;
    
    matriz = (int**)calloc((*L),sizeof(int*));
    
    for(int i = 0 ; i < *L ; i ++){
        
        matriz[i] = (int*)calloc((*L),sizeof(int));
    }
    
    for(int i = 0 ; i < *L ; i ++){
         
        for(int u = 0 ; u < *C ; u ++){
            
            printf("A Matriz[%d][%d] eh : %d , ",i,u,matriz[i][u]);
       
        }
        
        printf("\n");
    }
    
    for(int i = 0 ; i < *L ; i ++){
        free(matriz[i]);
    }
    
    free(matriz);
    
}

int main(){
    
//variaveis
    
    int Linha;
    int Coluna;
    
//buscando informações

    printf("Digite a quantidade de Linhas tem a sua matriz : ");
    scanf("%d",&Linha);
    
    printf("Digite a quantidade de Colunas agora : ");
    scanf("%d",&Coluna);
    
//jogando na função 

    Matrix(&Linha,&Coluna);
    
//fim
    
    return 0;
}
