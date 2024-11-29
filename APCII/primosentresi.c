#include <stdio.h>
#include <stdlib.h>

int euclides(int x, int y);

int main()
{
    int a, b, contador = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
        for (int j = i + 1; j <= b; j++)
        {
            if (euclides(i, j) == 1)
                contador++;
        }

    printf("%d\n", contador);

    return 0;
}

int euclides(int x, int y)
{
    while (y != 0)
    {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}