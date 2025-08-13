#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[50];
    int idade;
    float peso;
    float altura;

}Aluno;

int main (){

//declarando

    Aluno meuAluno;

//buscando informações 

    printf("digite seu nome : ");
    fgets(meuAluno.nome , 50 ,stdin);
    meuAluno.nome[strcspn(meuAluno.nome,"\n")] ='\0'; 

    setbuf(stdin ,NULL);

    printf("digite sua idade : ");
    scanf("%d",&meuAluno.idade);

    printf("digite sua altura : ");
    scanf("%f",&meuAluno.altura);

    printf("digite seu peso : ");
    scanf("%f",&meuAluno.peso);

//prints

printf("\n\n");

    printf("seu nome eh : %s\n",meuAluno.nome);
    printf("sua idade eh : %d\n",meuAluno.idade);
    printf("sua altura eh :%2.f\n",meuAluno.altura);
    printf("seu peso eh : %2.f\n",meuAluno.peso);
    
    return 0;

};
