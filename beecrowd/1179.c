#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par[5];
    int impar[5];
    int contadorPar = 0, contadorImpar = 0;
    int count = 0;
    int x;

    do
    {
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            par[contadorPar] = x;
            contadorPar++;

            if (contadorPar == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("par[%d] = %d\n", i, par[i]);
                }
                contadorPar = 0;
            }
        }
        else if (x % 2 != 0)
        {
            impar[contadorImpar] = x;
            contadorImpar++;

            if (contadorImpar == 5)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("impar[%d] = %d\n", i, impar[i]);
                }
                contadorImpar = 0;
            }
        }

        count++;

    } while (count < 15);

    if (contadorImpar >= 0)
    {
        for (int i = 0; i < contadorImpar; i++)
        {
            printf("impar[%d] = %d\n", i, impar[i]);
        }
    }
    if (contadorPar >= 0)
    {
        for (int i = 0; i < contadorPar; i++)
        {
            printf("par[%d] = %d\n", i, par[i]);
        }
    }

    return 0;
}