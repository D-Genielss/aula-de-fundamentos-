/*Um problema típico em ciência da computação consiste em converter um número da sua forma decimal para binária.
Crie um algoritmo recursivo para resolver esse problema.

●Solução trivial: x=0 quando o número inteiro já foi convertido para binário

●Passo da recursão: saber como x/2 é convertido. Depois, imprimir um dígito (0 ou 1) dado o sucesso da divisão.*/


#include <stdio.h>
#include <stdlib.h>

void conversor(int a) {

    int resto;

    resto = a % 2;
    
    int metade = a /2;

    if (a == 1) {

        printf("%d",a);

    } else { // Trata caso base

        conversor(metade);// Chamada recursiva
        printf("%i", resto);

    }//else

}//recursao

int main() {

//variavel 

    int Binario;

//buscando dados

    printf("Digite qual o numero binario deseja converter : ");
    scanf("%d",&Binario);

//chamando função

    conversor(Binario);
    
return 0;
}
