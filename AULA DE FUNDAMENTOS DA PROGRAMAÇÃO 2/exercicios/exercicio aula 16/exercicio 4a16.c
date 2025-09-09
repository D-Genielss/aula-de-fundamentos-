/*Escreva uma função em C que receba a média final de um aluno (número real) como parâmetro e retorne seu conceito de acordo com a seguinte escala:

Média entre 9 e 10: Conceito A
Média entre 7 e 8.9: Conceito B
Média entre 5 e 6.9: Conceito C
Média entre 0 e 4.9: Conceito D

Na função main, solicite ao usuário que informe a média final, chame a função e exiba o conceito correspondente.*/

#include <stdio.h>
#include <stdlib.h>

//função que acha o conceito 
void Conceito(float media){

    if(media >= 9){
        printf("Conceito A \n");
    }else if(media >= 7){
        printf("Conceito B \n");
    }else if(media >= 5){
        printf("Conceito C \n");
    }else{
        printf("Conceito D \n");
    }

    return ;
}

int main(){

//variaveis

    int n1,n2,n3;
    float media;

//buscando informações

    //n1
    printf("Digite a primeira nota : ");
    scanf("%d",&n1);

    //n2
    printf("Digite a segunda nota : ");
    scanf("%d",&n2);

    //n3
    printf("Digite a terceira nota : ");
    scanf("%d",&n3);

//calculando a media final

    media = ((float)n1 + n2 + n3)/3;

//mostrando a media final 

    printf("\n");
    printf("A media final dele eh : %.2f\n",media);

//jogando na função

    printf("\n");
    Conceito(media);

return 0;
}
