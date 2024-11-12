#include <stdio.h>

int fatorial(int x);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", fatorial(n));

    return 0;
}

int fatorial(int x)
{
    if (x == 0 || x == 1)
        return 1;

    return x * fatorial(x - 1);
}
