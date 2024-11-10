#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, soma = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        if (a <= b)
        {
            for (int j = a + 1; j < b; j++)
            {
                if (j % 2 != 0)
                {
                    soma += j;
                }
            }
        }
        else
        {
            for (int k = b + 1; k < a; k++)
            {
                if (k % 2 != 0)
                {
                    soma += k;
                }
            }
        }
        printf("%d\n", soma);
        soma = 0;
    }

    

    return 0;
}
