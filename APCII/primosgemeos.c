#include <stdio.h>

int primos(int x);

int main()
{

    int a, b, contador = 0;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b - 2; i++)
    {
        if (primos(i) && primos(i + 2))
        {
            contador++;
        }
    }
    printf("%d\n", contador);

    return 0;
}

int primos(int x)
{
    if (x < 2)
        return 0;

    int i;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
            return 0;
    }

    return 1;
}