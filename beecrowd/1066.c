#include <stdio.h>

int main()
{
    int numbers[5];
    int i;

    for (i = 0;  i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int j;
    int countPar = 0;
    int countImpar = 0;
    int countPositivo = 0;
    int countNegativo = 0;

    for (j = 0; j < 5; j++)
    {
        if (numbers[j] % 2 == 0)
        {
            countPar++;
        }
        if (numbers[j] % 2 != 0)
        {
            countImpar++;
        }
        if (numbers[j] > 0)
        {
            countPositivo++;
        }
        if (numbers[j] < 0)
        {
            countNegativo++;
        }

    }

    printf("%d valor(es) par(es)\n", countPar);
    printf("%d valor(es) impar(es)\n", countImpar);
    printf("%d valor(es) positivo(s)\n", countPositivo);
    printf("%d valor(es) negativo(s)\n", countNegativo);

    return 0;
}