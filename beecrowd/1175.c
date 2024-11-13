#include <stdio.h>

int main()
{
    int N[20];
    int tamanho = sizeof(N) / sizeof(N[0]);
    int i, temp;

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &N[i]);
    }

    for (int j = 0; j < tamanho / 2; j++)
    {
        temp = N[j];
        N[j] = N[tamanho - 1 - j];
        N[tamanho - 1 - j] = temp;
    }

    for (int k = 0; k < tamanho; k++)
    {
        printf("N[%d] = %d\n", k, N[k]);
    }


    return 0;
}