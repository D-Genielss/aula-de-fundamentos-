#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//variavel constante imutavel 
//sempre em maiusculo 

#define PI = 3.14;

//ensinando variaveis e como ultilizar

int main(){
//variavel int
    int idade = 18;

    printf("sua idade eh %d \n",idade );

//variavel float 

    float salario = 20512.20;

    printf("seu salario inicial eh : R$ %.2f \n",salario);

//variavel char

    char bloco = 'n' ;

    printf(" estamos no bloco %c \n", bloco);

//mostra quantos bits ou bytes ocupa minha variavel

    printf("minha variavel ocupa : %i bytes \n",sizeof(int));

    return 0;
}//aula 3
//ensinando variaveis e como ultilizar
