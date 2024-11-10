#include <stdio.h>

int main()
{
    int i = 1, j = 60, contador;

    for(contador = 0; j >= 0; contador++)
    {
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;

    }

    return 0;
}