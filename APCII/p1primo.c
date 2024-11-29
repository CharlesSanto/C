#include <stdio.h>

int primo(int x);

int main()
{
    int n, a, b, contador = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);

        for (int j = a; j <= b; j++)
        {
            if (primo(j) == 1)
            {
                contador++;
            }
        }

        printf("%d\n", contador);
        contador = 0;
    }

    return 0;
}

int primo(int x)
{
    if (x <= 1)
        return 0;

    int i;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}