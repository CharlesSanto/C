#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    int i;

    for (i = 0; i < number; i++)
    {
        i++;
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}