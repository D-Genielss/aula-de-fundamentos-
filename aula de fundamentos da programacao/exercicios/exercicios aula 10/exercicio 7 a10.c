/* Faça um programa que mostre n elementos da sequência de
Fibonacci.
 O valor de n é passado para o programa.
 O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a
fórmula t
n = tn-1 + tn-2 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis 

    int Termo1 = 0;
    int Termo2 = 1;
    int Rfibonachi;
    int contador;
    int NdeSequencias;

    //buscando dados

    printf("digite o numero de sequenquias de fibonachi q deseja ver : ");
    scanf("%d",&NdeSequencias);

    //estrutura de repetição 

    for(contador = 0;contador < NdeSequencias;contador ++){

        //calculando

        Rfibonachi = Termo1 + Termo2;
        Termo2 = Termo1;
        Termo1 = Rfibonachi;

        //mostrando

        printf("%d\n",Rfibonachi);

    }

    return 0;

}