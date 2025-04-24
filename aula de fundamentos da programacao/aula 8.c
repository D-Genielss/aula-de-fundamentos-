#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis 

    int contador = 0;
    int contaPar = 0;
    int somaacumula = 0;

    //while ou enquanto

    while(contador <= 50){

        //acumulando
        
        somaacumula = somaacumula + contador;

        //testando par
        
        if(contador % 2 ==0){

            contaPar ++;

        }//if

        printf("contador esta em : %d \n",contador);

        contador++;
        //contador += 1000;
        //contador = contador + 1;

    }//while 1

    printf("terminei pohhhhhhhaaaaaaaaaaaaaaa\n");

    printf("tem exatos %d numeros pares .\n",contaPar);

    printf("a soma de todas as contagens eh : %d\n",somaacumula);

    return 0;
}
