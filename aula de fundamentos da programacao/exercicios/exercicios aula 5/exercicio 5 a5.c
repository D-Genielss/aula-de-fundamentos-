/*Sabendo que a função sqrt(valor), que está na biblioteca
math.h retorna a raiz quadrada do valor, calcule a raiz
quadrada de um número que o usuário digitar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    
    //variaveis 
    
    float n1;
    float resultado;
    
    //entrada de dados
    
    printf("digite um numero pra tirar a raiz : ");
    scanf("%f",&n1);
    
    //cauculando
    
    resultado = sqrt(n1);
    
    //mostrando
    
    printf("o resultado eh : %.2f",resultado);
    
    return 0;
}