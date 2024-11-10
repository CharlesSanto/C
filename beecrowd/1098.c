#include <stdio.h>

int main()
{
    float i = 0, j = 1;

    while(i <=2.2)
    {
        if (i > 0 && i < 1 || i > 1 && i <= 2)
        {
            printf("I=%.1f J=%.1f\n", i, i + j);
            printf("I=%.1f J=%.1f\n", i, i + j + 1);
            printf("I=%.1f J=%.1f\n", i, i + j + 2);
        }
        else 
        {
            printf("I=%d J=%d\n",(int)i, (int)i + (int)j);
            printf("I=%d J=%d\n",(int)i, (int)i + (int)j + 1);
            printf("I=%d J=%d\n",(int)i, (int)i + (int)j + 2);
        }
    i += 0.2;
    }

    return 0;
}