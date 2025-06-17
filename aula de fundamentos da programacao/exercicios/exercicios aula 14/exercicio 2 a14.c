/*Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float pinto(float altura){

    //varial e calculo

    float peso_ideal = (72.7 * altura ) - 58;

    return peso_ideal;

}

float xereca(float altura){

    //varialvel e calculo

    float peso_ideal = (62.1 * altura)- 44.7;

    return peso_ideal;

}

int main(){

    //variaveis

    char Sexo;
    float altura;
    float peso_ideal;

    //buscando dados

    printf("Digite 'M' para Masculino e 'F' para feminino : ");
    scanf("%c",&Sexo);

    printf("Digite a sua Altura : ");
    scanf("%f",&altura);

    //jogando na função certa

    if(Sexo == 'm' || Sexo == 'M'){

        peso_ideal = pinto(altura);

    }else if (Sexo == 'f' || Sexo == 'F'){

        peso_ideal = xereca(altura);

    }else{

        printf(" vc n se encontra no meu reino animal ");

        return 0;
        
    }

    //mostrando 

    printf(" o seu peso ideal seria : %.2f\n ",peso_ideal);

    return 0;
}