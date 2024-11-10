#include <stdio.h>

int main()
{
    int n[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        scanf("%d", &n[i]);
    }

    int maior = n[0];
    int posicao = 1;

    for (int j = 1; j < 100; j++)
    {
        if(n[j] > maior)
        {
            maior = n[j];
            posicao = j + 1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}