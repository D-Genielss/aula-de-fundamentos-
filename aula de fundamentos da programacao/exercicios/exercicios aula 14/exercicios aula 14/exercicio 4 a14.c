/*Faça uma função que receba a média final de um aluno
por parâmetro e retorne o seu conceito, conforme a tabela
abaixo:
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char Letra(float media){

//variaveis 

    char conceito ;

//testando

    if(media > 9){

        conceito = 'A';

    }else if(media > 7 ){

        conceito = 'B';

    }else if(media > 5){

        conceito = 'c';

    }else if(media < 5 && media > 0){

        conceito = 'D';

    }else{

        conceito = 'F';

    }

return conceito;

}

int main(){

//variaveis

    float media;
    char conceito;

//buscando dados 

    printf("Digite a media final deste aluno : ");
    scanf("%f",&media);

//jogando na função 

    conceito = Letra(media);

// mostrando 

    printf("O conceito deste aluno é : %c",conceito);

return 0;
}