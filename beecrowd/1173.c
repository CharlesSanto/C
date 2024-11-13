#include <stdio.h>

int main()
{
    int x[10] = {0};
    int i;

    scanf("%d", &x[0]);

    for (i = 1; i < 10; i++)
    {
        x[i] = x[i - 1] * 2;
    }

    for (int j = 0; j < 10; j++)
    {
        printf("N[%d] = %d\n", j, x[j]);
    }

    return 0;
}