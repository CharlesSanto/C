#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    
    int numeros[n];
    int menor = 0;
    int posicao = 0;


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }

    menor = numeros[0];

    for (int i = 1; i < n; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);


    return 0;
}