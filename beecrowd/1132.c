#include <stdio.h>

int main()
{
    int a, b, i, soma = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if (a >= b)
    {
        for (i = b; i <= a; i++)
        {
            if (i % 13 != 0)
            {
                soma += i;
            }
        }
    }

    if (a <= b)
    {
        for (i = a; i <= b; i++)
        {
            if (i % 13 != 0)
            {
                soma += i;
            }
        }
    }

    printf("%d\n", soma);

    return 0;
}