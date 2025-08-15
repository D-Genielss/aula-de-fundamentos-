#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{

    int hora;
    int minuto;
    int segundo;

}Hora;

typedef struct{

    int dia;
    int mes; 
    int ano;

}Data;

typedef struct{

    char local[51];
    char textoC[100];
    Data data;
    Hora hora;

}Compromisso;

int main(){

//variaveis

    Compromisso Meu;

//buscando informações

    //HORARIO
    printf("Digite a hora : ");
    scanf("%d",&Meu.hora.hora);

    printf("Digite os minutos : ");
    scanf("%d",&Meu.hora.minuto);

    printf("Digite os segundos : ");
    scanf("%d",&Meu.hora.segundo);

    //DATA
    printf("Digite o dia : ");
    scanf("%d",&Meu.data.dia);

    printf("Digite o mes : ");
    scanf("%d",&Meu.data.mes);

    printf("Digite o ano : ");
    scanf("%d",&Meu.data.ano);

    //LOCAL

    setbuf(stdin,NULL);

    printf("digite o local : ");
    fgets(Meu.local , 50 ,stdin);
    Meu.local[strcspn(Meu.local,"\n")] ='\0'; 

    //COMPROMISSO

    setbuf(stdin,NULL);

    printf("digite o Compromisso : ");
    fgets(Meu.textoC , 100 ,stdin);
    Meu.textoC[strcspn(Meu.textoC,"\n")] ='\0'; 

//Mostrando tudo

    //Separando 
    printf("\n\n");

    printf("+++COMPROMISSO+++\n");
    printf("o Local eh : %s\n",Meu.local);
    printf("a data eh : %d/%d/%d \n",Meu.data.dia,Meu.data.mes,Meu.data.ano);
    printf("o horario eh as %d:%d:%d\n",Meu.hora.hora,Meu.hora.minuto,Meu.hora.segundo);
    printf("o compromisso eh : %s\n",Meu.textoC);

    return 0;

}