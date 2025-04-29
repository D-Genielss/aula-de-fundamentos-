/* Faça um programa que calcule o fatorial de um número a ser
digitado. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int contador;
    int NumeroFatorial = 1;

    //buscando dados

    printf("digite o numero ser fatoriado : ");
    scanf("%d",&contador);

    //laço de retição 

    while(contador > 0){

        NumeroFatorial = NumeroFatorial * contador;

        contador --; 

    }

    printf("seu numero em fatorial deu : %d\n",NumeroFatorial);

    return 0;
    
}