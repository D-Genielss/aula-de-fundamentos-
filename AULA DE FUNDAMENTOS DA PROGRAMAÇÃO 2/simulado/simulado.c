/*Na tarde de ontem, alguns servidores da Amazon (AWS) pararam de funcionar. Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.
Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e gerar os relatórios para os técnicos responsáveis por reestabelecer os serviços.

Para isso, a central da Amazon está recebendo as notificações de falhas ao redor do mundo. Você devera implementar um sistema para salvar e processar essas notificações. Para isso:

a) (5 pontos) Aloque dinamicamente um vetor de Notificações de tamanho 5. Cada Notificação é uma estrutura que contém:
* Pais (string tam: 20):
* Cidade(string tam: 20):
* Quantidade de Servidores UP - ativos (inteiro)
* Quantidade de Servidores Down - com problemas (inteiro)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char Pais[20];
    char Cidade[20];
    int S_UP;
    int S_Down;

}Notificacao;

int main(){

    //variaveis 

    Notificacao* Not;
    int Alocacao = 5;
    int NN = 0;
    int problem = 1;
    int i = 0;

    Not = (Notificacao*) malloc( Alocacao * sizeof(Notificacao));

    while(problem == 1){

        printf("ha um problema ? ,se ss Digite (1), caso contrário digite (0)\n");
        scanf("%d",&problem);

        if(problem != 1){

            printf("N a problemas\n");
            exit(1);

        }else{

            NN++;
        }

        if(NN % 5 == 0){

            Alocacao  = Alocacao + 5;
            Not = realloc( Not,Alocacao * sizeof(Notificacao));

        }

        i++;
        
        printf("Qual o Pais do Problema");
        fgets(Not->Pais[i] ,20 ,stdin);
        Not->Pais[i][strcspn(Not->Pais[i],"\n")]='\n';

    }

    free(Not);
}