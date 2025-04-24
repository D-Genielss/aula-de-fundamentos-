#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int idade;
    float peso;

    //buscando dados 

    printf("digite sua idade : ");
    scanf("%d",&idade);

    printf("digite seu peso : ");
    scanf("%f",&peso);

    //if / else simples

    if(idade >= 18){
        
        printf("vc eh maior de idade\n");
    
    }else{

        printf("vc eh de menor !!\n");

    }//else 1

//outra questao usando operador logico

    if(idade >= 18 && idade <= 65 && peso >= 50){

        printf("vc pode tirar sangue !\n");

    }else{

        printf("vc n pode tirar sangue !!\n");

    }//else 2

//mostrando outra questao com mais de um if / else

    if(idade < 12){

        printf("vc eh criança !!\n");

    }else{

        if(idade <18 ){

            printf("vc eh adolecente !!\n");

        }else{

            if(idade < 60){

                printf("vc eh adulto !!\n");

            }else{

                printf("vc eh idoso !!\n");

            }//else 5           

        }//else 4

    }//else 3


//mostrando de forma mais simples

    if(idade < 12){

        printf("vc eh criança !!\n");

    }else if(idade <18 ){

        printf("vc eh adolecente !!\n");

    }else if(idade < 60){

        printf("vc eh adulto !!\n");

    }else{

        printf("vc eh idoso !!\n");

        }//else 5           

    return 0;
}