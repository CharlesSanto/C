#include <stdio.h>

int perfeito(int x);

int main()
{
    int n, a;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (perfeito(a) == 1)
        {
            printf("perfeito\n");
        }
        else
        {
            printf("nao perfeito\n");
        }
    }
    return 0;
}

int perfeito(int x)
{
    int i, soma = 0;

    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            soma += i;
        }
    }

    if (soma == x)
        return 1;
    else
        return 0;
}