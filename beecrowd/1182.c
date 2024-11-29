#include <stdio.h>

int main()
{
    float numeros[12][12];
    char soma_media;
    int coluna;
    float soma = 0.0f;
    float media = 0.0f;

    scanf("%d", &coluna);
    while (coluna < 0 || coluna > 11)
        scanf("%d", &coluna);

    scanf(" %c", &soma_media);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &numeros[i][j]);
        }
    }

    for (int i = 0; i < 12; i++)
    {
        soma += numeros[i][coluna];
    }

    if (soma_media == 'S')
    {
        printf("%.1f\n", soma);
    }
    else if (soma_media == 'M')
    {
        media = soma / 12;
        printf("%.1f\n", media);
    }

    return 0;
}