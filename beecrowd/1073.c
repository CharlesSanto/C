#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);

    int i = 0;

    for (i = 1; i <=n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %d\n",i, i * i);
        }
    }


    return 0;
}