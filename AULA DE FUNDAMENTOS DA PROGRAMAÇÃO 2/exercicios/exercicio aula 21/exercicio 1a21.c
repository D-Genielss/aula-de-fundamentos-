/*Escreva um programa que leia do usuário o nome de um arquivo texto.
Em seguida, mostre na tela quantas linhas esse arquivo possui.

Texto de resposta Questão 1
*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){

//variaveis

    FILE *arq;
    char Escolha[21];
    char c;
    int nLinhas = 1;

//buscando dados

    printf("Digite o nome do arquivo que deseja abrir : ");
    fgets(Escolha,21,stdin);
    Escolha[strcspn(Escolha,"\n")]='\0';

//lendo arquivo

    arq = fopen(Escolha,"r");

//testando

    if(arq == NULL){

        printf("Arquivo n encontrado !!\n"); 
        exit(1);       

    }else{

        while((c = fgetc(arq)) != EOF) {

            if(c == '\n'){

                nLinhas ++;

            }
        }


    }//else 1

//mostrando

    printf("O arquivo que vc escolheu tem : %d linhas \n",nLinhas);

//fechando arquivo

    fclose(arq);

    return 0;
}