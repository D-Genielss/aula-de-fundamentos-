/*Faça uma função recursiva que retorne o n-ésimo termo da sequência de Fibonacci, sendo que n é recebido por parâmetro. 
Utilize essa função para desenvolver um programa que mostre no main() os n termos dessa sequência na tela, a partir do 
valor de n recebido pelo teclado. 
Sabe-se que o 1º termo é 0 e o 2º termo é 1.*/

#include <stdio.h>
#include <stdlib.h>

//função Fibonacci
int Fibonacci(int quantidade,int x ,int y,int z){

    if(quantidade == 2){
        return z;
    }else{
        z = x + y;
        x = y;
        y = z;
        return Fibonacci(quantidade -1,x,y,z);
    }
}

int main(){

//variaveis

    int Quantidade;
    int x = 0;
    int y = 1;
    int z = 0;
    int N_FI;

//buscando dados 

    printf("Digite a quantidade de numeros de Fibonacci que deseja ver : ");
    scanf("%d",&Quantidade);

//chamando a função 

    N_FI = Fibonacci(Quantidade,x,y,z);

//mostrando 

    printf("o n-ésimo termo da sequencia que vc escolheu eh : %d\n",N_FI);

return 0;

}