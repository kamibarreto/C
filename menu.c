#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

    char login[15] = "KAMI";
    char login1[15];
    char senha[15] = "12345";
    char senha1[15];
    int i;

    while(i < 1){
        printf("LOGIN: ");
        scanf("%s", &login1);

        if(strcmp(login,login1) == 0){
            printf("SENHA: ");
            scanf("%s", &senha1);
            if(strcmp(senha, senha1) == 0){
                printf("LOGADO COM SUCESSO!");
                break;

            }else{
                printf("Senha ou login incorreta, tente novamente.\n");

            }
        }else{
            printf("Login incorreto, tente novamente.\n");
        }
    }
}
