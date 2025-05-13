/* Crie um algoritmo que exiba todos os números múltiplos
de 5 no intervalo de 1 a 500. */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador;
    int resto;

    //estrutura de repetição

    for(contador = 0 ; contador < 500 ;contador ++){

        //calculando

        resto = contador % 5;

        //estrutura if/else

        if(resto == 0){

            printf("%d \n",contador);

        }

    }

    return 0;

}