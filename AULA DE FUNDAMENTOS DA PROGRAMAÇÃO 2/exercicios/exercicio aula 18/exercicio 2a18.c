/*Crie uma função que retorne x elevado a y através de operação de multiplicação. A função recebe x e y por parâmetro*/

#include <stdio.h>
#include <stdlib.h>

//função de potenciação primitiva
int Potencia(int x ,int y){

    if(y == 1){
        return x;
    }else{
        return (x * Potencia(x , y-1));
    }
}

int main(){

//variaveis
 
    int x;
    int y;
    int Pot;

//buscado dados

    printf("Digite um numero x : ");
    scanf("%d",&x);

    printf("Digite um numero y : ");
    scanf("%d",&y);

//chamando a função 

    Pot = Potencia(x , y);

//mostrando

    printf("O resultado eh : %d\n",Pot);

return 0;
}