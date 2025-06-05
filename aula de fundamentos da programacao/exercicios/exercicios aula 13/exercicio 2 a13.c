/*Faça um programa que armazene o nome e salário de 5
empregados. Em seguida calcule um aumento de 8% nos
salários e exiba a nova folha de pagamentos.*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

    //variaveis

    char funcionario[5][30];
    float salario[5];
    float Sreajustado[5];
    float reajuste[5];
    int contador;

    //estrutura de repetição para buscar dados

    for(contador = 0 ;contador < 5;contador ++){

        //qual funcionario ?

        setbuf(stdin,NULL);

        printf("qual o do [%d] funcionario : ",contador);
        fgets(funcionario[contador],30,stdin);
        funcionario[contador][strcspn(funcionario[contador],"\n")]= '\0';

        //qual salario dele?

        setbuf(stdin,NULL);

        printf("Digite o salario do funcionario [%d] : ",contador);
        scanf("%f",&salario[contador]);

    }//for 1

    printf("\n");

    //recalculando salario deles 

    for(contador = 0 ;contador < 5;contador ++){

        reajuste[contador] = salario[contador] * 0.08;

        Sreajustado[contador] = salario[contador]+reajuste[contador];

    }//for 2

    //mostrando 

    for(contador = 0 ;contador < 5;contador ++){

        printf(" o Funcionario %s recebera R$ %.2f reais \n",funcionario[contador],Sreajustado[contador]);
        
    }//for 3

    return 0;

}