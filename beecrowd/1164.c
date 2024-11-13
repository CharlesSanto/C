#include <stdio.h>

int perfeito(int x);

int main()
{
    int x, n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (perfeito(x))
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }
    return 0;
}

int perfeito(int x)
{
    int i, soma = 0;

    for (i = 1; i < x; i++)
    {
        if (x % i == 0)
            soma += i;
    }

    if (soma == x)
        return 1;
    else
        return 0;
}