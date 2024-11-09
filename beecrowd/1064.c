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
    float soma = 0;

    for(j = 0; j < 6; j++)
    {
        if (numbers[j] > 0)
        {
            count ++;
            soma += numbers[j];
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", soma / count);

    return 0;
}