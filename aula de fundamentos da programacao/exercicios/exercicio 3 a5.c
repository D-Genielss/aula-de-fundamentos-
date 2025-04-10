/* Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

//variaveis

int salario = 1200;
float vendas;
float salario_mes;
float comissao;

//obtendo dados

printf("digite quanto vc vendeu esse mes : ");
scanf("%f",&vendas);

//caulculando

comissao = vendas * 0.1;

salario_mes = comissao + salario;

printf("vc recebera esse mes %.2f reais \n",salario_mes);

return 0;


}