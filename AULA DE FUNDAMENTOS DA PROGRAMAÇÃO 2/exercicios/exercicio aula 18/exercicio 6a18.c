/*Considere a função X abaixo:

int X(int a){
  if(a <=0) return0;
  else return a + X(a-1);
}//X

O que essa função faz? Escreva uma função não-recursiva que resolve o mesmo problema.*/

#include <stdio.h>
#include <stdlib.h>

//a função soma todos os numeros ate o da sua escolha

int soma(int N){
    
    int soma = 0;

    for(N ; N > 0; N--){
        
        soma = soma + N;
        
    }
    
    return soma;
  }
  


int main(){
    
int Numero;

Numero = soma(4);

printf("%d",Numero);



    return 0;
}
