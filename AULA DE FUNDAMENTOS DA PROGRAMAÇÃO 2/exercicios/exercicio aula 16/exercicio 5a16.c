/*Implemente uma função em C que receba um número inteiro positivo N como parâmetro e retorne o seu fatorial. O fatorial de N é definido como:

N!=N×(N−1)×(N−2)×...×1

Considere que 0! = 1.

Na função main, solicite ao usuário um valor para N, chame a função para calcular o fatorial e exiba o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>

//função que fatora 
int Fatorial(int V){

    int Vfatorado = V;

    if(V == 0){

        Vfatorado = 1;

    }else{

    for(int i = V; i > 1; i -- ){

        Vfatorado = Vfatorado * (i-1);

    }//for
    }//else

    return Vfatorado;
}

int main(){

//variaveis

    int N;
    int Nfatorado;
    
//buscando informação  

    printf("Digite um numero a ser fatorado : ");
    scanf("%d",&N);

//jogando na função 

    Nfatorado = Fatorial(N);

//mostrando 

    printf("\n");
    printf("O seu Numero fatorado eh ingual a : %d ",Nfatorado);

return 0;


}