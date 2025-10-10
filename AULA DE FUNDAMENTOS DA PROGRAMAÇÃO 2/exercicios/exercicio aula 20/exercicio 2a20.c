/*2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.*/

#include<stdio.h>
#include<stdlib.h>


int* Valor(int n){

    int* vetor;
 
    if(n <= 0){

        return NULL;
    
    }else{

        vetor = (int*)malloc(n * sizeof(int));

        if(vetor == NULL){

            printf("ERORRRRR \n");
            exit(1);
        }
    }

    return vetor;
}

int main(){

    int N;

    printf("DIgite um valor pra o vetor : ");
    scanf("%d",&N);

    Valor(N);
}