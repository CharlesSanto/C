#include <stdio.h>

int main()
{
    int golsInter, golsGremio;
    int validacao;
    int contadorInter = 0;
    int contadorGremio = 0;
    int empate = 0;
    int total = 0;

    do
    {
        total++;

        scanf("%d %d", &golsInter, &golsGremio);

        if (golsInter > golsGremio)
        {
            contadorInter++;
        }
        else if (golsGremio > golsInter)
        {
            contadorGremio++;
        }
        else 
        {
            empate++;
        }

        do 
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &validacao);

        }while (validacao != 1 && validacao != 2);


    } while  (validacao == 1);

    printf("%d grenais\n", total);
    printf("Inter:%d\n", contadorInter);
    printf("Gremio:%d\n", contadorGremio);
    printf("Empates:%d\n", empate);

    if (golsInter > golsGremio)
    {
        printf("Inter venceu mais\n");
    }
    else if (golsGremio > golsInter)
    {
        printf("Gremio venceu mais\n");
    }
    else 
    {
        printf("Nao houve vencedor\n");
    }

    return 0;
}