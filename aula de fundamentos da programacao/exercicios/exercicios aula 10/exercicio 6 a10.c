/* Faça um programa que receba 10 números e calcule o
quadrado desse número (um de cada vez). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador;
    int numero;
    int resultado;

    //estrutura de repetição

    for(contador = 0;contador <= 10;contador ++){

        //buscando dados

        printf("digite um numero : ");
        scanf("%d",&numero);
        
        //calculando

        resultado = numero * numero;

        //mostrando

        printf("seu numero ao quadrado eh : %d\n",resultado);

    }

    return 0;

}