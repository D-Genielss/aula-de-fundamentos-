/*Faça um programa que receba como entrada a nota de
um aluno. O programa deve exibir “aprovado” caso a nota
seja igual ou superior a 6, ou exibir “reprovado” caso
contrário.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    //variaveis

    float nota ;

    //buscando dados 

    printf("digite a nota do aluno : ");
    scanf("%f",&nota);

    //testando agora

    if(nota >= 6){

    printf("Aprovado !!\n");

    }else{

        printf("Reprovado >;\n");

    }//else 1

    return 0;

}