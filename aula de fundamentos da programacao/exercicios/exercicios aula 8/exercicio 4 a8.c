/* Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis
    int contador = 0;
    int contaPar;

    //laço de repetição
    
    while(contador < 731){

        //test e mostrando os pares

        if(contador >= 240){

            //calculo

            contaPar = contador % 2;

            //mostrar quando eh par

            if(contaPar == 0){

                printf("%d\n",contador);

            }//if2


        }//if 1

        //add 1

        contador ++;

    }//while

    return 0;
}