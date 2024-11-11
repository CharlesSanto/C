#include <stdio.h>

int main()
{
    int x;

    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;

    scanf("%d", &x);

    while(1)
    {
        scanf("%d", &x);

        if (x == 4)
            break;

        switch (x)
        {
        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;

        default:
            break;
        } 

    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}