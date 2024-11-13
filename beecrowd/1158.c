#include <stdio.h>

int main()
{
    int n, x, y, total = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        for (int j = x; j < 2 * y + x; j++)
        {
            if (j % 2 != 0)
            {
                total += j;
            }
        }
        printf("%d\n", total);
        total = 0;
    }

    return 0;
}