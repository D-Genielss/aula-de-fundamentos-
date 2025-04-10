/* Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

//variaveis 

    int ano_nasceu;
    int ano_atual;
    int idade;

//recebendo dados

printf("digite o ano em q vc nasceu : ");
scanf("%d",&ano_nasceu);

printf("digite o ano em q vc se encontra agora : ");
scanf("%d",&ano_atual);

//calculando

idade = ano_atual - ano_nasceu;

printf("sua idade eh : %d anos\n",idade);

return 0;

}