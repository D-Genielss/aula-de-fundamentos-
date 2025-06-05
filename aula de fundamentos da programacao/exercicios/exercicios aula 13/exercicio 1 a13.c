/*Crie um programa para armazenar 10 nomes em um vetor
e imprimir uma lista numerada*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    //variaveis

    char nomes[10][30];
    int contador;

    //estrutura de repetição para scanear nomes

    for(contador = 0 ;contador < 10;contador ++){

        setbuf(stdin,NULL);

        printf(" Digite o [%d] nome : ",contador + 1);
        fgets(nomes[contador],30,stdin);
        nomes[contador][strcspn(nomes[contador],"\n")] = '\0';

    }//for 1

    printf("\n");

    for(contador = 0 ;contador < 10;contador ++){

        printf("o nome [%d] eh : %s \n",contador+1,nomes[contador]);

    }//for 2

    return 0;
}