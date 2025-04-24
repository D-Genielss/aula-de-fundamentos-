/* Altere o exercício anterior para receber os 3 valores no
mesmo scanf.
Exemplo */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    char operacao;
    int n1;
    int n2;
    float resultado;

    //buscado dados

    printf("digite a conta q quer q eu faça na seguinte ordem numero 1, operador e numero 2 :");
    scanf("%d %c %d",&n1,&operacao,&n2);

    //testando no switch

    switch(operacao){

        case '+':

            //calculando

            resultado = n1+n2;

            printf(" o resultado da operação eh : %.1f\n",resultado);

        break;

        case '-':

            //calculando

            resultado = n1-n2;

            printf(" o resultado da operação eh : %.1f\n",resultado);

        break;

        case '*':

            //calculando

            resultado = n1*n2;

            printf(" o resultado da operação eh : %.1f\n",resultado);

        break;

        case '/':

            //calculando

            resultado = (float)n1/n2;

            printf(" o resultado da operação eh : %.1f\n",resultado);

        break;
        
        default :

        printf("opcao invalida");

        break;
    }

    return 0;
}