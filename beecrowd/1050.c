#include <stdio.h>

int main()
{
    int ddd[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    char cidades[8][15] = {
        "Brasilia",
        "Salvador",
        "Sao Paulo",
        "Rio de Janeiro",
        "Juiz de fora",
        "Campinas",
        "Vitoria",
        "Belo Horizonte",
    };

    int encontrado = 0;

    int numero;
    scanf("%d", &numero);

    for(int i = 0; i < 8; i++)
    {
        if (numero == ddd[i])
        {
            printf("%s\n", cidades[i]);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado)
    {
        printf("DDD nao cadastrado\n");
    }

    return 0;
}