#include <stdio.h>
#include <time.h>
//necessário para usar localtime() e struct tm
int main(void)
{
    int AnoAtual, idade;
    time_t data_ano;
    time(&data_ano);

    struct tm *data = localtime(&data_ano);

    AnoAtual = (data->tm_year+1900);
    idade = AnoAtual - 2001;

    printf("%d\n", AnoAtual);
    printf("%d\n", idade);
    return 0;
}
