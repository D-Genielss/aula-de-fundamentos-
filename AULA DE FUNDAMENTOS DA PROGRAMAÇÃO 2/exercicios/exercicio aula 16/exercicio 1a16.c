/*Implemente uma função em C que receba três números inteiros como parâmetros e retorne o maior deles.
Na função main, chame essa função com diferentes valores de teste e exiba o resultado na tela.*/

#include<stdio.h>
#include<stdlib.h>

//função que testa os valores e devolve em ordem crescente 
int test(int v1,int v2,int v3){

    if(v1 > v2){
        if(v1 > v3){
            return v1;
        }else{
            return v3;
        }//else dentro
    }else if(v2 > v3){
        return v2;
    }else{
        return v3;
    }//ultimo else

}

int main(){

//variaveis

    int n1,n2,n3;
    int maior;

//buscando dados

    //n1
    printf("Digite o primeiro numero : ");
    scanf("%d",&n1);

    //n2
    printf("Digite o segundo numero : ");
    scanf("%d",&n2);

    //n3
    printf("Digite o terceiro numero : ");
    scanf("%d",&n3);
    
//jogando pra funcao test

    maior = test(n1,n2,n3);

//mostrando o maior numero 

    printf("O maior valor que vc digitou foi : %d \n",maior);

return 0;

}