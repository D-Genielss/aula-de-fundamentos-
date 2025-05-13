/* Faça um programa que calcule o fatorial de um número a ser
digitado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int resultado = 1;
    int numeroF;
    int contador;

    //buscando dados

    printf("digite o numero a ser fatorado : ");
    scanf("%d",&numeroF);

    //estrutura de for

    for(contador = 1;contador <= numeroF;contador ++){

        //calculando

        resultado = resultado*contador;

    }
    printf("o numero fatorado eh : %d \n",resultado);

    return 0;
}