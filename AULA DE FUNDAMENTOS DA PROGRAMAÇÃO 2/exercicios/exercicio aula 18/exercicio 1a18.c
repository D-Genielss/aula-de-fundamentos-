/*Crie uma função que retorne x*y através de operação de soma. A função recebe x e y por parâmetro*/

#include <stdio.h>
#include <stdlib.h>

//função de multiplicação primitiva
int multipilacacao(int x ,int y){

    if(y == 1){
        return x;
    }else{
        return (x + multipilacacao(x , y-1));
    }
}

int main(){

//variaveis
 
    int x;
    int y;
    int mult;

//buscado dados

    printf("Digite um numero x : ");
    scanf("%d",&x);

    printf("Digite um numero y : ");
    scanf("%d",&y);

//chamando a função 

    mult = multipilacacao(x , y);

//mostrando

    printf("O resultado eh : %d\n",mult);

return 0;
}