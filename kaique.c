
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>
#include <time.h>

typedef struct{

    char login[30];
    char senha[30];


}pessoa; pessoa p[1];

FILE *pont_arq;

int main (){

    int i;

    printf("Covid-19 Cadastros de Pacientes!\nInsira o login e Senha\n");

    pont_arq = fopen("TodosRegistros.txt","a");

    if(pont_arq == NULL){
        printf("Erro ao criar o Banco de Dados!");
        return 1;
    }


    char login [30];
    char senha [30];

    strcpy(p[0].login, "kaique");
    strcpy(p[0].senha, "123");

    while( i < 1){
        printf("\nlogin:");
        scanf("%s",login);
        printf("\nsenha:");
        scanf("%s", senha);

        if((strcmp(login,p[0].login)==0)&&(strcmp(senha,p[0].senha)==0)){
            printf("Usuario logado\n");
            CadastroPaciente();
            break;

        }else{
            printf("Login e/ou senha incorretos, Tente novamente.");
        }
    }
        return 0;

}

void CadastroPaciente(){

    system("cls");
    printf("Por favor insira o cadastro do paciente:\n");
    char Nome [61];
    char CPF [30];
    char Rua [200];
    char numero [30];
    char bairro [200];
    char cidade [200];
    char estado [30];
    char CEP [30];
    char dia [30];
    char mes [30];
    int ano;
    int AnoAtual, idade;
    time_t data_ano;
    time(&data_ano);
    struct tm *data = localtime(&data_ano);
    AnoAtual = (data->tm_year+1900);
    char Email [200];
    char DataDiagnostico [30];
    char ComorbidadePaciente [200];

    printf("Nome:");
    scanf(" %[^\n]s", Nome);
    printf("\nCPF:");
    scanf("%s", CPF);
    printf("\nRua:");
    scanf(" %[^\n]s", Rua);
    printf("\nNumero:");
    scanf("%s", numero);
    printf("\nBairro:");
    scanf(" %[^\n]s", bairro);
    printf("\nCidade:");
    scanf(" %[^\n]s", cidade);
    printf("\nEstado:");
    scanf("%s", estado);
    printf("\nCEP:");
    scanf("%s", CEP);
    printf("\nData de nascimento.");
    printf("\nDia: ");//ou deixe apenas o ano.
    scanf("%d", dia);
    printf("\nMês: ");
    scanf("%s", mes);
    printf("\nAno: ");
    scanf("%d", &ano);
    idade = AnoAtual - ano;
    printf("Idade: %d", idade);
    printf("\nEmail:");
    scanf("%s", Email);
    printf("\nData do Diagnostico:");
    scanf("%s", DataDiagnostico);
    printf("\nComorbidade do Paciente(Diabetes,Obesidade,Hipertensão,Tuberculose,outros:");
    scanf(" %[^\n]s", ComorbidadePaciente);

    fprintf(pont_arq,"%s \n",Nome);
    fclose(pont_arq);


    return 0;

}
