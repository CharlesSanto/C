#include <stdio.h>
#include <math.h>

int main()
{
    int t, i, count = 0;
    int pa, pb;
    double g1, g2;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        g1 /= 100;
        g2 /= 100;

        while (pa <= pb)
        {
            pa += floor(pa * g1);
            pb += floor(pb * g2);
            count++;
            if (count > 100)
                break;
        }

        if (count > 100)
        {
            printf("Mais de 1 seculo.\n");
        }
        else 
        {
            printf("%d anos.\n", count);

        }
        count = 0;

    }

    return 0;
}