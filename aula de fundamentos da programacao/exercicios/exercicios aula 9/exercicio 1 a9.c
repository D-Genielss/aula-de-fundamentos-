/* Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    //variaveis 
    
    int contador = 0;
    int aluno = 1;
    int nota1;
    int nota2;
    float media;
    
    //estrutura de repetição
    
    while(aluno <= 5){
    
        do{
            // buscando valores
            
            printf("digite a primeira nota : ");
            scanf("%d",&nota1);
            
            if(nota1 <= 10 && nota1 >= 0){
                
                contador ++;
            
            }else{
                
                printf("ops algo deu errado , tente novamente\n");
                
            }//else1
            
        }while(contador < 1);
        
        do{
            // buscando valores
            
            printf("digite a segunda nota : ");
            scanf("%d",&nota2);
            
            if(nota2 <= 10 && nota2 >= 0){
                
                contador ++;
            
            }else{
                
                printf("ops algo deu errado , tente novamente\n");
                
            }//else1
            
        }while(contador < 2);
        
        //calculando
        
        media =((float)nota1 + nota2)/2;
        
        //mostrando a media
        
        printf("a media do aluno %d eh : %.2f\n",aluno,media);
        
        aluno ++;
        
        contador -= 2;

    }//while1

    return 0;
}
