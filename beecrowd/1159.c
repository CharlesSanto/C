#include <stdio.h>

int main()
{
    int x, i, total = 0;

    while (1)
    {
        scanf("%d", &x);

        if (x == 0)
            break;

        if (x % 2 != 0)
            x++;

        for (i = 0; i < 5; i++)
        {
            total += x;
            x += 2;
        }

        printf("%d\n", total);
        total = 0;
    }
    return 0;
}