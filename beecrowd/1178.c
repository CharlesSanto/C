#include <stdio.h>

int main()
{
    double N[100];

    scanf("%lf", &N[0]);

    for (int i = 1; i < 100; i++)
    {
        N[i] = N[i - 1] / 2;
    }

    for (int j = 0; j < 100; j++)
    {
        printf("N[%d] = %.4lf\n", j, N[j]);
    }


    return 0;
}