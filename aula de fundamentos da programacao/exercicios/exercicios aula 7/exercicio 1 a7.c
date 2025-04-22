/*  Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:
Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis

    int opcao;
    int numero;
    int resto;
    int idade;

    //buscando dados

    printf("Menu de programa : \n");
    printf("1 – Verifica par/impar\n");
    printf("2 – Verifica maior/menor de idade\n");
    printf("Digite sua opção : ");
    scanf("%d",&opcao);

    //testando no switch

    switch (opcao){

    case 1:

        //busca de dados
        printf("digite um numero de sua escolha :");
        scanf("%d",&numero);

        //calculando

        resto = numero % 2;

        //testando no if/else 

        if(resto == 0){

            printf("seu numero eh par !!\n");

        }else{

            printf("seu numero eh impar !!\n");

        }//else 1

    break;

    case 2:

        //buscando dados

        printf("digite sua idade : ");
        scanf("%d",&idade);

        //testando no if/else 

        if(idade <= 17){

            printf("vc eh menor de idade !!\n");

        }else{

            printf("vc eh maior de idade\n");

        }//else 2 

    break;
    
    default:

        printf("opcao invalida !!\n");

    break;
    }

    return 0;
}