/* Desenvolva um programa que armazene o nome e o
telefone de 5 pessoas. Ao digitar a posição desejada, o
programa deve exibir o nome e telefone daquela posição. O
programa finaliza ao receber a entrada -1.*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    //variaveis

    char nomes[5][30];
    char Telefone[5][15];
    int contador;

    //estrutura de dados pra buscar dados

    for(contador = 0;contador < 5;contador ++){

        //qual pessoa ?

        setbuf(stdin,NULL);
        
        printf("Escreva o nome da [%d] Pessoa : ",contador);
        fgets(nomes[contador],30,stdin);
        nomes[contador][strcspn(nomes[contador],"\n")]='\0';

        //qual o numero dela?

        setbuf(stdin,NULL);

        printf("Digite seu numero : ");
        fgets(Telefone[contador],15,stdin);
        Telefone[contador][strcspn(Telefone[contador],"\n")]= 0;
    }
    
}