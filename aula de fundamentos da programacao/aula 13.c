#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    //variaveis

    char palavras [5][30];
    int contador;
    int tamanhoL[5];
    
    //buscando dados

    for(contador = 0;contador < 5;contador ++){

        //limpar lixo
        setbuf(stdin,NULL);

        printf("Digite seu nome : ");
        fgets(palavras[contador],30,stdin);
        palavras[contador][strcspn(palavras[contador],"\n")] = '\0';
        tamanhoL[contador]=strlen(palavras[contador]);

    }//for

        printf("\n");
    
    //mostrando

    for(contador = 0;contador < 5;contador ++){

        printf("Olá %s , Welcome to los polos hermanos!!\n",palavras[contador]);

    }//for2

        printf("\n");

    for(contador = 0;contador < 5;contador ++){

        printf(" o Nome [%d] tem %d Letras \n",contador,tamanhoL[contador]);

    }//for3

    return 0;

}