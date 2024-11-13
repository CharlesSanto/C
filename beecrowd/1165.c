#include <stdio.h>

int primo(int x);

int main()
{
    int n, x, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (primo(x))
            printf("%d eh primo\n", x);
        else 
            printf("%d nao eh primo\n", x);
    }

    return 0;
}

int primo(int x)
{
    int i; 

    if (x == 1)
        return 0;

    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;

}