#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    
//int
int idade;
//float
float salario;
//char
char bloco;

//int

printf("digite sua idade :");

scanf("%d",&idade);

printf("vc tem %d anos de idade.\n",idade);

//float

printf("digite quanto vc recebe :");

scanf("%f",&salario);

printf("vc recebe %.2f por mes.\n",salario);

//retirando os caracteres do buffer

setbuf(stdin,NULL);

//string

printf("digite a letra do seu bloco de aula:");

scanf("%c",&bloco);

printf("seu bloco de aula eh o bloco : %c\n",bloco);

//mostrando o scanf com mais eficiencia 

int dia;
int mes;
int ano;

    printf("digite a data de hj (dd/mm/aaaa):");

    scanf("%d/%d/%d",&dia ,&mes ,&ano);
    
    printf("hj eh dia %02d do mes %02d do ano de %04d \n",dia, mes, ano);

    return 0;
}