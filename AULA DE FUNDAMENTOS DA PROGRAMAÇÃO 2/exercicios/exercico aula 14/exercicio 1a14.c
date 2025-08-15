#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct{

    int x;
    int y;

}Ponto;

int main(){

//variaveis

    Ponto P1;
    Ponto P2;
    float distancia;

//buscando dados

    printf("Digite a coordena x do primeiro ponto : ");
    scanf("%d",&P1.x);
    printf("Digite a coordena y do primeiro ponto : ");
    scanf("%d",&P1.y);

    printf("Digite a coordena x do segundo ponto : ");
    scanf("%d",&P2.x);
    printf("Digite a coordena y do segundo ponto : ");
    scanf("%d",&P2.y);

//cauculando 

    distancia = sqrt(( (P2.x-P1.x)*(P2.x-P1.x) )+( (P2.y-P1.y)*(P2.y-P1.y) ));

//mostrando 

    printf("A distancia entre estes pontos eh de : %f ",distancia);

    return 0;
}