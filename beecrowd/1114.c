#include <stdio.h>

int main()
{
    int senha;
    int valido = 1;
    scanf("%d", &senha);

    while (valido)
    {
        if (senha == 2002)
        {
            printf("Acesso Permitido\n");
            valido = 0;
            break;
        }
        else 
        {
            printf("Senha Invalida\n");
        }
        scanf("%d", &senha);
    }

    return 0;
}