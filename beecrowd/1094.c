#include <stdio.h>

int main()
{
    int quantidade;
    scanf("%d", &quantidade);

    int numero[quantidade];
    char letras[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        scanf("%d %c", &numero[i], &letras[i]);
    }

    int cobaias = 0;
    int rato = 0;
    int sapo = 0;
    int coelho = 0;

    for (int i = 0; i < quantidade; i++)
    {
        cobaias += numero[i];

        if (letras[i] == 'R')
        {
            rato += numero[i];
        }
        if (letras[i] == 'S')
        {
            sapo += numero[i];
        }
        if (letras[i] == 'C')
        {
            coelho += numero[i];
        }

    }

    float percentualCoelho = ((float)coelho / cobaias) * 100;
    float percentualRato = ((float)rato / cobaias) * 100;
    float percentualSapo = ((float)sapo / cobaias) * 100; 

    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", percentualCoelho);
    printf("Percentual de ratos: %.2f %%\n", percentualRato);
    printf("Percentual de sapos: %.2f %%\n", percentualSapo);

    return 0;
}
