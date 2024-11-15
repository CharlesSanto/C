// Exercicio 1177 beecrowd

#include <stdio.h>

int main()
{
    int N[1000] = {0};
    int t, i;

    scanf("%d", &t);

    for (i = 0; i < 1000; i++)
    {
       N[i] = i % t;
    }

    for (int j = 0; j < 1000; j++)
    {
        printf("N[%d] = %d\n", j, N[j]);
    }

    return 0;
}