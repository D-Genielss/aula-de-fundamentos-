/* Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador;
    int resto;

    //estrutura de repetição

    for(contador = 240 ; contador < 731 ;contador ++){

        //calculando

        resto = contador % 2;

        //estrutura if/else

        if(resto == 0){

            printf("%d \n",contador);

        }

    }

    return 0;

}