/* Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá calcular o quadrado
de vários números e finalizar quando for digitado um número
negativo ou zero. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador = 1;
    int numero;
    int resultado;

    //estrutura de repetição

    while(contador > 0 ){

        //rebendo valor

        printf("digite um numero real : ");
        scanf("%d",&numero);

        if(numero > 0){

        //cauculo 

        resultado = numero * numero;

        //mostrando o resultado

        printf("o resultado do numero ao quadrado eh : %d\n",resultado);

        }else{

            printf("numero invalido\n");

            //fechando o laço de repetição

            contador --;
        }//else

    }//while

    return 0;

}