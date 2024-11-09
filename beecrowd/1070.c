#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    int i;

    if (number % 2 == 0)
        number += 1;

    for (i = 0; i < 6; i++)
    {
        printf("%d\n", number);
        number += 2;
    }

    return 0;
}