#include <stdio.h>

void fibonnaci(unsigned long long *numbers);

int main()
{
    unsigned long long numbers[61];

    fibonnaci(numbers);

    int testes;
    int x;
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        scanf("%d", &x);
        printf("Fib(%d) = %llu\n", x, numbers[x]);
    }

    return 0;
}

void fibonnaci(unsigned long long *numbers)
{
    numbers[0] = 0;
    numbers[1] = 1;

    int i;
    for (i = 2; i <= 60; i++)
    {
        numbers[i] = numbers[i - 1] + numbers[i - 2];
    }
}