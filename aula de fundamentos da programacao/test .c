#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int dia;
    int mes;
    int ano;
    
        printf("digite a data de hj (dd/mm/aaaa):");
    
        scanf("%d/%d/%d",&dia ,&mes ,&ano);
        
        printf("hj eh dia %02d do mes %02d do ano de %04d \n",dia, mes, ano);
    
        return 0;
}