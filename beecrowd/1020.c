#include <stdio.h>


int main()
{
    int dias, ano, dia, mes;
    scanf("%d", &dias);

    ano = dias / 365;
    dia = dias - (ano * 365);
    mes = dia / 30;
    dia = dia - mes * 30;

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);


    return 0;
}