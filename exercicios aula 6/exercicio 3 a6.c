/* Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
 Para isso, lembre-se da fórmula de Báskara */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

   float delta;
   float a;
   float b;
   float c;
   float x1;
   float x2;

    //buscando dados 

    printf("digite os numeros dos coeficientes : \n");

    printf("a :");
    scanf("%f",&a);
    
    printf("b :");
    scanf("%f",&b);

    printf("c :");
    scanf("%f",&c);

    //cauculando

    delta=(b*b)-4*a*c;

    //if/else

    if(delta < 0){

        printf("n exite raiz de numeros negativo \n");

    }else if(delta == 0){

        x1= -b/(2*a);

        printf("%f",x1);

    }else{

        x1 =
        x2;

    }


    return 0;
}