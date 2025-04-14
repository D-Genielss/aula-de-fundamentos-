/*Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    
    //variaveis 
    
    int n1;
    int n2;
    int n3;
    int n4;
    int soma;
    float media;
    
    //entradas de dados
    
    printf("digite o primeiro numero :");
    scanf("%d",&n1);
    
    printf("digite o segundo numero :");
    scanf("%d",&n2);
    
    printf("digite o terceiro numero :");
    scanf("%d",&n3);
    
    printf("digite o quarto numero :");
    scanf("%d",&n4);
    
    //calculando
    
    soma = n1+n2+n3+n4;
    media = (float)soma/4;
    
    //mostrando o resultado
    
    printf("a média aritmética eh : %.2f",media);
    
    return 0;
    
}
