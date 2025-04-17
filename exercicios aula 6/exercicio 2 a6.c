/*2) Faça um programa que receba um número e determine
se ele é um número par ou ímpar.
 Obs.: Utilize o operador % que retorna o resto da divisão)*/
 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

    int n1;
    int resto;

    //buscando dados

    printf("digite um numero : ");
    scanf("%d",&n1);

    //cauculando

    resto = n1 % 2;

    //if/else
    
    if(resto == 1){

        printf("seu numero eh impar \n");

    }else{

        printf("seu numero eh par \n");

    }//else 1

    return 0;

}