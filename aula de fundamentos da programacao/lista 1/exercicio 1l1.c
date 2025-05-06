/* 1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo,
faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts
gasta por uma residência e mostre:

a) O valor em reais de cada quilowatt;
b) O valor em reais a ser pago pelos quilowatts gasto;
c) O novo valor a ser pago por essa residência com um desconto de 12%; */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    float salarioMinimo;
    int quilowatts;
    float PrecoWatt;
    float payday;
    float desconto;
    float Blackpayday;

    //buscando valores

    printf("digite quanto vc recebe de salario minimo : ");
    scanf("%f",&salarioMinimo);

    printf("digite quanto quilowatts vc gasta na sua residencia : ");
    scanf("%d",&quilowatts);

   //cauculando qunato custa um watt

   PrecoWatt = (salarioMinimo/4)/200;

   printf("um watt custa : %.2f\n",PrecoWatt);

   //calculando quanto devo pagar pelo q gastei

   payday = quilowatts*PrecoWatt;

   printf("vc tera q pagar : %.2f\n",payday);
   
   //cauculando desconto 

   desconto = (payday/100)*12;
   
   Blackpayday = payday - desconto;

   printf("se vc obtiver o desconto vc tera q pagar apenas : %.2f\n",Blackpayday);

   return 0;

}