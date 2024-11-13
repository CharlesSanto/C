#include <stdio.h>

int main()
{
    float A[100];
    int i;

    for (i = 0; i < 100; i++)
    {
        scanf("%f", &A[i]);
    }

    for (int j = 0; j < 100; j++)
    {
        if (A[j] <= 10.0)
            printf("A[%d] = %.1f\n", j, A[j]);
    }


    return 0;
}