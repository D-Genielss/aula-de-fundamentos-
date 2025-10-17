/*Escreva um programa que leia do usuário os nomes de dois arquivos texto.
Crie um terceiro arquivo texto com o conteúdo dos dois primeiros 
juntos (o conteúdo do primeiro seguido do conteúdo do segundo)*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){

//variaves

    FILE *arq1;
    FILE *arq2;
    char Escolha1[21];
    char Escolha2[21];
    FILE *arq3;
    char c[900];

//buscando dados

    printf("Digite o nome do PRIMEIRO arquivo que deseja abrir : ");
    fgets(Escolha1,21,stdin);
    Escolha1[strcspn(Escolha1,"\n")]='\0';

    printf("Digite o nome do SEGUNDO arquivo que deseja abrir : ");
    fgets(Escolha2,21,stdin);
    Escolha2[strcspn(Escolha2,"\n")]='\0';

//lendo arquivos

    arq1 = fopen(Escolha1,"r");
    arq2 = fopen(Escolha2,"r");

//testando

    if(arq1 == NULL){

        printf("Error ao abrir arquivo \n");
        exit(1);

    }else if(arq2 == NULL){

        printf("Error ao abrir arquivo \n");
        exit(1);

    }

//lendo e copiando arquivo

    while ((c = fgets(arq1)) != EOF) { 

        printf("%c",c);

    }

//fechando 

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
}