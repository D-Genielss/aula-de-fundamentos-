/* Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador = 0;
    int numero;
    int resultado;

    //laço de repetição 

    while(contador < 10){

        //rebendo valor

        printf("digite um numero real : ");
        scanf("%d",&numero);

        //cauculo 

        resultado = numero * numero;

        //mostrando o resultado

        printf("o resultado do numero ao quadrado eh : %d\n",resultado);

        //printf("%d\n",contador);

        // add contador
        contador ++;
    }

    return 0;

}