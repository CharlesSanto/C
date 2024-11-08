#include <stdio.h>

int main()
{
    float numbers[6];
    int i;

    for (i = 0; i < 6; i++)
    {
        scanf("%f", &numbers[i]);
    }

    int j;
    int count = 0;

    for(j = 0; j < 6; j++)
    {
        if (numbers[j] > 0)
        {
            count ++;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}