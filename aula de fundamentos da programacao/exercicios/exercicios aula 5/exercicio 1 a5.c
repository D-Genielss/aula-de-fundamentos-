/* Faca um programa que receba a altura de uma pessoa e
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura - 58 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    //variaveis

    float altura ;
    float Peso_Ideal;

    printf("digite sua altura :");
    scanf("%f",&altura);

    //calculando

    Peso_Ideal = 72.7 * altura - 58;

    printf("seu peso ideal sera : %f\n",Peso_Ideal);

    return 0;

}