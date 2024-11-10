#include <stdio.h>

int main()
{
    float nota1, nota2, media = 0;
    int i;
    int valido1 = 1, valido2 = 1;

    while(valido1)
    {
        scanf("%f", &nota1);

        if (nota1 >= 0.0 && nota1 <= 10.0)
        {
            valido1 = 0;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    while(valido2)
    {
        scanf("%f", &nota2);
        if (nota2 >= 0.0 && nota2 <= 10.0)
        {
            valido2 = 0;
        }
        else 
        {
            printf("nota invalida\n");
        }
    }

    media = (nota1 + nota2) / 2;

    printf("media = %.2f\n", media);

    return 0;
}