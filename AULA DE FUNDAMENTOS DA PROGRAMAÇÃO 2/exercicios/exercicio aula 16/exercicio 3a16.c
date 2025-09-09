/*Implemente uma função em C que receba, via parâmetro, três notas de um aluno (valores reais)
 e um caractere indicando o tipo de cálculo a ser realizado:

'A' → Média aritmética das três notas.
'P' → Média ponderada, considerando os pesos: 5 para a primeira nota, 3 para a segunda e 2 para a terceira.
'S' → Soma das três notas.

A função deve retornar o valor calculado. Na função main, solicite ao usuário as três notas e a letra 
correspondente à operação desejada, chame a função e exiba o resultado na tela.*/

#include <stdio.h>
#include <stdlib.h>

//media aritmética
int Media_A (int v1 , int v2 , int v3){

    int media;

    media = (v1 + v2 + v3)/3;

    return media;
}

//media ponderada
int Media_P (int v1 , int v2 , int v3){

    int media;

    media = ((v1 * 5)+(v2 * 3)+(v3 * 2))/10 ;

    return media;
}

//media somatica
int Media_S(int v1 ,int v2 , int v3){

    int media;

    media = v1 + v2 + v3 ;

    return media;
}

int main(){

//variaveis 

    int n1,n2,n3;
    char TCal;
    int media;

//buscando informações

    //Tipo de calculo 
    printf("Digite qual tipo de calculo deseja : \n\n");
    printf("'A' → Média aritmética das três notas.\n");
    printf("'P' → Média ponderada, considerando os pesos: 5 para a primeira nota, 3 para a segunda e 2 para a terceira.\n");
    printf("'S' → Soma das três notas.\n");
    scanf("%c",&TCal);

    //nota 1
    printf("Digite a primeira nota : ");
    scanf("%d",&n1);

    //nota 2
    printf("Digite a segunda nota : ");
    scanf("%d",&n2);

    //nota 3
    printf("Digite a terceira nota : ");
    scanf("%d",&n3);

//fazendo um swicth pra melhor escolha

    switch(TCal){

         case 'A' :
         case 'a' :

            media = Media_A(n1,n2,n3);
            printf("\n");
            printf("A media aritmética eh : %d ",media);

        break;
        
         case 'P' :
         case 'p' :

            media = Media_P(n1,n2,n3);
            printf("\n");
            printf("A media Ponderada eh %d : ",media);

        break;
        
         case 'S' : 
         case 's' :

            media = Media_S(n1,n2,n3);
            printf("\n");
            printf("A media somatica eh %d : ",media);

        break;

         default :

            printf("\n");
            printf("error , opção invalida");

        break;
    }

    return 0;

}


