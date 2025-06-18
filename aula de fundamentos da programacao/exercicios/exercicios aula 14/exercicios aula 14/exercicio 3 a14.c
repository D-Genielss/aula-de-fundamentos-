/*Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float AA (float n1,float n2,float n3){

//variaveis

    float soma ;
    float media;

//calculando

    soma = n1+n2+n3;
    media = soma/3;

return media;
}

float PP(float n1,float n2,float n3){

//variaveis

    float media;

//calculando

    media = ((n1 * 5)+(n2 * 3)+(n3 * 2))/10;

return media;
}

float SS(float n1,float n2,float n3){

//variavel

    float soma;

    soma = n1+n2+n3;

return soma;
}

int main (){

//variaveis

    float nota1,nota2,nota3;
    char letra;
    float media_a;
    float media_p;
    float soma;

//buscando dados 

    printf("Digite as tres notas deste aluno : nota1 : ");
    scanf("%f",&nota1);
    printf("                                   nota2 : ");
    scanf("%f",&nota2);
    printf("                                   nota3 : ");
    scanf("%f",&nota3);

    setbuf(stdin,NULL);

    printf("Digite a letra referente a este aluno : ");
    scanf("%c",&letra);

//espaçamento
    
    printf("\n");

//testando e jogando nas funções 

    if(letra == 'a' || letra == 'A'){

        media_a = AA(nota1,nota2,nota3);
        printf("a média Aritimétrica das notas é : %.2f \n",media_a);

    }else if(letra == 'p' || letra == 'P'){

        media_p = PP(nota1,nota2,nota3);
        printf("a média ponderada de pesos(5,3,2) é : %.2f \n",media_p);

    }else if(letra == 's' || letra == 'S'){

        soma = SS(nota1,nota2,nota3);
        printf("a soma de todas as notas é : %.2f",soma);
        
    }else{

        printf("Error 'user not found' \n\n");

        return 0;

    }

return 0;
}