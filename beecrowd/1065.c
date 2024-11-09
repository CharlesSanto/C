#include <stdio.h>

int main()
{
    int numbers[5];
    int i;
    int count = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    int j;

    for (j = 0; j < 5; j++)
    {
        if (numbers[j] % 2 == 0)
        {
            count++;
        }
    }

    printf("%d valores pares\n", count);

    return 0;
}