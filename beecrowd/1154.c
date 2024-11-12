#include <stdio.h>

int main()
{
    int x, contagem = 0, soma = 0;

    while(1)
    {
        scanf("%d", &x);

        if (x < 0)
            break;
        else 
            contagem++;
            soma += x;
    }

    printf("%.2f\n", (float)soma / contagem);

    return 0;
}