#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    
    int i;
    int count = 0;
    int count2 = 0;

    for (i = 0; i <= n; i++)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            count++;
        }
        else 
        {
            count2++;
        }
    }

    printf("%d in\n", count);
    printf("%d out\n", count2);
    

    return 0;
}