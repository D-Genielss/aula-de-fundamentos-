/*Crie uma Matriz com dimençoẽs de 5x5*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis
    
    int matriz [5][5];
    int contador1;
    int contador2;

//estrutura q busca dados

for(contador1 = 0;contador1 < 5;contador1 ++){

    for(contador2 = 0;contador2 < 5;contador2 ++){

        if(contador1 == contador2){

            matriz[contador1][contador2] = 1;

        }else{

            matriz[contador1][contador2] = 0;

        }//else

    }//for 2  

    printf("\n");

}//for 1

//estrutura q mostra os dados

for(contador1 = 0;contador1 < 5;contador1 ++){

    for(contador2 = 0;contador2 < 5;contador2 ++){

        printf("|%d|",matriz[contador1][contador2]);

    }//for 2  

    printf("\n");

}//for 1

    return 0;

}
