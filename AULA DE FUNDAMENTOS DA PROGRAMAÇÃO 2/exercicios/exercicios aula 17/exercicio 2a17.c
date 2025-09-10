/*Reescreva o exercício anterior utilizando a estrutura horário (contendo hora, minuto e segundo) e 
passando a estrutura por referência. Utilize o seguinte protótipo da função:

void converteHorario(int total_segundos, Horario* hor)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int hora;
    int min;
    int seg;

}Horario;

void converteHorario(int total_segundos, Horario* hor){

    (hor->hora) = total_segundos / 3600;
    (hor->min) = (total_segundos / 60) % 60;
    (hor->seg) = total_segundos % 60;

    return ;

}

int main(){

//variaves

    Horario hor;
    int total_segundos;

//buscando informação 

    //segundos totais
    printf("Digite  a quantidade de segundos que deseja converter : ");
    scanf("%d",&total_segundos);

//chamando a função

    converteHorario(total_segundos,&hor);

//mostrando 

    printf("a conversão esta em %d:%d:%d.\n",hor.hora,hor.min,hor.seg);

    return 0;
}