#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct{
    
    char nome[15];
    float potencia;
    float tempo;
    
}Casa;

int main(){
    
//variaveis
    
    Casa eletro[5];
    int Neletro;
    int dias;
    float consTotal = 0;
    int Tunitario[5];
    float KWunitario[5];
    float KWTotais = 0;
    float porcentagem[5];
    
//estrutura de repetição 

    for(Neletro = 0;Neletro < 5;Neletro ++){
        
        //limpador
        setbuf(stdin,NULL);
        
        //mostra em qual eletrodomestico eu estou digitenado 
        printf("____%d____\n",Neletro+1);
        
        //buscar informações
        
        printf("Digite o nome do eletrodomestico : ");
        fgets(eletro[Neletro].nome,15,stdin);
        eletro[Neletro].nome[strcspn(eletro[Neletro].nome,"\n")]='\0';
        
        printf("Qual a potencia em Kw do seu eletrodomestico : ");
        scanf("%f",&eletro[Neletro].potencia);
        
        printf("Quantas horas p/dia seu eletrodomestico fica ligado : ");
        scanf("%f",&eletro[Neletro].tempo);
        
        //separador
        printf("\n");
    }
    
//perguntando quantos dias 

    printf("Quantos dias vc quer descobrir a media de consumo : ");
    scanf("%d",&dias);
    
//cauculando o consumo total e mostrando  

    for(Neletro = 0;Neletro < 5;Neletro ++){
        
        consTotal = consTotal + eletro[Neletro].potencia;
        
    }
    printf("Na sua casa foi consumido um total de : %2.f Kw",consTotal);
    
//calculando pra mostrar a porcentagem de consumo de kd eletro...
    
    for(Neletro = 0;Neletro < 5;Neletro ++){
        
        Tunitario[Neletro] = dias * eletro[Neletro].tempo;
        
        KWunitario[Neletro] = Tunitario[Neletro] * eletro[Neletro].potencia;
        
    }
    
    for(Neletro = 0;Neletro < 5;Neletro ++){
        
        KWTotais = KWunitario[Neletro] + KWTotais;

    }
    
    for(Neletro = 0;Neletro < 5;Neletro ++){
        
        porcentagem[Neletro] = (KWunitario[Neletro]/KWTotais)/100;

        printf("o Eletrodomestico %d consome %2.f % de todo o seu gasto \n",Neletro+1,porcentagem[Neletro]);
        
    }
    
    
    return 0;
            
}
