/* Faça um algoritmo que implemente uma função que receba 3 números
inteiros e retorne o maior valor; */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int crescente(int menor,int meio ,int maior){
    
    if(menor < meio){

        if(meio < maior){

            return maior;

        }else{

            return  meio;
        }

    }else if(menor < maior){

        return maior;

    }else{

        return menor;
    }
}

int main(){

    //variaveis

    int n1;
    int n2;
    int n3;
    int maior;

    //buscando dados

    printf("digite 3 numeros : 1 = ");
    scanf("%d",&n1);

    printf("                 : 2 = ");
    scanf("%d",&n2);

    printf("                 : 3 = ");
    scanf("%d",&n3);

    //jogando na minha função que traz os numeros na ordem;

    maior = crescente(n1,n2,n3);

    //mostrando 

    printf(" O maoir de todos eh o %d \n",maior);

    return 0;

}