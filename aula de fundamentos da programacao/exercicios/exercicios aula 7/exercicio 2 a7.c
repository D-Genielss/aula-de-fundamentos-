/* Crie uma calculadora usando a instrução switch, que
pergunte qual das operações básicas quer fazer (+, -, *
e /), em seguida peça os dois números e mostre o
resultado da operação matemática entre eles. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    char operacao;
    int n1;
    int n2;
    float resultado;

    //buscando dados

    printf("Menu do Sistema\n");
    printf("Escolha um operador matematico (+ , - , * , /) :");
    scanf("%c",&operacao);
    printf("Agora escolha dois numeros para a operacao respectivamente :");
    scanf("%d",&n1);
    scanf("%d",&n2);

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