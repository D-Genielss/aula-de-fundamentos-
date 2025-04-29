/* Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contadador = 0;

    //laço de repetição

    while(contadador < 322){

        //mostrando os multiplos
        printf("%d\n",contadador);

        //add 3
        contadador += 3;

    }

    return 0;

}