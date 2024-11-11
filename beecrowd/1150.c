#include <stdio.h>

int main()
{
    int x, z, contagem = 0, soma = 0;
    scanf("%d", &x);
    scanf("%d", &z);

    while(z <= x)
        scanf("%d", &z);

    for (int i = x; soma <= z; i++)
    {
        soma += i;
        contagem++;
    }

    printf("%d\n", contagem);

    return 0;
}