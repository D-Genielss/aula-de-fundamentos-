/*Crie uma função que que receba o valor de um inteiro
positivo N, calcule e retorne o fatorial desse número.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fatoracao(int n){

//variaveis

    int contador = n;

//fatorando com for
    
    do{ 
        
        contador --;
        
        n = n * contador;
        
    }while(contador != 1);

return n;

}

int main(){

//variaveis

    int Numero;
    int N_fatorado;

//buscando dados

    printf("Digite o numero que  deseja fatorar : ");
    scanf("%d",&Numero);

//jogando na função 

    N_fatorado = fatoracao(Numero);

//mostrando 

    printf("Seu numero fatorado eh : %d",N_fatorado);

return 0;

}