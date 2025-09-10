/*Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes passos:
a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas;
b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.
c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário;
d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com esse tipo de música no seu ranking.
e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não;
f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e todas as opções das questões passadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char nome[51];
    char Tipo_Musica[51];
    int N_integrantes;
    char P_ranking;

} Bandas;

//função que cadastra
void cadastro(Bandas band[]) {

// buscando informações

    for(int i = 0; i < 5; i++) {
        // nome da banda
        printf("Qual o nome da banda %d: ", i + 1);
        fgets(band[i].nome, 51, stdin);
        band[i].nome[strcspn(band[i].nome, "\n")] = '\0';
        
        // Limpar buffer do teclado
        setbuf(stdin, NULL);

        //tipo da musiaca
        printf("Qual o tipo de Musica desta banda : ");
        fgets(band[i].Tipo_Musica, 51, stdin);
        band[i].Tipo_Musica[strcspn(band[i].Tipo_Musica, "\n")] = '\0';

        //Limpar buffer do teclado 
        setbuf(stdin, NULL);

        //numero de integrantes
        printf("Quantos integrantes tem na sua banda : ");
        scanf("%d",&band[i].N_integrantes);

        //Limpar buffer do teclado 
        setbuf(stdin, NULL);

        //em qual posição do ranking
        printf("Em qual posição do ranking vc deixaria esta banda (de 1 a 5) : ");
        scanf("%c"%band[i].P_ranking);
    }
}

//função que busca a pedida
void Busca_F(char pedida){

    switch(pedida){

        case '1' :

            printf("\n--------ranking : 1---------\n");
            printf("Nome : %s",band[0].nome);
            printf("Estilo : %s",band[0].Tipo_Musica);
            printf("Numero de Integrantes : %d",band[0].N_integrantes);
            printf("------------------------------\n");  

        break;

        case '2' :

            printf("\n--------ranking : 2---------\n");
            printf("Nome : %s",band[1].nome);
            printf("Estilo : %s",band[1].Tipo_Musica);
            printf("Numero de Integrantes : %d",band[1].N_integrantes);
            printf("------------------------------\n"); 

        break ;

        case '3' :

            printf("\n--------ranking : 3---------\n");
            printf("Nome : %s",band[2].nome);
            printf("Estilo : %s",band[2].Tipo_Musica);
            printf("Numero de Integrantes : %d",band[2].N_integrantes);
            printf("------------------------------\n"); 

        break ;

        case '4' :

            printf("\n--------ranking : 4---------\n");
            printf("Nome : %s",band[3].nome);
            printf("Estilo : %s",band[3].Tipo_Musica);
            printf("Numero de Integrantes : %d",band[3].N_integrantes);
            printf("------------------------------\n"); 

        break ;

        case '5' :
        
            printf("\n--------ranking : 5---------\n");
            printf("Nome : %s",band[4].nome);
            printf("Estilo : %s",band[4].Tipo_Musica);
            printf("Numero de Integrantes : %d",band[4].N_integrantes);
            printf("------------------------------\n"); 

        break;

        default :

        printf("\n -------- ERRRRORRRR ---------");
        printf("Opção invalida");

        break;
    }
}

int main() {

// variaveis

    Bandas band[5];
    char B_pedida;

//chamandoa a função que cadastra as bandas

    cadastro(band); 

//chamando a função que pede qual das bandas de acordo com o numero do ranking

    printf("Digite qual banda de olhar das suas favoritas(de 1 a 5) : ");
    scanf("%c",&B_pedida);

    Busca_F(B_pedida);

    return 0;
}
