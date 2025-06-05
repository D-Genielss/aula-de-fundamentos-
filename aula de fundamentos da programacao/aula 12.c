#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

    int matriz [3][4];
    int contador1;
    int contador2;

//estrutura q busca dados

for(contador1 = 0;contador1 < 3;contador1 ++){

    for(contador2 = 0;contador2 < 4;contador2 ++){

        printf("Digite o numero q deseja na matriz [%d][%d] : ",contador1,contador2);
        scanf("%d",&matriz[contador1][contador2]);

    }//for 2  

    printf("\n");

}//for 1

//estrutura q mostra os dados

for(contador1 = 0;contador1 < 3;contador1 ++){

    for(contador2 = 0;contador2 < 4;contador2 ++){

        printf("|%2d|",matriz[contador1][contador2]);

    }//for 2  

    printf("\n");

}//for 1

    return 0;

}