#include <stdio.h>

int main()
{
    int n, i;
    float x, y, divisao = 0.;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%f %f", &x, &y);
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            divisao = x / y;
            printf("%.1f\n", divisao);
        }

    }

    return 0;
}