/*Você foi contratado para desenvolver um sistema de cadastro de pessoas que permitirá armazenar e exibir 
informações essenciais de 5 indivíduos. Seu programa deve solicitar os seguintes dados para cada pessoa:

Nome, Idade, Peso, Data de nascimento (dia, mês e ano), Nacionalidade (Brasileiro ou Estrangeiro), Documento 
de identificação: Se for brasileiro, deve armazenar o CPF ou se for estrangeiro, deve armazenar o Passaporte

Regras obrigatórias:
Utilize structs para estruturar os dados da pessoa;
Utilize typedef para facilitar a definição de tipos personalizados;
Utilize union para armazenar CPF ou Passaporte, garantindo eficiência na memória;
Utilize enum para representar a nacionalidade da pessoa (Brasileiro ou Estrangeiro).
Após o cadastro, o programa deve exibir todas as informações cadastradas de maneira clara e organizada.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {

    int dia;
    int mes;
    int ano;

}DataDeNascimento;

typedef enum {BRASILEIRO = 1 , ESTRANGEIRO} Nacionalidade;

typedef struct {

    char nome[51];
    int idade;
    float peso;
    DataDeNascimento data_nascimento;
    Nacionalidade origem;
    union {
        char cpf[15];
        char passaporte[9];
    }Documento;

}Cliente;

int main (){

//variaveis

    Cliente pessoa[5];
    int quantidade;

//ultilizando laço de repetição para buscar as informações

    for(quantidade = 0; quantidade < 5;quantidade ++){

        //nome
        printf("Digite seu nome : ");
            //limpando
            setbuf(stdin,NULL);
        fgets(pessoa[quantidade].nome , 51 , stdin);
        pessoa[quantidade].nome[strcspn(pessoa[quantidade].nome,"\n")] = '\0';

        //idade
        printf("Digite sua idade : ");
        scanf("%d",&pessoa[quantidade].idade);

        //peso
        printf("digite seu peso : ");
        scanf("%f",&pessoa[quantidade].peso);

        //Data de Nascimento
        printf("digite seu dia de nascimento : ");
        scanf("%d",&pessoa[quantidade].data_nascimento.dia);
        printf("digite o mes do seu nascimento : ");
        scanf("%d",&pessoa[quantidade].data_nascimento.mes);
        printf("digite o ano do seu nascimento : ");
        scanf("%d",&pessoa[quantidade].data_nascimento.ano);

        //Nacionalidade
        printf("Digite 1 - se for Brasileiro e digite 2- se fo Estrangeiro : ");
        scanf("%d",(int*)&pessoa[quantidade].origem);

        //limpando
        setbuf(stdin,NULL);

        //testando pra saber se eh Brazuca ou Gringo
        switch (pessoa[quantidade].origem){

            case BRASILEIRO:
                
                //CPF
                printf("digite seu cpf : ");
                fgets(pessoa[quantidade].Documento.cpf, 15 ,stdin);
                pessoa[quantidade].Documento.cpf[strcspn(pessoa[quantidade].Documento.cpf,"\n")]='\0';

                break;

            case ESTRANGEIRO :

                //passaporte
                printf("digite seu passaporte : ");
                fgets(pessoa[quantidade].Documento.passaporte, 9 ,stdin);
                pessoa[quantidade].Documento.passaporte[strcspn(pessoa[quantidade].Documento.passaporte,"\n")]='\0';

                break;

            default :

                printf("opcao invalida \n");

            break;

        }

    }

    //mostrando 

    for(quantidade = 0; quantidade < 5;quantidade ++){

        printf("\n\n");

        printf("__________%d__________\n",quantidade+1);
        printf("NOME : %s",pessoa[quantidade].nome);
        printf("IDADE : %d",pessoa[quantidade].idade);
        printf("PESO : %2.f",pessoa[quantidade].peso);
        printf("DATA DE NASCIMENTO : %d/%d/%d",pessoa[quantidade].data_nascimento.dia
                                              ,pessoa[quantidade].data_nascimento.mes
                                              ,pessoa[quantidade].data_nascimento.ano);

        //testando a nacionalidade 

        if(pessoa[quantidade].origem == 1){

            printf("NACIONALIDADE : BRASILEIRO");

        }else if(pessoa[quantidade].origem == 2){

            printf("NACIONALIDADE : ESTRANGEIRO");

        }else{

            printf("NACIONALIDADE : DESCONHECIDA\n");

        }
        
    }

    return 0;
}