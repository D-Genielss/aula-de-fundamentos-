#include<stdio.h>
#include<stdlib.h>
#include<math.h> 



int main(){

//testando operadores aritimeticos

    int a = 13;

    int b = 5;

    int soma;

    int subtracao; 

    int multiplicacao;

    int divisao;

    int restoDivisao;

    float divisaoReal;

    soma = a + b ;

    printf("a soma eh : %d \n",soma);

    subtracao = a - b ;

    printf("a subtração eh : %d \n",subtracao);

    multiplicacao = a * b;

    printf("a multiplicação eh : %d \n",multiplicacao);

    divisao = a / b;

    printf("a divisão eh : %d \n",divisao);

    restoDivisao = a % b;

    printf("o resto da divisão eh : %d \n",restoDivisao);

//mexer com floats agora

    divisaoReal = (float)a / b;

    printf("a divisao real eh : %f \n",divisaoReal);

//mexer com os incrementos(++) e e decrementos (--)

int contador = 50;

contador++; // mais usados em laços de repetição

int contador2 = 50;

contador2--; // mais usados em laços de repetição


    

    return 0;
}