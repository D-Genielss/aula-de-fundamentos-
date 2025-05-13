/* Utilizando a estrutura do laço for aninhado, crie um
programa que exiba a tabuada de todos os números de
1 a 10 no seguinte formato: */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){

    //variaveis

    int contador;
    int N1tabuada;
    int N2tabuada;
    int resultado;

    //estrutura de repetição

    for(contador = 1;contador <= 10;contador ++){

        N1tabuada = contador;

        printf("tabuada do : %d\n",N1tabuada);

        for(N2tabuada = 1;N2tabuada <= 10;N2tabuada ++){

            //calculando

            resultado = N1tabuada * N2tabuada;

            printf("%d X %d = %d \n",N1tabuada,N2tabuada,resultado);

        }//for 1

    }//for 2

    return 0; 
}