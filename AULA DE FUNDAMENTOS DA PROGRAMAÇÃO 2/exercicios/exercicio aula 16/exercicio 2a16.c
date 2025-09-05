/*Implemente uma função em C que receba como parâmetros o sexo ('M' para masculino e 'F' para feminino)
e a altura (número real) de uma pessoa. A função deve calcular e retornar o peso ideal usando as seguintes fórmulas:

Homens: (72.7 * altura) - 58
Mulheres: (62.1 * altura) - 44.7
Na função main, chame essa função com diferentes valores de teste e exiba o resultado na tela.*/

#include<stdio.h>
#include<stdlib.h>

//pessoa que vamos avaliar
typedef struct{
    
    float altura;
    float pesoIdeal;
    char sexualidade;

}pessoa;

//função para calcular o peso ideal 
float peso_ideal(char sexo,float A){

    float P;

    if(sexo == 'M' || sexo == 'm'){

        P = (72.7 * A)- 58;

    }else if(sexo == 'F' || sexo == 'f'){

        P = (62.1 * A)- 44.7;

    }

    return P;

}

int main(){

//variaveis

    pessoa H1;

//buscando informaçoes

    //sexualidade
    printf("Digite a sua sexualidade ('M' para masculino e 'F' para feminino): ");
    scanf("%c",&H1.sexualidade);

    //altura
    printf("Digite a sua altura : ");
    scanf("%f",&H1.altura);

//manda pra funçõa 

    H1.pesoIdeal = peso_ideal(H1.sexualidade,H1.altura);

//mostrando o resultado 

    printf("\n");
    printf("O peso ideoal pra sua altura eh de : %.2f \n",H1.pesoIdeal);

//finalizando 

 return 0;

}