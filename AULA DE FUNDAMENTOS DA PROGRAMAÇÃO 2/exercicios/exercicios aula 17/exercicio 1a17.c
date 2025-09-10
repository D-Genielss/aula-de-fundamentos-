/*Escreva um programa que receba um número inteiro representando a quantidade total de segundos e, 
usando passagem de parâmetros por referência, converta a quantidade informada de segundos em Horas, 
Minutos e Segundos. Imprima o resultado da conversão no formato HH:MM:SS. Utilize o seguinte protótipo da função:
void converteHora(int total_segundos, int* hora, int* min, int* seg)*/

#include <stdio.h>
#include <stdlib.h>

void converteHora(int total_segundos, int* hora, int* min, int* seg){

    (*hora) = total_segundos / 3600;
    (*min) = (total_segundos / 60) % 60;
    (*seg) = total_segundos % 60;

    return ;
}

int main(){

//variaveis

    int total_segundos,hora,min,seg;

//buscando informação 

    //segundos totais
    printf("Digite  a quantidade de segundos que deseja converter : ");
    scanf("%d",&total_segundos);

//chamando a função

    converteHora(total_segundos,&hora,&min,&seg);

//mostrando 

    printf("a conversão esta em %d:%d:%d.\n",hora,min,seg);

    return 0;
}