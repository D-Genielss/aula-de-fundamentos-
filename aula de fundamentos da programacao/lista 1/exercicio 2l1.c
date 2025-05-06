/*Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância
entre os dois pontos no plano, através da seguinte fórmula:

 d = √(x2−x1)2+(y2−y1)2 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int x1;
    int x2;
    int y1;
    int y2;
    float distancia;

    //buscando dados

    printf("digite a coordenada (x , y) do primeiro local : ");
    scanf("%d,%d",&x1,&y1);

    printf("digite a coordenada (x , y) do segundo local : ");
    scanf("%d,%d",&x2,&y2);

    //calculando a distancia

    distancia = sqrt(((x1 - x2)*(x1 - x2))+((y1-y2)*(y1-y2)));

    printf("a distancia entre os dois pontos eh d : %.2f metros\n",distancia);

    return 0;
}