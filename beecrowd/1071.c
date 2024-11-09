#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    int i;
    int soma = 0;

    for (i = n2 +1; i < n1; i++)
    {
        if (i % 2 != 0)
            soma += i;
    }

    printf("%d", soma);


    return 0;
}