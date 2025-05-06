/* 3) Faça um programa que tenha como entrada: o número de horas, minutos e segundos 
atuais, informe quantos segundos faltam para chegar terminar o dia. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int hora;
    int minuto;
    int segundos;
    int Rhoras;
    int Rminutos;
    int Rsegundos;

    //recebendo valores

        printf("vc poderia me dizer q horas sso agora (hh/mm/ss) : ");
        scanf("%d/%d/%d",&hora,&minuto,&segundos);

    //cauculando

    Rhoras = 23 - hora;
    Rminutos = 59 - minuto;
    Rsegundos = 59 - segundos;

    //mostrando 

        printf("faltam aproximados %d:%d:%d para acabar o dia \n",Rhoras,Rminutos,Rsegundos);

    //finalizando o codigo

    return 0;

}
