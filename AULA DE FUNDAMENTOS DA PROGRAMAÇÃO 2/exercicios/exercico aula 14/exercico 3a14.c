#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct{
    
    int n1;
    int n2;
    int n3;
    int n4;
    float media;
    char nome[51];
    char curso[51];
    char situacion[51];
    
}Aluno;

int main(){
    
//variaveis

    Aluno meu_aluno;
    
//buscando dados
    
    //nome e curso
    printf("Digite o nome do aluno :");
    fgets(meu_aluno.nome,51,stdin);
    meu_aluno.nome[strcspn(meu_aluno.nome,"\n")] ='\0'; 
    
    setbuf(stdin,NULL);
    
    printf("Digite o curso do aluno :");
    fgets(meu_aluno.curso,51,stdin);
    meu_aluno.curso[strcspn(meu_aluno.curso,"\n")] ='\0'; 
    
    setbuf(stdin,NULL);
    
    //notas
    printf("Digite a primeira nota : ");
    scanf("%d",&meu_aluno.n1);
    
    printf("Digite a segunda nota : ");
    scanf("%d",&meu_aluno.n2);
    
    printf("Digite a terceira nota : ");
    scanf("%d",&meu_aluno.n3);
    
    printf("Digite a quarta nota : ");
    scanf("%d",&meu_aluno.n4);
    
//cauculando a média 

    meu_aluno.media= ((float)meu_aluno.n1 + meu_aluno.n2 + meu_aluno.n3 + meu_aluno.n4)/4;
    
//testando para achar a situacion

    if(meu_aluno.media >= 7){
        
       strcpy(meu_aluno.situacion,"APROVADO !");
        
    }else if(meu_aluno.media < 7 && meu_aluno.media >= 3){
        
        strcpy(meu_aluno.situacion,"EXAME !!");

    }else{
        
        strcpy(meu_aluno.situacion,"REPROVADO !!!");

    }

//mostrando as informações

    printf("\n\n");
    printf("_____________Aluno : %s ___ \n",meu_aluno.nome);
    printf("_____________Curso : %s ___ \n",meu_aluno.curso);
    printf("__A média dele foi : %f ___ \n",meu_aluno.media);
    printf("__________Situação : %s ___ \n",meu_aluno.situacion);

//fechando 

    return 0;
    
}
