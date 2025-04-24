#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//switch

int main(){

    //variaveis

    char opicao;

    //buscando dados

    printf("Menu de opicoes \n");
    printf("V - verde\n");
    printf("P - preto\n");
    printf("A - amarelo\n");
    printf("B - branco\n");
    printf("escolha uma opição : ");
    scanf("%c",&opicao);

    //testado switch

    switch(opicao){

        case 'V':
        case 'v':
            printf("vc escolheu verde !\n");
        break;

        case 'P':
        case 'p':
            printf("vc ecolheu preto !\n");
        break;

        case 'A':
        case 'a':
            printf("vc escolheu amarelo !\n");
        break;

        case 'B':
        case 'b':
            printf("vc escolheu branco !\n");
        break;

        default:
            printf("opiçao invalida !!!\n");
        break;

    }

return 0;

}