/*Crie uma função que retorne o fatorial de um número passado por parâmetro.

fatorial(n):

=1 se n=0

= n x fatorial (n-1) se n>0*/

#include <stdio.h>
#include <stdlib.h>

//função que fatora 

int Fatorando(int N){

    if(N == 1){
        return N;
    }else{
        return (N * Fatorando(N -1 ));
    }
}

int main(){

//variaveis

    int N;
    int N_fatorado;
    
//buscando dados

    printf("Digite um numero a ser fatorado : ");
    scanf("%d",&N);

//chamando a função 

    N_fatorado = Fatorando(N);

//mostrando 

    printf("O seu numero fatorado eh : %d\n",N_fatorado);

return 0;
}