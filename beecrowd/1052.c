#include <stdio.h>

int main()
{
    char meses[12][15] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    int numerosMeses[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int mes;
    scanf("%d", &mes);

    int i;

    for (i = 0; i < 12; i ++)
    {
        if (mes == numerosMeses[i])
        {
            printf("%s\n", meses[i]);
        }
    }

    return 0;
}