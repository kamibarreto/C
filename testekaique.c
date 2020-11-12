

#include<stdio.h>
#include<stdlib.h>
/*Autor: Ruben Alves do Nascimento
  Contato: rubenanapu@hotmail.com
  Site: http://www.seculoinfo.com
  */

  void main(){
       char c,texto[212];
       int a=0;
       double d;
       printf("\n\tEste programa permite digitar apenas numeros. No maximo 10 caracteres\n\nDigite: ");
       //OBS: 10 caracteres é a quantidade máxima que uma variável DOUBLE suporta
       do{
       c=getch();         //Armazena o que foi digitado na variável c
       if(isdigit(c)&&a<10){         //isdigit(c) analisa se c é um dígito - número
           texto[a]=c;
           printf("%c",texto[a]);
           a++;
           }
       else if(c==8&&a){         //8 é o Back Space na tabela ASCII
           a--;
           texto[a]='\0';
           printf("\b \b");    //Apagando o que foi digitado pelo Usuário
           }
       else if (c!=13)printf("\a");        //Soa um beep
       }while(c!=13);                      //13 é o ENTER na tabela ASCII
            texto[a]='\0';
            d=atol(texto);                      //atol(texto) converte a variável texto para DOUBLE
            printf("\n\nO numero e %.0lf \n\n",d);            //lf significa Long Float e imprime DOUBLE.
}
