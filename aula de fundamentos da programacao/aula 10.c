#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    //variaveis

    int contador;

    //testando o for(while melhor)
    
    printf("crescente\n");

    for(contador = 0;contador < 5;contador ++){

        printf("hello world %d \n",contador);

    }//for1 

    printf("decrescente\n");

    for(contador = 5;contador > 0;contador --){

        printf("hello world %d \n",contador);

    }//for2

    return 0;
}