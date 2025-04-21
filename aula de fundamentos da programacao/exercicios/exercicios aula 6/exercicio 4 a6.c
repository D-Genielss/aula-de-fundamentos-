/* Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    //variaveis
    
    float salario;
    float imposto;
    
    //buscando valores
    
    printf("digite quanto vc ganha de salario : ");
    scanf("%f",&salario);
    
    //if/else
    
    if(salario < 1903.98){
        
        printf("vc n paga imposto de renda");
        
    }else if(salario < 2826.65){
        
        //calculo
        
        imposto = (salario * 0.075)-142.80;
        
        printf("vc pagara de imposto : %.2f reais ",imposto);
        
    }else if(salario <  3751.05){
        
        //cauculo
        
        imposto = (salario * 0.15)-354.80;
        
        printf("vc pagara de imposto : %.2f reais ",imposto);
        
    }else if(salario < 4664.68){
        
        //calculo
        
        imposto = (salario * 0.225)-636.13;
        
        printf("vc pagara de imposto : %.2f reais ",imposto);
         
    }else{
        
        //calculo
        
        imposto = (salario * 0.275)-869.36;
        
        printf("vc pagara de imposto : %.2f reais ",imposto);
         
    }
    
    return 0;
    
}
